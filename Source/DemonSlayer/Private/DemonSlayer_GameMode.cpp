// Fill out your copyright notice in the Description page of Project Settings.


#include "DemonSlayer_GameMode.h"
#include "GameFramework/Actor.h"

ADemonSlayer_GameMode::ADemonSlayer_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADemonSlayer_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	//GetWorldTimerManager().SetTimer(UnusedHandle, this, &ADemonSlayer_GameMode::SpawnPlayerRecharge, FMath::RandRange(2,5), true);
	
		

}

void ADemonSlayer_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ADemonSlayer_GameMode::SpawnPlayerRecharge()
{

	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);

	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);

}
