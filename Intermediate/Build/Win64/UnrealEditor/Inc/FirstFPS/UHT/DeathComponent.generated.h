// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health/DeathComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_DeathComponent_generated_h
#error "DeathComponent.generated.h already included, missing '#pragma once' in DeathComponent.h"
#endif
#define FIRSTFPS_DeathComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_9_DELEGATE \
FIRSTFPS_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RespawnOwner_Implementation(); \
	virtual void Multicast_OnDeath_Implementation(); \
	DECLARE_FUNCTION(execServer_RespawnOwner); \
	DECLARE_FUNCTION(execMulticast_OnDeath); \
	DECLARE_FUNCTION(execCheckDeath);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeathComponent(); \
	friend struct Z_Construct_UClass_UDeathComponent_Statics; \
public: \
	DECLARE_CLASS(UDeathComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UDeathComponent)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeathComponent(UDeathComponent&&); \
	UDeathComponent(const UDeathComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeathComponent) \
	NO_API virtual ~UDeathComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UDeathComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
