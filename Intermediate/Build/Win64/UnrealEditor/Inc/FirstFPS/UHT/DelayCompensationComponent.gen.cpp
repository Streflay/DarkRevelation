// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/DelayCompensationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelayCompensationComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UDelayCompensationComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UDelayCompensationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class UDelayCompensationComponent Function OnRep_PositionHistory
struct Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayCompensationComponent, nullptr, "OnRep_PositionHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDelayCompensationComponent::execOnRep_PositionHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PositionHistory();
	P_NATIVE_END;
}
// End Class UDelayCompensationComponent Function OnRep_PositionHistory

// Begin Class UDelayCompensationComponent Function OnRep_TimeHistory
struct Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayCompensationComponent, nullptr, "OnRep_TimeHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDelayCompensationComponent::execOnRep_TimeHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TimeHistory();
	P_NATIVE_END;
}
// End Class UDelayCompensationComponent Function OnRep_TimeHistory

// Begin Class UDelayCompensationComponent Function RecordPosition
struct Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics
{
	struct DelayCompensationComponent_eventRecordPosition_Parms
	{
		FVector NewPosition;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PositionHistory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xce\xbb\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xce\xbb\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelayCompensationComponent_eventRecordPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelayCompensationComponent_eventRecordPosition_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelayCompensationComponent, nullptr, "RecordPosition", nullptr, nullptr, Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::DelayCompensationComponent_eventRecordPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::DelayCompensationComponent_eventRecordPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDelayCompensationComponent::execRecordPosition)
{
	P_GET_STRUCT(FVector,Z_Param_NewPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordPosition(Z_Param_NewPosition,Z_Param_Time);
	P_NATIVE_END;
}
// End Class UDelayCompensationComponent Function RecordPosition

// Begin Class UDelayCompensationComponent
void UDelayCompensationComponent::StaticRegisterNativesUDelayCompensationComponent()
{
	UClass* Class = UDelayCompensationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_PositionHistory", &UDelayCompensationComponent::execOnRep_PositionHistory },
		{ "OnRep_TimeHistory", &UDelayCompensationComponent::execOnRep_TimeHistory },
		{ "RecordPosition", &UDelayCompensationComponent::execRecordPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelayCompensationComponent);
UClass* Z_Construct_UClass_UDelayCompensationComponent_NoRegister()
{
	return UDelayCompensationComponent::StaticClass();
}
struct Z_Construct_UClass_UDelayCompensationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/DelayCompensationComponent.h" },
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionHistory_MetaData[] = {
		{ "Category", "PositionHistory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeHistory_MetaData[] = {
		{ "Category", "PositionHistory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DelayCompensationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionHistory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDelayCompensationComponent_OnRep_PositionHistory, "OnRep_PositionHistory" }, // 748975145
		{ &Z_Construct_UFunction_UDelayCompensationComponent_OnRep_TimeHistory, "OnRep_TimeHistory" }, // 644828721
		{ &Z_Construct_UFunction_UDelayCompensationComponent_RecordPosition, "RecordPosition" }, // 43499208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelayCompensationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_PositionHistory_Inner = { "PositionHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_PositionHistory = { "PositionHistory", "OnRep_PositionHistory", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelayCompensationComponent, PositionHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionHistory_MetaData), NewProp_PositionHistory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_TimeHistory_Inner = { "TimeHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_TimeHistory = { "TimeHistory", "OnRep_TimeHistory", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelayCompensationComponent, TimeHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeHistory_MetaData), NewProp_TimeHistory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDelayCompensationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_PositionHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_PositionHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_TimeHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelayCompensationComponent_Statics::NewProp_TimeHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelayCompensationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDelayCompensationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelayCompensationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelayCompensationComponent_Statics::ClassParams = {
	&UDelayCompensationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDelayCompensationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDelayCompensationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelayCompensationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDelayCompensationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDelayCompensationComponent()
{
	if (!Z_Registration_Info_UClass_UDelayCompensationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelayCompensationComponent.OuterSingleton, Z_Construct_UClass_UDelayCompensationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDelayCompensationComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UDelayCompensationComponent>()
{
	return UDelayCompensationComponent::StaticClass();
}
void UDelayCompensationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PositionHistory(TEXT("PositionHistory"));
	static const FName Name_TimeHistory(TEXT("TimeHistory"));
	const bool bIsValid = true
		&& Name_PositionHistory == ClassReps[(int32)ENetFields_Private::PositionHistory].Property->GetFName()
		&& Name_TimeHistory == ClassReps[(int32)ENetFields_Private::TimeHistory].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDelayCompensationComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDelayCompensationComponent);
UDelayCompensationComponent::~UDelayCompensationComponent() {}
// End Class UDelayCompensationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDelayCompensationComponent, UDelayCompensationComponent::StaticClass, TEXT("UDelayCompensationComponent"), &Z_Registration_Info_UClass_UDelayCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelayCompensationComponent), 3113968372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_2503204668(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_DelayCompensationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
