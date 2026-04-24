// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Animation/FPSAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSAnimInstance();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UFPSAnimInstance
void UFPSAnimInstance::StaticRegisterNativesUFPSAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSAnimInstance);
UClass* Z_Construct_UClass_UFPSAnimInstance_NoRegister()
{
	return UFPSAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UFPSAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/FPSAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/FPSAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFPSAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSAnimInstance_Statics::ClassParams = {
	&UFPSAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSAnimInstance()
{
	if (!Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton, Z_Construct_UClass_UFPSAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSAnimInstance>()
{
	return UFPSAnimInstance::StaticClass();
}
UFPSAnimInstance::UFPSAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAnimInstance);
UFPSAnimInstance::~UFPSAnimInstance() {}
// End Class UFPSAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSAnimInstance, UFPSAnimInstance::StaticClass, TEXT("UFPSAnimInstance"), &Z_Registration_Info_UClass_UFPSAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSAnimInstance), 2235069297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_610512558(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Animation_FPSAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
