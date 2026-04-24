// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/IInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UIInterface();
FIRSTFPS_API UClass* Z_Construct_UClass_UIInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Interface UIInterface Function OnInteract
struct IInterface_eventOnInteract_Parms
{
	ACharacter* InstigatorCharacter;
};
void IIInterface::OnInteract(ACharacter* InstigatorCharacter)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
}
static FName NAME_UIInterface_OnInteract = FName(TEXT("OnInteract"));
void IIInterface::Execute_OnInteract(UObject* O, ACharacter* InstigatorCharacter)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIInterface::StaticClass()));
	IInterface_eventOnInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIInterface_OnInteract);
	if (Func)
	{
		Parms.InstigatorCharacter=InstigatorCharacter;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIInterface*)(O->GetNativeInterfaceAddress(UIInterface::StaticClass())))
	{
		I->OnInteract_Implementation(InstigatorCharacter);
	}
}
struct Z_Construct_UFunction_UIInterface_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Core/IInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInterface_OnInteract_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IInterface_eventOnInteract_Parms, InstigatorCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInterface_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInterface_OnInteract_Statics::NewProp_InstigatorCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIInterface_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInterface, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UIInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInterface_OnInteract_Statics::PropPointers), sizeof(IInterface_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIInterface_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIInterface_OnInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(IInterface_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIInterface_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIInterface_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIInterface::execOnInteract)
{
	P_GET_OBJECT(ACharacter,Z_Param_InstigatorCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract_Implementation(Z_Param_InstigatorCharacter);
	P_NATIVE_END;
}
// End Interface UIInterface Function OnInteract

// Begin Interface UIInterface
void UIInterface::StaticRegisterNativesUIInterface()
{
	UClass* Class = UIInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInteract", &IIInterface::execOnInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIInterface);
UClass* Z_Construct_UClass_UIInterface_NoRegister()
{
	return UIInterface::StaticClass();
}
struct Z_Construct_UClass_UIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIInterface_OnInteract, "OnInteract" }, // 3066906750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIInterface_Statics::ClassParams = {
	&UIInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIInterface()
{
	if (!Z_Registration_Info_UClass_UIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIInterface.OuterSingleton, Z_Construct_UClass_UIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIInterface.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UIInterface>()
{
	return UIInterface::StaticClass();
}
UIInterface::UIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIInterface);
UIInterface::~UIInterface() {}
// End Interface UIInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIInterface, UIInterface::StaticClass, TEXT("UIInterface"), &Z_Registration_Info_UClass_UIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIInterface), 1297905220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_3686003995(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
