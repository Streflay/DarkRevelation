// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health/Health_Data.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_Health_Data_generated_h
#error "Health_Data.generated.h already included, missing '#pragma once' in Health_Data.h"
#endif
#define FIRSTFPS_Health_Data_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerData_Statics; \
	FIRSTFPS_API static class UScriptStruct* StaticStruct();


template<> FIRSTFPS_API UScriptStruct* StaticStruct<struct FPlayerData>();

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth_Data(); \
	friend struct Z_Construct_UClass_UHealth_Data_Statics; \
public: \
	DECLARE_CLASS(UHealth_Data, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UHealth_Data)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealth_Data(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealth_Data(UHealth_Data&&); \
	UHealth_Data(const UHealth_Data&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth_Data); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth_Data); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealth_Data) \
	NO_API virtual ~UHealth_Data();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_21_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UHealth_Data>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
