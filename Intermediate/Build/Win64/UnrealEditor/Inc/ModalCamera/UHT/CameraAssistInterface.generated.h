// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraAssistInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODALCAMERA_CameraAssistInterface_generated_h
#error "CameraAssistInterface.generated.h already included, missing '#pragma once' in CameraAssistInterface.h"
#endif
#define MODALCAMERA_CameraAssistInterface_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraAssistInterface(UCameraAssistInterface&&); \
	UCameraAssistInterface(const UCameraAssistInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAssistInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAssistInterface) \
	NO_API virtual ~UCameraAssistInterface();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCameraAssistInterface(); \
	friend struct Z_Construct_UClass_UCameraAssistInterface_Statics; \
public: \
	DECLARE_CLASS(UCameraAssistInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModalCamera"), NO_API) \
	DECLARE_SERIALIZER(UCameraAssistInterface)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICameraAssistInterface() {} \
public: \
	typedef UCameraAssistInterface UClassType; \
	typedef ICameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_11_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODALCAMERA_API UClass* StaticClass<class UCameraAssistInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModalCamera_Source_ModalCamera_Public_CameraAssistInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
