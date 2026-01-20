// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "Rifle.generated.h"


UCLASS()
class FIRSTFPS_API ARifle : public AWeaponBase
{
	GENERATED_BODY()
	
public:
	ARifle();

	virtual EWeaponState GetWeaponState_Implementation() const override
	{
		return EWeaponState::Rifle;
	}

	/** 步枪专属枪口名称 */
	virtual FName GetMuzzleSocketName() const override
	{
		return FName("S_Muzzle");
	}
};
