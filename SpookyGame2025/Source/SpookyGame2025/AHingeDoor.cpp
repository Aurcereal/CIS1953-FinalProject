// Fill out your copyright notice in the Description page of Project Settings.


#include "AHingeDoor.h"

// Sets default values
AAHingeDoor::AAHingeDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	doorRotating = false;
}

// Called when the game starts or when spawned
void AAHingeDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAHingeDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (doorRotating)
	{
		FRotator currRotation = GetActorRotation();
		currRotation.Yaw += turnSpeed * DeltaTime;
		SetActorRotation(currRotation);
		if ((turnSpeed > 0 && currRotation.Yaw > 90) || (turnSpeed < 0 && currRotation.Yaw < 0)) {
			doorRotating = false;
		}
	}
}

void AAHingeDoor::InteractWithObject_Implementation(AActor* Interactor)
{
	if (turnSpeed > 0)
		CloseDoor(140);
	else
		OpenDoor(140);
}

void AAHingeDoor::OpenDoor(float rotateSpeed = 90.0) {
	if (doorLocked) return;
	doorRotating = true;
	turnSpeed = rotateSpeed;

}

void AAHingeDoor::CloseDoor(float rotateSpeed = 90.0) {
	doorRotating = true;
	turnSpeed = -rotateSpeed;
}

void AAHingeDoor::LockDoor(bool lock) {
	doorLocked = lock;
}

