// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UIManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UUserWidget;
enum class EWeaponSlot : uint8;
struct FGameplayTag;
#ifdef FIRSTFPS_UIManagerComponent_generated_h
#error "UIManagerComponent.generated.h already included, missing '#pragma once' in UIManagerComponent.h"
#endif
#define FIRSTFPS_UIManagerComponent_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_14_DELEGATE \
FIRSTFPS_API void FOnInventoryUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdate, EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_15_DELEGATE \
FIRSTFPS_API void FOnAmmoUIUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoUIUpdate, int32 MagazineCapacity, int32 RemainingAmmo);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_16_DELEGATE \
FIRSTFPS_API void FOnDisplayAmmoUI_DelegateWrapper(const FMulticastScriptDelegate& OnDisplayAmmoUI, bool bDisplay);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_18_DELEGATE \
FIRSTFPS_API void FOnFFAWinner_DelegateWrapper(const FMulticastScriptDelegate& OnFFAWinner, int32 Kills);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_20_DELEGATE \
FIRSTFPS_API void FOnKillsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnKillsUpdated, int32 Kills);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_22_DELEGATE \
FIRSTFPS_API void FOnHitMarker_DelegateWrapper(const FMulticastScriptDelegate& OnHitMarker);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateKillsUI); \
	DECLARE_FUNCTION(execShowHitMarker); \
	DECLARE_FUNCTION(execDisplayAmmoUI); \
	DECLARE_FUNCTION(execUpdateAmmoUI); \
	DECLARE_FUNCTION(execUpdateInventory); \
	DECLARE_FUNCTION(execGetOrCreateWidgetInstance); \
	DECLARE_FUNCTION(execShowHideWidget);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIManagerComponent(); \
	friend struct Z_Construct_UClass_UUIManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UUIManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstFPS"), NO_API) \
	DECLARE_SERIALIZER(UUIManagerComponent)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIManagerComponent(UUIManagerComponent&&); \
	UUIManagerComponent(const UUIManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIManagerComponent) \
	NO_API virtual ~UUIManagerComponent();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_24_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UUIManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
