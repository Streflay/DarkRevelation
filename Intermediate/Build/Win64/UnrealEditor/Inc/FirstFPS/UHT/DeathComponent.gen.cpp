// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Health/DeathComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UDeathComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UDeathComponent_NoRegister();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Class UDeathComponent Function CheckDeath
struct Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics
{
	struct DeathComponent_eventCheckDeath_Parms
	{
		float CurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathComponent_eventCheckDeath_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "CheckDeath", nullptr, nullptr, Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::DeathComponent_eventCheckDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::DeathComponent_eventCheckDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeathComponent_CheckDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_CheckDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeathComponent::execCheckDeath)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckDeath(Z_Param_CurrentHealth);
	P_NATIVE_END;
}
// End Class UDeathComponent Function CheckDeath

// Begin Class UDeathComponent Function Multicast_OnDeath
static const FName NAME_UDeathComponent_Multicast_OnDeath = FName(TEXT("Multicast_OnDeath"));
void UDeathComponent::Multicast_OnDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_UDeathComponent_Multicast_OnDeath);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multicast RPC\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPC" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "Multicast_OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeathComponent::execMulticast_OnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class UDeathComponent Function Multicast_OnDeath

// Begin Class UDeathComponent Function Server_RespawnOwner
static const FName NAME_UDeathComponent_Server_RespawnOwner = FName(TEXT("Server_RespawnOwner"));
void UDeathComponent::Server_RespawnOwner()
{
	UFunction* Func = FindFunctionChecked(NAME_UDeathComponent_Server_RespawnOwner);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathComponent, nullptr, "Server_RespawnOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeathComponent::execServer_RespawnOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RespawnOwner_Implementation();
	P_NATIVE_END;
}
// End Class UDeathComponent Function Server_RespawnOwner

// Begin Class UDeathComponent
void UDeathComponent::StaticRegisterNativesUDeathComponent()
{
	UClass* Class = UDeathComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckDeath", &UDeathComponent::execCheckDeath },
		{ "Multicast_OnDeath", &UDeathComponent::execMulticast_OnDeath },
		{ "Server_RespawnOwner", &UDeathComponent::execServer_RespawnOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeathComponent);
UClass* Z_Construct_UClass_UDeathComponent_NoRegister()
{
	return UDeathComponent::StaticClass();
}
struct Z_Construct_UClass_UDeathComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Health/DeathComponent.h" },
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Health/DeathComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathComponent_CheckDeath, "CheckDeath" }, // 751018112
		{ &Z_Construct_UFunction_UDeathComponent_Multicast_OnDeath, "Multicast_OnDeath" }, // 2919333145
		{ &Z_Construct_UFunction_UDeathComponent_Server_RespawnOwner, "Server_RespawnOwner" }, // 3630721453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeathComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeathComponent, OnDeath), Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 3495234091
void Z_Construct_UClass_UDeathComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UDeathComponent*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeathComponent_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeathComponent), &Z_Construct_UClass_UDeathComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathComponent_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathComponent_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeathComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeathComponent_Statics::ClassParams = {
	&UDeathComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDeathComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeathComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeathComponent()
{
	if (!Z_Registration_Info_UClass_UDeathComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeathComponent.OuterSingleton, Z_Construct_UClass_UDeathComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeathComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UDeathComponent>()
{
	return UDeathComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathComponent);
UDeathComponent::~UDeathComponent() {}
// End Class UDeathComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeathComponent, UDeathComponent::StaticClass, TEXT("UDeathComponent"), &Z_Registration_Info_UClass_UDeathComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeathComponent), 1627852564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_373123992(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_DeathComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
