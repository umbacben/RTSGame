// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSGameMode.h"

ARTSGameMode::ARTSGameMode()
{
	PlayerControllerClass = ARTSPlayerController::StaticClass();
	DefaultPawnClass = ARTSCamera::StaticClass();
}