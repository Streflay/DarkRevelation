// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/ActionSystem/FPSAimOffsetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAimOffsetComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSAimOffsetComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSAimOffsetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UFPSAimOffsetComponent Function OnRep_AimOffset
struct Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSAimOffsetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAimOffsetComponent, nullptr, "OnRep_AimOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSAimOffsetComponent::execOnRep_AimOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AimOffset();
	P_NATIVE_END;
}
// End Class UFPSAimOffsetComponent Function OnRep_AimOffset

// Begin Class UFPSAimOffsetComponent Function ServerUpdateAimOffset
struct FPSAimOffsetComponent_eventServerUpdateAimOffset_Parms
{
	FRotator NewOffset;
};
static const FName NAME_UFPSAimOffsetComponent_ServerUpdateAimOffset = FName(TEXT("ServerUpdateAimOffset"));
void UFPSAimOffsetComponent::ServerUpdateAimOffset(FRotator NewOffset)
{
	FPSAimOffsetComponent_eventServerUpdateAimOffset_Parms Parms;
	Parms.NewOffset=NewOffset;
	UFunction* Func = FindFunctionChecked(NAME_UFPSAimOffsetComponent_ServerUpdateAimOffset);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xc6\xab\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSAimOffsetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xc6\xab\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::NewProp_NewOffset = { "NewOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSAimOffsetComponent_eventServerUpdateAimOffset_Parms, NewOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::NewProp_NewOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAimOffsetComponent, nullptr, "ServerUpdateAimOffset", nullptr, nullptr, Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::PropPointers), sizeof(FPSAimOffsetComponent_eventServerUpdateAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSAimOffsetComponent_eventServerUpdateAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSAimOffsetComponent::execServerUpdateAimOffset)
{
	P_GET_STRUCT(FRotator,Z_Param_NewOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerUpdateAimOffset_Implementation(Z_Param_NewOffset);
	P_NATIVE_END;
}
// End Class UFPSAimOffsetComponent Function ServerUpdateAimOffset

// Begin Class UFPSAimOffsetComponent
void UFPSAimOffsetComponent::StaticRegisterNativesUFPSAimOffsetComponent()
{
	UClass* Class = UFPSAimOffsetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AimOffset", &UFPSAimOffsetComponent::execOnRep_AimOffset },
		{ "ServerUpdateAimOffset", &UFPSAimOffsetComponent::execServerUpdateAimOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSAimOffsetComponent);
UClass* Z_Construct_UClass_UFPSAimOffsetComponent_NoRegister()
{
	return UFPSAimOffsetComponent::StaticClass();
}
struct Z_Construct_UClass_UFPSAimOffsetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/FPSAimOffsetComponent.h" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSAimOffsetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSAimOffsetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc6\xab\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xd4\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSAimOffsetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc6\xab\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\xd4\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSAimOffsetComponent_OnRep_AimOffset, "OnRep_AimOffset" }, // 3274934602
		{ &Z_Construct_UFunction_UFPSAimOffsetComponent_ServerUpdateAimOffset, "ServerUpdateAimOffset" }, // 2709215759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSAimOffsetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAimOffsetComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSAimOffsetComponent, OwnerCharacter), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSAimOffsetComponent_Statics::NewProp_AimOffset = { "AimOffset", "OnRep_AimOffset", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSAimOffsetComponent, AimOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffset_MetaData), NewProp_AimOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSAimOffsetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAimOffsetComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAimOffsetComponent_Statics::NewProp_AimOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAimOffsetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFPSAimOffsetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAimOffsetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSAimOffsetComponent_Statics::ClassParams = {
	&UFPSAimOffsetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFPSAimOffsetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAimOffsetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAimOffsetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSAimOffsetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSAimOffsetComponent()
{
	if (!Z_Registration_Info_UClass_UFPSAimOffsetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSAimOffsetComponent.OuterSingleton, Z_Construct_UClass_UFPSAimOffsetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSAimOffsetComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSAimOffsetComponent>()
{
	return UFPSAimOffsetComponent::StaticClass();
}
void UFPSAimOffsetComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AimOffset(TEXT("AimOffset"));
	const bool bIsValid = true
		&& Name_AimOffset == ClassReps[(int32)ENetFields_Private::AimOffset].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFPSAimOffsetComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAimOffsetComponent);
UFPSAimOffsetComponent::~UFPSAimOffsetComponent() {}
// End Class UFPSAimOffsetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSAimOffsetComponent, UFPSAimOffsetComponent::StaticClass, TEXT("UFPSAimOffsetComponent"), &Z_Registration_Info_UClass_UFPSAimOffsetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSAimOffsetComponent), 153810777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_2509397546(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSAimOffsetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
