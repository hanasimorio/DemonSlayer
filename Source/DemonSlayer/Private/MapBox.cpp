// Fill out your copyright notice in the Description page of Project Settings.


#include "MapBox.h"

// Sets default values
AMapBox::AMapBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BOX"));

	UStaticMesh* mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Game/Geometry/Meshes/1M_Cube"), NULL, LOAD_None, NULL);

	Box->SetStaticMesh(mesh);

	Box->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMapBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

