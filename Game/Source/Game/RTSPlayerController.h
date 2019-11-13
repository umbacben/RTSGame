// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RTSCamera.h"
#include "Engine/World.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	ARTSCamera* RTSCamera;

	virtual void SetupInputComponent() override;

	virtual void PlayerTick(float DeltaTime) override;
};
