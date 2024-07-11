// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModalCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODALCAMERA_ModalCameraMode_generated_h
#error "ModalCameraMode.generated.h already included, missing '#pragma once' in ModalCameraMode.h"
#endif
#define MODALCAMERA_ModalCameraMode_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModalCameraMode(); \
	friend struct Z_Construct_UClass_UModalCameraMode_Statics; \
public: \
	DECLARE_CLASS(UModalCameraMode, UCameraMode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModalCamera"), NO_API) \
	DECLARE_SERIALIZER(UModalCameraMode)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModalCameraMode(UModalCameraMode&&); \
	UModalCameraMode(const UModalCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModalCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModalCameraMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UModalCameraMode) \
	NO_API virtual ~UModalCameraMode();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_67_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_70_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODALCAMERA_API UClass* StaticClass<class UModalCameraMode>();

#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraModeStack(); \
	friend struct Z_Construct_UClass_UCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(UCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModalCamera"), NO_API) \
	DECLARE_SERIALIZER(UCameraModeStack)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_165_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraModeStack(UCameraModeStack&&); \
	UCameraModeStack(const UCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModeStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraModeStack) \
	NO_API virtual ~UCameraModeStack();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_162_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_165_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODALCAMERA_API UClass* StaticClass<class UCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_ModalCameraMode_h


#define FOREACH_ENUM_ECAMERAMODEBLENDFUNCTION(op) \
	op(ECameraModeBlendFunction::Linear) \
	op(ECameraModeBlendFunction::EaseIn) \
	op(ECameraModeBlendFunction::EaseOut) \
	op(ECameraModeBlendFunction::EaseInOut) \
	op(ECameraModeBlendFunction::COUNT) 

enum class ECameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<ECameraModeBlendFunction> { enum { Value = true }; };
template<> MODALCAMERA_API UEnum* StaticEnum<ECameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
