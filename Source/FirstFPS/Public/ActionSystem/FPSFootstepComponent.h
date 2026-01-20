// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSFootstepComponent.generated.h"

// 前置声明
class AFPSCharacter;
class UFPSMovementStateComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UFPSFootstepComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFPSFootstepComponent();

	UPROPERTY(EditDefaultsOnly, Category = "Footstep")
	USoundBase* FootstepSFX;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	AFPSCharacter* OwnerCharacter;

	UPROPERTY(EditDefaultsOnly, Category = "Footstep")
	float FootstepInterval = 0.42f;

	UPROPERTY(EditDefaultsOnly, Category = "Footstep")
	float FootstepSpeedThreshold = 250.f;

	FTimerHandle FootstepTimerHandle;
	bool bIsPlayingFootsteps = false;

	// 播放脚步声
	UFUNCTION()
	void PlayFootstepSFX();

	UFUNCTION(Server, Reliable)
	void ServerPlayFootstepSFX();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayFootstepSFX();

	void StartFootstepSFX();
	void StopFootstepSFX();
	void UpdateFootstepTimer();


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
