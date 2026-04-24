// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInterface();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponState();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Interface UWeaponInterface Function GetWeaponState
struct WeaponInterface_eventGetWeaponState_Parms
{
	EWeaponState ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponInterface_eventGetWeaponState_Parms()
		: ReturnValue((EWeaponState)0)
	{
	}
};
EWeaponState IWeaponInterface::GetWeaponState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWeaponState instead.");
	WeaponInterface_eventGetWeaponState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UWeaponInterface_GetWeaponState = FName(TEXT("GetWeaponState"));
EWeaponState IWeaponInterface::Execute_GetWeaponState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()));
	WeaponInterface_eventGetWeaponState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWeaponInterface_GetWeaponState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IWeaponInterface*)(O->GetNativeInterfaceAddress(UWeaponInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetWeaponState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlueprintNativeEvent \xef\xbf\xbd\xef\xbf\xbd\xca\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent \xef\xbf\xbd\xef\xbf\xbd\xca\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInterface_eventGetWeaponState_Parms, ReturnValue), Z_Construct_UEnum_FirstFPS_EWeaponState, METADATA_PARAMS(0, nullptr) }; // 1820525217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInterface, nullptr, "GetWeaponState", nullptr, nullptr, Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::PropPointers), sizeof(WeaponInterface_eventGetWeaponState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponInterface_eventGetWeaponState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInterface_GetWeaponState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInterface_GetWeaponState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWeaponInterface::execGetWeaponState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWeaponState*)Z_Param__Result=P_THIS->GetWeaponState_Implementation();
	P_NATIVE_END;
}
// End Interface UWeaponInterface Function GetWeaponState

// Begin Interface UWeaponInterface
void UWeaponInterface::StaticRegisterNativesUWeaponInterface()
{
	UClass* Class = UWeaponInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeaponState", &IWeaponInterface::execGetWeaponState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponInterface);
UClass* Z_Construct_UClass_UWeaponInterface_NoRegister()
{
	return UWeaponInterface::StaticClass();
}
struct Z_Construct_UClass_UWeaponInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponInterface_GetWeaponState, "GetWeaponState" }, // 1232396772
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeaponInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInterface_Statics::ClassParams = {
	&UWeaponInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponInterface()
{
	if (!Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton, Z_Construct_UClass_UWeaponInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UWeaponInterface>()
{
	return UWeaponInterface::StaticClass();
}
UWeaponInterface::UWeaponInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInterface);
UWeaponInterface::~UWeaponInterface() {}
// End Interface UWeaponInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponInterface, UWeaponInterface::StaticClass, TEXT("UWeaponInterface"), &Z_Registration_Info_UClass_UWeaponInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponInterface), 1409815362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_288049789(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
