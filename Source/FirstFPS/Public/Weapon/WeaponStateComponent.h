// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponState.h"
#include "WeaponInterface.h"
#include "WeaponStateComponent.generated.h"

class AWeaponBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UWeaponStateComponent : public UActorComponent, public IWeaponInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponStateComponent();

	UPROPERTY(BlueprintReadOnly, Replicated)
	AWeaponBase* CurrentWeapon;

	// 装备武器（服务器调用）
	UFUNCTION(BlueprintCallable)
	void EquipWeapon(AWeaponBase* NewWeapon);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnRep_WeaponState();

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WeaponState)
	EWeaponState CurrentWeaponState;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 接口方法实现声明
	virtual EWeaponState GetWeaponState_Implementation() const override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
		
};
