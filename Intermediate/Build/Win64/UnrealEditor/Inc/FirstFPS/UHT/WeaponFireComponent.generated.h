// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WeaponFireComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTFPS_WeaponFireComponent_generated_h
#error "WeaponFireComponent.generated.h already included, missing '#pragma once' in WeaponFireComponent.h"
#endif
#define FIRSTFPS_WeaponFireComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFireFX_Implementation(); \
	virtual void ServerStopFire_Implementation(); \
	virtual void MulticastReloadFX_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void ServerFire_Implementation(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void CL_ShowHitMarker_Implementation(); \
	virtual void CL_PlayReloadMontage_Implementation(); \
	virtual void CL_DisplayAmmoUI_Implementation(bool bDisplay); \
	virtual void CL_UpdateAmmoUI_Implementation(int32 MagazineCapacity, int32 RemainingAmmo); \
	virtual void MulticastPlayOutOfAmmoFX_Implementation(); \
	virtual void Multicast_OnEquipStarted_Implementation(float EquipDuration); \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execMulticastFireFX); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execMulticastReloadFX); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execCL_ShowHitMarker); \
	DECLARE_FUNCTION(execCL_PlayReloadMontage); \
	DECLARE_FUNCTION(execCL_DisplayAmmoUI); \
	DECLARE_FUNCTION(execCL_UpdateAmmoUI); \
	DECLARE_FUNCTION(execMulticastSpawnHitFX); \
	DECLARE_FUNCTION(execMulticastPlayOutOfAmmoFX); \
	DECLARE_FUNCTION(execMulticast_OnEquipStarted); \
	DECLARE_FUNCTION(execOnEquipFinished); \
	DECLARE_FUNCTION(execOnEquipStarted);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponFireComponent(); \
	friend struct Z_Construct_UClass_UWeaponFireComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponFireComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponFireComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Magazine=NETFIELD_REP_START, \
		RemainingAmmo_copy, \
		WeaponOwner, \
		NETFIELD_REP_END=WeaponOwner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponFireComponent(UWeaponFireComponent&&); \
	UWeaponFireComponent(const UWeaponFireComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponFireComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponFireComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponFireComponent) \
	NO_API virtual ~UWeaponFireComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_20_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UWeaponFireComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::Single) \
	op(EFireMode::Auto) 

enum class EFireMode : uint8;
template<> struct TIsUEnumClass<EFireMode> { enum { Value = true }; };
template<> FIRSTFPS_API UEnum* StaticEnum<EFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
