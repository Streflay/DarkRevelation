// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponFireComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInventoryComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInventoryComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponStateComponent_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponSlot();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UWeaponInventoryComponent Function CL_UpdateInventoryUI
struct WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms
{
	EWeaponSlot WeaponType;
	UTexture2D* WeaponThumbnail;
};
static const FName NAME_UWeaponInventoryComponent_CL_UpdateInventoryUI = FName(TEXT("CL_UpdateInventoryUI"));
void UWeaponInventoryComponent::CL_UpdateInventoryUI(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail)
{
	WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms Parms;
	Parms.WeaponType=WeaponType;
	Parms.WeaponThumbnail=WeaponThumbnail;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_CL_UpdateInventoryUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd/\xd0\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd/\xd0\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms, WeaponType), Z_Construct_UEnum_FirstFPS_EWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3519280025
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponThumbnail = { "WeaponThumbnail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms, WeaponThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::NewProp_WeaponThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "CL_UpdateInventoryUI", nullptr, nullptr, Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::PropPointers), sizeof(WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponInventoryComponent_eventCL_UpdateInventoryUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execCL_UpdateInventoryUI)
{
	P_GET_ENUM(EWeaponSlot,Z_Param_WeaponType);
	P_GET_OBJECT(UTexture2D,Z_Param_WeaponThumbnail);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_UpdateInventoryUI_Implementation(EWeaponSlot(Z_Param_WeaponType),Z_Param_WeaponThumbnail);
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function CL_UpdateInventoryUI

// Begin Class UWeaponInventoryComponent Function Client_HideAmmoUI
static const FName NAME_UWeaponInventoryComponent_Client_HideAmmoUI = FName(TEXT("Client_HideAmmoUI"));
void UWeaponInventoryComponent::Client_HideAmmoUI()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_Client_HideAmmoUI);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "Client_HideAmmoUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execClient_HideAmmoUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_HideAmmoUI_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function Client_HideAmmoUI

// Begin Class UWeaponInventoryComponent Function GetCurrentWeapon
struct Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics
{
	struct WeaponInventoryComponent_eventGetCurrentWeapon_Parms
	{
		AWeaponBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInventoryComponent_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "GetCurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::WeaponInventoryComponent_eventGetCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::WeaponInventoryComponent_eventGetCurrentWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execGetCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function GetCurrentWeapon

// Begin Class UWeaponInventoryComponent Function Multicast_StopCurrentMontage
static const FName NAME_UWeaponInventoryComponent_Multicast_StopCurrentMontage = FName(TEXT("Multicast_StopCurrentMontage"));
void UWeaponInventoryComponent::Multicast_StopCurrentMontage()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_Multicast_StopCurrentMontage);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "Multicast_StopCurrentMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execMulticast_StopCurrentMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_StopCurrentMontage_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function Multicast_StopCurrentMontage

// Begin Class UWeaponInventoryComponent Function OnRep_CurrentSlot
struct Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "OnRep_CurrentSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execOnRep_CurrentSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentSlot();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function OnRep_CurrentSlot

// Begin Class UWeaponInventoryComponent Function OnRep_PrimaryWeapon
struct Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* RepNotify */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "OnRep_PrimaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execOnRep_PrimaryWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PrimaryWeapon();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function OnRep_PrimaryWeapon

// Begin Class UWeaponInventoryComponent Function OnRep_SecondaryWeapon
struct Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "OnRep_SecondaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execOnRep_SecondaryWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SecondaryWeapon();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function OnRep_SecondaryWeapon

// Begin Class UWeaponInventoryComponent Function ServerDropWeapon
static const FName NAME_UWeaponInventoryComponent_ServerDropWeapon = FName(TEXT("ServerDropWeapon"));
void UWeaponInventoryComponent::ServerDropWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_ServerDropWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "ServerDropWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execServerDropWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDropWeapon_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function ServerDropWeapon

// Begin Class UWeaponInventoryComponent Function ServerPickupWeapon
struct WeaponInventoryComponent_eventServerPickupWeapon_Parms
{
	AWeaponPickup* Pickup;
};
static const FName NAME_UWeaponInventoryComponent_ServerPickupWeapon = FName(TEXT("ServerPickupWeapon"));
void UWeaponInventoryComponent::ServerPickupWeapon(AWeaponPickup* Pickup)
{
	WeaponInventoryComponent_eventServerPickupWeapon_Parms Parms;
	Parms.Pickup=Pickup;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_ServerPickupWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pickup\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pickup\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInventoryComponent_eventServerPickupWeapon_Parms, Pickup), Z_Construct_UClass_AWeaponPickup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::NewProp_Pickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "ServerPickupWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::PropPointers), sizeof(WeaponInventoryComponent_eventServerPickupWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponInventoryComponent_eventServerPickupWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execServerPickupWeapon)
{
	P_GET_OBJECT(AWeaponPickup,Z_Param_Pickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPickupWeapon_Implementation(Z_Param_Pickup);
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function ServerPickupWeapon

// Begin Class UWeaponInventoryComponent Function ServerSetCurrentSlot
struct WeaponInventoryComponent_eventServerSetCurrentSlot_Parms
{
	EWeaponSlot NewSlot;
};
static const FName NAME_UWeaponInventoryComponent_ServerSetCurrentSlot = FName(TEXT("ServerSetCurrentSlot"));
void UWeaponInventoryComponent::ServerSetCurrentSlot(EWeaponSlot NewSlot)
{
	WeaponInventoryComponent_eventServerSetCurrentSlot_Parms Parms;
	Parms.NewSlot=NewSlot;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponInventoryComponent_ServerSetCurrentSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::NewProp_NewSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::NewProp_NewSlot = { "NewSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInventoryComponent_eventServerSetCurrentSlot_Parms, NewSlot), Z_Construct_UEnum_FirstFPS_EWeaponSlot, METADATA_PARAMS(0, nullptr) }; // 3519280025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::NewProp_NewSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::NewProp_NewSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "ServerSetCurrentSlot", nullptr, nullptr, Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::PropPointers), sizeof(WeaponInventoryComponent_eventServerSetCurrentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponInventoryComponent_eventServerSetCurrentSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execServerSetCurrentSlot)
{
	P_GET_ENUM(EWeaponSlot,Z_Param_NewSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetCurrentSlot_Implementation(EWeaponSlot(Z_Param_NewSlot));
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function ServerSetCurrentSlot

// Begin Class UWeaponInventoryComponent Function SwitchToPrimary
struct Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "SwitchToPrimary", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execSwitchToPrimary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToPrimary();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function SwitchToPrimary

// Begin Class UWeaponInventoryComponent Function SwitchToSecondary
struct Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInventoryComponent, nullptr, "SwitchToSecondary", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponInventoryComponent::execSwitchToSecondary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToSecondary();
	P_NATIVE_END;
}
// End Class UWeaponInventoryComponent Function SwitchToSecondary

// Begin Class UWeaponInventoryComponent
void UWeaponInventoryComponent::StaticRegisterNativesUWeaponInventoryComponent()
{
	UClass* Class = UWeaponInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CL_UpdateInventoryUI", &UWeaponInventoryComponent::execCL_UpdateInventoryUI },
		{ "Client_HideAmmoUI", &UWeaponInventoryComponent::execClient_HideAmmoUI },
		{ "GetCurrentWeapon", &UWeaponInventoryComponent::execGetCurrentWeapon },
		{ "Multicast_StopCurrentMontage", &UWeaponInventoryComponent::execMulticast_StopCurrentMontage },
		{ "OnRep_CurrentSlot", &UWeaponInventoryComponent::execOnRep_CurrentSlot },
		{ "OnRep_PrimaryWeapon", &UWeaponInventoryComponent::execOnRep_PrimaryWeapon },
		{ "OnRep_SecondaryWeapon", &UWeaponInventoryComponent::execOnRep_SecondaryWeapon },
		{ "ServerDropWeapon", &UWeaponInventoryComponent::execServerDropWeapon },
		{ "ServerPickupWeapon", &UWeaponInventoryComponent::execServerPickupWeapon },
		{ "ServerSetCurrentSlot", &UWeaponInventoryComponent::execServerSetCurrentSlot },
		{ "SwitchToPrimary", &UWeaponInventoryComponent::execSwitchToPrimary },
		{ "SwitchToSecondary", &UWeaponInventoryComponent::execSwitchToSecondary },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponInventoryComponent);
UClass* Z_Construct_UClass_UWeaponInventoryComponent_NoRegister()
{
	return UWeaponInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/WeaponInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdRifle / SMG / Shotgun\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdRifle / SMG / Shotgun\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdPistol\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdPistol\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStateComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd & \xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd & \xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFireComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd FireComponent\xef\xbf\xbd\xef\xbf\xbd\xcd\xb3\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ammo UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd FireComponent\xef\xbf\xbd\xef\xbf\xbd\xcd\xb3\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ammo UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedWeapons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDropping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xd8\xb8\xef\xbf\xbd Drop/Spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd\xd8\xb8\xef\xbf\xbd Drop/Spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponStateComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFireComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppedWeapons_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DroppedWeapons;
	static void NewProp_bIsDropping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDropping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_CL_UpdateInventoryUI, "CL_UpdateInventoryUI" }, // 1078016415
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_Client_HideAmmoUI, "Client_HideAmmoUI" }, // 3628939676
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_GetCurrentWeapon, "GetCurrentWeapon" }, // 3730404709
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_Multicast_StopCurrentMontage, "Multicast_StopCurrentMontage" }, // 3150941071
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_CurrentSlot, "OnRep_CurrentSlot" }, // 3101345842
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_PrimaryWeapon, "OnRep_PrimaryWeapon" }, // 4270055914
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_OnRep_SecondaryWeapon, "OnRep_SecondaryWeapon" }, // 2264059058
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_ServerDropWeapon, "ServerDropWeapon" }, // 2689744643
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_ServerPickupWeapon, "ServerPickupWeapon" }, // 2924193552
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_ServerSetCurrentSlot, "ServerSetCurrentSlot" }, // 1354944236
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToPrimary, "SwitchToPrimary" }, // 729186329
		{ &Z_Construct_UFunction_UWeaponInventoryComponent_SwitchToSecondary, "SwitchToSecondary" }, // 959129203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", "OnRep_PrimaryWeapon", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, PrimaryWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeapon_MetaData), NewProp_PrimaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", "OnRep_SecondaryWeapon", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, SecondaryWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeapon_MetaData), NewProp_SecondaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_WeaponStateComponent = { "WeaponStateComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, WeaponStateComponent), Z_Construct_UClass_UWeaponStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponStateComponent_MetaData), NewProp_WeaponStateComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentSlot = { "CurrentSlot", "OnRep_CurrentSlot", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, CurrentSlot), Z_Construct_UEnum_FirstFPS_EWeaponSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlot_MetaData), NewProp_CurrentSlot_MetaData) }; // 3519280025
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentFireComponent = { "CurrentFireComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, CurrentFireComponent), Z_Construct_UClass_UWeaponFireComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFireComponent_MetaData), NewProp_CurrentFireComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_DroppedWeapons_ElementProp = { "DroppedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_DroppedWeapons = { "DroppedWeapons", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponInventoryComponent, DroppedWeapons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedWeapons_MetaData), NewProp_DroppedWeapons_MetaData) };
void Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_bIsDropping_SetBit(void* Obj)
{
	((UWeaponInventoryComponent*)Obj)->bIsDropping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_bIsDropping = { "bIsDropping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponInventoryComponent), &Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_bIsDropping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDropping_MetaData), NewProp_bIsDropping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_PrimaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_SecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_WeaponStateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_CurrentFireComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_DroppedWeapons_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_DroppedWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInventoryComponent_Statics::NewProp_bIsDropping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInventoryComponent_Statics::ClassParams = {
	&UWeaponInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponInventoryComponent.OuterSingleton, Z_Construct_UClass_UWeaponInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponInventoryComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UWeaponInventoryComponent>()
{
	return UWeaponInventoryComponent::StaticClass();
}
void UWeaponInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PrimaryWeapon(TEXT("PrimaryWeapon"));
	static const FName Name_SecondaryWeapon(TEXT("SecondaryWeapon"));
	static const FName Name_CurrentSlot(TEXT("CurrentSlot"));
	const bool bIsValid = true
		&& Name_PrimaryWeapon == ClassReps[(int32)ENetFields_Private::PrimaryWeapon].Property->GetFName()
		&& Name_SecondaryWeapon == ClassReps[(int32)ENetFields_Private::SecondaryWeapon].Property->GetFName()
		&& Name_CurrentSlot == ClassReps[(int32)ENetFields_Private::CurrentSlot].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponInventoryComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInventoryComponent);
UWeaponInventoryComponent::~UWeaponInventoryComponent() {}
// End Class UWeaponInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponInventoryComponent, UWeaponInventoryComponent::StaticClass, TEXT("UWeaponInventoryComponent"), &Z_Registration_Info_UClass_UWeaponInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponInventoryComponent), 3309308254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_2288518816(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
