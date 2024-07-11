// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModalCamera/Public/CameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAssistInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODALCAMERA_API UClass* Z_Construct_UClass_UCameraAssistInterface();
MODALCAMERA_API UClass* Z_Construct_UClass_UCameraAssistInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModalCamera();
// End Cross Module References

// Begin Interface UCameraAssistInterface
void UCameraAssistInterface::StaticRegisterNativesUCameraAssistInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAssistInterface);
UClass* Z_Construct_UClass_UCameraAssistInterface_NoRegister()
{
	return UCameraAssistInterface::StaticClass();
}
struct Z_Construct_UClass_UCameraAssistInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraAssistInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICameraAssistInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraAssistInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModalCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAssistInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAssistInterface_Statics::ClassParams = {
	&UCameraAssistInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAssistInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAssistInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAssistInterface()
{
	if (!Z_Registration_Info_UClass_UCameraAssistInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAssistInterface.OuterSingleton, Z_Construct_UClass_UCameraAssistInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAssistInterface.OuterSingleton;
}
template<> MODALCAMERA_API UClass* StaticClass<UCameraAssistInterface>()
{
	return UCameraAssistInterface::StaticClass();
}
UCameraAssistInterface::UCameraAssistInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAssistInterface);
UCameraAssistInterface::~UCameraAssistInterface() {}
// End Interface UCameraAssistInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAssistInterface, UCameraAssistInterface::StaticClass, TEXT("UCameraAssistInterface"), &Z_Registration_Info_UClass_UCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAssistInterface), 3311399257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_458952729(TEXT("/Script/ModalCamera"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
