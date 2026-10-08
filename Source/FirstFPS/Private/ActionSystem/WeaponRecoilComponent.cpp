// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionSystem/WeaponRecoilComponent.h"
#include "GameFramework/Character.h"
#include "Weapon/WeaponBase.h"

// Sets default values for this component's properties
UWeaponRecoilComponent::UWeaponRecoilComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UWeaponRecoilComponent::ApplyRecoil()
{
    if (RecoilPattern.Num() == 0)  return;
    int32 Index = FMath::Clamp(CurrentShotIndex, 0, RecoilPattern.Num() - 1);
    FVector2D Pattern = RecoilPattern[Index];
    TargetRecoil += Pattern;
    CurrentShotIndex++;
}

void UWeaponRecoilComponent::ResetRecoil()
{
	CurrentShotIndex = 0;
	TargetRecoil = FVector2D::ZeroVector;
}

// Called when the game starts
void UWeaponRecoilComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponRecoilComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AWeaponBase* Weapon = Cast<AWeaponBase>(GetOwner());
	if (!Weapon) return;

	ACharacter* Character = Cast<ACharacter>(Weapon->GetOwner());

	if (!Character) return;

    APlayerController* PC = Cast<APlayerController>(Character->GetController());
	if (!PC || !PC->IsLocalController()) return;

	float SmoothSpeed = TargetRecoil.IsNearlyZero() ? RecoilRecoverySpeed : RecoilSmoothSpeed;
	FVector2D NewRecoil = FMath::Vector2DInterpTo(CurrentRecoil, TargetRecoil, DeltaTime, SmoothSpeed);
	FVector2D DeltaRecoil = NewRecoil - CurrentRecoil;
	CurrentRecoil = NewRecoil;

	PC->AddYawInput(DeltaRecoil.X);
	PC->AddPitchInput(-DeltaRecoil.Y);
}

