// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FPSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef FIRSTFPS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FIRSTFPS_FPSCharacter_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayEquipWeaponMontage);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&); \
	AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_20_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
