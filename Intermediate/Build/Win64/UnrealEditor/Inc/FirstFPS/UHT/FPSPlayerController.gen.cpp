// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Player/FPSPlayerController.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSPlayerController();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UTeamManagerComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AFPSPlayerController Function CL_ShowHideWidget
struct FPSPlayerController_eventCL_ShowHideWidget_Parms
{
	FGameplayTag WidgetTag;
	bool bShow;
};
static const FName NAME_AFPSPlayerController_CL_ShowHideWidget = FName(TEXT("CL_ShowHideWidget"));
void AFPSPlayerController::CL_ShowHideWidget(FGameplayTag const& WidgetTag, bool bShow)
{
	FPSPlayerController_eventCL_ShowHideWidget_Parms Parms;
	Parms.WidgetTag=WidgetTag;
	Parms.bShow=bShow ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_CL_ShowHideWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTag;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_WidgetTag = { "WidgetTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventCL_ShowHideWidget_Parms, WidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTag_MetaData), NewProp_WidgetTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((FPSPlayerController_eventCL_ShowHideWidget_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSPlayerController_eventCL_ShowHideWidget_Parms), &Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_WidgetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::NewProp_bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "CL_ShowHideWidget", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::PropPointers), sizeof(FPSPlayerController_eventCL_ShowHideWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSPlayerController_eventCL_ShowHideWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execCL_ShowHideWidget)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_WidgetTag);
	P_GET_UBOOL(Z_Param_bShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_ShowHideWidget_Implementation(Z_Param_WidgetTag,Z_Param_bShow);
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function CL_ShowHideWidget

// Begin Class AFPSPlayerController Function Client_UpdateFFAWinner
struct FPSPlayerController_eventClient_UpdateFFAWinner_Parms
{
	int32 Kills;
};
static const FName NAME_AFPSPlayerController_Client_UpdateFFAWinner = FName(TEXT("Client_UpdateFFAWinner"));
void AFPSPlayerController::Client_UpdateFFAWinner(int32 Kills)
{
	FPSPlayerController_eventClient_UpdateFFAWinner_Parms Parms;
	Parms.Kills=Kills;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_UpdateFFAWinner);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_UpdateFFAWinner_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_UpdateFFAWinner", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::PropPointers), sizeof(FPSPlayerController_eventClient_UpdateFFAWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSPlayerController_eventClient_UpdateFFAWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_UpdateFFAWinner)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Kills);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateFFAWinner_Implementation(Z_Param_Kills);
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function Client_UpdateFFAWinner

// Begin Class AFPSPlayerController Function Client_UpdateKills
struct FPSPlayerController_eventClient_UpdateKills_Parms
{
	int32 Kills;
};
static const FName NAME_AFPSPlayerController_Client_UpdateKills = FName(TEXT("Client_UpdateKills"));
void AFPSPlayerController::Client_UpdateKills(int32 Kills)
{
	FPSPlayerController_eventClient_UpdateKills_Parms Parms;
	Parms.Kills=Kills;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_UpdateKills);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_UpdateKills_Parms, Kills), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::NewProp_Kills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_UpdateKills", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::PropPointers), sizeof(FPSPlayerController_eventClient_UpdateKills_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSPlayerController_eventClient_UpdateKills_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_UpdateKills)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Kills);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateKills_Implementation(Z_Param_Kills);
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function Client_UpdateKills

// Begin Class AFPSPlayerController Function Client_UpdateTeamWinAnnouncement
struct FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms
{
	FGameplayTag WinningTeam;
	int32 Score;
	float DisplayTime;
};
static const FName NAME_AFPSPlayerController_Client_UpdateTeamWinAnnouncement = FName(TEXT("Client_UpdateTeamWinAnnouncement"));
void AFPSPlayerController::Client_UpdateTeamWinAnnouncement(FGameplayTag WinningTeam, int32 Score, float DisplayTime)
{
	FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms Parms;
	Parms.WinningTeam=WinningTeam;
	Parms.Score=Score;
	Parms.DisplayTime=DisplayTime;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_UpdateTeamWinAnnouncement);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WinningTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_WinningTeam = { "WinningTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms, WinningTeam), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms, DisplayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_WinningTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::NewProp_DisplayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_UpdateTeamWinAnnouncement", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::PropPointers), sizeof(FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSPlayerController_eventClient_UpdateTeamWinAnnouncement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_UpdateTeamWinAnnouncement)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_WinningTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DisplayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateTeamWinAnnouncement_Implementation(Z_Param_WinningTeam,Z_Param_Score,Z_Param_DisplayTime);
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function Client_UpdateTeamWinAnnouncement

// Begin Class AFPSPlayerController Function Server_StartFFA
static const FName NAME_AFPSPlayerController_Server_StartFFA = FName(TEXT("Server_StartFFA"));
void AFPSPlayerController::Server_StartFFA()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Server_StartFFA);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Server_StartFFA", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execServer_StartFFA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StartFFA_Implementation();
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function Server_StartFFA

// Begin Class AFPSPlayerController Function Server_StartTeam
static const FName NAME_AFPSPlayerController_Server_StartTeam = FName(TEXT("Server_StartTeam"));
void AFPSPlayerController::Server_StartTeam()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Server_StartTeam);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Server_StartTeam", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execServer_StartTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StartTeam_Implementation();
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function Server_StartTeam

// Begin Class AFPSPlayerController Function ShowHideWidget
struct Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics
{
	struct FPSPlayerController_eventShowHideWidget_Parms
	{
		FGameplayTag WidgetTag;
		bool bShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd / \xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xcd\xb3\xd2\xbb\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd / \xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xcd\xb3\xd2\xbb\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTag;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_WidgetTag = { "WidgetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventShowHideWidget_Parms, WidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTag_MetaData), NewProp_WidgetTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((FPSPlayerController_eventShowHideWidget_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSPlayerController_eventShowHideWidget_Parms), &Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_WidgetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::NewProp_bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ShowHideWidget", nullptr, nullptr, Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::FPSPlayerController_eventShowHideWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::FPSPlayerController_eventShowHideWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execShowHideWidget)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WidgetTag);
	P_GET_UBOOL(Z_Param_bShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHideWidget(Z_Param_Out_WidgetTag,Z_Param_bShow);
	P_NATIVE_END;
}
// End Class AFPSPlayerController Function ShowHideWidget

// Begin Class AFPSPlayerController
void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
{
	UClass* Class = AFPSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CL_ShowHideWidget", &AFPSPlayerController::execCL_ShowHideWidget },
		{ "Client_UpdateFFAWinner", &AFPSPlayerController::execClient_UpdateFFAWinner },
		{ "Client_UpdateKills", &AFPSPlayerController::execClient_UpdateKills },
		{ "Client_UpdateTeamWinAnnouncement", &AFPSPlayerController::execClient_UpdateTeamWinAnnouncement },
		{ "Server_StartFFA", &AFPSPlayerController::execServer_StartFFA },
		{ "Server_StartTeam", &AFPSPlayerController::execServer_StartTeam },
		{ "ShowHideWidget", &AFPSPlayerController::execShowHideWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSPlayerController);
UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
{
	return AFPSPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFPSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/FPSPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterTag_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeamWinAnnouncementPending_MetaData[] = {
		{ "Category", "FPSPlayerController" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIManager_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamManager_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedCharacterTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMapping;
	static void NewProp_bTeamWinAnnouncementPending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamWinAnnouncementPending;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_CL_ShowHideWidget, "CL_ShowHideWidget" }, // 2407325002
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_UpdateFFAWinner, "Client_UpdateFFAWinner" }, // 3786257850
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_UpdateKills, "Client_UpdateKills" }, // 3906849379
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_UpdateTeamWinAnnouncement, "Client_UpdateTeamWinAnnouncement" }, // 3002079059
		{ &Z_Construct_UFunction_AFPSPlayerController_Server_StartFFA, "Server_StartFFA" }, // 2441248561
		{ &Z_Construct_UFunction_AFPSPlayerController_Server_StartTeam, "Server_StartTeam" }, // 3793887242
		{ &Z_Construct_UFunction_AFPSPlayerController_ShowHideWidget, "ShowHideWidget" }, // 3467498852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_SelectedCharacterTag = { "SelectedCharacterTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, SelectedCharacterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCharacterTag_MetaData), NewProp_SelectedCharacterTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_DefaultMapping = { "DefaultMapping", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, DefaultMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMapping_MetaData), NewProp_DefaultMapping_MetaData) };
void Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bTeamWinAnnouncementPending_SetBit(void* Obj)
{
	((AFPSPlayerController*)Obj)->bTeamWinAnnouncementPending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bTeamWinAnnouncementPending = { "bTeamWinAnnouncementPending", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSPlayerController), &Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bTeamWinAnnouncementPending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeamWinAnnouncementPending_MetaData), NewProp_bTeamWinAnnouncementPending_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_UIManager = { "UIManager", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, UIManager), Z_Construct_UClass_UUIManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIManager_MetaData), NewProp_UIManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_TeamManager = { "TeamManager", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, TeamManager), Z_Construct_UClass_UTeamManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamManager_MetaData), NewProp_TeamManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_SelectedCharacterTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_DefaultMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bTeamWinAnnouncementPending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_UIManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_TeamManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_HealthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
	&AFPSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSPlayerController()
{
	if (!Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AFPSPlayerController>()
{
	return AFPSPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
AFPSPlayerController::~AFPSPlayerController() {}
// End Class AFPSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSPlayerController, AFPSPlayerController::StaticClass, TEXT("AFPSPlayerController"), &Z_Registration_Info_UClass_AFPSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPlayerController), 947850000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_1511467033(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
