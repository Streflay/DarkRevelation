// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponInterface.h"
#include "WeaponBase.generated.h"

class USphereComponent;
class UFPSWeaponData;
class UParticleSystem;
class UWeaponFireComponent;

UCLASS()
class FIRSTFPS_API AWeaponBase : public AActor, public IWeaponInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated)
	UFPSWeaponData* WeaponData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_AppearanceIndex, Category = "Appearance")
	int32 AppearanceIndex = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	USkeletalMeshComponent* WeaponMesh;

	/** 当前选中的外观图标（UI 用） */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UTexture2D* WeaponIcon = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HeadDamage = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BodyDamage = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FireRate = 0.f;          // RPM

	/** 当前选中的枪口特效 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UParticleSystem* MuzzleFlash = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UParticleSystem* Bullet_Impact_Player_VFX = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UParticleSystem* Bullet_Impact_VFX = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase* FireSound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase* Out_of_Ammo_SFX = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase* Bullet_Impact_Player_SFX = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase* Bullet_Impact_SFX = nullptr;

	/** 当前弹匣容量（一次装填可容纳多少发）*/
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly)
	int32 MagazineCapacity = 0;

	/** 剩余备用弹药（可重新装填的总量，不包含当前弹匣） */
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly)
	int32 RemainingAmmo = 0;

	UPROPERTY(Replicated)
	bool bIsEquipped = false;

public:
	// 射击组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UWeaponFireComponent* FireComponent;

	/** 武器枪口 Socket 名称 —— 子类覆盖 */
	virtual FName GetMuzzleSocketName() const{
		return FName("S_Muzzle_Default");
	}

	/** 方便获得枪口世界位置 */
	FVector GetMuzzleLocation() const;

	// 获取枪口旋转
	FRotator GetMuzzleRotation() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual EWeaponState GetWeaponState_Implementation() const override
	{
		return EWeaponState::None;
	}
	
	// 握枪插槽
	UPROPERTY(ReplicatedUsing = OnRep_WeaponSocketName)
	FName WeaponSocketName;

	UFUNCTION()
	void StartFire();

	UFUNCTION()
	void StopFire();

	UFUNCTION()
	void OnRep_AppearanceIndex();

	UFUNCTION()
	void OnRep_WeaponSocketName();

	UFUNCTION()
	void ApplyAppearance();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
