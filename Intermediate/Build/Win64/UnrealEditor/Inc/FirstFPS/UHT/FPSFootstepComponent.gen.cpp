// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/ActionSystem/FPSFootstepComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSFootstepComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSFootstepComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSFootstepComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UFPSFootstepComponent Function MulticastPlayFootstepSFX
static const FName NAME_UFPSFootstepComponent_MulticastPlayFootstepSFX = FName(TEXT("MulticastPlayFootstepSFX"));
void UFPSFootstepComponent::MulticastPlayFootstepSFX()
{
	UFunction* Func = FindFunctionChecked(NAME_UFPSFootstepComponent_MulticastPlayFootstepSFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSFootstepComponent, nullptr, "MulticastPlayFootstepSFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSFootstepComponent::execMulticastPlayFootstepSFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayFootstepSFX_Implementation();
	P_NATIVE_END;
}
// End Class UFPSFootstepComponent Function MulticastPlayFootstepSFX

// Begin Class UFPSFootstepComponent Function PlayFootstepSFX
struct Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xbd\xc5\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xbd\xc5\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSFootstepComponent, nullptr, "PlayFootstepSFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSFootstepComponent::execPlayFootstepSFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFootstepSFX();
	P_NATIVE_END;
}
// End Class UFPSFootstepComponent Function PlayFootstepSFX

// Begin Class UFPSFootstepComponent Function ServerPlayFootstepSFX
static const FName NAME_UFPSFootstepComponent_ServerPlayFootstepSFX = FName(TEXT("ServerPlayFootstepSFX"));
void UFPSFootstepComponent::ServerPlayFootstepSFX()
{
	UFunction* Func = FindFunctionChecked(NAME_UFPSFootstepComponent_ServerPlayFootstepSFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSFootstepComponent, nullptr, "ServerPlayFootstepSFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSFootstepComponent::execServerPlayFootstepSFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPlayFootstepSFX_Implementation();
	P_NATIVE_END;
}
// End Class UFPSFootstepComponent Function ServerPlayFootstepSFX

// Begin Class UFPSFootstepComponent
void UFPSFootstepComponent::StaticRegisterNativesUFPSFootstepComponent()
{
	UClass* Class = UFPSFootstepComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastPlayFootstepSFX", &UFPSFootstepComponent::execMulticastPlayFootstepSFX },
		{ "PlayFootstepSFX", &UFPSFootstepComponent::execPlayFootstepSFX },
		{ "ServerPlayFootstepSFX", &UFPSFootstepComponent::execServerPlayFootstepSFX },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSFootstepComponent);
UClass* Z_Construct_UClass_UFPSFootstepComponent_NoRegister()
{
	return UFPSFootstepComponent::StaticClass();
}
struct Z_Construct_UClass_UFPSFootstepComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/FPSFootstepComponent.h" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSFX_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepInterval_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSpeedThreshold_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSFootstepComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepSFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepSpeedThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSFootstepComponent_MulticastPlayFootstepSFX, "MulticastPlayFootstepSFX" }, // 944391056
		{ &Z_Construct_UFunction_UFPSFootstepComponent_PlayFootstepSFX, "PlayFootstepSFX" }, // 708688193
		{ &Z_Construct_UFunction_UFPSFootstepComponent_ServerPlayFootstepSFX, "ServerPlayFootstepSFX" }, // 2098178551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSFootstepComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepSFX = { "FootstepSFX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSFootstepComponent, FootstepSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepSFX_MetaData), NewProp_FootstepSFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSFootstepComponent, OwnerCharacter), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepInterval = { "FootstepInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSFootstepComponent, FootstepInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepInterval_MetaData), NewProp_FootstepInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepSpeedThreshold = { "FootstepSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSFootstepComponent, FootstepSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepSpeedThreshold_MetaData), NewProp_FootstepSpeedThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSFootstepComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSFootstepComponent_Statics::NewProp_FootstepSpeedThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSFootstepComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFPSFootstepComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSFootstepComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSFootstepComponent_Statics::ClassParams = {
	&UFPSFootstepComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFPSFootstepComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFPSFootstepComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSFootstepComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSFootstepComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSFootstepComponent()
{
	if (!Z_Registration_Info_UClass_UFPSFootstepComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSFootstepComponent.OuterSingleton, Z_Construct_UClass_UFPSFootstepComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSFootstepComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSFootstepComponent>()
{
	return UFPSFootstepComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSFootstepComponent);
UFPSFootstepComponent::~UFPSFootstepComponent() {}
// End Class UFPSFootstepComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSFootstepComponent, UFPSFootstepComponent::StaticClass, TEXT("UFPSFootstepComponent"), &Z_Registration_Info_UClass_UFPSFootstepComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSFootstepComponent), 1650760910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_1181651881(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSFootstepComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
