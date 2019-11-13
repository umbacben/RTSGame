// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/SpectatorPawn.h"
#include "Engine/World.h"
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

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* ARTSCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* ARTSSpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USphereComponent* ARTSSphereComponent;
};
