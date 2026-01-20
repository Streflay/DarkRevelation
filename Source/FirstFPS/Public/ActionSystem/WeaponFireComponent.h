// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponFireComponent.generated.h"

class AWeaponBase;
class UBulletSpreadComponent;

// 射击模式
UENUM(BlueprintType)
enum class EFireMode : uint8
{
	Single      UMETA(DisplayName = "Single"),
	Auto        UMETA(DisplayName = "Auto"),
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UWeaponFireComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWeaponFireComponent();

	// -------- 新增 Ammo 复制变量 -----------
	UPROPERTY(ReplicatedUsing = OnRep_Ammo)
	int32 Magazine;

	UPROPERTY(ReplicatedUsing = OnRep_Ammo)
	int32 RemainingAmmo_copy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	EFireMode FireMode = EFireMode::Auto;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// 配置参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	float FireRate = 0.12f; // 子弹间隔（Rifle 常用）

	UPROPERTY();
	FTimerHandle AutoFireTimerHandle; // 自动射击定时器

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	float TraceDistance = 10000.f;

	// 枪口火焰特效
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon|Animation")
	UAnimMontage* ReloadMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBulletSpreadComponent* BulletSpreadComp;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// —— 内部状态 —————————————
	UPROPERTY()
	bool bIsEquipping = false;

	UPROPERTY()
	bool bIsFiring;

	bool bIsReloading = false;
	float LastFireTime = -100.f;

	UPROPERTY(Replicated)
	AWeaponBase* WeaponOwner;

	void StartFire();
	void StopFire();
	void StartAutoFireTimer();
	void StopAutoFireTimer();

	UFUNCTION()
	void OnEquipStarted();

	UFUNCTION()
	void OnEquipFinished();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnEquipStarted(float EquipDuration);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayOutOfAmmoFX();

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastSpawnHitFX(const FVector& HitLocation, const FRotator& HitRotation, bool bHitCharacter);
	void MulticastSpawnHitFX_Implementation(const FVector& HitLocation, const FRotator& HitRotation, bool bHitCharacter);

	UFUNCTION(Client, Reliable)
	void CL_UpdateAmmoUI(int32 MagazineCapacity, int32 RemainingAmmo);

	UFUNCTION(Client, Reliable)
	void CL_DisplayAmmoUI(bool bDisplay);

	UFUNCTION(Client, Reliable)
	void CL_PlayReloadMontage();

	UFUNCTION(Client, Reliable)
	void CL_ShowHitMarker();

private:
	FTimerHandle EquipTimerHandle;
	UFUNCTION(Server, Reliable)
	void ServerStartFire();

	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(Server, Reliable)
	void ServerReload();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastReloadFX();

	UFUNCTION(Server, Reliable)
	void ServerStopFire();

private:

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFireFX();

	void HandleFire();  // 开火逻辑（只在 server 调用）
	void DoLineTrace(); // 射击检测

	void SpawnMuzzleFX();
	void SpawnFireSound();

	UFUNCTION()
	void OnRep_Ammo();
};
