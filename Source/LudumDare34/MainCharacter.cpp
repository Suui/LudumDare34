// Fill out your copyright notice in the Description page of Project Settings.

#include "LudumDare34.h"
#include "MainCharacter.h"


AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->AttachTo(RootComponent);
	CameraBoom->TargetArmLength = 500.f;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->AttachTo(CameraBoom);
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

