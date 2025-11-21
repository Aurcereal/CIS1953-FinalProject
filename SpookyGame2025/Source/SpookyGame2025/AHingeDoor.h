// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "AHingeDoor.generated.h"

UCLASS()
class SPOOKYGAME2025_API AAHingeDoor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAHingeDoor();

	UFUNCTION(BlueprintCallable, Category = "Door")
	void OpenDoor(float rotateSpeed);

	UFUNCTION(BlueprintCallable, Category = "Door")
	void CloseDoor(float rotateSpeed);

	UFUNCTION(BlueprintCallable, Category = "Door")
	void LockDoor(bool lock);

	virtual void InteractWithObject_Implementation(AActor* Interactor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool doorRotating;
	float turnSpeed;
	bool doorLocked;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
