// Fill out your copyright notice in the Description page of Project Settings.


#include "NewClass.h"

// Sets default values
ANewClass::ANewClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	intAccsess = 0;
}

// Called when the game starts or when spawned
void ANewClass::BeginPlay()
{
	Super::BeginPlay();
	
}

int32 ANewClass::AddBlue(int32 a, int32 b) 
{
	int32 result = a + b;

	return result;
}

// Called every frame
void ANewClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

