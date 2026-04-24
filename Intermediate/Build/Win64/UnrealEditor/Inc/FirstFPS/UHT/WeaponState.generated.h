// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_WeaponState_generated_h
#error "WeaponState.generated.h already included, missing '#pragma once' in WeaponState.h"
#endif
#define FIRSTFPS_WeaponState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponState_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::None) \
	op(EWeaponState::Rifle) \
	op(EWeaponState::Pistol) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> FIRSTFPS_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
