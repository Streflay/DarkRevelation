 // Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FFAGameModeBase.h"
#include "Core/FPSPlayerState.h"
#include "Core/FPSGameState.h"
#include "Player/FPSPlayerController.h"

void AFFAGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (AFPSGameState* GS = GetGameState<AFPSGameState>())
	{
		GS->SelectedMode = EGameModeType::FFA;
	}
}

void AFFAGameModeBase::CheckWinCondition()
{
	if (bGameEnded) return;

	for (APlayerController* PC : ConnectedPlayers) {
		if (!PC) continue;

		AFPSPlayerState* PS = PC->GetPlayerState<AFPSPlayerState>();
		if (!PS) continue;

		if (PS->Kills >= TargetKills) {
			bGameEnded = true;			
			return;
		}
	}
}

void AFFAGameModeBase::AddScore(APlayerController* Killer)
{
	if (!Killer) return;

	AFPSPlayerState* PS = Killer->GetPlayerState<AFPSPlayerState>();
	if (!PS) return;

	PS->Kills++;  // 击杀+1

	// 每次击杀都更新UI
	AFPSPlayerController* PC = Cast<AFPSPlayerController>(Killer);
	if (PC) {
		PC->Client_UpdateKills(PS->Kills);
	}

	UE_LOG(LogTemp, Warning, TEXT("AddScore: %s  Kills: %d"), *Killer->GetName(), PS->Kills);
}
