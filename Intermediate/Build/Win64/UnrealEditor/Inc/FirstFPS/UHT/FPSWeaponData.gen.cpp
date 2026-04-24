// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Projectiles/FPSWeaponData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSWeaponData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSWeaponData();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
FIRSTFPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAppearance();
FIRSTFPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin ScriptStruct FWeaponAppearance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponAppearance;
class UScriptStruct* FWeaponAppearance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAppearance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponAppearance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAppearance, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("WeaponAppearance"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponAppearance.OuterSingleton;
}
template<> FIRSTFPS_API UScriptStruct* StaticStruct<FWeaponAppearance>()
{
	return FWeaponAppearance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadDamage_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyDamage_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RPM\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_Player_VFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_VFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Out_of_Ammo_SFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_Player_SFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_Impact_SFX_MetaData[] = {
		{ "Category", "WeaponAppearance" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineCapacity_MetaData[] = {
		{ "Category", "WeaponAppearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingAmmo_MetaData[] = {
		{ "Category", "WeaponAppearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xca\xa3\xef\xbf\xbd\xe0\xb1\xb8\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd2\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xca\xa3\xef\xbf\xbd\xe0\xb1\xb8\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd2\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbb\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIcon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_Player_VFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_VFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_of_Ammo_SFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_Player_SFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullet_Impact_SFX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAppearance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, WeaponMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponIcon_MetaData), NewProp_WeaponIcon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_HeadDamage = { "HeadDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, HeadDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadDamage_MetaData), NewProp_HeadDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_BodyDamage = { "BodyDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, BodyDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyDamage_MetaData), NewProp_BodyDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_MuzzleFlashFX = { "MuzzleFlashFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, MuzzleFlashFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlashFX_MetaData), NewProp_MuzzleFlashFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_Player_VFX = { "Bullet_Impact_Player_VFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, Bullet_Impact_Player_VFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_Player_VFX_MetaData), NewProp_Bullet_Impact_Player_VFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_VFX = { "Bullet_Impact_VFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, Bullet_Impact_VFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_VFX_MetaData), NewProp_Bullet_Impact_VFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Out_of_Ammo_SFX = { "Out_of_Ammo_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, Out_of_Ammo_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Out_of_Ammo_SFX_MetaData), NewProp_Out_of_Ammo_SFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_Player_SFX = { "Bullet_Impact_Player_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, Bullet_Impact_Player_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_Player_SFX_MetaData), NewProp_Bullet_Impact_Player_SFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_SFX = { "Bullet_Impact_SFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, Bullet_Impact_SFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_Impact_SFX_MetaData), NewProp_Bullet_Impact_SFX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, MagazineCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineCapacity_MetaData), NewProp_MagazineCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_RemainingAmmo = { "RemainingAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAppearance, RemainingAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingAmmo_MetaData), NewProp_RemainingAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_WeaponIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_HeadDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_BodyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_MuzzleFlashFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_Player_VFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_VFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Out_of_Ammo_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_Player_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_Bullet_Impact_SFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_MagazineCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewProp_RemainingAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAppearance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAppearance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	&NewStructOps,
	"WeaponAppearance",
	Z_Construct_UScriptStruct_FWeaponAppearance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAppearance_Statics::PropPointers),
	sizeof(FWeaponAppearance),
	alignof(FWeaponAppearance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAppearance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponAppearance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponAppearance()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAppearance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponAppearance.InnerSingleton, Z_Construct_UScriptStruct_FWeaponAppearance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponAppearance.InnerSingleton;
}
// End ScriptStruct FWeaponAppearance

// Begin ScriptStruct FWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> FIRSTFPS_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WeaponBase.h\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WeaponBase.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipDuration_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Appearances_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa4\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa4\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquipDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Appearances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Appearances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMontage_MetaData), NewProp_FireMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipMontage_MetaData), NewProp_EquipMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EquipDuration = { "EquipDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, EquipDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipDuration_MetaData), NewProp_EquipDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Appearances_Inner = { "Appearances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponAppearance, METADATA_PARAMS(0, nullptr) }; // 2716417663
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Appearances = { "Appearances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Appearances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Appearances_MetaData), NewProp_Appearances_MetaData) }; // 2716417663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_FireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EquipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EquipDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Appearances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Appearances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	&NewStructOps,
	"WeaponData",
	Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
}
// End ScriptStruct FWeaponData

// Begin Class UFPSWeaponData
void UFPSWeaponData::StaticRegisterNativesUFPSWeaponData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSWeaponData);
UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister()
{
	return UFPSWeaponData::StaticClass();
}
struct Z_Construct_UClass_UFPSWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/FPSWeaponData.h" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "FPSWeaponData" },
		{ "ModuleRelativePath", "Public/Projectiles/FPSWeaponData.h" },
		{ "TitleProperty", "RowName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSWeaponData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSWeaponData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSWeaponData, Data), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1846073794
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSWeaponData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSWeaponData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFPSWeaponData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSWeaponData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSWeaponData_Statics::ClassParams = {
	&UFPSWeaponData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFPSWeaponData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFPSWeaponData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSWeaponData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSWeaponData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSWeaponData()
{
	if (!Z_Registration_Info_UClass_UFPSWeaponData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSWeaponData.OuterSingleton, Z_Construct_UClass_UFPSWeaponData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSWeaponData.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSWeaponData>()
{
	return UFPSWeaponData::StaticClass();
}
UFPSWeaponData::UFPSWeaponData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSWeaponData);
UFPSWeaponData::~UFPSWeaponData() {}
// End Class UFPSWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponAppearance::StaticStruct, Z_Construct_UScriptStruct_FWeaponAppearance_Statics::NewStructOps, TEXT("WeaponAppearance"), &Z_Registration_Info_UScriptStruct_WeaponAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAppearance), 2716417663U) },
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 1846073794U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSWeaponData, UFPSWeaponData::StaticClass, TEXT("UFPSWeaponData"), &Z_Registration_Info_UClass_UFPSWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSWeaponData), 2674704411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_4099579599(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_FPSWeaponData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
