// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSCamera.h"

ARTSCamera::ARTSCamera()
{
	ARTSSphereComponent = CreateDefaultSubobject<UStaticMeshComponent>("Sphere");
	ARTSSphereComponent->SetupAttachment(RootComponent);
	ARTSSphereComponent->SetRelativeLocation(FVector(0, 0, 1000));
	ARTSSphereComponent->bAbsoluteLocation = true;
	ARTSSphereComponent->RelativeScale3D = FVector(.25f, .25f, .25f);
	ARTSSphereComponent->SetCastShadow(false);

	ARTSSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	ARTSSpringArmComponent->SetupAttachment(ARTSSphereComponent);
	ARTSSpringArmComponent->RelativeRotation = FRotator(-70, 0, 0);
	ARTSSpringArmComponent->bAbsoluteRotation = true;
	ARTSSpringArmComponent->TargetArmLength = 800.0f;
	ARTSSpringArmComponent->bDoCollisionTest = false;

	ARTSCameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	ARTSCameraComponent->SetupAttachment(ARTSSpringArmComponent, USpringArmComponent::SocketName);
	ARTSCameraComponent->bUsePawnControlRotation = false;
}