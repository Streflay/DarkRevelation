// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/TeamManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef FIRSTFPS_TeamManagerComponent_generated_h
#error "TeamManagerComponent.generated.h already included, missing '#pragma once' in TeamManagerComponent.h"
#endif
#define FIRSTFPS_TeamManagerComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_11_DELEGATE \
FIRSTFPS_API void FOnTeamWinAnnouncement_DelegateWrapper(const FMulticastScriptDelegate& OnTeamWinAnnouncement, FGameplayTag WinningTeam, int32 Score, float DisplayTime);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SRV_SetSelectedCharacterTag_Implementation(FGameplayTag const& CharacterTag); \
	virtual void SRV_SelectTeam_Implementation(FGameplayTag const& TeamTag); \
	DECLARE_FUNCTION(execSRV_SetSelectedCharacterTag); \
	DECLARE_FUNCTION(execSRV_SelectTeam); \
	DECLARE_FUNCTION(execUpdateTeamWinAnnouncement); \
	DECLARE_FUNCTION(execSelectCharacter); \
	DECLARE_FUNCTION(execSelectTeam);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTeamManagerComponent(); \
	friend struct Z_Construct_UClass_UTeamManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTeamManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UTeamManagerComponent)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTeamManagerComponent(UTeamManagerComponent&&); \
	UTeamManagerComponent(const UTeamManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeamManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeamManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTeamManagerComponent) \
	NO_API virtual ~UTeamManagerComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_13_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UTeamManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
