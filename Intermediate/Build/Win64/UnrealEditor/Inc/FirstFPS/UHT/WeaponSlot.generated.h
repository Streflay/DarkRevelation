// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponSlot.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_WeaponSlot_generated_h
#error "WeaponSlot.generated.h already included, missing '#pragma once' in WeaponSlot.h"
#endif
#define FIRSTFPS_WeaponSlot_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponSlot_h


#define FOREACH_ENUM_EWEAPONSLOT(op) \
	op(EWeaponSlot::None) \
	op(EWeaponSlot::Primary) \
	op(EWeaponSlot::Secondary) 

enum class EWeaponSlot : uint8;
template<> struct TIsUEnumClass<EWeaponSlot> { enum { Value = true }; };
template<> FIRSTFPS_API UEnum* StaticEnum<EWeaponSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
