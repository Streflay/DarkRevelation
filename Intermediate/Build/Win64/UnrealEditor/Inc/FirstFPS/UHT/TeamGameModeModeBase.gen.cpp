// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/TeamGameModeModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamGameModeModeBase() {}

// Begin Cross Module References
FIRSTFPS_API UClass* Z_Construct_UClass_AMyGameModeBase();
FIRSTFPS_API UClass* Z_Construct_UClass_ATeamGameModeModeBase();
FIRSTFPS_API UClass* Z_Construct_UClass_ATeamGameModeModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class ATeamGameModeModeBase
void ATeamGameModeModeBase::StaticRegisterNativesATeamGameModeModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamGameModeModeBase);
UClass* Z_Construct_UClass_ATeamGameModeModeBase_NoRegister()
{
	return ATeamGameModeModeBase::StaticClass();
}
struct Z_Construct_UClass_ATeamGameModeModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/TeamGameModeModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/TeamGameModeModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterTerroristScore_MetaData[] = {
		{ "Category", "Score" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd3\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/TeamGameModeModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd3\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerroristScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/Core/TeamGameModeModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CounterTerroristScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TerroristScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamGameModeModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATeamGameModeModeBase_Statics::NewProp_CounterTerroristScore = { "CounterTerroristScore", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamGameModeModeBase, CounterTerroristScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterTerroristScore_MetaData), NewProp_CounterTerroristScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATeamGameModeModeBase_Statics::NewProp_TerroristScore = { "TerroristScore", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamGameModeModeBase, TerroristScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerroristScore_MetaData), NewProp_TerroristScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamGameModeModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamGameModeModeBase_Statics::NewProp_CounterTerroristScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamGameModeModeBase_Statics::NewProp_TerroristScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameModeModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeamGameModeModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameModeModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamGameModeModeBase_Statics::ClassParams = {
	&ATeamGameModeModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATeamGameModeModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameModeModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameModeModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamGameModeModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamGameModeModeBase()
{
	if (!Z_Registration_Info_UClass_ATeamGameModeModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamGameModeModeBase.OuterSingleton, Z_Construct_UClass_ATeamGameModeModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamGameModeModeBase.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<ATeamGameModeModeBase>()
{
	return ATeamGameModeModeBase::StaticClass();
}
ATeamGameModeModeBase::ATeamGameModeModeBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamGameModeModeBase);
ATeamGameModeModeBase::~ATeamGameModeModeBase() {}
// End Class ATeamGameModeModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamGameModeModeBase, ATeamGameModeModeBase::StaticClass, TEXT("ATeamGameModeModeBase"), &Z_Registration_Info_UClass_ATeamGameModeModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamGameModeModeBase), 3224023249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_976497172(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_TeamGameModeModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
