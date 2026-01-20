// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionSystem/FPSAimOffsetComponent.h"
#include "Player/FPSCharacter.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UFPSAimOffsetComponent::UFPSAimOffsetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}


// Called when the game starts
void UFPSAimOffsetComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AFPSCharacter>(GetOwner());
}

void UFPSAimOffsetComponent::OnRep_AimOffset()
{
	if (!OwnerCharacter) return;
}

void UFPSAimOffsetComponent::ServerUpdateAimOffset_Implementation(FRotator NewOffset)
{
	AimOffset = NewOffset;
	OnRep_AimOffset(); // 立即更新服务端和其他客户端
}


void UFPSAimOffsetComponent::CalculateAimOffset()
{
	if (!OwnerCharacter || !OwnerCharacter->IsLocallyControlled())
		return;

	FRotator ControlRot = OwnerCharacter->GetControlRotation();
	FRotator ActorRot = OwnerCharacter->GetActorRotation();

	FRotator DeltaRot = (ControlRot - ActorRot).GetNormalized();
	DeltaRot.Pitch = FMath::ClampAngle(DeltaRot.Pitch, -89.f, 89.f);

	if (!DeltaRot.Equals(AimOffset, 0.5f))
	{
		AimOffset = DeltaRot;
		ServerUpdateAimOffset(AimOffset);

		UE_LOG(LogTemp, Log, TEXT("AimOffset Updated: Pitch=%f, Yaw=%f, Roll=%f"),
			AimOffset.Pitch, AimOffset.Yaw, AimOffset.Roll);
	}
}

// Called every frame
void UFPSAimOffsetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFPSAimOffsetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFPSAimOffsetComponent, AimOffset);
}

