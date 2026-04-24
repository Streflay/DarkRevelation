// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/FPSGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSGameInstance();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UFPSGameInstance
void UFPSGameInstance::StaticRegisterNativesUFPSGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSGameInstance);
UClass* Z_Construct_UClass_UFPSGameInstance_NoRegister()
{
	return UFPSGameInstance::StaticClass();
}
struct Z_Construct_UClass_UFPSGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/FPSGameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/FPSGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFPSGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSGameInstance_Statics::ClassParams = {
	&UFPSGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSGameInstance()
{
	if (!Z_Registration_Info_UClass_UFPSGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSGameInstance.OuterSingleton, Z_Construct_UClass_UFPSGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSGameInstance.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSGameInstance>()
{
	return UFPSGameInstance::StaticClass();
}
UFPSGameInstance::UFPSGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSGameInstance);
UFPSGameInstance::~UFPSGameInstance() {}
// End Class UFPSGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSGameInstance, UFPSGameInstance::StaticClass, TEXT("UFPSGameInstance"), &Z_Registration_Info_UClass_UFPSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSGameInstance), 3529018380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_232571597(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
