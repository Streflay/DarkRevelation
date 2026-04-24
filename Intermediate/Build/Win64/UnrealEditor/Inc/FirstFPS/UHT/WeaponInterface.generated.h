// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponState : uint8;
#ifdef FIRSTFPS_WeaponInterface_generated_h
#error "WeaponInterface.generated.h already included, missing '#pragma once' in WeaponInterface.h"
#endif
#define FIRSTFPS_WeaponInterface_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeaponState);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTFPS_API UWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponInterface(UWeaponInterface&&); \
	UWeaponInterface(const UWeaponInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTFPS_API, UWeaponInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponInterface) \
	FIRSTFPS_API virtual ~UWeaponInterface();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWeaponInterface(); \
	friend struct Z_Construct_UClass_UWeaponInterface_Statics; \
public: \
	DECLARE_CLASS(UWeaponInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FirstFPS"), FIRSTFPS_API) \
	DECLARE_SERIALIZER(UWeaponInterface)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWeaponInterface() {} \
public: \
	typedef UWeaponInterface UClassType; \
	typedef IWeaponInterface ThisClass; \
	static EWeaponState Execute_GetWeaponState(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_11_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UWeaponInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
