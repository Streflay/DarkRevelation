// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/FPSAimOffsetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSAimOffsetComponent_generated_h
#error "FPSAimOffsetComponent.generated.h already included, missing '#pragma once' in FPSAimOffsetComponent.h"
#endif
#define FIRSTFPS_FPSAimOffsetComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerUpdateAimOffset_Implementation(FRotator NewOffset); \
	DECLARE_FUNCTION(execServerUpdateAimOffset); \
	DECLARE_FUNCTION(execOnRep_AimOffset);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSAimOffsetComponent(); \
	friend struct Z_Construct_UClass_UFPSAimOffsetComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSAimOffsetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSAimOffsetComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AimOffset=NETFIELD_REP_START, \
		NETFIELD_REP_END=AimOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSAimOffsetComponent(UFPSAimOffsetComponent&&); \
	UFPSAimOffsetComponent(const UFPSAimOffsetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSAimOffsetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSAimOffsetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSAimOffsetComponent) \
	NO_API virtual ~UFPSAimOffsetComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_11_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSAimOffsetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
