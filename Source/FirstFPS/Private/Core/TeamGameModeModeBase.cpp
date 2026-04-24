// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TeamGameModeModeBase.h"
#include "Core/FPSPlayerState.h"
#include "Player/FPSPlayerController.h"
#include "Core/FPSGameState.h"

void ATeamGameModeModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (AFPSGameState* GS = GetGameState<AFPSGameState>())
	{
		GS->SelectedMode = EGameModeType::Team;
	}
}

void ATeamGameModeModeBase::AddScore(APlayerController* Killer)
{
	if (!Killer) return;

	AFPSPlayerState* PS = Killer->GetPlayerState<AFPSPlayerState>();
	if (!PS) return; 

	PS->Kills++;      // 计分板核心
	PS->SetScore(PS->GetScore() + 100.f);    // 可选（很多UI直接用Score）
}

void ATeamGameModeModeBase::CheckWinCondition()
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

bool ATeamGameModeModeBase::CanDealDamage(APlayerController* Target, APlayerController* Attacker)
{
	if (!Target || !Attacker) return true;

	// 队伍检查（团队模式）
	AFPSPlayerState* TargetPS = Target->GetPlayerState<AFPSPlayerState>();
	AFPSPlayerState* InstigatorPS = Attacker->GetPlayerState<AFPSPlayerState>();

	if (!TargetPS || !InstigatorPS) return true;

	if (TargetPS->TeamTag == InstigatorPS->TeamTag){
		return false; // 同队禁止伤害
	}
	return true;
}

