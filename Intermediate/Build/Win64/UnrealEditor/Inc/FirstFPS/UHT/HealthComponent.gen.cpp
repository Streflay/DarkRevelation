// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Health/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealth_Data_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealthComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnHealthChanged_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd1\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe4\xbb\xaf\xce\xaf\xef\xbf\xbd\xd0\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xc8\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd1\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe4\xbb\xaf\xce\xaf\xef\xbf\xbd\xd0\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xc8\xa3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::_Script_FirstFPS_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::_Script_FirstFPS_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float CurrentHealth, float MaxHealth)
{
	struct _Script_FirstFPS_eventOnHealthChanged_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
	_Script_FirstFPS_eventOnHealthChanged_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnArmorChanged
struct Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnArmorChanged_Parms
	{
		float CurrentArmor;
		float MaxArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentArmor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::NewProp_CurrentArmor = { "CurrentArmor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnArmorChanged_Parms, CurrentArmor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::NewProp_MaxArmor = { "MaxArmor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnArmorChanged_Parms, MaxArmor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::NewProp_CurrentArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::NewProp_MaxArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnArmorChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::_Script_FirstFPS_eventOnArmorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::_Script_FirstFPS_eventOnArmorChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnArmorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnArmorChanged, float CurrentArmor, float MaxArmor)
{
	struct _Script_FirstFPS_eventOnArmorChanged_Parms
	{
		float CurrentArmor;
		float MaxArmor;
	};
	_Script_FirstFPS_eventOnArmorChanged_Parms Parms;
	Parms.CurrentArmor=CurrentArmor;
	Parms.MaxArmor=MaxArmor;
	OnArmorChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnArmorChanged

// Begin Class UHealthComponent Function OnRep_Armor
struct Z_Construct_UFunction_UHealthComponent_OnRep_Armor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRep_Armor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_OnRep_Armor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execOnRep_Armor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor();
	P_NATIVE_END;
}
// End Class UHealthComponent Function OnRep_Armor

// Begin Class UHealthComponent Function OnRep_Health
struct Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RepNotify\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnRep_Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// End Class UHealthComponent Function OnRep_Health

// Begin Class UHealthComponent
void UHealthComponent::StaticRegisterNativesUHealthComponent()
{
	UClass* Class = UHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Armor", &UHealthComponent::execOnRep_Armor },
		{ "OnRep_Health", &UHealthComponent::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
{
	return UHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Health/HealthComponent.h" },
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RepNotify\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RepNotify\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArmor_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xce\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa Rep\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xce\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa Rep\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmor_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthData_MetaData[] = {
		{ "Category", "HealthComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xce\xaf\xef\xbf\xbd\xd0\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xf3\xb6\xa8\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xce\xaf\xef\xbf\xbd\xd0\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xf3\xb6\xa8\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnArmorChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Health/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentArmor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnArmorChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_Armor, "OnRep_Armor" }, // 3404174365
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_Health, "OnRep_Health" }, // 3768749200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_Health", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentArmor = { "CurrentArmor", "OnRep_Armor", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArmor_MetaData), NewProp_CurrentArmor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxArmor = { "MaxArmor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmor_MetaData), NewProp_MaxArmor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_HealthData = { "HealthData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, HealthData), Z_Construct_UClass_UHealth_Data_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthData_MetaData), NewProp_HealthData_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 4244457533
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnArmorChanged = { "OnArmorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnArmorChanged), Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnArmorChanged_MetaData), NewProp_OnArmorChanged_MetaData) }; // 719321155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_HealthData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnArmorChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
	&UHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponent()
{
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UHealthComponent>()
{
	return UHealthComponent::StaticClass();
}
void UHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static const FName Name_CurrentArmor(TEXT("CurrentArmor"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_CurrentArmor == ClassReps[(int32)ENetFields_Private::CurrentArmor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHealthComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// End Class UHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 2415215090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_1432463788(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_HealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
