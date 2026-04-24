// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
#ifdef FIRSTFPS_WeaponStateComponent_generated_h
#error "WeaponStateComponent.generated.h already included, missing '#pragma once' in WeaponStateComponent.h"
#endif
#define FIRSTFPS_WeaponStateComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execEquipWeapon);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponStateComponent(); \
	friend struct Z_Construct_UClass_UWeaponStateComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWeaponStateComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		CurrentWeaponState, \
		NETFIELD_REP_END=CurrentWeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponStateComponent(UWeaponStateComponent&&); \
	UWeaponStateComponent(const UWeaponStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponStateComponent) \
	NO_API virtual ~UWeaponStateComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_13_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UWeaponStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
