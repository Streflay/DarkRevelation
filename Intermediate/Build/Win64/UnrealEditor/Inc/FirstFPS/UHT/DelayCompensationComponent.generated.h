// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DelayCompensationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_DelayCompensationComponent_generated_h
#error "DelayCompensationComponent.generated.h already included, missing '#pragma once' in DelayCompensationComponent.h"
#endif
#define FIRSTFPS_DelayCompensationComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_TimeHistory); \
	DECLARE_FUNCTION(execOnRep_PositionHistory); \
	DECLARE_FUNCTION(execRecordPosition);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDelayCompensationComponent(); \
	friend struct Z_Construct_UClass_UDelayCompensationComponent_Statics; \
public: \
	DECLARE_CLASS(UDelayCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UDelayCompensationComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PositionHistory=NETFIELD_REP_START, \
		TimeHistory, \
		NETFIELD_REP_END=TimeHistory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDelayCompensationComponent(UDelayCompensationComponent&&); \
	UDelayCompensationComponent(const UDelayCompensationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelayCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelayCompensationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDelayCompensationComponent) \
	NO_API virtual ~UDelayCompensationComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_10_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UDelayCompensationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
