// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionSystem/FPSMovementStateComponent.h"
#include "Player/FPSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UFPSMovementStateComponent::UFPSMovementStateComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}


void UFPSMovementStateComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<AFPSCharacter>(GetOwner());
	if (OwnerCharacter && OwnerCharacter->HasAuthority())
	{
		SetMovementState(EMovementState::Running);
	}
}

void UFPSMovementStateComponent::OnRep_MovementState()
{
	if (!OwnerCharacter) return;

	switch (MovementState)
	{
	case EMovementState::Walking:
		OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		OwnerCharacter->UnCrouch();
		break;
	case EMovementState::Running:
		OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		OwnerCharacter->UnCrouch();
		break;
	case EMovementState::Crouching:
		OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed * 0.5f;
		OwnerCharacter->Crouch();
		break;
	}
}

void UFPSMovementStateComponent::SetMovementState(EMovementState NewState)
{
	if (MovementState == NewState || !OwnerCharacter)
		return;

	MovementState = NewState;
	OnRep_MovementState();

	if (!OwnerCharacter->HasAuthority())
	{
		ServerSetMovementState(NewState);
	}
}

void UFPSMovementStateComponent::ServerSetMovementState_Implementation(EMovementState NewState)
{
	SetMovementState(NewState);
}

void UFPSMovementStateComponent::UpdateMovementState()
{
	if (!OwnerCharacter) return;

	// ÓÅÏÈ¼¶£ºCrouch > Walk > Run
	EMovementState NewState = EMovementState::Running;

	if (bCrouchKeyHeld)
		NewState = EMovementState::Crouching;
	else if (bWalkKeyHeld)
		NewState = EMovementState::Walking;

	if (MovementState != NewState)
	{
		SetMovementState(NewState);
	}
}

void UFPSMovementStateComponent::OnWalkPressed()
{
	bWalkKeyHeld = true;
	UpdateMovementState();
}

void UFPSMovementStateComponent::OnWalkReleased()
{
	bWalkKeyHeld = false;
	UpdateMovementState();
}

void UFPSMovementStateComponent::OnCrouchPressed()
{
	if (!OwnerCharacter || OwnerCharacter->GetCharacterMovement()->IsFalling())
		return;

	bCrouchKeyHeld = true;
	UpdateMovementState();
}

void UFPSMovementStateComponent::OnCrouchReleased()
{
	bCrouchKeyHeld = false;
	UpdateMovementState();
}

void UFPSMovementStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFPSMovementStateComponent, MovementState);
}
