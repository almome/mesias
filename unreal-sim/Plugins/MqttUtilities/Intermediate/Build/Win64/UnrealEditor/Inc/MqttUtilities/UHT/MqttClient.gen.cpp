// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttClient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttClient() {}

// ********** Begin Cross Module References ********************************************************
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase();
UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMqttClient **************************************************************
void UMqttClient::StaticRegisterNativesUMqttClient()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMqttClient;
UClass* UMqttClient::GetPrivateStaticClass()
{
	using TClass = UMqttClient;
	if (!Z_Registration_Info_UClass_UMqttClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MqttClient"),
			Z_Registration_Info_UClass_UMqttClient.InnerSingleton,
			StaticRegisterNativesUMqttClient,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMqttClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UMqttClient_NoRegister()
{
	return UMqttClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMqttClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Windows/MqttClient.h" },
		{ "ModuleRelativePath", "Private/Windows/MqttClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMqttClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMqttClientBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClient_Statics::ClassParams = {
	&UMqttClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMqttClient()
{
	if (!Z_Registration_Info_UClass_UMqttClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClient.OuterSingleton, Z_Construct_UClass_UMqttClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMqttClient.OuterSingleton;
}
UMqttClient::UMqttClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClient);
UMqttClient::~UMqttClient() {}
// ********** End Class UMqttClient ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h__Script_MqttUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClient, UMqttClient::StaticClass, TEXT("UMqttClient"), &Z_Registration_Info_UClass_UMqttClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClient), 868521394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h__Script_MqttUtilities_428952548(TEXT("/Script/MqttUtilities"),
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h__Script_MqttUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h__Script_MqttUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
