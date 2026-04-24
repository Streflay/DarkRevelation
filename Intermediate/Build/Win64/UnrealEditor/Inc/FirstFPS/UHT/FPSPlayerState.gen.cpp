// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Core/FPSPlayerState.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSPlayerState();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSPlayerState_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UDelayCompensationComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AFPSPlayerState Function GetKD
struct Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics
{
	struct FPSPlayerState_eventGetKD_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventGetKD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "GetKD", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::FPSPlayerState_eventGetKD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::FPSPlayerState_eventGetKD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerState_GetKD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_GetKD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execGetKD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetKD();
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function GetKD

// Begin Class AFPSPlayerState Function GetPingSeconds
struct Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics
{
	struct FPSPlayerState_eventGetPingSeconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventGetPingSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "GetPingSeconds", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::FPSPlayerState_eventGetPingSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::FPSPlayerState_eventGetPingSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execGetPingSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPingSeconds();
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function GetPingSeconds

// Begin Class AFPSPlayerState Function GetPositionAtTime
struct Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics
{
	struct FPSPlayerState_eventGetPositionAtTime_Parms
	{
		float TargetTime;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DelayCompensation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xca\xb7\xce\xbb\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::NewProp_TargetTime = { "TargetTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventGetPositionAtTime_Parms, TargetTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventGetPositionAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::NewProp_TargetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "GetPositionAtTime", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::FPSPlayerState_eventGetPositionAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::FPSPlayerState_eventGetPositionAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execGetPositionAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPositionAtTime(Z_Param_TargetTime);
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function GetPositionAtTime

// Begin Class AFPSPlayerState Function GetTeamTag
struct Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics
{
	struct FPSPlayerState_eventGetTeamTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventGetTeamTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "GetTeamTag", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::FPSPlayerState_eventGetTeamTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::FPSPlayerState_eventGetTeamTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerState_GetTeamTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_GetTeamTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execGetTeamTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetTeamTag();
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function GetTeamTag

// Begin Class AFPSPlayerState Function OnRep_TeamTag
struct Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "OnRep_TeamTag", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execOnRep_TeamTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamTag();
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function OnRep_TeamTag

// Begin Class AFPSPlayerState Function RecordPosition
struct Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics
{
	struct FPSPlayerState_eventRecordPosition_Parms
	{
		FVector NewPosition;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DelayCompensation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventRecordPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerState_eventRecordPosition_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "RecordPosition", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::FPSPlayerState_eventRecordPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::FPSPlayerState_eventRecordPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerState_RecordPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_RecordPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerState::execRecordPosition)
{
	P_GET_STRUCT(FVector,Z_Param_NewPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordPosition(Z_Param_NewPosition,Z_Param_Time);
	P_NATIVE_END;
}
// End Class AFPSPlayerState Function RecordPosition

// Begin Class AFPSPlayerState
void AFPSPlayerState::StaticRegisterNativesAFPSPlayerState()
{
	UClass* Class = AFPSPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetKD", &AFPSPlayerState::execGetKD },
		{ "GetPingSeconds", &AFPSPlayerState::execGetPingSeconds },
		{ "GetPositionAtTime", &AFPSPlayerState::execGetPositionAtTime },
		{ "GetTeamTag", &AFPSPlayerState::execGetTeamTag },
		{ "OnRep_TeamTag", &AFPSPlayerState::execOnRep_TeamTag },
		{ "RecordPosition", &AFPSPlayerState::execRecordPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSPlayerState);
UClass* Z_Construct_UClass_AFPSPlayerState_NoRegister()
{
	return AFPSPlayerState::StaticClass();
}
struct Z_Construct_UClass_AFPSPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/FPSPlayerState.h" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTag_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[] = {
		{ "Category", "FPSPlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------------- \xef\xbf\xbd\xc6\xb7\xd6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ---------------- */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------------- \xef\xbf\xbd\xc6\xb7\xd6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ----------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[] = {
		{ "Category", "FPSPlayerState" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayCompensationComponent_MetaData[] = {
		{ "Category", "DelayCompensation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/FPSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Deaths;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DelayCompensationComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerState_GetKD, "GetKD" }, // 1030507542
		{ &Z_Construct_UFunction_AFPSPlayerState_GetPingSeconds, "GetPingSeconds" }, // 876297600
		{ &Z_Construct_UFunction_AFPSPlayerState_GetPositionAtTime, "GetPositionAtTime" }, // 23094193
		{ &Z_Construct_UFunction_AFPSPlayerState_GetTeamTag, "GetTeamTag" }, // 3621101846
		{ &Z_Construct_UFunction_AFPSPlayerState_OnRep_TeamTag, "OnRep_TeamTag" }, // 438860027
		{ &Z_Construct_UFunction_AFPSPlayerState_RecordPosition, "RecordPosition" }, // 2955086201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_TeamTag = { "TeamTag", "OnRep_TeamTag", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerState, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTag_MetaData), NewProp_TeamTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerState, Kills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kills_MetaData), NewProp_Kills_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerState, Deaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deaths_MetaData), NewProp_Deaths_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_DelayCompensationComponent = { "DelayCompensationComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerState, DelayCompensationComponent), Z_Construct_UClass_UDelayCompensationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayCompensationComponent_MetaData), NewProp_DelayCompensationComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_TeamTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_Kills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_Deaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_DelayCompensationComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerState_Statics::ClassParams = {
	&AFPSPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSPlayerState()
{
	if (!Z_Registration_Info_UClass_AFPSPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSPlayerState.OuterSingleton, Z_Construct_UClass_AFPSPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSPlayerState.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AFPSPlayerState>()
{
	return AFPSPlayerState::StaticClass();
}
void AFPSPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TeamTag(TEXT("TeamTag"));
	static const FName Name_Kills(TEXT("Kills"));
	static const FName Name_Deaths(TEXT("Deaths"));
	const bool bIsValid = true
		&& Name_TeamTag == ClassReps[(int32)ENetFields_Private::TeamTag].Property->GetFName()
		&& Name_Kills == ClassReps[(int32)ENetFields_Private::Kills].Property->GetFName()
		&& Name_Deaths == ClassReps[(int32)ENetFields_Private::Deaths].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerState);
AFPSPlayerState::~AFPSPlayerState() {}
// End Class AFPSPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSPlayerState, AFPSPlayerState::StaticClass, TEXT("AFPSPlayerState"), &Z_Registration_Info_UClass_AFPSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPlayerState), 1403238462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_404159757(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_FPSPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
