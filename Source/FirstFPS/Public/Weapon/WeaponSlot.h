// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSlot.generated.h"

//
UENUM(BlueprintType)
enum class EWeaponSlot : uint8
{
	None,
	Primary,
	Secondary
};