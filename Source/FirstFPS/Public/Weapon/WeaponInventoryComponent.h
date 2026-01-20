// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapon/WeaponSlot.h"
#include "WeaponInventoryComponent.generated.h"


class AWeaponBase;
class AWeaponPickup;
class UWeaponStateComponent;
class UWeaponFireComponent;
class UWeaponEquipment;
class UTexture2D;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UWeaponInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponInventoryComponent();

	/* 主武器（Rifle / SMG / Shotgun） */
	UPROPERTY(ReplicatedUsing = OnRep_PrimaryWeapon)
	AWeaponBase* PrimaryWeapon;

	/* 副武器（Pistol） */
	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeaponBase* SecondaryWeapon;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StopCurrentMontage();

	/* 武器状态组件（动画 & 状态） */
	UPROPERTY()
	UWeaponStateComponent* WeaponStateComponent;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentSlot)
	EWeaponSlot CurrentSlot;

	// 当前槽位的 FireComponent，统一用于 Ammo UI 更新
	UPROPERTY()
	UWeaponFireComponent* CurrentFireComponent = nullptr;

	UPROPERTY()
	TSet<AWeaponBase*> DroppedWeapons;

	// 防止重复 Drop/Spawn
	UPROPERTY()
	bool bIsDropping = false;

	// 自定义客户端事件，用于更新装备/卸下武器时的 UI
	UFUNCTION(Client, Reliable)
	void CL_UpdateInventoryUI(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail);
	void CL_UpdateInventoryUI_Implementation(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// 取武器
	AWeaponBase* GetOrSpawnWeapon(TSubclassOf<AWeaponBase> WeaponClass);
    
	// 生成 Pickup(丢弃）
	AWeaponPickup* SpawnWeaponPickup(AWeaponBase* Weapon);
public:
	/** 捡起武器（从 Pickup） */
	UFUNCTION(Server, Reliable)
	void ServerPickupWeapon(AWeaponPickup* Pickup);

	/** 丢武器 */
	UFUNCTION(Server, Reliable)
	void ServerDropWeapon();

	UFUNCTION(Server, Reliable)
	void ServerSetCurrentSlot(EWeaponSlot NewSlot);

	UFUNCTION(Client, Reliable)
	void Client_HideAmmoUI();

	/* RepNotify */
	UFUNCTION()
	void OnRep_PrimaryWeapon();

	UFUNCTION()
	void OnRep_SecondaryWeapon();

	UFUNCTION()
	void OnRep_CurrentSlot();

public:	
	UFUNCTION(BlueprintCallable)
	AWeaponBase* GetCurrentWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void SwitchToPrimary();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void SwitchToSecondary();

	void EquipWeaponInternal(AWeaponBase* Weapon, const FName& SocketName, EWeaponSlot Slot);
	void HandleWeaponEquipped(AWeaponBase* Weapon);
	 
public:
	//装备主武器 
	void EquipPrimaryWeapon(AWeaponBase* Weapon);

	//装备副武器 
	void EquipSecondaryWeapon(AWeaponBase* Weapon);

	void DropWeapon(AWeaponBase* WeaponToDrop);
	void DropAllWeapons();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
