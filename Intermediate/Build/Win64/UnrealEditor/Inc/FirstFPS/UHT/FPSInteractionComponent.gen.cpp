// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Player/FPSInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSInteractionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSInteractionComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSInteractionComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UFPSInteractionComponent Function PrimaryInteract
struct Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets default values for this component's properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets default values for this component's properties" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSInteractionComponent, nullptr, "PrimaryInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSInteractionComponent::execPrimaryInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrimaryInteract();
	P_NATIVE_END;
}
// End Class UFPSInteractionComponent Function PrimaryInteract

// Begin Class UFPSInteractionComponent Function ServerInteract
struct FPSInteractionComponent_eventServerInteract_Parms
{
	AActor* InFocus;
};
static const FName NAME_UFPSInteractionComponent_ServerInteract = FName(TEXT("ServerInteract"));
void UFPSInteractionComponent::ServerInteract(AActor* InFocus)
{
	FPSInteractionComponent_eventServerInteract_Parms Parms;
	Parms.InFocus=InFocus;
	UFunction* Func = FindFunctionChecked(NAME_UFPSInteractionComponent_ServerInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSInteractionComponent_eventServerInteract_Parms, InFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::NewProp_InFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSInteractionComponent, nullptr, "ServerInteract", nullptr, nullptr, Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::PropPointers), sizeof(FPSInteractionComponent_eventServerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSInteractionComponent_eventServerInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSInteractionComponent::execServerInteract)
{
	P_GET_OBJECT(AActor,Z_Param_InFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerInteract_Implementation(Z_Param_InFocus);
	P_NATIVE_END;
}
// End Class UFPSInteractionComponent Function ServerInteract

// Begin Class UFPSInteractionComponent
void UFPSInteractionComponent::StaticRegisterNativesUFPSInteractionComponent()
{
	UClass* Class = UFPSInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrimaryInteract", &UFPSInteractionComponent::execPrimaryInteract },
		{ "ServerInteract", &UFPSInteractionComponent::execServerInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSInteractionComponent);
UClass* Z_Construct_UClass_UFPSInteractionComponent_NoRegister()
{
	return UFPSInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UFPSInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/FPSInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xd0\xbc\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xd0\xbc\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSInteractionComponent_PrimaryInteract, "PrimaryInteract" }, // 2977625677
		{ &Z_Construct_UFunction_UFPSInteractionComponent_ServerInteract, "ServerInteract" }, // 2302522884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSInteractionComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_DebugDrawTime = { "DebugDrawTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSInteractionComponent, DebugDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawTime_MetaData), NewProp_DebugDrawTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSInteractionComponent, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusActor_MetaData), NewProp_FocusActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_InventoryComp = { "InventoryComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSInteractionComponent, InventoryComp), Z_Construct_UClass_UWeaponInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComp_MetaData), NewProp_InventoryComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_DebugDrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_FocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSInteractionComponent_Statics::NewProp_InventoryComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFPSInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSInteractionComponent_Statics::ClassParams = {
	&UFPSInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFPSInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFPSInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UFPSInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSInteractionComponent.OuterSingleton, Z_Construct_UClass_UFPSInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSInteractionComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSInteractionComponent>()
{
	return UFPSInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSInteractionComponent);
UFPSInteractionComponent::~UFPSInteractionComponent() {}
// End Class UFPSInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSInteractionComponent, UFPSInteractionComponent::StaticClass, TEXT("UFPSInteractionComponent"), &Z_Registration_Info_UClass_UFPSInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSInteractionComponent), 765952918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_2521348862(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
