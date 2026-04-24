// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Rifle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_Rifle_generated_h
#error "Rifle.generated.h already included, missing '#pragma once' in Rifle.h"
#endif
#define FIRSTFPS_Rifle_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARifle(ARifle&&); \
	ARifle(const ARifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifle) \
	NO_API virtual ~ARifle();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_10_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class ARifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Rifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
