// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FFAGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FFAGameModeBase_generated_h
#error "FFAGameModeBase.generated.h already included, missing '#pragma once' in FFAGameModeBase.h"
#endif
#define FIRSTFPS_FFAGameModeBase_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFFAGameModeBase(); \
	friend struct Z_Construct_UClass_AFFAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFFAGameModeBase, AMyGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AFFAGameModeBase)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFFAGameModeBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFFAGameModeBase(AFFAGameModeBase&&); \
	AFFAGameModeBase(const AFFAGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFFAGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFFAGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFFAGameModeBase) \
	NO_API virtual ~AFFAGameModeBase();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AFFAGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
