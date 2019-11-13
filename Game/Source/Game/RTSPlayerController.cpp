// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerController.h"

ARTSPlayerController::ARTSPlayerController()
{
	bShowMouseCursor = true;
}

void ARTSPlayerController::BeginPlay()
{
	RTSPlayerCamera = (Cast<ARTSCamera>(GetPawnOrSpectator()));
}

void ARTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("ZoomIn", IE_Pressed, this, &ARTSPlayerController::ZoomIn);
	InputComponent->BindAction("ZoomOut", IE_Pressed, this, &ARTSPlayerController::ZoomOut);
}

void ARTSPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void ARTSPlayerController::ZoomIn()
{

}

void ARTSPlayerController::ZoomOut()
{
}

void ARTSPlayerController::MoveHorizontal(bool Direction)
{
}

void ARTSPlayerController::MoveVertical(bool Direction)
{
}
