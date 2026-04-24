// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPSGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSGameInstance_generated_h
#error "FPSGameInstance.generated.h already included, missing '#pragma once' in FPSGameInstance.h"
#endif
#define FIRSTFPS_FPSGameInstance_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSGameInstance(); \
	friend struct Z_Construct_UClass_UFPSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UFPSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSGameInstance)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSGameInstance(UFPSGameInstance&&); \
	UFPSGameInstance(const UFPSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSGameInstance) \
	NO_API virtual ~UFPSGameInstance();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
