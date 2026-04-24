// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponState() {}

// Begin Cross Module References
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponState();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Enum EWeaponState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstFPS_EWeaponState, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> FIRSTFPS_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_FirstFPS_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponState.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWeaponState::None" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "EWeaponState::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "EWeaponState::Rifle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponState::None", (int64)EWeaponState::None },
		{ "EWeaponState::Rifle", (int64)EWeaponState::Rifle },
		{ "EWeaponState::Pistol", (int64)EWeaponState::Pistol },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FirstFPS_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_FirstFPS_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// End Enum EWeaponState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1820525217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponState_h_1646704879(TEXT("/Script/FirstFPS"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
