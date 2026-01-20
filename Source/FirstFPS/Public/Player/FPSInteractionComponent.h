// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSInteractionComponent.generated.h"

class UIInterface;
class AWeaponPickup;
class UWeaponInventoryComponent; 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UFPSInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFPSInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float TraceDistance = 250.f;

	UPROPERTY(EditAnywhere, Category = "Debug")
	float DebugDrawTime = 2.0f;

	UPROPERTY()
	AActor* FocusActor = nullptr;

	/** ÎäÆ÷¿â´æ×é¼þ£¨ÓÃÓÚÖ´ÐÐ¼ñÇ¹Âß¼­£© */
	UPROPERTY()
	UWeaponInventoryComponent* InventoryComp;

	UFUNCTION(BlueprintCallable)
	// Sets default values for this component's properties
	void PrimaryInteract();


	UFUNCTION(Server, Reliable)
	void ServerInteract(AActor* InFocus);
	void ServerInteract_Implementation(AActor* InFocus);

		
};
