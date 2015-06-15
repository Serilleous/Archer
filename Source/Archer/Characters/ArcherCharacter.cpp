// Fill out your copyright notice in the Description page of Project Settings.

#include "Archer.h"
#include "ArcherCharacter.h"


AArcherCharacter::AArcherCharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = ObjectInitializer.CreateDefaultSubobject<USpringArmComponent>(this, FName("ArcherSpringArm"));
	//SpringArm.AttachParent(this->GetCapsuleComponent());

	ThirdPersonCamera = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, FName("ThirdPersonCamera"));
	ThirdPersonCamera->AttachParent = SpringArm;

}

void AArcherCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AArcherCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AArcherCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

