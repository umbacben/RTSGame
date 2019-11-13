// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "RTSCamera.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAME_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ARTSPlayerController();

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
	virtual void PlayerTick(float DeltaTime) override;

	UPROPERTY()
	ARTSCamera* RTSPlayerCamera;
protected:

	UFUNCTION()
	void ZoomIn();

	UFUNCTION()
	void ZoomOut();

	UFUNCTION()
	void MoveHorizontal(bool Direction);

	UFUNCTION()
	void MoveVertical(bool Direction);

private:
	float CameraSpeed;

	float ZoomSpeed;
};
