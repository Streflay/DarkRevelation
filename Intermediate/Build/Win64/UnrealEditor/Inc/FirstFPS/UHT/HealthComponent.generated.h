// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define FIRSTFPS_HealthComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_10_DELEGATE \
FIRSTFPS_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float CurrentHealth, float MaxHealth);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_11_DELEGATE \
FIRSTFPS_API void FOnArmorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnArmorChanged, float CurrentArmor, float MaxArmor);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		CurrentArmor, \
		NETFIELD_REP_END=CurrentArmor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_14_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
