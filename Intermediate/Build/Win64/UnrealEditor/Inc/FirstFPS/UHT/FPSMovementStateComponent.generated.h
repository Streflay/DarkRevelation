// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/FPSMovementStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovementState : uint8;
#ifdef FIRSTFPS_FPSMovementStateComponent_generated_h
#error "FPSMovementStateComponent.generated.h already included, missing '#pragma once' in FPSMovementStateComponent.h"
#endif
#define FIRSTFPS_FPSMovementStateComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetMovementState_Implementation(EMovementState NewState); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execServerSetMovementState); \
	DECLARE_FUNCTION(execOnRep_MovementState);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSMovementStateComponent(); \
	friend struct Z_Construct_UClass_UFPSMovementStateComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSMovementStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSMovementStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MovementState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MovementState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFPSMovementStateComponent(UFPSMovementStateComponent&&); \
	UFPSMovementStateComponent(const UFPSMovementStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSMovementStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSMovementStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSMovementStateComponent) \
	NO_API virtual ~UFPSMovementStateComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_20_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UFPSMovementStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Walking) \
	op(EMovementState::Running) \
	op(EMovementState::Crouching) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> FIRSTFPS_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
