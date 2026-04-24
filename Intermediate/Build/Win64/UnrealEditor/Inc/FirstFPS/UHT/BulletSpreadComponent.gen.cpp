// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Projectiles/BulletSpreadComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletSpreadComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UBulletSpreadComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UBulletSpreadComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UBulletSpreadComponent
void UBulletSpreadComponent::StaticRegisterNativesUBulletSpreadComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBulletSpreadComponent);
UClass* Z_Construct_UClass_UBulletSpreadComponent_NoRegister()
{
	return UBulletSpreadComponent::StaticClass();
}
struct Z_Construct_UClass_UBulletSpreadComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Projectiles/BulletSpreadComponent.h" },
		{ "ModuleRelativePath", "Public/Projectiles/BulletSpreadComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpread_MetaData[] = {
		{ "Category", "Spread" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa2\xef\xbf\xbd\xef\xbf\xbd\xc7\xb6\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/BulletSpreadComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa2\xef\xbf\xbd\xef\xbf\xbd\xc7\xb6\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpread_MetaData[] = {
		{ "Category", "Spread" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa2\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/BulletSpreadComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa2\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousFireIncrement_MetaData[] = {
		{ "Category", "Spread" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/Projectiles/BulletSpreadComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuousFireIncrement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBulletSpreadComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_BaseSpread = { "BaseSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBulletSpreadComponent, BaseSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpread_MetaData), NewProp_BaseSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_MovementSpread = { "MovementSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBulletSpreadComponent, MovementSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpread_MetaData), NewProp_MovementSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_ContinuousFireIncrement = { "ContinuousFireIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBulletSpreadComponent, ContinuousFireIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousFireIncrement_MetaData), NewProp_ContinuousFireIncrement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBulletSpreadComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_BaseSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_MovementSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBulletSpreadComponent_Statics::NewProp_ContinuousFireIncrement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBulletSpreadComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBulletSpreadComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBulletSpreadComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBulletSpreadComponent_Statics::ClassParams = {
	&UBulletSpreadComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBulletSpreadComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBulletSpreadComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBulletSpreadComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBulletSpreadComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBulletSpreadComponent()
{
	if (!Z_Registration_Info_UClass_UBulletSpreadComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBulletSpreadComponent.OuterSingleton, Z_Construct_UClass_UBulletSpreadComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBulletSpreadComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UBulletSpreadComponent>()
{
	return UBulletSpreadComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBulletSpreadComponent);
UBulletSpreadComponent::~UBulletSpreadComponent() {}
// End Class UBulletSpreadComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_BulletSpreadComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBulletSpreadComponent, UBulletSpreadComponent::StaticClass, TEXT("UBulletSpreadComponent"), &Z_Registration_Info_UClass_UBulletSpreadComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBulletSpreadComponent), 3914983021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_BulletSpreadComponent_h_2173226823(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_BulletSpreadComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Projectiles_BulletSpreadComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
