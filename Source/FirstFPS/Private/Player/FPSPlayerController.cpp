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
}

void AFPSPlayerController::Client_UpdateTeamWinAnnouncement_Implementation(FGameplayTag WinningTeam, int32 Score, float DisplayTime)
{
	if (TeamManager)
	{
		TeamManager->UpdateTeamWinAnnouncement(WinningTeam, Score, DisplayTime);
	}
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
