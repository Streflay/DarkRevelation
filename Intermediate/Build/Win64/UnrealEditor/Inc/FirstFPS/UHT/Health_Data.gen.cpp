// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Health/Health_Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth_Data() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealth_Data();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealth_Data_NoRegister();
FIRSTFPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin ScriptStruct FPlayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton;
}
template<> FIRSTFPS_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Health/Health_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health/Health_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmor_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health/Health_Data.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_MaxArmor = { "MaxArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, MaxArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmor_MetaData), NewProp_MaxArmor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_MaxArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	&NewStructOps,
	"PlayerData",
	Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
	sizeof(FPlayerData),
	alignof(FPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton;
}
// End ScriptStruct FPlayerData

// Begin Class UHealth_Data
void UHealth_Data::StaticRegisterNativesUHealth_Data()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealth_Data);
UClass* Z_Construct_UClass_UHealth_Data_NoRegister()
{
	return UHealth_Data::StaticClass();
}
struct Z_Construct_UClass_UHealth_Data_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Health/Health_Data.h" },
		{ "ModuleRelativePath", "Public/Health/Health_Data.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "Category", "Health_Data" },
		{ "ModuleRelativePath", "Public/Health/Health_Data.h" },
		{ "TitleProperty", "Health" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth_Data>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealth_Data_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_Data, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 120513121
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Data_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Data_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealth_Data_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Data_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Data_Statics::ClassParams = {
	&UHealth_Data::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealth_Data_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Data_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Data_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Data_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealth_Data()
{
	if (!Z_Registration_Info_UClass_UHealth_Data.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth_Data.OuterSingleton, Z_Construct_UClass_UHealth_Data_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealth_Data.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UHealth_Data>()
{
	return UHealth_Data::StaticClass();
}
UHealth_Data::UHealth_Data(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth_Data);
UHealth_Data::~UHealth_Data() {}
// End Class UHealth_Data

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 120513121U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealth_Data, UHealth_Data::StaticClass, TEXT("UHealth_Data"), &Z_Registration_Info_UClass_UHealth_Data, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth_Data), 2169326795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_1122143420(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Health_Health_Data_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
