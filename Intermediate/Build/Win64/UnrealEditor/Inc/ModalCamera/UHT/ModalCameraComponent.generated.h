// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModalCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModalCameraComponent;
#ifdef MODALCAMERA_ModalCameraComponent_generated_h
#error "ModalCameraComponent.generated.h already included, missing '#pragma once' in ModalCameraComponent.h"
#endif
#define MODALCAMERA_ModalCameraComponent_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModalCameraComponent(); \
	friend struct Z_Construct_UClass_UModalCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UModalCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModalCamera"), NO_API) \
	DECLARE_SERIALIZER(UModalCameraComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UModalCameraComponent*>(this); }


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModalCameraComponent(UModalCameraComponent&&); \
	UModalCameraComponent(const UModalCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModalCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModalCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModalCameraComponent) \
	NO_API virtual ~UModalCameraComponent();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_26_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODALCAMERA_API UClass* StaticClass<class UModalCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
