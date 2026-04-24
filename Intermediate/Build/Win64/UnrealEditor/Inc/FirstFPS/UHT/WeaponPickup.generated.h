// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup/WeaponPickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTFPS_WeaponPickup_generated_h
#error "WeaponPickup.generated.h already included, missing '#pragma once' in WeaponPickup.h"
#endif
#define FIRSTFPS_WeaponPickup_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnablePickup); \
	DECLARE_FUNCTION(execOnRep_WeaponMesh); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnPickupOverlap); \
	DECLARE_FUNCTION(execOnInteract);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponPickup*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AppearanceIndex=NETFIELD_REP_START, \
		bIsBeingPickedUp, \
		PickupSkeletalMesh, \
		bCanBePickedUp, \
		NETFIELD_REP_END=bCanBePickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponPickup(AWeaponPickup&&); \
	AWeaponPickup(const AWeaponPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPickup) \
	NO_API virtual ~AWeaponPickup();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_14_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class AWeaponPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
