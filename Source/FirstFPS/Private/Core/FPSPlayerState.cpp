// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FPSPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Core/DelayCompensationComponent.h"
#include "Player/FPSPlayerController.h"

AFPSPlayerState::AFPSPlayerState()
{
	PrimaryActorTick.bCanEverTick = true;
	DelayCompensationComponent = CreateDefaultSubobject<UDelayCompensationComponent>(TEXT("DelayCompensationComponent"));
}

void AFPSPlayerState::OnRep_TeamTag()
{
}

void AFPSPlayerState::SetTeam(const FGameplayTag& NewTeam)
{
	if (TeamTag == NewTeam) return;
	TeamTag = NewTeam;
	OnRep_TeamTag();
}


float AFPSPlayerState::GetKD() const
{
	return Deaths == 0 ? Kills : (float)Kills / Deaths;
}

void AFPSPlayerState::RecordPosition(FVector NewPosition, float Time)
{
	if (DelayCompensationComponent) {
		DelayCompensationComponent->RecordPosition(NewPosition, Time);
	}
}

FVector AFPSPlayerState::GetPositionAtTime(float TargetTime)
{
	if (DelayCompensationComponent) {
		return DelayCompensationComponent->GetPositionAtTime(TargetTime);
	}
	return FVector::ZeroVector;
}


void AFPSPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPSPlayerState, TeamTag);
	DOREPLIFETIME(AFPSPlayerState, Kills);
	DOREPLIFETIME(AFPSPlayerState, Deaths);
}
