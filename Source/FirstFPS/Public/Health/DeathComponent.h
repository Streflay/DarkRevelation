// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeathComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);
class AFPSCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UDeathComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDeathComponent();

	// 触发死亡事件（蓝图可绑定）
	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

	// 检查是否死亡并触发事件
	UFUNCTION(BlueprintCallable)
	void CheckDeath(float CurrentHealth);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Multicast RPC
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnDeath();
	FTimerHandle RespawnTimerHandle;

public:	
	UFUNCTION(Server, Reliable)
	void Server_RespawnOwner();

	void HandleRespawn();		
};
