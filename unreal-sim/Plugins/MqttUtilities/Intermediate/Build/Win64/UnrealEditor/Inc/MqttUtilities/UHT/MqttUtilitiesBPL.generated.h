// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MqttUtilitiesBPL.h"

#ifdef MQTTUTILITIES_MqttUtilitiesBPL_generated_h
#error "MqttUtilitiesBPL.generated.h already included, missing '#pragma once' in MqttUtilitiesBPL.h"
#endif
#define MQTTUTILITIES_MqttUtilitiesBPL_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IMqttClientInterface;
struct FMqttClientConfig;

// ********** Begin Class UMqttUtilitiesBPL ********************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMqttClient);


MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister();

#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttUtilitiesBPL(); \
	friend struct Z_Construct_UClass_UMqttUtilitiesBPL_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister(); \
public: \
	DECLARE_CLASS2(UMqttUtilitiesBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister) \
	DECLARE_SERIALIZER(UMqttUtilitiesBPL)


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttUtilitiesBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMqttUtilitiesBPL(UMqttUtilitiesBPL&&) = delete; \
	UMqttUtilitiesBPL(const UMqttUtilitiesBPL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttUtilitiesBPL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttUtilitiesBPL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttUtilitiesBPL) \
	NO_API virtual ~UMqttUtilitiesBPL();


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_12_PROLOG
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMqttUtilitiesBPL;

// ********** End Class UMqttUtilitiesBPL **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
