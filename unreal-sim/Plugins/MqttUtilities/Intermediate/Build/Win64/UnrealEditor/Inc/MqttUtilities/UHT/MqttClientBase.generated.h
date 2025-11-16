// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MqttClientBase.h"

#ifdef MQTTUTILITIES_MqttClientBase_generated_h
#error "MqttClientBase.generated.h already included, missing '#pragma once' in MqttClientBase.h"
#endif
#define MQTTUTILITIES_MqttClientBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMqttConnectionData;
struct FMqttMessage;

// ********** Begin Class UMqttClientBase **********************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOnErrorHandler); \
	DECLARE_FUNCTION(execSetOnUnsubscribeHandler); \
	DECLARE_FUNCTION(execSetOnSubscribeHandler); \
	DECLARE_FUNCTION(execSetOnMessageHandler); \
	DECLARE_FUNCTION(execSetOnPublishHandler); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase_NoRegister();

#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttClientBase(); \
	friend struct Z_Construct_UClass_UMqttClientBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMqttClientBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), Z_Construct_UClass_UMqttClientBase_NoRegister) \
	DECLARE_SERIALIZER(UMqttClientBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMqttClientBase*>(this); }


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMqttClientBase(UMqttClientBase&&) = delete; \
	UMqttClientBase(const UMqttClientBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientBase)


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_9_PROLOG
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMqttClientBase;

// ********** End Class UMqttClientBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
