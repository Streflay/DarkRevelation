// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/SpawnManagerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_USpawnManagerComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_USpawnManagerComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class USpawnManagerComponent
void USpawnManagerComponent::StaticRegisterNativesUSpawnManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManagerComponent);
UClass* Z_Construct_UClass_USpawnManagerComponent_NoRegister()
{
	return USpawnManagerComponent::StaticClass();
}
struct Z_Construct_UClass_USpawnManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/SpawnManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Core/SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassMap_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/Core/SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterTerroristSpawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerroristSpawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SpawnManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClassMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterClassMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CounterTerroristSpawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CounterTerroristSpawns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerroristSpawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TerroristSpawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap_ValueProp = { "CharacterClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap_Key_KeyProp = { "CharacterClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap = { "CharacterClassMap", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, CharacterClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassMap_MetaData), NewProp_CharacterClassMap_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CounterTerroristSpawns_Inner = { "CounterTerroristSpawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CounterTerroristSpawns = { "CounterTerroristSpawns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, CounterTerroristSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterTerroristSpawns_MetaData), NewProp_CounterTerroristSpawns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_TerroristSpawns_Inner = { "TerroristSpawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_TerroristSpawns = { "TerroristSpawns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, TerroristSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerroristSpawns_MetaData), NewProp_TerroristSpawns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CharacterClassMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CounterTerroristSpawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_CounterTerroristSpawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_TerroristSpawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_TerroristSpawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnManagerComponent_Statics::ClassParams = {
	&USpawnManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnManagerComponent()
{
	if (!Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton, Z_Construct_UClass_USpawnManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<USpawnManagerComponent>()
{
	return USpawnManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnManagerComponent);
USpawnManagerComponent::~USpawnManagerComponent() {}
// End Class USpawnManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_SpawnManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnManagerComponent, USpawnManagerComponent::StaticClass, TEXT("USpawnManagerComponent"), &Z_Registration_Info_UClass_USpawnManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManagerComponent), 1551915326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_SpawnManagerComponent_h_997240842(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_SpawnManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_SpawnManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
