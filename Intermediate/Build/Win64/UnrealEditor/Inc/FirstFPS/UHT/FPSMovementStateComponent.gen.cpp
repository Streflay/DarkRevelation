// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/ActionSystem/FPSMovementStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSMovementStateComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSMovementStateComponent();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSMovementStateComponent_NoRegister();
FIRSTFPS_API UEnum* Z_Construct_UEnum_FirstFPS_EMovementState();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Enum EMovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
static UEnum* EMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstFPS_EMovementState, (UObject*)Z_Construct_UPackage__Script_FirstFPS(), TEXT("EMovementState"));
	}
	return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
}
template<> FIRSTFPS_API UEnum* StaticEnum<EMovementState>()
{
	return EMovementState_StaticEnum();
}
struct Z_Construct_UEnum_FirstFPS_EMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "EMovementState::Crouching" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "EMovementState::Running" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMovementState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementState::Walking", (int64)EMovementState::Walking },
		{ "EMovementState::Running", (int64)EMovementState::Running },
		{ "EMovementState::Crouching", (int64)EMovementState::Crouching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstFPS_EMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FirstFPS,
	nullptr,
	"EMovementState",
	"EMovementState",
	Z_Construct_UEnum_FirstFPS_EMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstFPS_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstFPS_EMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FirstFPS_EMovementState()
{
	if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_FirstFPS_EMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
}
// End Enum EMovementState

// Begin Class UFPSMovementStateComponent Function GetMovementState
struct Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics
{
	struct FPSMovementStateComponent_eventGetMovementState_Parms
	{
		EMovementState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSMovementStateComponent_eventGetMovementState_Parms, ReturnValue), Z_Construct_UEnum_FirstFPS_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2872476991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSMovementStateComponent, nullptr, "GetMovementState", nullptr, nullptr, Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::FPSMovementStateComponent_eventGetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::FPSMovementStateComponent_eventGetMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSMovementStateComponent::execGetMovementState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovementState*)Z_Param__Result=P_THIS->GetMovementState();
	P_NATIVE_END;
}
// End Class UFPSMovementStateComponent Function GetMovementState

// Begin Class UFPSMovementStateComponent Function OnRep_MovementState
struct Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xac\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSMovementStateComponent, nullptr, "OnRep_MovementState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSMovementStateComponent::execOnRep_MovementState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MovementState();
	P_NATIVE_END;
}
// End Class UFPSMovementStateComponent Function OnRep_MovementState

// Begin Class UFPSMovementStateComponent Function ServerSetMovementState
struct FPSMovementStateComponent_eventServerSetMovementState_Parms
{
	EMovementState NewState;
};
static const FName NAME_UFPSMovementStateComponent_ServerSetMovementState = FName(TEXT("ServerSetMovementState"));
void UFPSMovementStateComponent::ServerSetMovementState(EMovementState NewState)
{
	FPSMovementStateComponent_eventServerSetMovementState_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UFPSMovementStateComponent_ServerSetMovementState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSMovementStateComponent_eventServerSetMovementState_Parms, NewState), Z_Construct_UEnum_FirstFPS_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2872476991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSMovementStateComponent, nullptr, "ServerSetMovementState", nullptr, nullptr, Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::PropPointers), sizeof(FPSMovementStateComponent_eventServerSetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSMovementStateComponent_eventServerSetMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFPSMovementStateComponent::execServerSetMovementState)
{
	P_GET_ENUM(EMovementState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetMovementState_Implementation(EMovementState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UFPSMovementStateComponent Function ServerSetMovementState

// Begin Class UFPSMovementStateComponent
void UFPSMovementStateComponent::StaticRegisterNativesUFPSMovementStateComponent()
{
	UClass* Class = UFPSMovementStateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementState", &UFPSMovementStateComponent::execGetMovementState },
		{ "OnRep_MovementState", &UFPSMovementStateComponent::execOnRep_MovementState },
		{ "ServerSetMovementState", &UFPSMovementStateComponent::execServerSetMovementState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSMovementStateComponent);
UClass* Z_Construct_UClass_UFPSMovementStateComponent_NoRegister()
{
	return UFPSMovementStateComponent::StaticClass();
}
struct Z_Construct_UClass_UFPSMovementStateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/FPSMovementStateComponent.h" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbd\xef\xbf\xbd\xc9\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbd\xef\xbf\xbd\xc9\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkKeyHeld_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchKeyHeld_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionSystem/FPSMovementStateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static void NewProp_bWalkKeyHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkKeyHeld;
	static void NewProp_bCrouchKeyHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchKeyHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSMovementStateComponent_GetMovementState, "GetMovementState" }, // 1903525190
		{ &Z_Construct_UFunction_UFPSMovementStateComponent_OnRep_MovementState, "OnRep_MovementState" }, // 2881642566
		{ &Z_Construct_UFunction_UFPSMovementStateComponent_ServerSetMovementState, "ServerSetMovementState" }, // 1571531469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSMovementStateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSMovementStateComponent, OwnerCharacter), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_MovementState = { "MovementState", "OnRep_MovementState", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSMovementStateComponent, MovementState), Z_Construct_UEnum_FirstFPS_EMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 2872476991
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSMovementStateComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSMovementStateComponent, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
void Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bWalkKeyHeld_SetBit(void* Obj)
{
	((UFPSMovementStateComponent*)Obj)->bWalkKeyHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bWalkKeyHeld = { "bWalkKeyHeld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFPSMovementStateComponent), &Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bWalkKeyHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkKeyHeld_MetaData), NewProp_bWalkKeyHeld_MetaData) };
void Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bCrouchKeyHeld_SetBit(void* Obj)
{
	((UFPSMovementStateComponent*)Obj)->bCrouchKeyHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bCrouchKeyHeld = { "bCrouchKeyHeld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFPSMovementStateComponent), &Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bCrouchKeyHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouchKeyHeld_MetaData), NewProp_bCrouchKeyHeld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSMovementStateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bWalkKeyHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSMovementStateComponent_Statics::NewProp_bCrouchKeyHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMovementStateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFPSMovementStateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMovementStateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSMovementStateComponent_Statics::ClassParams = {
	&UFPSMovementStateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFPSMovementStateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMovementStateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSMovementStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSMovementStateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSMovementStateComponent()
{
	if (!Z_Registration_Info_UClass_UFPSMovementStateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSMovementStateComponent.OuterSingleton, Z_Construct_UClass_UFPSMovementStateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSMovementStateComponent.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<UFPSMovementStateComponent>()
{
	return UFPSMovementStateComponent::StaticClass();
}
void UFPSMovementStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MovementState(TEXT("MovementState"));
	const bool bIsValid = true
		&& Name_MovementState == ClassReps[(int32)ENetFields_Private::MovementState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFPSMovementStateComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSMovementStateComponent);
UFPSMovementStateComponent::~UFPSMovementStateComponent() {}
// End Class UFPSMovementStateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2872476991U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSMovementStateComponent, UFPSMovementStateComponent::StaticClass, TEXT("UFPSMovementStateComponent"), &Z_Registration_Info_UClass_UFPSMovementStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSMovementStateComponent), 3594919155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_194080305(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_ActionSystem_FPSMovementStateComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
