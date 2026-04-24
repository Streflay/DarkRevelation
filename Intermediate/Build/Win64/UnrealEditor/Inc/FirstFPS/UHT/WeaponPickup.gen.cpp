// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstFPS/Public/Pickup/WeaponPickup.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponPickup();
FIRSTFPS_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
FIRSTFPS_API UClass* Z_Construct_UClass_UIInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstFPS();
// End Cross Module References

// Begin Class AWeaponPickup Function EnablePickup
struct Z_Construct_UFunction_AWeaponPickup_EnablePickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb0\xc8\xa1 */" },
#endif
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb0\xc8\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_EnablePickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "EnablePickup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_EnablePickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_EnablePickup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponPickup_EnablePickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_EnablePickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponPickup::execEnablePickup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePickup();
	P_NATIVE_END;
}
// End Class AWeaponPickup Function EnablePickup

// Begin Class AWeaponPickup Function OnInteract
struct WeaponPickup_eventOnInteract_Parms
{
	ACharacter* InstigatorCharacter;
};
static const FName NAME_AWeaponPickup_OnInteract = FName(TEXT("OnInteract"));
void AWeaponPickup::OnInteract(ACharacter* InstigatorCharacter)
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponPickup_OnInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponPickup_eventOnInteract_Parms Parms;
		Parms.InstigatorCharacter=InstigatorCharacter;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnInteract_Implementation(InstigatorCharacter);
	}
}
struct Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnInteract_Parms, InstigatorCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::NewProp_InstigatorCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::PropPointers), sizeof(WeaponPickup_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponPickup_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponPickup_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponPickup::execOnInteract)
{
	P_GET_OBJECT(ACharacter,Z_Param_InstigatorCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract_Implementation(Z_Param_InstigatorCharacter);
	P_NATIVE_END;
}
// End Class AWeaponPickup Function OnInteract

// Begin Class AWeaponPickup Function OnOverlapEnd
struct Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics
{
	struct WeaponPickup_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::WeaponPickup_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::WeaponPickup_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponPickup::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AWeaponPickup Function OnOverlapEnd

// Begin Class AWeaponPickup Function OnPickupOverlap
struct Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics
{
	struct WeaponPickup_eventOnPickupOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnPickupOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnPickupOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnPickupOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnPickupOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WeaponPickup_eventOnPickupOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponPickup_eventOnPickupOverlap_Parms), &Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponPickup_eventOnPickupOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "OnPickupOverlap", nullptr, nullptr, Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::WeaponPickup_eventOnPickupOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::WeaponPickup_eventOnPickupOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponPickup::execOnPickupOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickupOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWeaponPickup Function OnPickupOverlap

// Begin Class AWeaponPickup Function OnRep_WeaponMesh
struct Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "OnRep_WeaponMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponPickup::execOnRep_WeaponMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponMesh();
	P_NATIVE_END;
}
// End Class AWeaponPickup Function OnRep_WeaponMesh

// Begin Class AWeaponPickup
void AWeaponPickup::StaticRegisterNativesAWeaponPickup()
{
	UClass* Class = AWeaponPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnablePickup", &AWeaponPickup::execEnablePickup },
		{ "OnInteract", &AWeaponPickup::execOnInteract },
		{ "OnOverlapEnd", &AWeaponPickup::execOnOverlapEnd },
		{ "OnPickupOverlap", &AWeaponPickup::execOnPickupOverlap },
		{ "OnRep_WeaponMesh", &AWeaponPickup::execOnRep_WeaponMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponPickup);
UClass* Z_Construct_UClass_AWeaponPickup_NoRegister()
{
	return AWeaponPickup::StaticClass();
}
struct Z_Construct_UClass_AWeaponPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup/WeaponPickup.h" },
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd Mesh\xef\xbf\xbd\xef\xbf\xbdStaticMesh \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa3\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd Mesh\xef\xbf\xbd\xef\xbf\xbdStaticMesh \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xa3\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSphere_MetaData[] = {
		{ "Category", "WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xca\xb0\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xca\xb0\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "WeaponPickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbc\xf1\xb5\xbd\xb5\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (APistol / ARifle)\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbc\xf1\xb5\xbd\xb5\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (APistol / ARifle)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppearanceIndex_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBeingPickedUp_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSkeletalMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh \xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh \xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBePickedUp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf0\xa3\xa8\xb6\xef\xbf\xbd\xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb2\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xf1\xa3\xac\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup/WeaponPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf0\xa3\xa8\xb6\xef\xbf\xbd\xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb2\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xf1\xa3\xac\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingCharacters_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OverlappingCharacters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSphere;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppearanceIndex;
	static void NewProp_bIsBeingPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBeingPickedUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldWeapon;
	static void NewProp_bCanBePickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBePickedUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponPickup_EnablePickup, "EnablePickup" }, // 4142089237
		{ &Z_Construct_UFunction_AWeaponPickup_OnInteract, "OnInteract" }, // 3464244597
		{ &Z_Construct_UFunction_AWeaponPickup_OnOverlapEnd, "OnOverlapEnd" }, // 510236544
		{ &Z_Construct_UFunction_AWeaponPickup_OnPickupOverlap, "OnPickupOverlap" }, // 3477705368
		{ &Z_Construct_UFunction_AWeaponPickup_OnRep_WeaponMesh, "OnRep_WeaponMesh" }, // 169820915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_OverlappingCharacters_ElementProp = { "OverlappingCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_OverlappingCharacters = { "OverlappingCharacters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, OverlappingCharacters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingCharacters_MetaData), NewProp_OverlappingCharacters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, PickupMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupSphere = { "PickupSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, PickupSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSphere_MetaData), NewProp_PickupSphere_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AppearanceIndex = { "AppearanceIndex", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, AppearanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppearanceIndex_MetaData), NewProp_AppearanceIndex_MetaData) };
void Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bIsBeingPickedUp_SetBit(void* Obj)
{
	((AWeaponPickup*)Obj)->bIsBeingPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bIsBeingPickedUp = { "bIsBeingPickedUp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponPickup), &Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bIsBeingPickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBeingPickedUp_MetaData), NewProp_bIsBeingPickedUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupSkeletalMesh = { "PickupSkeletalMesh", "OnRep_WeaponMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, PickupSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSkeletalMesh_MetaData), NewProp_PickupSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_HeldWeapon = { "HeldWeapon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, HeldWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldWeapon_MetaData), NewProp_HeldWeapon_MetaData) };
void Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bCanBePickedUp_SetBit(void* Obj)
{
	((AWeaponPickup*)Obj)->bCanBePickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bCanBePickedUp = { "bCanBePickedUp", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponPickup), &Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bCanBePickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBePickedUp_MetaData), NewProp_bCanBePickedUp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_OverlappingCharacters_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_OverlappingCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AppearanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bIsBeingPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_PickupSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_HeldWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bCanBePickedUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponPickup_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIInterface_NoRegister, (int32)VTABLE_OFFSET(AWeaponPickup, IIInterface), false },  // 1297905220
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickup_Statics::ClassParams = {
	&AWeaponPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponPickup_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponPickup()
{
	if (!Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton, Z_Construct_UClass_AWeaponPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton;
}
template<> FIRSTFPS_API UClass* StaticClass<AWeaponPickup>()
{
	return AWeaponPickup::StaticClass();
}
void AWeaponPickup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AppearanceIndex(TEXT("AppearanceIndex"));
	static const FName Name_bIsBeingPickedUp(TEXT("bIsBeingPickedUp"));
	static const FName Name_PickupSkeletalMesh(TEXT("PickupSkeletalMesh"));
	static const FName Name_bCanBePickedUp(TEXT("bCanBePickedUp"));
	const bool bIsValid = true
		&& Name_AppearanceIndex == ClassReps[(int32)ENetFields_Private::AppearanceIndex].Property->GetFName()
		&& Name_bIsBeingPickedUp == ClassReps[(int32)ENetFields_Private::bIsBeingPickedUp].Property->GetFName()
		&& Name_PickupSkeletalMesh == ClassReps[(int32)ENetFields_Private::PickupSkeletalMesh].Property->GetFName()
		&& Name_bCanBePickedUp == ClassReps[(int32)ENetFields_Private::bCanBePickedUp].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponPickup"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickup);
AWeaponPickup::~AWeaponPickup() {}
// End Class AWeaponPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPickup, AWeaponPickup::StaticClass, TEXT("AWeaponPickup"), &Z_Registration_Info_UClass_AWeaponPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPickup), 2231424466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_3224225104(TEXT("/Script/FirstFPS"),
	Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_project_FirstFPS_Source_FirstFPS_Public_Pickup_WeaponPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
