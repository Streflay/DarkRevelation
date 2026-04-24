// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FPSPlayerController.h"
#include "Player/FPSCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "UI/UIManagerComponent.h"
#include "UI/TeamManagerComponent.h"
#include "Health/HealthComponent.h"
#include "Misc/OutputDeviceDebug.h"
#include "Misc/FeedbackContext.h"
#include "Misc/Paths.h"
#include "HAL/PlatformStackWalk.h"
#include <Kismet\GameplayStatics.h>

AFPSPlayerController::AFPSPlayerController()
{
	bReplicates = true;
	UIManager = CreateDefaultSubobject<UUIManagerComponent>(TEXT("UIManager"));
	TeamManager = CreateDefaultSubobject<UTeamManagerComponent>(TEXT("TeamManager"));
	TeamManager->SetIsReplicated(true);  // ·Ç³£¹Ø¼ü
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthManager"));
}

void AFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (const ULocalPlayer* LocalPlayer = (GEngine && GetWorld()) ? GEngine->GetFirstGamePlayer(GetWorld()) : nullptr) {
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
		if (DefaultMapping) {
			Subsystem->AddMappingContext(DefaultMapping, 0);
		}
	}

	FString NetMode;
	switch (GetNetMode()) {
		case NM_Client:
			NetMode = "Client";
			break;

		case NM_ListenServer:
			NetMode = "ListenServer";
			break;

		case NM_DedicatedServer:
			NetMode = "DedicatedServer";
			break;

		default:
			NetMode = "Standalone";
	}
}

void AFPSPlayerController::Server_StartTeam_Implementation()
{
	if (!HasAuthority()) return;

	FString URL = "/Game/Maps/TeamMap?listen?game=/Game/GameModes/BP_TeamGameMode.BP_TeamGameMode_C";
	GetWorld()->ServerTravel(URL);
}

void AFPSPlayerController::Server_StartFFA_Implementation()
{
	if (!HasAuthority()) return;

	FString URL = "/Game/Maps/FPSMap?listen?game=/Game/GameModes/BP_FFAGameMode.BP_FFAGameMode_C";
	GetWorld()->ServerTravel(URL);
}

void AFPSPlayerController::Client_UpdateTeamWinAnnouncement_Implementation(FGameplayTag WinningTeam, int32 Score, float DisplayTime)
{
	if (TeamManager) {
		TeamManager->UpdateTeamWinAnnouncement(WinningTeam, Score, DisplayTime);
	}
}

void AFPSPlayerController::Client_UpdateKills_Implementation(int32 Kills)
{
	UE_LOG(LogTemp, Warning, TEXT("Client_UpdateKills: %d"), Kills);
	UIManager->UpdateKillsUI(Kills);
}

void AFPSPlayerController::Client_UpdateFFAWinner_Implementation(int32 Kills)
{
	// OnFFAWinner.Broadcast(Kills);
}

void AFPSPlayerController::ShowHideWidget(const FGameplayTag& WidgetTag, bool bShow)
{
	if (IsLocalController()){
		UIManager->ShowHideWidget(WidgetTag, bShow);
	} else {
		CL_ShowHideWidget(WidgetTag, bShow);
	}
}

void AFPSPlayerController::CL_ShowHideWidget_Implementation(const FGameplayTag& WidgetTag, bool bShow)
{
	UIManager->ShowHideWidget(WidgetTag, bShow);
}
