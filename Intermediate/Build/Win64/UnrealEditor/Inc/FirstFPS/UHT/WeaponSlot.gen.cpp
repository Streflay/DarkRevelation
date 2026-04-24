// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSlot() {}

// Begin Cross Module References
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponSlot();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Enum EWeaponSlot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponSlot;
static UEnum* EWeaponSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstFPS_EWeaponSlot, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("EWeaponSlot"));
	}
	return Z_Registration_Info_UEnum_EWeaponSlot.OuterSingleton;
}
template<> FIRSTFPS_API UEnum* StaticEnum<EWeaponSlot>()
{
	return EWeaponSlot_StaticEnum();
}
struct Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponSlot.h" },
		{ "None.Comment", "//\n" },
		{ "None.Name", "EWeaponSlot::None" },
		{ "Primary.Comment", "//\n" },
		{ "Primary.Name", "EWeaponSlot::Primary" },
		{ "Secondary.Comment", "//\n" },
		{ "Secondary.Name", "EWeaponSlot::Secondary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponSlot::None", (int64)EWeaponSlot::None },
		{ "EWeaponSlot::Primary", (int64)EWeaponSlot::Primary },
		{ "EWeaponSlot::Secondary", (int64)EWeaponSlot::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	"EWeaponSlot",
	"EWeaponSlot",
	Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FirstFPS_EWeaponSlot()
{
	if (!Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton, Z_Construct_UEnum_FirstFPS_EWeaponSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponSlot.InnerSingleton;
}
// End Enum EWeaponSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponSlot_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponSlot_StaticEnum, TEXT("EWeaponSlot"), &Z_Registration_Info_UEnum_EWeaponSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3519280025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponSlot_h_2148232174(TEXT("/Script/FirstFPS"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponSlot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponSlot_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
