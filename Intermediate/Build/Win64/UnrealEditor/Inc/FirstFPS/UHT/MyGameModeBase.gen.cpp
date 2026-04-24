// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/MyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AMyGameModeBase();
FIRSTFPS_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_USpawnManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AMyGameModeBase Function AddScore
struct Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics
{
	struct MyGameModeBase_eventAddScore_Parms
	{
		APlayerController* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd0\xb6\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// void AddTeamScore();\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd0\xb6\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nvoid AddTeamScore();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventAddScore_Parms, Killer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::MyGameModeBase_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::MyGameModeBase_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameModeBase::execAddScore)
{
	P_GET_OBJECT(APlayerController,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Killer);
	P_NATIVE_END;
}
// End Class AMyGameModeBase Function AddScore

// Begin Class AMyGameModeBase Function BroadcastFFAWinner
struct Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics
{
	struct MyGameModeBase_eventBroadcastFFAWinner_Parms
	{
		APlayerController* Winner;
		int32 Kills;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Winner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventBroadcastFFAWinner_Parms, Winner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventBroadcastFFAWinner_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::NewProp_Winner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "BroadcastFFAWinner", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::MyGameModeBase_eventBroadcastFFAWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::MyGameModeBase_eventBroadcastFFAWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameModeBase::execBroadcastFFAWinner)
{
	P_GET_OBJECT(APlayerController,Z_Param_Winner);
	P_GET_PROPERTY(FIntProperty,Z_Param_Kills);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastFFAWinner(Z_Param_Winner,Z_Param_Kills);
	P_NATIVE_END;
}
// End Class AMyGameModeBase Function BroadcastFFAWinner

// Begin Class AMyGameModeBase Function HandleFFARespawn
struct Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics
{
	struct MyGameModeBase_eventHandleFFARespawn_Parms
	{
		APlayerController* Victim;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventHandleFFARespawn_Parms, Victim), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::NewProp_Victim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "HandleFFARespawn", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::MyGameModeBase_eventHandleFFARespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::MyGameModeBase_eventHandleFFARespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameModeBase::execHandleFFARespawn)
{
	P_GET_OBJECT(APlayerController,Z_Param_Victim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFFARespawn(Z_Param_Victim);
	P_NATIVE_END;
}
// End Class AMyGameModeBase Function HandleFFARespawn

// Begin Class AMyGameModeBase Function NotifyPlayerDied
struct MyGameModeBase_eventNotifyPlayerDied_Parms
{
	APlayerController* Victim;
	APlayerController* Killer;
};
static const FName NAME_AMyGameModeBase_NotifyPlayerDied = FName(TEXT("NotifyPlayerDied"));
void AMyGameModeBase::NotifyPlayerDied(APlayerController* Victim, APlayerController* Killer)
{
	MyGameModeBase_eventNotifyPlayerDied_Parms Parms;
	Parms.Victim=Victim;
	Parms.Killer=Killer;
	UFunction* Func = FindFunctionChecked(NAME_AMyGameModeBase_NotifyPlayerDied);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventNotifyPlayerDied_Parms, Victim), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventNotifyPlayerDied_Parms, Killer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "NotifyPlayerDied", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::PropPointers), sizeof(MyGameModeBase_eventNotifyPlayerDied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyGameModeBase_eventNotifyPlayerDied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameModeBase::execNotifyPlayerDied)
{
	P_GET_OBJECT(APlayerController,Z_Param_Victim);
	P_GET_OBJECT(APlayerController,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyPlayerDied_Implementation(Z_Param_Victim,Z_Param_Killer);
	P_NATIVE_END;
}
// End Class AMyGameModeBase Function NotifyPlayerDied

// Begin Class AMyGameModeBase Function ResetRoundAndRespawnPlayers
struct Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics
{
	struct MyGameModeBase_eventResetRoundAndRespawnPlayers_Parms
	{
		float RespawnDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_RespawnDelay", "3.000000" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventResetRoundAndRespawnPlayers_Parms, RespawnDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::NewProp_RespawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "ResetRoundAndRespawnPlayers", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::MyGameModeBase_eventResetRoundAndRespawnPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::MyGameModeBase_eventResetRoundAndRespawnPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameModeBase::execResetRoundAndRespawnPlayers)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RespawnDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetRoundAndRespawnPlayers(Z_Param_RespawnDelay);
	P_NATIVE_END;
}
// End Class AMyGameModeBase Function ResetRoundAndRespawnPlayers

// Begin Class AMyGameModeBase
void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
{
	UClass* Class = AMyGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AMyGameModeBase::execAddScore },
		{ "BroadcastFFAWinner", &AMyGameModeBase::execBroadcastFFAWinner },
		{ "HandleFFARespawn", &AMyGameModeBase::execHandleFFARespawn },
		{ "NotifyPlayerDied", &AMyGameModeBase::execNotifyPlayerDied },
		{ "ResetRoundAndRespawnPlayers", &AMyGameModeBase::execResetRoundAndRespawnPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
{
	return AMyGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AMyGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnManager_MetaData[] = {
		{ "Category", "Managers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedPlayers_MetaData[] = {
		{ "Category", "Players" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xda\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xda\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlivePlayers_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadPlayers_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "Public/MyGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlivePlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlivePlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeadPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameModeBase_AddScore, "AddScore" }, // 1725743546
		{ &Z_Construct_UFunction_AMyGameModeBase_BroadcastFFAWinner, "BroadcastFFAWinner" }, // 1389772579
		{ &Z_Construct_UFunction_AMyGameModeBase_HandleFFARespawn, "HandleFFARespawn" }, // 2905090465
		{ &Z_Construct_UFunction_AMyGameModeBase_NotifyPlayerDied, "NotifyPlayerDied" }, // 3246856046
		{ &Z_Construct_UFunction_AMyGameModeBase_ResetRoundAndRespawnPlayers, "ResetRoundAndRespawnPlayers" }, // 3201490546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, SpawnManager), Z_Construct_UClass_USpawnManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnManager_MetaData), NewProp_SpawnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_ConnectedPlayers_Inner = { "ConnectedPlayers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_ConnectedPlayers = { "ConnectedPlayers", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, ConnectedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedPlayers_MetaData), NewProp_ConnectedPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AlivePlayers_Inner = { "AlivePlayers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AlivePlayers = { "AlivePlayers", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, AlivePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlivePlayers_MetaData), NewProp_AlivePlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DeadPlayers_Inner = { "DeadPlayers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DeadPlayers = { "DeadPlayers", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, DeadPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadPlayers_MetaData), NewProp_DeadPlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_SpawnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_ConnectedPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_ConnectedPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AlivePlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AlivePlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DeadPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_DeadPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
	&AMyGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AMyGameModeBase>()
{
	return AMyGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
AMyGameModeBase::~AMyGameModeBase() {}
// End Class AMyGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 1683566488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_3262248121(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_MyGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
