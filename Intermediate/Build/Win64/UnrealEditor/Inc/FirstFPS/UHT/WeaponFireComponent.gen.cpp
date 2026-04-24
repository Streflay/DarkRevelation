// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/ActionSystem/WeaponFireComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponFireComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UBulletSpreadComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponFireComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponFireComponent_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EFireMode();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Enum EFireMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFireMode;
static UEnum* EFireMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFireMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFireMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstFPS_EFireMode, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("EFireMode"));
	}
	return Z_Registration_Info_UEnum_EFireMode.OuterSingleton;
}
template<> FIRSTFPS_API UEnum* StaticEnum<EFireMode>()
{
	return EFireMode_StaticEnum();
}
struct Z_Construct_UEnum_FirstFPS_EFireMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EFireMode::Auto" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xca\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "EFireMode::Single" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xca\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFireMode::Single", (int64)EFireMode::Single },
		{ "EFireMode::Auto", (int64)EFireMode::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstFPS_EFireMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	"EFireMode",
	"EFireMode",
	Z_Construct_UEnum_FirstFPS_EFireMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EFireMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EFireMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstFPS_EFireMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FirstFPS_EFireMode()
{
	if (!Z_Registration_Info_UEnum_EFireMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFireMode.InnerSingleton, Z_Construct_UEnum_FirstFPS_EFireMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFireMode.InnerSingleton;
}
// End Enum EFireMode

// Begin Class UWeaponFireComponent Function CL_DisplayAmmoUI
struct WeaponFireComponent_eventCL_DisplayAmmoUI_Parms
{
	bool bDisplay;
};
static const FName NAME_UWeaponFireComponent_CL_DisplayAmmoUI = FName(TEXT("CL_DisplayAmmoUI"));
void UWeaponFireComponent::CL_DisplayAmmoUI(bool bDisplay)
{
	WeaponFireComponent_eventCL_DisplayAmmoUI_Parms Parms;
	Parms.bDisplay=bDisplay ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_CL_DisplayAmmoUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::NewProp_bDisplay_SetBit(void* Obj)
{
	((WeaponFireComponent_eventCL_DisplayAmmoUI_Parms*)Obj)->bDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::NewProp_bDisplay = { "bDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFireComponent_eventCL_DisplayAmmoUI_Parms), &Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::NewProp_bDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::NewProp_bDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "CL_DisplayAmmoUI", nullptr, nullptr, Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::PropPointers), sizeof(WeaponFireComponent_eventCL_DisplayAmmoUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponFireComponent_eventCL_DisplayAmmoUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execCL_DisplayAmmoUI)
{
	P_GET_UBOOL(Z_Param_bDisplay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_DisplayAmmoUI_Implementation(Z_Param_bDisplay);
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function CL_DisplayAmmoUI

// Begin Class UWeaponFireComponent Function CL_PlayReloadMontage
static const FName NAME_UWeaponFireComponent_CL_PlayReloadMontage = FName(TEXT("CL_PlayReloadMontage"));
void UWeaponFireComponent::CL_PlayReloadMontage()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_CL_PlayReloadMontage);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "CL_PlayReloadMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execCL_PlayReloadMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_PlayReloadMontage_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function CL_PlayReloadMontage

// Begin Class UWeaponFireComponent Function CL_ShowHitMarker
static const FName NAME_UWeaponFireComponent_CL_ShowHitMarker = FName(TEXT("CL_ShowHitMarker"));
void UWeaponFireComponent::CL_ShowHitMarker()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_CL_ShowHitMarker);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "CL_ShowHitMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execCL_ShowHitMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_ShowHitMarker_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function CL_ShowHitMarker

// Begin Class UWeaponFireComponent Function CL_UpdateAmmoUI
struct WeaponFireComponent_eventCL_UpdateAmmoUI_Parms
{
	int32 MagazineCapacity;
	int32 RemainingAmmo;
};
static const FName NAME_UWeaponFireComponent_CL_UpdateAmmoUI = FName(TEXT("CL_UpdateAmmoUI"));
void UWeaponFireComponent::CL_UpdateAmmoUI(int32 MagazineCapacity, int32 RemainingAmmo)
{
	WeaponFireComponent_eventCL_UpdateAmmoUI_Parms Parms;
	Parms.MagazineCapacity=MagazineCapacity;
	Parms.RemainingAmmo=RemainingAmmo;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_CL_UpdateAmmoUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFireComponent_eventCL_UpdateAmmoUI_Parms, MagazineCapacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFireComponent_eventCL_UpdateAmmoUI_Parms, RemainingAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::NewProp_MagazineCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::NewProp_RemainingAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "CL_UpdateAmmoUI", nullptr, nullptr, Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::PropPointers), sizeof(WeaponFireComponent_eventCL_UpdateAmmoUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponFireComponent_eventCL_UpdateAmmoUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execCL_UpdateAmmoUI)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MagazineCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_RemainingAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_UpdateAmmoUI_Implementation(Z_Param_MagazineCapacity,Z_Param_RemainingAmmo);
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function CL_UpdateAmmoUI

// Begin Class UWeaponFireComponent Function Multicast_OnEquipStarted
struct WeaponFireComponent_eventMulticast_OnEquipStarted_Parms
{
	float EquipDuration;
};
static const FName NAME_UWeaponFireComponent_Multicast_OnEquipStarted = FName(TEXT("Multicast_OnEquipStarted"));
void UWeaponFireComponent::Multicast_OnEquipStarted(float EquipDuration)
{
	WeaponFireComponent_eventMulticast_OnEquipStarted_Parms Parms;
	Parms.EquipDuration=EquipDuration;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_Multicast_OnEquipStarted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquipDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::NewProp_EquipDuration = { "EquipDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFireComponent_eventMulticast_OnEquipStarted_Parms, EquipDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::NewProp_EquipDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "Multicast_OnEquipStarted", nullptr, nullptr, Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::PropPointers), sizeof(WeaponFireComponent_eventMulticast_OnEquipStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponFireComponent_eventMulticast_OnEquipStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execMulticast_OnEquipStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EquipDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_OnEquipStarted_Implementation(Z_Param_EquipDuration);
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function Multicast_OnEquipStarted

// Begin Class UWeaponFireComponent Function MulticastFireFX
static const FName NAME_UWeaponFireComponent_MulticastFireFX = FName(TEXT("MulticastFireFX"));
void UWeaponFireComponent::MulticastFireFX()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_MulticastFireFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "MulticastFireFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execMulticastFireFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastFireFX_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function MulticastFireFX

// Begin Class UWeaponFireComponent Function MulticastPlayOutOfAmmoFX
static const FName NAME_UWeaponFireComponent_MulticastPlayOutOfAmmoFX = FName(TEXT("MulticastPlayOutOfAmmoFX"));
void UWeaponFireComponent::MulticastPlayOutOfAmmoFX()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_MulticastPlayOutOfAmmoFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "MulticastPlayOutOfAmmoFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execMulticastPlayOutOfAmmoFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayOutOfAmmoFX_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function MulticastPlayOutOfAmmoFX

// Begin Class UWeaponFireComponent Function MulticastReloadFX
static const FName NAME_UWeaponFireComponent_MulticastReloadFX = FName(TEXT("MulticastReloadFX"));
void UWeaponFireComponent::MulticastReloadFX()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_MulticastReloadFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "MulticastReloadFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execMulticastReloadFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReloadFX_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function MulticastReloadFX

// Begin Class UWeaponFireComponent Function MulticastSpawnHitFX
struct WeaponFireComponent_eventMulticastSpawnHitFX_Parms
{
	FVector HitLocation;
	FRotator HitRotation;
	bool bHitCharacter;
};
static const FName NAME_UWeaponFireComponent_MulticastSpawnHitFX = FName(TEXT("MulticastSpawnHitFX"));
void UWeaponFireComponent::MulticastSpawnHitFX(FVector const& HitLocation, FRotator const& HitRotation, bool bHitCharacter)
{
	WeaponFireComponent_eventMulticastSpawnHitFX_Parms Parms;
	Parms.HitLocation=HitLocation;
	Parms.HitRotation=HitRotation;
	Parms.bHitCharacter=bHitCharacter ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_MulticastSpawnHitFX);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitRotation;
	static void NewProp_bHitCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFireComponent_eventMulticastSpawnHitFX_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_HitRotation = { "HitRotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFireComponent_eventMulticastSpawnHitFX_Parms, HitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitRotation_MetaData), NewProp_HitRotation_MetaData) };
void Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_bHitCharacter_SetBit(void* Obj)
{
	((WeaponFireComponent_eventMulticastSpawnHitFX_Parms*)Obj)->bHitCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_bHitCharacter = { "bHitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFireComponent_eventMulticastSpawnHitFX_Parms), &Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_bHitCharacter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_HitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::NewProp_bHitCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "MulticastSpawnHitFX", nullptr, nullptr, Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::PropPointers), sizeof(WeaponFireComponent_eventMulticastSpawnHitFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponFireComponent_eventMulticastSpawnHitFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execMulticastSpawnHitFX)
{
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_STRUCT(FRotator,Z_Param_HitRotation);
	P_GET_UBOOL(Z_Param_bHitCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSpawnHitFX_Implementation(Z_Param_HitLocation,Z_Param_HitRotation,Z_Param_bHitCharacter);
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function MulticastSpawnHitFX

// Begin Class UWeaponFireComponent Function OnEquipFinished
struct Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "OnEquipFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execOnEquipFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquipFinished();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function OnEquipFinished

// Begin Class UWeaponFireComponent Function OnEquipStarted
struct Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "OnEquipStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execOnEquipStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquipStarted();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function OnEquipStarted

// Begin Class UWeaponFireComponent Function OnRep_Ammo
struct Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "OnRep_Ammo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execOnRep_Ammo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Ammo();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function OnRep_Ammo

// Begin Class UWeaponFireComponent Function ServerFire
static const FName NAME_UWeaponFireComponent_ServerFire = FName(TEXT("ServerFire"));
void UWeaponFireComponent::ServerFire()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_ServerFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_ServerFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "ServerFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_ServerFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_ServerFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_ServerFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execServerFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerFire_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function ServerFire

// Begin Class UWeaponFireComponent Function ServerReload
static const FName NAME_UWeaponFireComponent_ServerReload = FName(TEXT("ServerReload"));
void UWeaponFireComponent::ServerReload()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_ServerReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_ServerReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function ServerReload

// Begin Class UWeaponFireComponent Function ServerStartFire
static const FName NAME_UWeaponFireComponent_ServerStartFire = FName(TEXT("ServerStartFire"));
void UWeaponFireComponent::ServerStartFire()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_ServerStartFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "ServerStartFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execServerStartFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartFire_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function ServerStartFire

// Begin Class UWeaponFireComponent Function ServerStopFire
static const FName NAME_UWeaponFireComponent_ServerStopFire = FName(TEXT("ServerStopFire"));
void UWeaponFireComponent::ServerStopFire()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponFireComponent_ServerStopFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponFireComponent, nullptr, "ServerStopFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponFireComponent::execServerStopFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopFire_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponFireComponent Function ServerStopFire

// Begin Class UWeaponFireComponent
void UWeaponFireComponent::StaticRegisterNativesUWeaponFireComponent()
{
	UClass* Class = UWeaponFireComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CL_DisplayAmmoUI", &UWeaponFireComponent::execCL_DisplayAmmoUI },
		{ "CL_PlayReloadMontage", &UWeaponFireComponent::execCL_PlayReloadMontage },
		{ "CL_ShowHitMarker", &UWeaponFireComponent::execCL_ShowHitMarker },
		{ "CL_UpdateAmmoUI", &UWeaponFireComponent::execCL_UpdateAmmoUI },
		{ "Multicast_OnEquipStarted", &UWeaponFireComponent::execMulticast_OnEquipStarted },
		{ "MulticastFireFX", &UWeaponFireComponent::execMulticastFireFX },
		{ "MulticastPlayOutOfAmmoFX", &UWeaponFireComponent::execMulticastPlayOutOfAmmoFX },
		{ "MulticastReloadFX", &UWeaponFireComponent::execMulticastReloadFX },
		{ "MulticastSpawnHitFX", &UWeaponFireComponent::execMulticastSpawnHitFX },
		{ "OnEquipFinished", &UWeaponFireComponent::execOnEquipFinished },
		{ "OnEquipStarted", &UWeaponFireComponent::execOnEquipStarted },
		{ "OnRep_Ammo", &UWeaponFireComponent::execOnRep_Ammo },
		{ "ServerFire", &UWeaponFireComponent::execServerFire },
		{ "ServerReload", &UWeaponFireComponent::execServerReload },
		{ "ServerStartFire", &UWeaponFireComponent::execServerStartFire },
		{ "ServerStopFire", &UWeaponFireComponent::execServerStopFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponFireComponent);
UClass* Z_Construct_UClass_UWeaponFireComponent_NoRegister()
{
	return UWeaponFireComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponFireComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/WeaponFireComponent.h" },
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magazine_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ammo \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -----------\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ammo \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -----------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingAmmo_copy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Fire" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFireTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdRifle \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdRifle \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Fire" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc7\xb9\xef\xbf\xbd\xda\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc7\xb9\xef\xbf\xbd\xda\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Weapon|Animation" },
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpreadComp_MetaData[] = {
		{ "Category", "WeaponFireComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEquipping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb2\xef\xbf\xbd\xd7\xb4\xcc\xac \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb2\xef\xbf\xbd\xd7\xb4\xcc\xac \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/WeaponFireComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Magazine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo_copy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FireMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FireMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoFireTimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletSpreadComp;
	static void NewProp_bIsEquipping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEquipping;
	static void NewProp_bIsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponFireComponent_CL_DisplayAmmoUI, "CL_DisplayAmmoUI" }, // 1278957453
		{ &Z_Construct_UFunction_UWeaponFireComponent_CL_PlayReloadMontage, "CL_PlayReloadMontage" }, // 584830029
		{ &Z_Construct_UFunction_UWeaponFireComponent_CL_ShowHitMarker, "CL_ShowHitMarker" }, // 2247275820
		{ &Z_Construct_UFunction_UWeaponFireComponent_CL_UpdateAmmoUI, "CL_UpdateAmmoUI" }, // 2338513859
		{ &Z_Construct_UFunction_UWeaponFireComponent_Multicast_OnEquipStarted, "Multicast_OnEquipStarted" }, // 1001580848
		{ &Z_Construct_UFunction_UWeaponFireComponent_MulticastFireFX, "MulticastFireFX" }, // 2375154386
		{ &Z_Construct_UFunction_UWeaponFireComponent_MulticastPlayOutOfAmmoFX, "MulticastPlayOutOfAmmoFX" }, // 2159660405
		{ &Z_Construct_UFunction_UWeaponFireComponent_MulticastReloadFX, "MulticastReloadFX" }, // 329579246
		{ &Z_Construct_UFunction_UWeaponFireComponent_MulticastSpawnHitFX, "MulticastSpawnHitFX" }, // 1963012461
		{ &Z_Construct_UFunction_UWeaponFireComponent_OnEquipFinished, "OnEquipFinished" }, // 654231249
		{ &Z_Construct_UFunction_UWeaponFireComponent_OnEquipStarted, "OnEquipStarted" }, // 2646856983
		{ &Z_Construct_UFunction_UWeaponFireComponent_OnRep_Ammo, "OnRep_Ammo" }, // 3763949417
		{ &Z_Construct_UFunction_UWeaponFireComponent_ServerFire, "ServerFire" }, // 2747995363
		{ &Z_Construct_UFunction_UWeaponFireComponent_ServerReload, "ServerReload" }, // 1572159888
		{ &Z_Construct_UFunction_UWeaponFireComponent_ServerStartFire, "ServerStartFire" }, // 1275723456
		{ &Z_Construct_UFunction_UWeaponFireComponent_ServerStopFire, "ServerStopFire" }, // 1599823365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponFireComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_Magazine = { "Magazine", "OnRep_Ammo", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, Magazine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magazine_MetaData), NewProp_Magazine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_RemainingAmmo_copy = { "RemainingAmmo_copy", "OnRep_Ammo", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, RemainingAmmo_copy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingAmmo_copy_MetaData), NewProp_RemainingAmmo_copy_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, FireMode), Z_Construct_UEnum_FirstFPS_EFireMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMode_MetaData), NewProp_FireMode_MetaData) }; // 2388581163
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_AutoFireTimerHandle = { "AutoFireTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, AutoFireTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFireTimerHandle_MetaData), NewProp_AutoFireTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_BulletSpreadComp = { "BulletSpreadComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, BulletSpreadComp), Z_Construct_UClass_UBulletSpreadComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpreadComp_MetaData), NewProp_BulletSpreadComp_MetaData) };
void Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsEquipping_SetBit(void* Obj)
{
	((UWeaponFireComponent*)Obj)->bIsEquipping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsEquipping = { "bIsEquipping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponFireComponent), &Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsEquipping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEquipping_MetaData), NewProp_bIsEquipping_MetaData) };
void Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsFiring_SetBit(void* Obj)
{
	((UWeaponFireComponent*)Obj)->bIsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponFireComponent), &Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFiring_MetaData), NewProp_bIsFiring_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponFireComponent, WeaponOwner), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponFireComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_Magazine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_RemainingAmmo_copy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_AutoFireTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_BulletSpreadComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsEquipping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_bIsFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFireComponent_Statics::NewProp_WeaponOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFireComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponFireComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFireComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponFireComponent_Statics::ClassParams = {
	&UWeaponFireComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponFireComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFireComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFireComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponFireComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponFireComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponFireComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponFireComponent.OuterSingleton, Z_Construct_UClass_UWeaponFireComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponFireComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UWeaponFireComponent>()
{
	return UWeaponFireComponent::StaticClass();
}
void UWeaponFireComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Magazine(TEXT("Magazine"));
	static const FName Name_RemainingAmmo_copy(TEXT("RemainingAmmo_copy"));
	static const FName Name_WeaponOwner(TEXT("WeaponOwner"));
	const bool bIsValid = true
		&& Name_Magazine == ClassReps[(int32)ENetFields_Private::Magazine].Property->GetFName()
		&& Name_RemainingAmmo_copy == ClassReps[(int32)ENetFields_Private::RemainingAmmo_copy].Property->GetFName()
		&& Name_WeaponOwner == ClassReps[(int32)ENetFields_Private::WeaponOwner].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponFireComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponFireComponent);
UWeaponFireComponent::~UWeaponFireComponent() {}
// End Class UWeaponFireComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFireMode_StaticEnum, TEXT("EFireMode"), &Z_Registration_Info_UEnum_EFireMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2388581163U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponFireComponent, UWeaponFireComponent::StaticClass, TEXT("UWeaponFireComponent"), &Z_Registration_Info_UClass_UWeaponFireComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponFireComponent), 1688695179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_75637654(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_WeaponFireComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
