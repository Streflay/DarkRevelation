// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/FPSFootstepComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSFootstepComponent_generated_h
#error "FPSFootstepComponent.generated.h already included, missing '#pragma once' in FPSFootstepComponent.h"
#endif
#define FIRSTFPS_FPSFootstepComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayFootstepSFX_Implementation(); \
	virtual void ServerPlayFootstepSFX_Implementation(); \
	DECLARE_FUNCTION(execMulticastPlayFootstepSFX); \
	DECLARE_FUNCTION(execServerPlayFootstepSFX); \
	DECLARE_FUNCTION(execPlayFootstepSFX);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSFootstepComponent(); \
	friend struct Z_Construct_UClass_UFPSFootstepComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSFootstepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSFootstepComponent)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSFootstepComponent(UFPSFootstepComponent&&); \
	UFPSFootstepComponent(const UFPSFootstepComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSFootstepComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSFootstepComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSFootstepComponent) \
	NO_API virtual ~UFPSFootstepComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_13_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSFootstepComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
