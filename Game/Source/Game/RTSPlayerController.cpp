// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerController.h"

ARTSPlayerController::ARTSPlayerController()
{
	bShowMouseCursor = true;
}

void ARTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("ZoomIn", IE_Pressed, RTSCamera, &ARTSCamera::ZoomIn);
	InputComponent->BindAction("ZoomOut", IE_Pressed, RTSCamera, &ARTSCamera::ZoomOut);
}

void ARTSPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}
