// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NewClass.generated.h"

UCLASS()
class CPP_API ANewClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANewClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = "BluePrintAccess")
	int32 intAccsess;


	UFUNCTION(BlueprintCallable, Category = "Math")
	int32 AddBlue(int32 A, int32 B);

};
