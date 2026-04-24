// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/UI/UIManagerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UUIManagerComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponSlot();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Delegate FOnInventoryUpdate
struct Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnInventoryUpdate_Parms
	{
		EWeaponSlot WeaponType;
		UTexture2D* WeaponThumbnail;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnInventoryUpdate_Parms, WeaponType), Z_Construct_UEnum_FirstFPS_EWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3519280025
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponThumbnail = { "WeaponThumbnail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnInventoryUpdate_Parms, WeaponThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::NewProp_WeaponThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnInventoryUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::_Script_FirstFPS_eventOnInventoryUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::_Script_FirstFPS_eventOnInventoryUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdate, EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail)
{
	struct _Script_FirstFPS_eventOnInventoryUpdate_Parms
	{
		EWeaponSlot WeaponType;
		UTexture2D* WeaponThumbnail;
	};
	_Script_FirstFPS_eventOnInventoryUpdate_Parms Parms;
	Parms.WeaponType=WeaponType;
	Parms.WeaponThumbnail=WeaponThumbnail;
	OnInventoryUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInventoryUpdate

// Begin Delegate FOnAmmoUIUpdate
struct Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnAmmoUIUpdate_Parms
	{
		int32 MagazineCapacity;
		int32 RemainingAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnAmmoUIUpdate_Parms, MagazineCapacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnAmmoUIUpdate_Parms, RemainingAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::NewProp_MagazineCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::NewProp_RemainingAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnAmmoUIUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::_Script_FirstFPS_eventOnAmmoUIUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::_Script_FirstFPS_eventOnAmmoUIUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAmmoUIUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoUIUpdate, int32 MagazineCapacity, int32 RemainingAmmo)
{
	struct _Script_FirstFPS_eventOnAmmoUIUpdate_Parms
	{
		int32 MagazineCapacity;
		int32 RemainingAmmo;
	};
	_Script_FirstFPS_eventOnAmmoUIUpdate_Parms Parms;
	Parms.MagazineCapacity=MagazineCapacity;
	Parms.RemainingAmmo=RemainingAmmo;
	OnAmmoUIUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAmmoUIUpdate

// Begin Delegate FOnDisplayAmmoUI
struct Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnDisplayAmmoUI_Parms
	{
		bool bDisplay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::NewProp_bDisplay_SetBit(void* Obj)
{
	((_Script_FirstFPS_eventOnDisplayAmmoUI_Parms*)Obj)->bDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::NewProp_bDisplay = { "bDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FirstFPS_eventOnDisplayAmmoUI_Parms), &Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::NewProp_bDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::NewProp_bDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnDisplayAmmoUI__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::_Script_FirstFPS_eventOnDisplayAmmoUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::_Script_FirstFPS_eventOnDisplayAmmoUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDisplayAmmoUI_DelegateWrapper(const FMulticastScriptDelegate& OnDisplayAmmoUI, bool bDisplay)
{
	struct _Script_FirstFPS_eventOnDisplayAmmoUI_Parms
	{
		bool bDisplay;
	};
	_Script_FirstFPS_eventOnDisplayAmmoUI_Parms Parms;
	Parms.bDisplay=bDisplay ? true : false;
	OnDisplayAmmoUI.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDisplayAmmoUI

// Begin Delegate FOnFFAWinner
struct Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnFFAWinner_Parms
	{
		int32 Kills;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnFFAWinner_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnFFAWinner__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::_Script_FirstFPS_eventOnFFAWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::_Script_FirstFPS_eventOnFFAWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFFAWinner_DelegateWrapper(const FMulticastScriptDelegate& OnFFAWinner, int32 Kills)
{
	struct _Script_FirstFPS_eventOnFFAWinner_Parms
	{
		int32 Kills;
	};
	_Script_FirstFPS_eventOnFFAWinner_Parms Parms;
	Parms.Kills=Kills;
	OnFFAWinner.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFFAWinner

// Begin Delegate FOnKillsUpdated
struct Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnKillsUpdated_Parms
	{
		int32 Kills;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc9\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa3\xef\xbf\xbd\xd6\xbb\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbdUI\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc9\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa3\xef\xbf\xbd\xd6\xbb\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbdUI\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnKillsUpdated_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnKillsUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::_Script_FirstFPS_eventOnKillsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::_Script_FirstFPS_eventOnKillsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKillsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnKillsUpdated, int32 Kills)
{
	struct _Script_FirstFPS_eventOnKillsUpdated_Parms
	{
		int32 Kills;
	};
	_Script_FirstFPS_eventOnKillsUpdated_Parms Parms;
	Parms.Kills=Kills;
	OnKillsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnKillsUpdated

// Begin Delegate FOnHitMarker
struct Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnHitMarker__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitMarker_DelegateWrapper(const FMulticastScriptDelegate& OnHitMarker)
{
	OnHitMarker.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHitMarker

// Begin Class UUIManagerComponent Function DisplayAmmoUI
struct UIManagerComponent_eventDisplayAmmoUI_Parms
{
	bool bDisplay;
};
static const FName NAME_UUIManagerComponent_DisplayAmmoUI = FName(TEXT("DisplayAmmoUI"));
void UUIManagerComponent::DisplayAmmoUI(bool bDisplay)
{
	UFunction* Func = FindFunctionChecked(NAME_UUIManagerComponent_DisplayAmmoUI);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UIManagerComponent_eventDisplayAmmoUI_Parms Parms;
		Parms.bDisplay=bDisplay ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DisplayAmmoUI_Implementation(bDisplay);
	}
}
struct Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::NewProp_bDisplay_SetBit(void* Obj)
{
	((UIManagerComponent_eventDisplayAmmoUI_Parms*)Obj)->bDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::NewProp_bDisplay = { "bDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIManagerComponent_eventDisplayAmmoUI_Parms), &Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::NewProp_bDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::NewProp_bDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "DisplayAmmoUI", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::PropPointers), sizeof(UIManagerComponent_eventDisplayAmmoUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(UIManagerComponent_eventDisplayAmmoUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execDisplayAmmoUI)
{
	P_GET_UBOOL(Z_Param_bDisplay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayAmmoUI_Implementation(Z_Param_bDisplay);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function DisplayAmmoUI

// Begin Class UUIManagerComponent Function GetOrCreateWidgetInstance
struct Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics
{
	struct UIManagerComponent_eventGetOrCreateWidgetInstance_Parms
	{
		FGameplayTag WidgetTag;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Tag \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1 Widget \xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf2\xb4\xb4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Tag \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1 Widget \xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf2\xb4\xb4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::NewProp_WidgetTag = { "WidgetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventGetOrCreateWidgetInstance_Parms, WidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTag_MetaData), NewProp_WidgetTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventGetOrCreateWidgetInstance_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::NewProp_WidgetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "GetOrCreateWidgetInstance", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::UIManagerComponent_eventGetOrCreateWidgetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::UIManagerComponent_eventGetOrCreateWidgetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execGetOrCreateWidgetInstance)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WidgetTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetOrCreateWidgetInstance(Z_Param_Out_WidgetTag);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function GetOrCreateWidgetInstance

// Begin Class UUIManagerComponent Function ShowHideWidget
struct Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics
{
	struct UIManagerComponent_eventShowHideWidget_Parms
	{
		FGameplayTag WidgetTag;
		bool bShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTag;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_WidgetTag = { "WidgetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventShowHideWidget_Parms, WidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTag_MetaData), NewProp_WidgetTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((UIManagerComponent_eventShowHideWidget_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIManagerComponent_eventShowHideWidget_Parms), &Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_WidgetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::NewProp_bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "ShowHideWidget", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::UIManagerComponent_eventShowHideWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::UIManagerComponent_eventShowHideWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execShowHideWidget)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WidgetTag);
	P_GET_UBOOL(Z_Param_bShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHideWidget(Z_Param_Out_WidgetTag,Z_Param_bShow);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function ShowHideWidget

// Begin Class UUIManagerComponent Function ShowHitMarker
static const FName NAME_UUIManagerComponent_ShowHitMarker = FName(TEXT("ShowHitMarker"));
void UUIManagerComponent::ShowHitMarker()
{
	UFunction* Func = FindFunctionChecked(NAME_UUIManagerComponent_ShowHitMarker);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ShowHitMarker_Implementation();
	}
}
struct Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "ShowHitMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execShowHitMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHitMarker_Implementation();
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function ShowHitMarker

// Begin Class UUIManagerComponent Function UpdateAmmoUI
struct UIManagerComponent_eventUpdateAmmoUI_Parms
{
	int32 MagazineCapacity;
	int32 RemainingAmmo;
};
static const FName NAME_UUIManagerComponent_UpdateAmmoUI = FName(TEXT("UpdateAmmoUI"));
void UUIManagerComponent::UpdateAmmoUI(int32 MagazineCapacity, int32 RemainingAmmo)
{
	UFunction* Func = FindFunctionChecked(NAME_UUIManagerComponent_UpdateAmmoUI);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UIManagerComponent_eventUpdateAmmoUI_Parms Parms;
		Parms.MagazineCapacity=MagazineCapacity;
		Parms.RemainingAmmo=RemainingAmmo;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateAmmoUI_Implementation(MagazineCapacity, RemainingAmmo);
	}
}
struct Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateAmmoUI_Parms, MagazineCapacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateAmmoUI_Parms, RemainingAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::NewProp_MagazineCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::NewProp_RemainingAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "UpdateAmmoUI", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::PropPointers), sizeof(UIManagerComponent_eventUpdateAmmoUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(UIManagerComponent_eventUpdateAmmoUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execUpdateAmmoUI)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MagazineCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_RemainingAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAmmoUI_Implementation(Z_Param_MagazineCapacity,Z_Param_RemainingAmmo);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function UpdateAmmoUI

// Begin Class UUIManagerComponent Function UpdateInventory
struct UIManagerComponent_eventUpdateInventory_Parms
{
	EWeaponSlot WeaponType;
	UTexture2D* WeaponThumbnail;
};
static const FName NAME_UUIManagerComponent_UpdateInventory = FName(TEXT("UpdateInventory"));
void UUIManagerComponent::UpdateInventory(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail)
{
	UFunction* Func = FindFunctionChecked(NAME_UUIManagerComponent_UpdateInventory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UIManagerComponent_eventUpdateInventory_Parms Parms;
		Parms.WeaponType=WeaponType;
		Parms.WeaponThumbnail=WeaponThumbnail;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateInventory_Implementation(WeaponType, WeaponThumbnail);
	}
}
struct Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd C++ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xca\xb5\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd C++ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xca\xb5\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateInventory_Parms, WeaponType), Z_Construct_UEnum_FirstFPS_EWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3519280025
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponThumbnail = { "WeaponThumbnail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateInventory_Parms, WeaponThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::NewProp_WeaponThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "UpdateInventory", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::PropPointers), sizeof(UIManagerComponent_eventUpdateInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(UIManagerComponent_eventUpdateInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_UpdateInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_UpdateInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execUpdateInventory)
{
	P_GET_ENUM(EWeaponSlot,Z_Param_WeaponType);
	P_GET_OBJECT(UTexture2D,Z_Param_WeaponThumbnail);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventory_Implementation(EWeaponSlot(Z_Param_WeaponType),Z_Param_WeaponThumbnail);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function UpdateInventory

// Begin Class UUIManagerComponent Function UpdateKillsUI
struct UIManagerComponent_eventUpdateKillsUI_Parms
{
	int32 Kills;
};
static const FName NAME_UUIManagerComponent_UpdateKillsUI = FName(TEXT("UpdateKillsUI"));
void UUIManagerComponent::UpdateKillsUI(int32 Kills)
{
	UFunction* Func = FindFunctionChecked(NAME_UUIManagerComponent_UpdateKillsUI);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UIManagerComponent_eventUpdateKillsUI_Parms Parms;
		Parms.Kills=Kills;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateKillsUI_Implementation(Kills);
	}
}
struct Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateKillsUI_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "UpdateKillsUI", nullptr, nullptr, Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::PropPointers), sizeof(UIManagerComponent_eventUpdateKillsUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(UIManagerComponent_eventUpdateKillsUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execUpdateKillsUI)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Kills);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateKillsUI_Implementation(Z_Param_Kills);
	P_NATIVE_END;
}
// End Class UUIManagerComponent Function UpdateKillsUI

// Begin Class UUIManagerComponent
void UUIManagerComponent::StaticRegisterNativesUUIManagerComponent()
{
	UClass* Class = UUIManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisplayAmmoUI", &UUIManagerComponent::execDisplayAmmoUI },
		{ "GetOrCreateWidgetInstance", &UUIManagerComponent::execGetOrCreateWidgetInstance },
		{ "ShowHideWidget", &UUIManagerComponent::execShowHideWidget },
		{ "ShowHitMarker", &UUIManagerComponent::execShowHitMarker },
		{ "UpdateAmmoUI", &UUIManagerComponent::execUpdateAmmoUI },
		{ "UpdateInventory", &UUIManagerComponent::execUpdateInventory },
		{ "UpdateKillsUI", &UUIManagerComponent::execUpdateKillsUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManagerComponent);
UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister()
{
	return UUIManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UUIManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UI/UIManagerComponent.h" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdate_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmmoUIUpdate_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisplayAmmoUI_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UMG \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UMG \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitMarker_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UMG \xef\xbf\xbd\xd0\xb0\xef\xbf\xbd HitMarker \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UMG \xef\xbf\xbd\xd0\xb0\xef\xbf\xbd HitMarker \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFFAWinner_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKillsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClassMap_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstanceMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoUIUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisplayAmmoUI;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFFAWinner;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKillsUpdated;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClassMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetClassMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetClassMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstanceMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetInstanceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetInstanceMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIManagerComponent_DisplayAmmoUI, "DisplayAmmoUI" }, // 3590244736
		{ &Z_Construct_UFunction_UUIManagerComponent_GetOrCreateWidgetInstance, "GetOrCreateWidgetInstance" }, // 3635064651
		{ &Z_Construct_UFunction_UUIManagerComponent_ShowHideWidget, "ShowHideWidget" }, // 1367346343
		{ &Z_Construct_UFunction_UUIManagerComponent_ShowHitMarker, "ShowHitMarker" }, // 801442384
		{ &Z_Construct_UFunction_UUIManagerComponent_UpdateAmmoUI, "UpdateAmmoUI" }, // 2675621608
		{ &Z_Construct_UFunction_UUIManagerComponent_UpdateInventory, "UpdateInventory" }, // 3749787133
		{ &Z_Construct_UFunction_UUIManagerComponent_UpdateKillsUI, "UpdateKillsUI" }, // 2494801676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CurrentActiveWidget = { "CurrentActiveWidget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, CurrentActiveWidget), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveWidget_MetaData), NewProp_CurrentActiveWidget_MetaData) }; // 1298103297
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnInventoryUpdate = { "OnInventoryUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnInventoryUpdate), Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdate_MetaData), NewProp_OnInventoryUpdate_MetaData) }; // 1189372549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnAmmoUIUpdate = { "OnAmmoUIUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnAmmoUIUpdate), Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmmoUIUpdate_MetaData), NewProp_OnAmmoUIUpdate_MetaData) }; // 601701573
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnDisplayAmmoUI = { "OnDisplayAmmoUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnDisplayAmmoUI), Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisplayAmmoUI_MetaData), NewProp_OnDisplayAmmoUI_MetaData) }; // 3423277276
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnHitMarker = { "OnHitMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnHitMarker), Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitMarker_MetaData), NewProp_OnHitMarker_MetaData) }; // 3843261952
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnFFAWinner = { "OnFFAWinner", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnFFAWinner), Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFFAWinner_MetaData), NewProp_OnFFAWinner_MetaData) }; // 349777509
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnKillsUpdated = { "OnKillsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OnKillsUpdated), Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKillsUpdated_MetaData), NewProp_OnKillsUpdated_MetaData) }; // 3800299064
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap_ValueProp = { "WidgetClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap_Key_KeyProp = { "WidgetClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap = { "WidgetClassMap", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, WidgetClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClassMap_MetaData), NewProp_WidgetClassMap_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap_ValueProp = { "WidgetInstanceMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap_Key_KeyProp = { "WidgetInstanceMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap = { "WidgetInstanceMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, WidgetInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstanceMap_MetaData), NewProp_WidgetInstanceMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CurrentActiveWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnInventoryUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnAmmoUIUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnDisplayAmmoUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnHitMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnFFAWinner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OnKillsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetClassMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_WidgetInstanceMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManagerComponent_Statics::ClassParams = {
	&UUIManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManagerComponent()
{
	if (!Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton, Z_Construct_UClass_UUIManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UUIManagerComponent>()
{
	return UUIManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManagerComponent);
UUIManagerComponent::~UUIManagerComponent() {}
// End Class UUIManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManagerComponent, UUIManagerComponent::StaticClass, TEXT("UUIManagerComponent"), &Z_Registration_Info_UClass_UUIManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManagerComponent), 515161394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_2029984294(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_UIManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
