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
#include "Core/FPSGameInstance.h"
#include "Core/FPSGameState.h"
#include "Core/FFAGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
	SpawnManager = CreateDefaultSubobject<USpawnManagerComponent>(TEXT("SpawnManager"));
	// 禁用默认生成Pawn
	bStartPlayersAsSpectators = true;
	DefaultPawnClass = nullptr;

	GameStateClass = AFPSGameState::StaticClass();
}

void AMyGameModeBase::NotifyPlayerDied_Implementation(APlayerController* Victim, APlayerController* Killer)
{
	if (!Victim) return;

	AlivePlayers.Remove(Victim);
	DeadPlayers.AddUnique(Victim);

	// 死亡统计
	if (AFPSPlayerState* VictimPS = Victim->GetPlayerState<AFPSPlayerState>()) {
		VictimPS->Deaths++; 
	}

	if (Killer && Killer != Victim) {
		AddScore(Killer);
	}

	if (AFFAGameModeBase* FFA = Cast<AFFAGameModeBase>(this)) {
		HandleFFARespawn(Victim);
	}

	CheckWinCondition();
}

void AMyGameModeBase::NotifyPlayerRespawned(APlayerController* PC)
{
	if (!PC) return;

	DeadPlayers.Remove(PC);
	AlivePlayers.AddUnique(PC);
}

void AMyGameModeBase::AddScore(APlayerController* Killer)
{
}

void AMyGameModeBase::CheckWinCondition()
{
}

bool AMyGameModeBase::CanDealDamage(APlayerController* Target, APlayerController* Attacker)
{
	return true;
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
					PC->UnPossess();
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

void AMyGameModeBase::HandleFFARespawn(APlayerController* Victim)
{
	if (!Victim) return;

	FTimerHandle Timer;
	GetWorld()->GetTimerManager().SetTimer(Timer, [this, Victim]()
		{
			AFPSPlayerController* PC = Cast<AFPSPlayerController>(Victim);
			if (!PC) return;
			// 销毁旧 Pawn
			if (APawn* OldPawn = PC->GetPawn()) {
				PC->UnPossess();
				OldPawn->Destroy();
			}
			// 重新生成
			if (SpawnManager) {
				SpawnManager->RequestSpawnPlayer(PC);
			}
			NotifyPlayerRespawned(PC);

		}, 10.f, false); // 2秒复活
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

void AMyGameModeBase::BroadcastFFAWinner(APlayerController* Winner, int32 Kills)
{
	for (APlayerController* PCBase : ConnectedPlayers)
	{
		if (!PCBase) continue;

		AFPSPlayerController* PC = Cast<AFPSPlayerController>(PCBase);
		if (!PC) continue;

		PC->Client_UpdateFFAWinner(Kills);
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

