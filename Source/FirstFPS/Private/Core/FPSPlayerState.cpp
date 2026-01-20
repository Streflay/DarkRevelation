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
	TeamTag = NewTeam;
	OnRep_TeamTag();
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
}
