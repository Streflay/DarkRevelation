// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

// 血量变化委托（可以绑定 UI 更新等）
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, CurrentHealth, float, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnArmorChanged, float, CurrentArmor, float, MaxArmor);
class UHealth_Data;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();
    
	// 当前值（带 RepNotify）
	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, BlueprintReadOnly)
	float CurrentHealth = 0;

	UPROPERTY(ReplicatedUsing = OnRep_Armor, VisibleAnywhere, BlueprintReadOnly)
	float CurrentArmor = 0;

	// 最大值（只需要初始化一次，不需要 Rep）
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxHealth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxArmor = 0;

	// 数据资产（初始化用）
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UHealth_Data* HealthData = nullptr;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// 委托（用于 UI 绑定）
	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnArmorChanged OnArmorChanged;

	// 设置函数（由服务器调用）
	void SetHealth(float NewHealth);
	void SetArmor(float NewArmor);

	// RepNotify
	UFUNCTION()
	void OnRep_Health();

	UFUNCTION()
	void OnRep_Armor();

	// 复制
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
