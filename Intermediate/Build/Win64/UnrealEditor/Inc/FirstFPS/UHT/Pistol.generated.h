// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Pistol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_Pistol_generated_h
#error "Pistol.generated.h already included, missing '#pragma once' in Pistol.h"
#endif
#define FIRSTFPS_Pistol_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPistol(); \
	friend struct Z_Construct_UClass_APistol_Statics; \
public: \
	DECLARE_CLASS(APistol, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(APistol)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APistol(APistol&&); \
	APistol(const APistol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APistol) \
	NO_API virtual ~APistol();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_9_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class APistol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
