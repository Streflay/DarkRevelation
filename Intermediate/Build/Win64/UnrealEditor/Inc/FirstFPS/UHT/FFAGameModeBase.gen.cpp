// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/FFAGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFAGameModeBase() {}

// Begin Cross Module References
FIRSTFPS_API UClass* Z_Construct_UClass_AFFAGameModeBase();
FIRSTFPS_API UClass* Z_Construct_UClass_AFFAGameModeBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AMyGameModeBase();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AFFAGameModeBase
void AFFAGameModeBase::StaticRegisterNativesAFFAGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFFAGameModeBase);
UClass* Z_Construct_UClass_AFFAGameModeBase_NoRegister()
{
	return AFFAGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AFFAGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/FFAGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/FFAGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKills_MetaData[] = {
		{ "Category", "FFAGameModeBase" },
		{ "ModuleRelativePath", "Public/Core/FFAGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameEnded_MetaData[] = {
		{ "Category", "FFAGameModeBase" },
		{ "ModuleRelativePath", "Public/Core/FFAGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetKills;
	static void NewProp_bGameEnded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFAGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_TargetKills = { "TargetKills", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFAGameModeBase, TargetKills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKills_MetaData), NewProp_TargetKills_MetaData) };
void Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_bGameEnded_SetBit(void* Obj)
{
	((AFFAGameModeBase*)Obj)->bGameEnded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_bGameEnded = { "bGameEnded", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFFAGameModeBase), &Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_bGameEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameEnded_MetaData), NewProp_bGameEnded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFAGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_TargetKills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFAGameModeBase_Statics::NewProp_bGameEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFAGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFFAGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFAGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFAGameModeBase_Statics::ClassParams = {
	&AFFAGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFFAGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFFAGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFAGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFAGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFFAGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFFAGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFAGameModeBase.OuterSingleton, Z_Construct_UClass_AFFAGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFAGameModeBase.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AFFAGameModeBase>()
{
	return AFFAGameModeBase::StaticClass();
}
AFFAGameModeBase::AFFAGameModeBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFFAGameModeBase);
AFFAGameModeBase::~AFFAGameModeBase() {}
// End Class AFFAGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFAGameModeBase, AFFAGameModeBase::StaticClass, TEXT("AFFAGameModeBase"), &Z_Registration_Info_UClass_AFFAGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFAGameModeBase), 1279196031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_3174532697(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FFAGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
