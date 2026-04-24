// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Weapon/WeaponStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponStateComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponStateComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponStateComponent_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EWeaponState();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UWeaponStateComponent Function EquipWeapon
struct Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics
{
	struct WeaponStateComponent_eventEquipWeapon_Parms
	{
		AWeaponBase* NewWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponStateComponent_eventEquipWeapon_Parms, NewWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponStateComponent, nullptr, "EquipWeapon", nullptr, nullptr, Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::WeaponStateComponent_eventEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::WeaponStateComponent_eventEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponStateComponent::execEquipWeapon)
{
	P_GET_OBJECT(AWeaponBase,Z_Param_NewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipWeapon(Z_Param_NewWeapon);
	P_NATIVE_END;
}
// End Class UWeaponStateComponent Function EquipWeapon

// Begin Class UWeaponStateComponent Function OnRep_WeaponState
struct Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponStateComponent, nullptr, "OnRep_WeaponState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponStateComponent::execOnRep_WeaponState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponState();
	P_NATIVE_END;
}
// End Class UWeaponStateComponent Function OnRep_WeaponState

// Begin Class UWeaponStateComponent
void UWeaponStateComponent::StaticRegisterNativesUWeaponStateComponent()
{
	UClass* Class = UWeaponStateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipWeapon", &UWeaponStateComponent::execEquipWeapon },
		{ "OnRep_WeaponState", &UWeaponStateComponent::execOnRep_WeaponState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponStateComponent);
UClass* Z_Construct_UClass_UWeaponStateComponent_NoRegister()
{
	return UWeaponStateComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponStateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/WeaponStateComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "WeaponStateComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponState_MetaData[] = {
		{ "Category", "WeaponStateComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentWeaponState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentWeaponState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponStateComponent_EquipWeapon, "EquipWeapon" }, // 2801117613
		{ &Z_Construct_UFunction_UWeaponStateComponent_OnRep_WeaponState, "OnRep_WeaponState" }, // 3637614503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponStateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponStateComponent, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeaponState = { "CurrentWeaponState", "OnRep_WeaponState", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponStateComponent, CurrentWeaponState), Z_Construct_UEnum_FirstFPS_EWeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponState_MetaData), NewProp_CurrentWeaponState_MetaData) }; // 1820525217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponStateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeaponState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStateComponent_Statics::NewProp_CurrentWeaponState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponStateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWeaponStateComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(UWeaponStateComponent, IWeaponInterface), false },  // 1409815362
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponStateComponent_Statics::ClassParams = {
	&UWeaponStateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponStateComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStateComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponStateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponStateComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponStateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponStateComponent.OuterSingleton, Z_Construct_UClass_UWeaponStateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponStateComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UWeaponStateComponent>()
{
	return UWeaponStateComponent::StaticClass();
}
void UWeaponStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
	static const FName Name_CurrentWeaponState(TEXT("CurrentWeaponState"));
	const bool bIsValid = true
		&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName()
		&& Name_CurrentWeaponState == ClassReps[(int32)ENetFields_Private::CurrentWeaponState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponStateComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponStateComponent);
UWeaponStateComponent::~UWeaponStateComponent() {}
// End Class UWeaponStateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponStateComponent, UWeaponStateComponent::StaticClass, TEXT("UWeaponStateComponent"), &Z_Registration_Info_UClass_UWeaponStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponStateComponent), 2487220474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_1202958206(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Weapon_WeaponStateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
