// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPSGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_FPSGameState_generated_h
#error "FPSGameState.generated.h already included, missing '#pragma once' in FPSGameState.h"
#endif
#define FIRSTFPS_FPSGameState_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend struct Z_Construct_UClass_AFPSGameState_Statics; \
public: \
	DECLARE_CLASS(AFPSGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SelectedMode=NETFIELD_REP_START, \
		NETFIELD_REP_END=SelectedMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSGameState(AFPSGameState&&); \
	AFPSGameState(const AFPSGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState) \
	NO_API virtual ~AFPSGameState();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_19_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AFPSGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h


#define FOREACH_ENUM_EGAMEMODETYPE(op) \
	op(EGameModeType::Team) \
	op(EGameModeType::FFA) 

enum class EGameModeType : uint8;
template<> struct TIsUEnumClass<EGameModeType> { enum { Value = true }; };
template<> FIRSTFPS_API UEnum* StaticEnum<EGameModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
