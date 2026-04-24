// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponFireComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AWeaponBase Function ApplyAppearance
struct Z_Construct_UFunction_AWeaponBase_ApplyAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ApplyAppearance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ApplyAppearance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ApplyAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ApplyAppearance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ApplyAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ApplyAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execApplyAppearance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAppearance();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ApplyAppearance

// Begin Class AWeaponBase Function OnRep_AppearanceIndex
struct Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnRep_AppearanceIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnRep_AppearanceIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AppearanceIndex();
	P_NATIVE_END;
}
// End Class AWeaponBase Function OnRep_AppearanceIndex

// Begin Class AWeaponBase Function OnRep_WeaponSocketName
struct Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnRep_WeaponSocketName", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnRep_WeaponSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponSocketName();
	P_NATIVE_END;
}
// End Class AWeaponBase Function OnRep_WeaponSocketName

// Begin Class AWeaponBase Function StartFire
struct Z_Construct_UFunction_AWeaponBase_StartFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StartFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StartFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_StartFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StartFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execStartFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function StartFire

// Begin Class AWeaponBase Function StopFire
struct Z_Construct_UFunction_AWeaponBase_StopFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StopFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StopFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StopFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_StopFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StopFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execStopFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFire();
	P_NATIVE_END;
}
// End Class AWeaponBase Function StopFire

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAppearance", &AWeaponBase::execApplyAppearance },
		{ "OnRep_AppearanceIndex", &AWeaponBase::execOnRep_AppearanceIndex },
		{ "OnRep_WeaponSocketName", &AWeaponBase::execOnRep_WeaponSocketName },
		{ "StartFire", &AWeaponBase::execStartFire },
		{ "StopFire", &AWeaponBase::execStopFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponBase.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppearanceIndex_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd1\xa1\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xea\xa3\xa8UI \xef\xbf\xbd\xc3\xa3\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd1\xa1\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xea\xa3\xa8UI \xef\xbf\xbd\xc3\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadDamage_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyDamage_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd1\xa1\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7 */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd1\xa1\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_Player_VFX_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_VFX_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Out_of_Ammo_SFX_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_Player_SFX_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_SFX_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineCapacity_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingAmmo_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xca\xa3\xef\xbf\xbd\xe0\xb1\xb8\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd2\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xca\xa3\xef\xbf\xbd\xe0\xb1\xb8\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd2\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireComponent_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocketName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppearanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIcon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_Player_VFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_VFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_of_Ammo_SFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_Player_SFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_SFX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo;
	static void NewProp_bIsEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_ApplyAppearance, "ApplyAppearance" }, // 389395674
		{ &Z_Construct_UFunction_AWeaponBase_OnRep_AppearanceIndex, "OnRep_AppearanceIndex" }, // 534347057
		{ &Z_Construct_UFunction_AWeaponBase_OnRep_WeaponSocketName, "OnRep_WeaponSocketName" }, // 3336144012
		{ &Z_Construct_UFunction_AWeaponBase_StartFire, "StartFire" }, // 3125030476
		{ &Z_Construct_UFunction_AWeaponBase_StopFire, "StopFire" }, // 4113954826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponData), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponData_MetaData), NewProp_WeaponData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AppearanceIndex = { "AppearanceIndex", "OnRep_AppearanceIndex", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AppearanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppearanceIndex_MetaData), NewProp_AppearanceIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIcon_MetaData), NewProp_WeaponIcon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_HeadDamage = { "HeadDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, HeadDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadDamage_MetaData), NewProp_HeadDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_BodyDamage = { "BodyDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, BodyDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyDamage_MetaData), NewProp_BodyDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_Player_VFX = { "Bullet_Impact_Player_VFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Bullet_Impact_Player_VFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_Player_VFX_MetaData), NewProp_Bullet_Impact_Player_VFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_VFX = { "Bullet_Impact_VFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Bullet_Impact_VFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_VFX_MetaData), NewProp_Bullet_Impact_VFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Out_of_Ammo_SFX = { "Out_of_Ammo_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Out_of_Ammo_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Out_of_Ammo_SFX_MetaData), NewProp_Out_of_Ammo_SFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_Player_SFX = { "Bullet_Impact_Player_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Bullet_Impact_Player_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_Player_SFX_MetaData), NewProp_Bullet_Impact_Player_SFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_SFX = { "Bullet_Impact_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Bullet_Impact_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_SFX_MetaData), NewProp_Bullet_Impact_SFX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MagazineCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineCapacity_MetaData), NewProp_MagazineCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RemainingAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingAmmo_MetaData), NewProp_RemainingAmmo_MetaData) };
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->bIsEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEquipped_MetaData), NewProp_bIsEquipped_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireComponent = { "FireComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FireComponent), Z_Construct_UClass_UWeaponFireComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireComponent_MetaData), NewProp_FireComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSocketName = { "WeaponSocketName", "OnRep_WeaponSocketName", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSocketName_MetaData), NewProp_WeaponSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AppearanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_HeadDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_BodyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_Player_VFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_VFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Out_of_Ammo_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_Player_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Bullet_Impact_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RemainingAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bIsEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(AWeaponBase, IWeaponInterface), false },  // 1409815362
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
void AWeaponBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_WeaponData(TEXT("WeaponData"));
	static const FName Name_AppearanceIndex(TEXT("AppearanceIndex"));
	static const FName Name_MagazineCapacity(TEXT("MagazineCapacity"));
	static const FName Name_RemainingAmmo(TEXT("RemainingAmmo"));
	static const FName Name_bIsEquipped(TEXT("bIsEquipped"));
	static const FName Name_WeaponSocketName(TEXT("WeaponSocketName"));
	const bool bIsValid = true
		&& Name_WeaponData == ClassReps[(int32)ENetFields_Private::WeaponData].Property->GetFName()
		&& Name_AppearanceIndex == ClassReps[(int32)ENetFields_Private::AppearanceIndex].Property->GetFName()
		&& Name_MagazineCapacity == ClassReps[(int32)ENetFields_Private::MagazineCapacity].Property->GetFName()
		&& Name_RemainingAmmo == ClassReps[(int32)ENetFields_Private::RemainingAmmo].Property->GetFName()
		&& Name_bIsEquipped == ClassReps[(int32)ENetFields_Private::bIsEquipped].Property->GetFName()
		&& Name_WeaponSocketName == ClassReps[(int32)ENetFields_Private::WeaponSocketName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 3882225485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_4092580904(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
