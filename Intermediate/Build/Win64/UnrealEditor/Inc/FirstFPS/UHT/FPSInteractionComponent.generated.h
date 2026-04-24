// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FPSInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FIRSTFPS_FPSInteractionComponent_generated_h
#error "FPSInteractionComponent.generated.h already included, missing '#pragma once' in FPSInteractionComponent.h"
#endif
#define FIRSTFPS_FPSInteractionComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execPrimaryInteract);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSInteractionComponent(); \
	friend struct Z_Construct_UClass_UFPSInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSInteractionComponent)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSInteractionComponent(UFPSInteractionComponent&&); \
	UFPSInteractionComponent(const UFPSInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSInteractionComponent) \
	NO_API virtual ~UFPSInteractionComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_13_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
