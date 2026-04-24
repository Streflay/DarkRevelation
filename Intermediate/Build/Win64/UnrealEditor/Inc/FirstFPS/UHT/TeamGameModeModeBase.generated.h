// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/TeamGameModeModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_TeamGameModeModeBase_generated_h
#error "TeamGameModeModeBase.generated.h already included, missing '#pragma once' in TeamGameModeModeBase.h"
#endif
#define FIRSTFPS_TeamGameModeModeBase_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamGameModeModeBase(); \
	friend struct Z_Construct_UClass_ATeamGameModeModeBase_Statics; \
public: \
	DECLARE_CLASS(ATeamGameModeModeBase, AMyGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(ATeamGameModeModeBase)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamGameModeModeBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeamGameModeModeBase(ATeamGameModeModeBase&&); \
	ATeamGameModeModeBase(const ATeamGameModeModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamGameModeModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamGameModeModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeamGameModeModeBase) \
	NO_API virtual ~ATeamGameModeModeBase();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_12_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class ATeamGameModeModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
