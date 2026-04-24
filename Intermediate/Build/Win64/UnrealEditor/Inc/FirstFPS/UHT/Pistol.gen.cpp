// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}

// Begin Cross Module References
FIRSTFPS_API UClass* Z_Construct_UClass_APistol();
FIRSTFPS_API UClass* Z_Construct_UClass_APistol_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class APistol
void APistol::StaticRegisterNativesAPistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APistol);
UClass* Z_Construct_UClass_APistol_NoRegister()
{
	return APistol::StaticClass();
}
struct Z_Construct_UClass_APistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Pistol.h" },
		{ "ModuleRelativePath", "Public/Weapon/Pistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APistol_Statics::ClassParams = {
	&APistol::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams), Z_Construct_UClass_APistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APistol()
{
	if (!Z_Registration_Info_UClass_APistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APistol.OuterSingleton, Z_Construct_UClass_APistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APistol.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<APistol>()
{
	return APistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
APistol::~APistol() {}
// End Class APistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APistol, APistol::StaticClass, TEXT("APistol"), &Z_Registration_Info_UClass_APistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APistol), 355845629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_3601134500(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_Pistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
