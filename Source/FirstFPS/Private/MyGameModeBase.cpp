// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Player/FPSPlayerController.h"
#include "Player/FPSCharacter.h"
#include "Core/SpawnManagerComponent.h"
#include "UI/TeamManagerComponent.h"
#include "Health/DeathComponent.h"
#include "Weapon/WeaponInventoryComponent.h"
#include "Core/FPSPlayerState.h"

AMyGameModeBase::AMyGameModeBase()
{
	SpawnManager = CreateDefaultSubobject<USpawnManagerComponent>(TEXT("SpawnManager"));
	// 禁用默认生成Pawn
	bStartPlayersAsSpectators = true;
	DefaultPawnClass = nullptr;

	CounterTerroristScore = 0;
	TerroristScore = 0;
}

void AMyGameModeBase::NotifyPlayerDied(APlayerController* PC)
{
	if (!PC) return;

	AlivePlayers.Remove(PC);
	DeadPlayers.AddUnique(PC);

	AddTeamScore();
}

void AMyGameModeBase::NotifyPlayerRespawned(APlayerController* PC)
{
	if (!PC) return;

	DeadPlayers.Remove(PC);
	AlivePlayers.AddUnique(PC);
}

void AMyGameModeBase::AddTeamScore()
{
	int32  CounterTerroristsAlive = 0;
	int32 TerroristsAlive = 0;

	for (APlayerController* PCBase : AlivePlayers) {
		if (!PCBase) continue;

		AFPSPlayerController* PC = Cast<AFPSPlayerController>(PCBase);
		if (!PC) continue;

		// 队伍唯一来源：PlayerState
		AFPSPlayerState* PS = PC->GetPlayerState<AFPSPlayerState>();
		if (!PS || !PS->TeamTag.IsValid())
			continue;

		if (PS->TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.CounterTerror"))){
			CounterTerroristsAlive++;
		} else if (PS->TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.Terrorist"))) {
			TerroristsAlive++;
		}
	}
	// 判定胜利
	FGameplayTag WinningTeam;
	int32 TeamScore = 0;

	if (CounterTerroristsAlive == 0 && TerroristsAlive > 0) {
		// 反恐全灭 → 恐怖分子获胜
		WinningTeam = FGameplayTag::RequestGameplayTag("Team.Terrorist");
		TerroristScore++;
		TeamScore = TerroristScore;
	} else if (TerroristsAlive == 0 && CounterTerroristsAlive > 0) {
		// 恐怖分子全灭 → 反恐获胜
		WinningTeam = FGameplayTag::RequestGameplayTag("Team.CounterTerror");
		CounterTerroristScore++;
		TeamScore = CounterTerroristScore;
	} else {
		// 回合未结束
		return;
	}

	// 向所有玩家广播胜利消息
	BroadcastTeamWin(WinningTeam, TeamScore);
	ResetRoundAndRespawnPlayers(3.f);
}

void AMyGameModeBase::ResetRoundAndRespawnPlayers(float RespawnDelay)
{
	// 1. 清空存活/死亡状态列表
	AlivePlayers.Empty();
	DeadPlayers.Empty();

	// 2. 倒计时等待（延迟触发）
	if (GetWorld()){
		GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, [this]() {
				// 遍历已加入游戏的玩家执行批量重生
			for (APlayerController* PCBase : ConnectedPlayers)
			{
				if (!PCBase) continue;
				AFPSPlayerController* PC = Cast<AFPSPlayerController>(PCBase);
				if (!PC) continue;

				AlivePlayers.AddUnique(PC);

				// 如果玩家 Pawn 存在，先让存活玩家掉落手里的武器
				if (APawn* Pawn = PC->GetPawn())
				{
					if (AFPSCharacter* Char = Cast<AFPSCharacter>(Pawn))
					{
						Char->DropAllWeaponsOnDeath(); // 强制掉落武器
					}
				}

				// 强制销毁旧 Pawn
				if (APawn* OldPawn = PC->GetPawn())
				{
					OldPawn->Destroy();
				}

				// 由 SpawnManager 生成新 Pawn
				if (SpawnManager)
				{
					SpawnManager->RequestSpawnPlayer(PC);
				}
			}
			}, RespawnDelay, false);
	}
}

void AMyGameModeBase::BroadcastTeamWin(FGameplayTag WinningTeam, int32 Score)
{
	for (APlayerController* PCBase : ConnectedPlayers) {
		if (!PCBase) continue;
		AFPSPlayerController* PC = Cast<AFPSPlayerController>(PCBase);
		if (!PC || !PC->TeamManager) continue;

		// 调用客户端 RPC，新增 CurrentTeam 参数
		PC->Client_UpdateTeamWinAnnouncement(WinningTeam, Score, 5.f);
	}
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	if (SpawnManager) {
		SpawnManager->InitializeSpawnPoints();
	}
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (NewPlayer)
	{
		// 添加玩家到列表（确保唯一）
		ConnectedPlayers.AddUnique(NewPlayer);
		AlivePlayers.AddUnique(NewPlayer);
	}
}

void AMyGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	if (APlayerController* PC = Cast<APlayerController>(Exiting))
	{
		ConnectedPlayers.Remove(PC);
		AlivePlayers.Remove(PC);
		DeadPlayers.Remove(PC);
	}
}

