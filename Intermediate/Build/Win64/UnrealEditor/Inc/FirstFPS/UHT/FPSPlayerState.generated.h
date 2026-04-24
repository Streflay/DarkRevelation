// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPSPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef FIRSTFPS_FPSPlayerState_generated_h
#error "FPSPlayerState.generated.h already included, missing '#pragma once' in FPSPlayerState.h"
#endif
#define FIRSTFPS_FPSPlayerState_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPositionAtTime); \
	DECLARE_FUNCTION(execRecordPosition); \
	DECLARE_FUNCTION(execGetPingSeconds); \
	DECLARE_FUNCTION(execGetKD); \
	DECLARE_FUNCTION(execGetTeamTag); \
	DECLARE_FUNCTION(execOnRep_TeamTag);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerState(); \
	friend struct Z_Construct_UClass_AFPSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamTag=NETFIELD_REP_START, \
		Kills, \
		Deaths, \
		NETFIELD_REP_END=Deaths	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSPlayerState(AFPSPlayerState&&); \
	AFPSPlayerState(const AFPSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayerState) \
	NO_API virtual ~AFPSPlayerState();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AFPSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
