// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Windows/MqttClient.h"

#ifdef MQTTUTILITIES_MqttClient_generated_h
#error "MqttClient.generated.h already included, missing '#pragma once' in MqttClient.h"
#endif
#define MQTTUTILITIES_MqttClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMqttClient **************************************************************
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();

#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttClient(); \
	friend struct Z_Construct_UClass_UMqttClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UMqttClient, UMqttClientBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), Z_Construct_UClass_UMqttClient_NoRegister) \
	DECLARE_SERIALIZER(UMqttClient)


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMqttClient(UMqttClient&&) = delete; \
	UMqttClient(const UMqttClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClient) \
	NO_API virtual ~UMqttClient();


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_12_PROLOG
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMqttClient;

// ********** End Class UMqttClient ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
