// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/FPSGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSGameState();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EGameModeType();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Enum EGameModeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameModeType;
static UEnum* EGameModeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameModeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstFPS_EGameModeType, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("EGameModeType"));
	}
	return Z_Registration_Info_UEnum_EGameModeType.OuterSingleton;
}
template<> FIRSTFPS_API UEnum* StaticEnum<EGameModeType>()
{
	return EGameModeType_StaticEnum();
}
struct Z_Construct_UEnum_FirstFPS_EGameModeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FFA.Name", "EGameModeType::FFA" },
		{ "ModuleRelativePath", "Public/Core/FPSGameState.h" },
		{ "Team.Name", "EGameModeType::Team" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameModeType::Team", (int64)EGameModeType::Team },
		{ "EGameModeType::FFA", (int64)EGameModeType::FFA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	"EGameModeType",
	"EGameModeType",
	Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FirstFPS_EGameModeType()
{
	if (!Z_Registration_Info_UEnum_EGameModeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameModeType.InnerSingleton, Z_Construct_UEnum_FirstFPS_EGameModeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameModeType.InnerSingleton;
}
// End Enum EGameModeType

// Begin Class AFPSGameState
void AFPSGameState::StaticRegisterNativesAFPSGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSGameState);
UClass* Z_Construct_UClass_AFPSGameState_NoRegister()
{
	return AFPSGameState::StaticClass();
}
struct Z_Construct_UClass_AFPSGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/FPSGameState.h" },
		{ "ModuleRelativePath", "Public/Core/FPSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMode_MetaData[] = {
		{ "Category", "FPSGameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/FPSGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_SelectedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_SelectedMode = { "SelectedMode", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameState, SelectedMode), Z_Construct_UEnum_FirstFPS_EGameModeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMode_MetaData), NewProp_SelectedMode_MetaData) }; // 1920701552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_SelectedMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_SelectedMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameState_Statics::ClassParams = {
	&AFPSGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPSGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameState()
{
	if (!Z_Registration_Info_UClass_AFPSGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameState.OuterSingleton, Z_Construct_UClass_AFPSGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameState.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AFPSGameState>()
{
	return AFPSGameState::StaticClass();
}
void AFPSGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SelectedMode(TEXT("SelectedMode"));
	const bool bIsValid = true
		&& Name_SelectedMode == ClassReps[(int32)ENetFields_Private::SelectedMode].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSGameState"));
}
AFPSGameState::AFPSGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameState);
AFPSGameState::~AFPSGameState() {}
// End Class AFPSGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameModeType_StaticEnum, TEXT("EGameModeType"), &Z_Registration_Info_UEnum_EGameModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1920701552U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameState, AFPSGameState::StaticClass, TEXT("AFPSGameState"), &Z_Registration_Info_UClass_AFPSGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameState), 1681852814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_1977631298(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
