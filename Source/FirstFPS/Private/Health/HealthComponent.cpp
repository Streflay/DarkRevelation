// Fill out your copyright notice in the Description page of Project Settings.

#include "Health/HealthComponent.h"
#include "Health/Health_Data.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
}

void UHealthComponent::BeginPlay()
{
    Super::BeginPlay();

	if (HealthData) {
		MaxHealth = HealthData->PlayerData.MaxHealth;
		MaxArmor = HealthData->PlayerData.MaxArmor;
	}
	// 初始化
	if (GetOwner()->HasAuthority()) {
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]() {
			CurrentHealth = MaxHealth;
			CurrentArmor = MaxArmor;
			OnRep_Health();
			OnRep_Armor();
			}, 0.01f, false);
	}
}

void UHealthComponent::SetHealth(float NewHealth)
{
	if (!GetOwner()->HasAuthority()) return;

	CurrentHealth = FMath::Clamp(NewHealth, 0.f, MaxHealth);
	OnRep_Health(); // 服务器也触发 UI 更新
}

void UHealthComponent::SetArmor(float NewArmor)
{
	if (!GetOwner()->HasAuthority()) return;

	CurrentArmor = FMath::Clamp(NewArmor, 0.f, MaxArmor);
	OnRep_Armor();
}

void UHealthComponent::OnRep_Health()
{
	// **只在本地玩家这里更新 UI，不会报错**
	if (APlayerController* PC = Cast<APlayerController>(GetOwner())){
		if (PC->IsLocalController()){
			OnHealthChanged.Broadcast(CurrentHealth, MaxHealth);
		}
	}
}

void UHealthComponent::OnRep_Armor()
{
	if (APlayerController* PC = Cast<APlayerController>(GetOwner())){
		if (PC->IsLocalController()){
			OnArmorChanged.Broadcast(CurrentArmor, MaxArmor);
		}
	}
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(UHealthComponent, CurrentHealth);
	DOREPLIFETIME(UHealthComponent, CurrentArmor);
}



