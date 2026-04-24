// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class AWeaponPickup;
class UTexture2D;
enum class EWeaponSlot : uint8;
#ifdef FIRSTFPS_WeaponInventoryComponent_generated_h
#error "WeaponInventoryComponent.generated.h already included, missing '#pragma once' in WeaponInventoryComponent.h"
#endif
#define FIRSTFPS_WeaponInventoryComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_HideAmmoUI_Implementation(); \
	virtual void ServerSetCurrentSlot_Implementation(EWeaponSlot NewSlot); \
	virtual void ServerDropWeapon_Implementation(); \
	virtual void ServerPickupWeapon_Implementation(AWeaponPickup* Pickup); \
	virtual void Multicast_StopCurrentMontage_Implementation(); \
	DECLARE_FUNCTION(execSwitchToSecondary); \
	DECLARE_FUNCTION(execSwitchToPrimary); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentSlot); \
	DECLARE_FUNCTION(execOnRep_SecondaryWeapon); \
	DECLARE_FUNCTION(execOnRep_PrimaryWeapon); \
	DECLARE_FUNCTION(execClient_HideAmmoUI); \
	DECLARE_FUNCTION(execServerSetCurrentSlot); \
	DECLARE_FUNCTION(execServerDropWeapon); \
	DECLARE_FUNCTION(execServerPickupWeapon); \
	DECLARE_FUNCTION(execCL_UpdateInventoryUI); \
	DECLARE_FUNCTION(execMulticast_StopCurrentMontage);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponInventoryComponent(); \
	friend struct Z_Construct_UClass_UWeaponInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PrimaryWeapon=NETFIELD_REP_START, \
		SecondaryWeapon, \
		CurrentSlot, \
		NETFIELD_REP_END=CurrentSlot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponInventoryComponent(UWeaponInventoryComponent&&); \
	UWeaponInventoryComponent(const UWeaponInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponInventoryComponent) \
	NO_API virtual ~UWeaponInventoryComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_18_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UWeaponInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
