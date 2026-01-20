// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Animation/AnimMontage.h"
#include "Engine/Texture2D.h"
#include "Engine/SkeletalMesh.h"
#include "FPSWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAppearance
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USkeletalMesh* WeaponMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* WeaponIcon = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HeadDamage = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BodyDamage = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FireRate = 0.f;          // RPM

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UParticleSystem* MuzzleFlashFX = nullptr;

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
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MagazineCapacity = 0;

	/** 剩余备用弹药（可重新装填的总量，不包含当前弹匣） */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 RemainingAmmo = 0;
};


USTRUCT(BlueprintType)
struct FWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimMontage* FireMontage = nullptr;

	// WeaponBase.h
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimMontage* EquipMontage = nullptr;

	UPROPERTY(EditDefaultsOnly)
	float EquipDuration = 0.5f;

	// 多个外观皮肤
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance")
	TArray<FWeaponAppearance> Appearances;
};


UCLASS()
class FIRSTFPS_API UFPSWeaponData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (TitleProperty = "RowName"));
	FWeaponData Data;
};
