// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Player/FPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSCharacter();
FIRSTFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UDeathComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSAimOffsetComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSInteractionComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UFPSMovementStateComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponInventoryComponent_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UWeaponStateComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AFPSCharacter Function PlayEquipWeaponMontage
struct Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics
{
	struct FPSCharacter_eventPlayEquipWeaponMontage_Parms
	{
		UAnimMontage* MontageToPlay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FPSCharacter.h\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FPSCharacter.h" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventPlayEquipWeaponMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::NewProp_MontageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "PlayEquipWeaponMontage", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::FPSCharacter_eventPlayEquipWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::FPSCharacter_eventPlayEquipWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execPlayEquipWeaponMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayEquipWeaponMontage(Z_Param_MontageToPlay);
	P_NATIVE_END;
}
// End Class AFPSCharacter Function PlayEquipWeaponMontage

// Begin Class AFPSCharacter
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayEquipWeaponMontage", &AFPSCharacter::execPlayEquipWeaponMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacter);
UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
{
	return AFPSCharacter::StaticClass();
}
struct Z_Construct_UClass_AFPSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStateComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInventoryComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathComp_MetaData[] = {
		{ "Category", "FPSCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FPSCharacter.h\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FPSCharacter.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDamageInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Shoot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Interact_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_DropWeapon_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchPrimary_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchSecondary_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ReloadWeapon_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementStateComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimOffsetComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponStateComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastDamageInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Shoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_DropWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchPrimary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchSecondary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ReloadWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_PlayEquipWeaponMontage, "PlayEquipWeaponMontage" }, // 3814276368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementStateComp = { "MovementStateComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MovementStateComp), Z_Construct_UClass_UFPSMovementStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStateComp_MetaData), NewProp_MovementStateComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimOffsetComp = { "AimOffsetComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, AimOffsetComp), Z_Construct_UClass_UFPSAimOffsetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimOffsetComp_MetaData), NewProp_AimOffsetComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponStateComp = { "WeaponStateComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, WeaponStateComp), Z_Construct_UClass_UWeaponStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponStateComp_MetaData), NewProp_WeaponStateComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, InteractionComponent), Z_Construct_UClass_UFPSInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponInventoryComponent = { "WeaponInventoryComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, WeaponInventoryComponent), Z_Construct_UClass_UWeaponInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInventoryComponent_MetaData), NewProp_WeaponInventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_DeathComp = { "DeathComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, DeathComp), Z_Construct_UClass_UDeathComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathComp_MetaData), NewProp_DeathComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LastDamageInstigator = { "LastDamageInstigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, LastDamageInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDamageInstigator_MetaData), NewProp_LastDamageInstigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_Shoot = { "IA_Shoot", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_Shoot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Shoot_MetaData), NewProp_IA_Shoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WalkAction = { "WalkAction", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, WalkAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAction_MetaData), NewProp_WalkAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_Interact = { "IA_Interact", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Interact_MetaData), NewProp_IA_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_DropWeapon = { "IA_DropWeapon", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_DropWeapon), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_DropWeapon_MetaData), NewProp_IA_DropWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_SwitchPrimary = { "IA_SwitchPrimary", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_SwitchPrimary), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchPrimary_MetaData), NewProp_IA_SwitchPrimary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_SwitchSecondary = { "IA_SwitchSecondary", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_SwitchSecondary), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchSecondary_MetaData), NewProp_IA_SwitchSecondary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_ReloadWeapon = { "IA_ReloadWeapon", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, IA_ReloadWeapon), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ReloadWeapon_MetaData), NewProp_IA_ReloadWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementStateComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimOffsetComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponStateComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_DeathComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LastDamageInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_Shoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WalkAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_DropWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_SwitchPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_SwitchSecondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_IA_ReloadWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
	&AFPSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacter()
{
	if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AFPSCharacter>()
{
	return AFPSCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
AFPSCharacter::~AFPSCharacter() {}
// End Class AFPSCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 3683357307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_3617340871(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Player_FPSCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
