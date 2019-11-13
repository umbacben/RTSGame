// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/SpectatorPawn.h"
#include "RTSCamera.generated.h"

/**
 * 
 */
UCLASS()
class GAME_API ARTSCamera : public ASpectatorPawn
{
	GENERATED_BODY()
public:
	ARTSCamera();

	void ZoomIn();

	void ZoomOut();

	void MoveHorizontal(bool Direction);

	void MoveVertical(bool Direction);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* ARTSCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* ARTSSpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USphereComponent* ARTSSphereComponent;

private:
	float CameraSpeed;

	float ZoomSpeed;
};
