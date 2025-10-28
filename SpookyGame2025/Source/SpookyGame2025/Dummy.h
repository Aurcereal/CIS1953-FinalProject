// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dummy.generated.h"

UCLASS()
class SPOOKYGAME2025_API ADummy : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//TSubclassOf<AActor> objectType;
	TArray<AActor*> objectPool;

public:	
	// Sets default values for this actor's properties
	ADummy();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
