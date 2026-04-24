// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/FPSWeaponData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSWeaponData_generated_h
#error "FPSWeaponData.generated.h already included, missing '#pragma once' in FPSWeaponData.h"
#endif
#define FIRSTFPS_FPSWeaponData_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAppearance_Statics; \
	FIRSTFPS_API static class UScriptStruct* StaticStruct();


template<> FIRSTFPS_API UScriptStruct* StaticStruct<struct FWeaponAppearance>();

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	FIRSTFPS_API static class UScriptStruct* StaticStruct();


template<> FIRSTFPS_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSWeaponData(); \
	friend struct Z_Construct_UClass_UFPSWeaponData_Statics; \
public: \
	DECLARE_CLASS(UFPSWeaponData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSWeaponData)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSWeaponData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSWeaponData(UFPSWeaponData&&); \
	UFPSWeaponData(const UFPSWeaponData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSWeaponData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSWeaponData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSWeaponData) \
	NO_API virtual ~UFPSWeaponData();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_86_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_89_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSWeaponData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
