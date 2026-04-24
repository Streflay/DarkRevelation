// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/TeamManagerComponent.h"
#include "Player/FPSPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameModeBase.h"
#include "Core/SpawnManagerComponent.h"
#include "Core/FPSPlayerState.h"
#include "Core/TeamGameModeModeBase.h"
#include "Core/FFAGameModeBase.h"

// Sets default values for this component's properties
UTeamManagerComponent::UTeamManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTeamManagerComponent::SelectTeam(const FGameplayTag& TeamTag)
{
	if (AFPSPlayerController* PC = Cast<AFPSPlayerController>(GetOwner()))
	{
		if (PC->IsLocalController())
		{
			SRV_SelectTeam(TeamTag);
		}
	}

}

void UTeamManagerComponent::SelectCharacter(const FGameplayTag& CharacterTag)
{
	if (AFPSPlayerController* PC = Cast<AFPSPlayerController>(GetOwner()))
	{
		if (PC->IsLocalController())
		{
			SRV_SetSelectedCharacterTag(CharacterTag);
		}
	}
}

void UTeamManagerComponent::CL_OnSpawnComplete()
{
	if (AFPSPlayerController* PC = Cast<AFPSPlayerController>(GetOwner()))
	{
		// 更新 UI
		PC->ShowHideWidget(FGameplayTag::RequestGameplayTag("UI.TeamSelection"), false);

		if (GetWorld()->GetAuthGameMode<ATeamGameModeModeBase>()) {
			PC->ShowHideWidget(FGameplayTag::RequestGameplayTag("UI.Team"), true);
		} else if (GetWorld()->GetAuthGameMode<AFFAGameModeBase>()) {
			PC->ShowHideWidget(FGameplayTag::RequestGameplayTag("UI.Single"), true);
		}
		
		PC->ShowHideWidget(FGameplayTag::RequestGameplayTag("UI.Crosshair"), true);

		// 切换输入模式
		PC->SetInputMode(FInputModeGameOnly());
		PC->bShowMouseCursor = false;
	}
}

void UTeamManagerComponent::UpdateTeamWinAnnouncement(FGameplayTag WinningTeam, int32 Score, float DisplayTime)
{
	OnTeamWinAnnouncement.Broadcast(WinningTeam, Score, DisplayTime);
}


void UTeamManagerComponent::SRV_SetSelectedCharacterTag_Implementation(const FGameplayTag& CharacterTag)
{
	if (AFPSPlayerController* PC = Cast<AFPSPlayerController>(GetOwner()))
	{
		PC->SelectedCharacterTag = CharacterTag;

		// 如果玩家已经选择了阵营，也可以直接生成 Pawn
		if (AFPSPlayerState* PS = PC->GetPlayerState<AFPSPlayerState>()) {
			if (PS->TeamTag.IsValid()) {
				if (AMyGameModeBase* GM = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(this))) {
					GM->SpawnManager->RequestSpawnPlayer(PC);
				}
			}
		}
	}
}

void UTeamManagerComponent::SRV_SelectTeam_Implementation(const FGameplayTag& TeamTag)
{
	if (AFPSPlayerController* PC = Cast<AFPSPlayerController>(GetOwner()))
	{
		// 写入 PlayerState（服务器权威）
		if (AFPSPlayerState* PS = PC->GetPlayerState<AFPSPlayerState>()) {
			PS->SetTeam(TeamTag);
		}

		// 队伍设置后，如果角色已选，立即生成
		if (PC->SelectedCharacterTag.IsValid()) {
			if (AMyGameModeBase* GM = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(this))) {
				GM->SpawnManager->RequestSpawnPlayer(PC);
			}
		}
	}
}




