// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModalCamera/Public/ModalCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModalCameraComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraMode_NoRegister();
MODALCAMERA_API UClass* Z_Construct_UClass_UCameraModeStack_NoRegister();
MODALCAMERA_API UClass* Z_Construct_UClass_UModalCameraComponent();
MODALCAMERA_API UClass* Z_Construct_UClass_UModalCameraComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModalCamera();
// End Cross Module References

// Begin Class UModalCameraComponent Function FindCameraComponent
struct Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics
{
	struct ModalCameraComponent_eventFindCameraComponent_Parms
	{
		const AActor* Actor;
		UModalCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the camera component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModalCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the camera component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModalCameraComponent_eventFindCameraComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModalCameraComponent_eventFindCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UModalCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModalCameraComponent, nullptr, "FindCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::ModalCameraComponent_eventFindCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::ModalCameraComponent_eventFindCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModalCameraComponent::execFindCameraComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModalCameraComponent**)Z_Param__Result=UModalCameraComponent::FindCameraComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UModalCameraComponent Function FindCameraComponent

// Begin Class UModalCameraComponent
void UModalCameraComponent::StaticRegisterNativesUModalCameraComponent()
{
	UClass* Class = UModalCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCameraComponent", &UModalCameraComponent::execFindCameraComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModalCameraComponent);
UClass* Z_Construct_UClass_UModalCameraComponent_NoRegister()
{
	return UModalCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UModalCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModalCameraComponent\n *\n * A camera component that supports blending between multiple camera modes.\n *\n * @todo Have this rely on a ModularGameplayExperiences interface instead of copy/paste templates.\n */" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "ModalCameraComponent.h" },
		{ "ModuleRelativePath", "Public/ModalCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModalCameraComponent\n\nA camera component that supports blending between multiple camera modes.\n\n@todo Have this rely on a ModularGameplayExperiences interface instead of copy/paste templates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default camera mode used by player controlled pawns.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModalCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default camera mode used by player controlled pawns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stack used to blend the camera modes.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModalCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack used to blend the camera modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode set by an ability. */" },
#endif
		{ "ModuleRelativePath", "Public/ModalCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode set by an ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModalCameraComponent_FindCameraComponent, "FindCameraComponent" }, // 1192677920
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModalCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModalCameraComponent, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModalCameraComponent, CameraModeStack), Z_Construct_UClass_UCameraModeStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModalCameraComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModalCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_DefaultCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_CameraModeStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModalCameraComponent_Statics::NewProp_AbilityCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModalCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModalCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModalCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModalCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModalCameraComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UModalCameraComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModalCameraComponent_Statics::ClassParams = {
	&UModalCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModalCameraComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModalCameraComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModalCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModalCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModalCameraComponent()
{
	if (!Z_Registration_Info_UClass_UModalCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModalCameraComponent.OuterSingleton, Z_Construct_UClass_UModalCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModalCameraComponent.OuterSingleton;
}
template<> MODALCAMERA_API UClass* StaticClass<UModalCameraComponent>()
{
	return UModalCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModalCameraComponent);
UModalCameraComponent::~UModalCameraComponent() {}
// End Class UModalCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModalCameraComponent, UModalCameraComponent::StaticClass, TEXT("UModalCameraComponent"), &Z_Registration_Info_UClass_UModalCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModalCameraComponent), 2911090607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_3064049765(TEXT("/Script/ModalCamera"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
