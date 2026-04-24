// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef FIRSTFPS_IInterface_generated_h
#error "IInterface.generated.h already included, missing '#pragma once' in IInterface.h"
#endif
#define FIRSTFPS_IInterface_generated_h

#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteract_Implementation(ACharacter* InstigatorCharacter) {}; \
	DECLARE_FUNCTION(execOnInteract);


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTFPS_API UIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIInterface(UIInterface&&); \
	UIInterface(const UIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTFPS_API, UIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInterface) \
	FIRSTFPS_API virtual ~UIInterface();


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIInterface(); \
	friend struct Z_Construct_UClass_UIInterface_Statics; \
public: \
	DECLARE_CLASS(UIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FirstFPS"), FIRSTFPS_API) \
	DECLARE_SERIALIZER(UIInterface)


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIInterface() {} \
public: \
	typedef UIInterface UClassType; \
	typedef IIInterface ThisClass; \
	static void Execute_OnInteract(UObject* O, ACharacter* InstigatorCharacter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_10_PROLOG
#define FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTFPS_API UClass* StaticClass<class UIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_project_FirstFPS_Source_FirstFPS_Public_Core_IInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
