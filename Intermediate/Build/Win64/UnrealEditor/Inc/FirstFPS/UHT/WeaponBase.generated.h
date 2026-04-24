// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FIRSTFPS_WeaponBase_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyAppearance); \
	DECLARE_FUNCTION(execOnRep_WeaponSocketName); \
	DECLARE_FUNCTION(execOnRep_AppearanceIndex); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponData=NETFIELD_REP_START, \
		AppearanceIndex, \
		MagazineCapacity, \
		RemainingAmmo, \
		bIsEquipped, \
		WeaponSocketName, \
		NETFIELD_REP_END=WeaponSocketName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&); \
	AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_15_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
