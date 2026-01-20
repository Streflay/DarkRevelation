// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionSystem/FPSFootstepComponent.h"
#include "Player/FPSCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ActionSystem/FPSMovementStateComponent.h"

// Sets default values for this component's properties
UFPSFootstepComponent::UFPSFootstepComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}


// Called when the game starts
void UFPSFootstepComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AFPSCharacter>(GetOwner());
}


void UFPSFootstepComponent::PlayFootstepSFX()
{
	if (!FootstepSFX || !OwnerCharacter) return;

	if (!OwnerCharacter->HasAuthority())
	{
		ServerPlayFootstepSFX();
	}
	else
	{
		MulticastPlayFootstepSFX();
	}
}

void UFPSFootstepComponent::MulticastPlayFootstepSFX_Implementation()
{
	if (!OwnerCharacter || !FootstepSFX) return;
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootstepSFX, OwnerCharacter->GetActorLocation());
}

void UFPSFootstepComponent::ServerPlayFootstepSFX_Implementation()
{
	MulticastPlayFootstepSFX();
}

void UFPSFootstepComponent::StartFootstepSFX()
{
	if (!OwnerCharacter || bIsPlayingFootsteps) return;

	bIsPlayingFootsteps = true;
	GetWorld()->GetTimerManager().SetTimer(FootstepTimerHandle, this, &UFPSFootstepComponent::PlayFootstepSFX, FootstepInterval, true);
	PlayFootstepSFX();
}

void UFPSFootstepComponent::StopFootstepSFX()
{
	if (!OwnerCharacter || !bIsPlayingFootsteps) return;

	bIsPlayingFootsteps = false;
	if (GetWorld()->GetTimerManager().IsTimerActive(FootstepTimerHandle))
		GetWorld()->GetTimerManager().ClearTimer(FootstepTimerHandle);
}

void UFPSFootstepComponent::UpdateFootstepTimer()
{
	if (!OwnerCharacter || !OwnerCharacter->IsLocallyControlled()) return;

	const FVector Velocity = OwnerCharacter->GetVelocity();
	const float SpeedXY = FVector(Velocity.X, Velocity.Y, 0.f).Size();

	const bool bIsGrounded = OwnerCharacter->GetCharacterMovement()->IsMovingOnGround();
	const bool bIsMoving = SpeedXY > FootstepSpeedThreshold;
	const bool bIsRunning = (OwnerCharacter->MovementStateComp->GetMovementState() == EMovementState::Running);
	const bool bShouldPlay = bIsGrounded && bIsMoving && bIsRunning;

	if (bShouldPlay && !bIsPlayingFootsteps)
		StartFootstepSFX();
	else if (!bShouldPlay && bIsPlayingFootsteps)
		StopFootstepSFX();
}

// Called every frame
void UFPSFootstepComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateFootstepTimer();
}

