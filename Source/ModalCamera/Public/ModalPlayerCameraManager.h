// Copyright Chronicler Software Corporation.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"

#include "ModalPlayerCameraManager.generated.h"

/**
 * Provides an extensible camera manager that handles ModalCameras and ModalCameraComponents.
 *
 * The PlayerCameraManager is set in the PlayerController class or blueprint.
 */
UCLASS(NotPlaceable)
class MODALCAMERA_API AModalPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:

	AModalPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

protected:

	virtual void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) override;

};
