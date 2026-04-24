// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/FPSAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSAnimInstance_generated_h
#error "FPSAnimInstance.generated.h already included, missing '#pragma once' in FPSAnimInstance.h"
#endif
#define FIRSTFPS_FPSAnimInstance_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSAnimInstance(); \
	friend struct Z_Construct_UClass_UFPSAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UFPSAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSAnimInstance)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSAnimInstance(UFPSAnimInstance&&); \
	UFPSAnimInstance(const UFPSAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSAnimInstance) \
	NO_API virtual ~UFPSAnimInstance();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
