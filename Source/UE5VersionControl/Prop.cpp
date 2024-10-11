// Fill out your copyright notice in the Description page of Project Settings.


#include "Prop.h"

// Sets default values
AProp::AProp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProp::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Creating prop"));
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	if (MeshComp == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to create mesh component"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Created mesh component"));
	}

	RootComponent = MeshComp;
}

// Called every frame
void AProp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

