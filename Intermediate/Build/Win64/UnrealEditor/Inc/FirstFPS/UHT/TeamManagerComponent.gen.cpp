// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/UI/TeamManagerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UTeamManagerComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UTeamManagerComponent_NoRegister();
FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Delegate FOnTeamWinAnnouncement
struct Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics
{
	struct _Script_FirstFPS_eventOnTeamWinAnnouncement_Parms
	{
		FGameplayTag WinningTeam;
		int32 Score;
		float DisplayTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xb5\xef\xbf\xbd\xce\xaf\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xb5\xef\xbf\xbd\xce\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WinningTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_WinningTeam = { "WinningTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms, WinningTeam), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms, DisplayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_WinningTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::NewProp_DisplayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstFPS, nullptr, "OnTeamWinAnnouncement__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTeamWinAnnouncement_DelegateWrapper(const FMulticastScriptDelegate& OnTeamWinAnnouncement, FGameplayTag WinningTeam, int32 Score, float DisplayTime)
{
	struct _Script_FirstFPS_eventOnTeamWinAnnouncement_Parms
	{
		FGameplayTag WinningTeam;
		int32 Score;
		float DisplayTime;
	};
	_Script_FirstFPS_eventOnTeamWinAnnouncement_Parms Parms;
	Parms.WinningTeam=WinningTeam;
	Parms.Score=Score;
	Parms.DisplayTime=DisplayTime;
	OnTeamWinAnnouncement.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTeamWinAnnouncement

// Begin Class UTeamManagerComponent Function SelectCharacter
struct Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics
{
	struct TeamManagerComponent_eventSelectCharacter_Parms
	{
		FGameplayTag CharacterTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xab */" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xc3\xa3\xef\xbf\xbd\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::NewProp_CharacterTag = { "CharacterTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventSelectCharacter_Parms, CharacterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTag_MetaData), NewProp_CharacterTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::NewProp_CharacterTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamManagerComponent, nullptr, "SelectCharacter", nullptr, nullptr, Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::TeamManagerComponent_eventSelectCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::TeamManagerComponent_eventSelectCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTeamManagerComponent::execSelectCharacter)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_CharacterTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectCharacter(Z_Param_Out_CharacterTag);
	P_NATIVE_END;
}
// End Class UTeamManagerComponent Function SelectCharacter

// Begin Class UTeamManagerComponent Function SelectTeam
struct Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics
{
	struct TeamManagerComponent_eventSelectTeam_Parms
	{
		FGameplayTag TeamTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventSelectTeam_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTag_MetaData), NewProp_TeamTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::NewProp_TeamTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamManagerComponent, nullptr, "SelectTeam", nullptr, nullptr, Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::TeamManagerComponent_eventSelectTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::TeamManagerComponent_eventSelectTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamManagerComponent_SelectTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamManagerComponent_SelectTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTeamManagerComponent::execSelectTeam)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TeamTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectTeam(Z_Param_Out_TeamTag);
	P_NATIVE_END;
}
// End Class UTeamManagerComponent Function SelectTeam

// Begin Class UTeamManagerComponent Function SRV_SelectTeam
struct TeamManagerComponent_eventSRV_SelectTeam_Parms
{
	FGameplayTag TeamTag;
};
static const FName NAME_UTeamManagerComponent_SRV_SelectTeam = FName(TEXT("SRV_SelectTeam"));
void UTeamManagerComponent::SRV_SelectTeam(FGameplayTag const& TeamTag)
{
	TeamManagerComponent_eventSRV_SelectTeam_Parms Parms;
	Parms.TeamTag=TeamTag;
	UFunction* Func = FindFunctionChecked(NAME_UTeamManagerComponent_SRV_SelectTeam);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventSRV_SelectTeam_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTag_MetaData), NewProp_TeamTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::NewProp_TeamTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamManagerComponent, nullptr, "SRV_SelectTeam", nullptr, nullptr, Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::PropPointers), sizeof(TeamManagerComponent_eventSRV_SelectTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(TeamManagerComponent_eventSRV_SelectTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTeamManagerComponent::execSRV_SelectTeam)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SRV_SelectTeam_Implementation(Z_Param_TeamTag);
	P_NATIVE_END;
}
// End Class UTeamManagerComponent Function SRV_SelectTeam

// Begin Class UTeamManagerComponent Function SRV_SetSelectedCharacterTag
struct TeamManagerComponent_eventSRV_SetSelectedCharacterTag_Parms
{
	FGameplayTag CharacterTag;
};
static const FName NAME_UTeamManagerComponent_SRV_SetSelectedCharacterTag = FName(TEXT("SRV_SetSelectedCharacterTag"));
void UTeamManagerComponent::SRV_SetSelectedCharacterTag(FGameplayTag const& CharacterTag)
{
	TeamManagerComponent_eventSRV_SetSelectedCharacterTag_Parms Parms;
	Parms.CharacterTag=CharacterTag;
	UFunction* Func = FindFunctionChecked(NAME_UTeamManagerComponent_SRV_SetSelectedCharacterTag);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::NewProp_CharacterTag = { "CharacterTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventSRV_SetSelectedCharacterTag_Parms, CharacterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTag_MetaData), NewProp_CharacterTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::NewProp_CharacterTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamManagerComponent, nullptr, "SRV_SetSelectedCharacterTag", nullptr, nullptr, Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::PropPointers), sizeof(TeamManagerComponent_eventSRV_SetSelectedCharacterTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(TeamManagerComponent_eventSRV_SetSelectedCharacterTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTeamManagerComponent::execSRV_SetSelectedCharacterTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CharacterTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SRV_SetSelectedCharacterTag_Implementation(Z_Param_CharacterTag);
	P_NATIVE_END;
}
// End Class UTeamManagerComponent Function SRV_SetSelectedCharacterTag

// Begin Class UTeamManagerComponent Function UpdateTeamWinAnnouncement
struct Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics
{
	struct TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms
	{
		FGameplayTag WinningTeam;
		int32 Score;
		float DisplayTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbf\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xd6\xaa\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbf\xcd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xd6\xaa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WinningTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_WinningTeam = { "WinningTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms, WinningTeam), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms, DisplayTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_WinningTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::NewProp_DisplayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeamManagerComponent, nullptr, "UpdateTeamWinAnnouncement", nullptr, nullptr, Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::TeamManagerComponent_eventUpdateTeamWinAnnouncement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTeamManagerComponent::execUpdateTeamWinAnnouncement)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_WinningTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DisplayTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTeamWinAnnouncement(Z_Param_WinningTeam,Z_Param_Score,Z_Param_DisplayTime);
	P_NATIVE_END;
}
// End Class UTeamManagerComponent Function UpdateTeamWinAnnouncement

// Begin Class UTeamManagerComponent
void UTeamManagerComponent::StaticRegisterNativesUTeamManagerComponent()
{
	UClass* Class = UTeamManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectCharacter", &UTeamManagerComponent::execSelectCharacter },
		{ "SelectTeam", &UTeamManagerComponent::execSelectTeam },
		{ "SRV_SelectTeam", &UTeamManagerComponent::execSRV_SelectTeam },
		{ "SRV_SetSelectedCharacterTag", &UTeamManagerComponent::execSRV_SetSelectedCharacterTag },
		{ "UpdateTeamWinAnnouncement", &UTeamManagerComponent::execUpdateTeamWinAnnouncement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeamManagerComponent);
UClass* Z_Construct_UClass_UTeamManagerComponent_NoRegister()
{
	return UTeamManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UTeamManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UI/TeamManagerComponent.h" },
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamWinAnnouncement_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xb5\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xd6\xaa\xce\xaf\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/TeamManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xc9\xb0\xf3\xb6\xa8\xb5\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xd6\xaa\xce\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamWinAnnouncement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTeamManagerComponent_SelectCharacter, "SelectCharacter" }, // 715750409
		{ &Z_Construct_UFunction_UTeamManagerComponent_SelectTeam, "SelectTeam" }, // 3695461180
		{ &Z_Construct_UFunction_UTeamManagerComponent_SRV_SelectTeam, "SRV_SelectTeam" }, // 669438007
		{ &Z_Construct_UFunction_UTeamManagerComponent_SRV_SetSelectedCharacterTag, "SRV_SetSelectedCharacterTag" }, // 3410604887
		{ &Z_Construct_UFunction_UTeamManagerComponent_UpdateTeamWinAnnouncement, "UpdateTeamWinAnnouncement" }, // 1557454955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeamManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTeamManagerComponent_Statics::NewProp_OnTeamWinAnnouncement = { "OnTeamWinAnnouncement", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTeamManagerComponent, OnTeamWinAnnouncement), Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamWinAnnouncement_MetaData), NewProp_OnTeamWinAnnouncement_MetaData) }; // 2080215628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeamManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamManagerComponent_Statics::NewProp_OnTeamWinAnnouncement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTeamManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeamManagerComponent_Statics::ClassParams = {
	&UTeamManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTeamManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTeamManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeamManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTeamManagerComponent()
{
	if (!Z_Registration_Info_UClass_UTeamManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeamManagerComponent.OuterSingleton, Z_Construct_UClass_UTeamManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTeamManagerComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UTeamManagerComponent>()
{
	return UTeamManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeamManagerComponent);
UTeamManagerComponent::~UTeamManagerComponent() {}
// End Class UTeamManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeamManagerComponent, UTeamManagerComponent::StaticClass, TEXT("UTeamManagerComponent"), &Z_Registration_Info_UClass_UTeamManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeamManagerComponent), 282816501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_3788650147(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_UI_TeamManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
