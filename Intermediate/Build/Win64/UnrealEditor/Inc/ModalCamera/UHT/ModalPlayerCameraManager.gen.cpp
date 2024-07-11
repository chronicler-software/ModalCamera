// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModalCamera/Public/ModalPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModalPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
MODALCAMERA_API UClass* Z_Construct_UClass_AModalPlayerCameraManager();
MODALCAMERA_API UClass* Z_Construct_UClass_AModalPlayerCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModalCamera();
// End Cross Module References

// Begin Class AModalPlayerCameraManager
void AModalPlayerCameraManager::StaticRegisterNativesAModalPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModalPlayerCameraManager);
UClass* Z_Construct_UClass_AModalPlayerCameraManager_NoRegister()
{
	return AModalPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_AModalPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Provides an extensible camera manager that handles ModalCameras and ModalCameraComponents.\n *\n * The PlayerCameraManager is set in the PlayerController class or blueprint.\n */" },
#endif
		{ "IncludePath", "ModalPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/ModalPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides an extensible camera manager that handles ModalCameras and ModalCameraComponents.\n\nThe PlayerCameraManager is set in the PlayerController class or blueprint." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModalPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModalPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ModalCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModalPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModalPlayerCameraManager_Statics::ClassParams = {
	&AModalPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModalPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AModalPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModalPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_AModalPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModalPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AModalPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModalPlayerCameraManager.OuterSingleton;
}
template<> MODALCAMERA_API UClass* StaticClass<AModalPlayerCameraManager>()
{
	return AModalPlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModalPlayerCameraManager);
AModalPlayerCameraManager::~AModalPlayerCameraManager() {}
// End Class AModalPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModalPlayerCameraManager, AModalPlayerCameraManager::StaticClass, TEXT("AModalPlayerCameraManager"), &Z_Registration_Info_UClass_AModalPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModalPlayerCameraManager), 1344666256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalPlayerCameraManager_h_1554560988(TEXT("/Script/ModalCamera"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
