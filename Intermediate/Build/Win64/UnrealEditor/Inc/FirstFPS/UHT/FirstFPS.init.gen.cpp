// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstFPS_init() {}
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature();
	FIRSTFPS_API UFunction* Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstFPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnAmmoUIUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnArmorChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnDisplayAmmoUI__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnFFAWinner__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnHitMarker__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnInventoryUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnKillsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstFPS_OnTeamWinAnnouncement__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstFPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1E040353,
				0xD6771CD8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstFPS(Z_Construct_UPackage__Script_FirstFPS, TEXT("/Script/FirstFPS"), Z_Registration_Info_UPackage__Script_FirstFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1E040353, 0xD6771CD8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
