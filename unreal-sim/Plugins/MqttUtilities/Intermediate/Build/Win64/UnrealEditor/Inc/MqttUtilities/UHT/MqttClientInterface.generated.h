// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/MqttClientInterface.h"

#ifdef MQTTUTILITIES_MqttClientInterface_generated_h
#error "MqttClientInterface.generated.h already included, missing '#pragma once' in MqttClientInterface.h"
#endif
#define MQTTUTILITIES_MqttClientInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMqttConnectionData;
struct FMqttMessage;

// ********** Begin Delegate FOnConnectDelegate ****************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_13_DELEGATE \
MQTTUTILITIES_API void FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate);


// ********** End Delegate FOnConnectDelegate ******************************************************

// ********** Begin Delegate FOnDisconnectDelegate *************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_14_DELEGATE \
MQTTUTILITIES_API void FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate);


// ********** End Delegate FOnDisconnectDelegate ***************************************************

// ********** Begin Delegate FOnPublishDelegate ****************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_15_DELEGATE \
MQTTUTILITIES_API void FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate, int32 mid);


// ********** End Delegate FOnPublishDelegate ******************************************************

// ********** Begin Delegate FOnMessageDelegate ****************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_16_DELEGATE \
MQTTUTILITIES_API void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMqttMessage message);


// ********** End Delegate FOnMessageDelegate ******************************************************

// ********** Begin Delegate FOnSubscribeDelegate **************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_17_DELEGATE \
MQTTUTILITIES_API void FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, int32 mid, TArray<int32> const& qos);


// ********** End Delegate FOnSubscribeDelegate ****************************************************

// ********** Begin Delegate FOnUnsubscribeDelegate ************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_18_DELEGATE \
MQTTUTILITIES_API void FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate, int32 mid);


// ********** End Delegate FOnUnsubscribeDelegate **************************************************

// ********** Begin Delegate FOnMqttErrorDelegate **************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_19_DELEGATE \
MQTTUTILITIES_API void FOnMqttErrorDelegate_DelegateWrapper(const FScriptDelegate& OnMqttErrorDelegate, int32 code, const FString& message);


// ********** End Delegate FOnMqttErrorDelegate ****************************************************

// ********** Begin Interface UMqttClientInterface *************************************************
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();

#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMqttClientInterface(UMqttClientInterface&&) = delete; \
	UMqttClientInterface(const UMqttClientInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientInterface) \
	virtual ~UMqttClientInterface() = default;


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMqttClientInterface(); \
	friend struct Z_Construct_UClass_UMqttClientInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMqttClientInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MqttUtilities"), Z_Construct_UClass_UMqttClientInterface_NoRegister) \
	DECLARE_SERIALIZER(UMqttClientInterface)


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMqttClientInterface() {} \
public: \
	typedef UMqttClientInterface UClassType; \
	typedef IMqttClientInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_21_PROLOG
#define FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMqttClientInterface;

// ********** End Interface UMqttClientInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
