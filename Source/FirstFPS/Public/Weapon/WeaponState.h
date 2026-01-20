// Fill out your copyright notice in the Description page of Project Settings.

// WeaponState.h
#pragma once

#include "CoreMinimal.h"
#include "WeaponState.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
    None    UMETA(DisplayName = "None"),
    Rifle   UMETA(DisplayName = "Rifle"),
    Pistol  UMETA(DisplayName = "Pistol")
};



