// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponStateComponent.h"
#include "Weapon/WeaponInterface.h"
#include "GameFramework/Character.h"
#include "Weapon/WeaponBase.h"
#include "Animation/AnimInstance.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UWeaponStateComponent::UWeaponStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);

	CurrentWeapon = nullptr;
	CurrentWeaponState = EWeaponState::None;
}


void UWeaponStateComponent::EquipWeapon(AWeaponBase* NewWeapon)
{
	if (!GetOwner()->HasAuthority())
		return; // 客户端不直接修改

	CurrentWeapon = NewWeapon;

	if (NewWeapon && NewWeapon->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()))
		CurrentWeaponState = IWeaponInterface::Execute_GetWeaponState(NewWeapon);
	else
		CurrentWeaponState = EWeaponState::None;

	// 单机/客户端本地立即更新
	OnRep_WeaponState();
}



// Called when the game starts
void UWeaponStateComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UWeaponStateComponent::OnRep_WeaponState()
{
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;
}



// Called every frame
void UWeaponStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

EWeaponState UWeaponStateComponent::GetWeaponState_Implementation() const
{
	return CurrentWeaponState;
}

void UWeaponStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWeaponStateComponent, CurrentWeapon);
	DOREPLIFETIME(UWeaponStateComponent, CurrentWeaponState);
}

