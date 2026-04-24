// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef FIRSTFPS_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define FIRSTFPS_MyGameModeBase_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyPlayerDied_Implementation(APlayerController* Victim, APlayerController* Killer); \
	DECLARE_FUNCTION(execBroadcastFFAWinner); \
	DECLARE_FUNCTION(execHandleFFARespawn); \
	DECLARE_FUNCTION(execResetRoundAndRespawnPlayers); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execNotifyPlayerDied);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyGameModeBase(AMyGameModeBase&&); \
	AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase) \
	NO_API virtual ~AMyGameModeBase();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_13_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
