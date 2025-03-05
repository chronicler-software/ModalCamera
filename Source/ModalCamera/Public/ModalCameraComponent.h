// Copyright Chronicler.

#pragma once

#include "ModalCameraMode.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilitySpecHandle.h"
#include "Camera/CameraComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "GameFramework/Actor.h"

#include "ModalCameraComponent.generated.h"

template <class TClass> class TSubclassOf;

DECLARE_DELEGATE_RetVal(TSubclassOf<UModalCameraMode>, FCameraModeDelegate);


/**
 * UModalCameraComponent
 *
 * A camera component that supports blending between multiple camera modes.
 *
 * @todo Have this rely on a ModularGameplayExperiences interface instead of copy/paste templates.
 */
UCLASS()
class MODALCAMERA_API UModalCameraComponent : public UCameraComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UModalCameraComponent(const FObjectInitializer& ObjectInitializer);

	// Default camera mode used by player controlled pawns.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TSubclassOf<UModalCameraMode> DefaultCameraMode;

	// Returns the camera component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Camera")
	static UModalCameraComponent* FindCameraComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UModalCameraComponent>() : nullptr); }

	// Returns the target actor that the camera is looking at.
	virtual AActor* GetTargetActor() const { return GetOwner(); }

	// Delegate used to query for the best camera mode.
	FCameraModeDelegate DetermineCameraModeDelegate;

	// Add an offset to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
	void AddFieldOfViewOffset(const float FovOffset) { FieldOfViewOffset += FovOffset; }

	/** Overrides the camera from an active gameplay ability */
	void SetAbilityCameraMode(TSubclassOf<UModalCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle);

	/** Clears the camera override if it is set */
	void ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle);

	/**
	 * @ingroup UActorComponent
	 * @{
	 */
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	/** @} */

	/**
	 * Gets the pawn that owns the component.
	 *
	 * This will always be valid during gameplay but can return null in the editor.
	 *
	 * @todo Replace with interface from ModularGameplayExperiences.
	 *
	 * @ingroup ModularGameplayExperiencesInterface
	 * @{
	 */
	template <class T>
	T* GetPawn() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' template parameter to GetPawn must be derived from APawn");
		return Cast<T>(GetOwner());
	}
	template <class T>
	T* GetPawnChecked() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' template parameter to GetPawnChecked must be derived from APawn");
		return CastChecked<T>(GetOwner());
	}
	/** Gets the player state that owns the component, this can return null on clients for player pawns that are still being replicated */
	template <class T>
	T* GetPlayerState() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, APlayerState>::Value, "'T' template parameter to GetPlayerState must be derived from APlayerState");
		return GetPawnChecked<APawn>()->GetPlayerState<T>();
	}
	/** Gets the controller that owns the component, this will usually be null on clients */
	template <class T>
	T* GetController() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, AController>::Value, "'T' template parameter to GetController must be derived from AController");
		return GetPawnChecked<APawn>()->GetController<T>();
	}
	/** @} */

	virtual void DrawDebug(UCanvas* Canvas) const;

	// Gets the tag associated with the top layer and the blend weight of it
	void GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTag& OutTagOfTopLayer) const;

	/*
	 * @ingroup IGameFrameworkInitStateInterface
	 * @{
	 */
	static const FName NAME_ActorFeatureName;

	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	virtual void CheckDefaultInitialization() override;
	/** @} */

protected:
	// Stack used to blend the camera modes.
	UPROPERTY()
	TObjectPtr<UCameraModeStack> CameraModeStack;

	TSubclassOf<UModalCameraMode> DetermineCameraMode() const;

	// Offset applied to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
	float FieldOfViewOffset;

	virtual void UpdateCameraModes();

	/**
	 * @ingroup UCameraComponent
	 * @{
	 */
protected:
	/** Camera mode set by an ability. */
	UPROPERTY()
	TSubclassOf<UModalCameraMode> AbilityCameraMode;

	/** Spec handle for the last ability to set a camera mode. */
	FGameplayAbilitySpecHandle AbilityCameraModeOwningSpecHandle;

	virtual void OnRegister() override;
	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;
	/** @} */

};
