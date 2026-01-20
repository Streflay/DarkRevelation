// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "Pistol.generated.h"

UCLASS()
class FIRSTFPS_API APistol : public AWeaponBase
{
	GENERATED_BODY()

public:
	APistol();

	virtual EWeaponState GetWeaponState_Implementation() const override
	{
		return EWeaponState::Pistol;
	}

	/** 手枪专属枪口名称 */
	virtual FName GetMuzzleSocketName() const override
	{
		return FName("MuzzleFlash");
	}
};
