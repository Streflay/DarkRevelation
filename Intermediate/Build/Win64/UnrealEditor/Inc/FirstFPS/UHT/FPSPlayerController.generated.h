// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FPSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef FIRSTFPS_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FIRSTFPS_FPSPlayerController_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_StartTeam_Implementation(); \
	virtual void Server_StartFFA_Implementation(); \
	virtual void Client_UpdateKills_Implementation(int32 Kills); \
	virtual void Client_UpdateFFAWinner_Implementation(int32 Kills); \
	virtual void Client_UpdateTeamWinAnnouncement_Implementation(FGameplayTag WinningTeam, int32 Score, float DisplayTime); \
	virtual void CL_ShowHideWidget_Implementation(FGameplayTag const& WidgetTag, bool bShow); \
	DECLARE_FUNCTION(execServer_StartTeam); \
	DECLARE_FUNCTION(execServer_StartFFA); \
	DECLARE_FUNCTION(execClient_UpdateKills); \
	DECLARE_FUNCTION(execClient_UpdateFFAWinner); \
	DECLARE_FUNCTION(execClient_UpdateTeamWinAnnouncement); \
	DECLARE_FUNCTION(execCL_ShowHideWidget); \
	DECLARE_FUNCTION(execShowHideWidget);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSPlayerController(AFPSPlayerController&&); \
	AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayerController) \
	NO_API virtual ~AFPSPlayerController();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_21_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AFPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
