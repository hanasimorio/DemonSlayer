// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonGenerate.h"

// Sets default values
ADungeonGenerate::ADungeonGenerate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void ADungeonGenerate::BeginPlay()
{
	Super::BeginPlay();

	mapsize = map.Num();

	ResetMap();

	CreateSpaceData();

	SpawnBox();


}

// Called every frame
void ADungeonGenerate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADungeonGenerate::ResetMap()
{

	UE_LOG(LogTemp, Log, TEXT("MyIntValue=%d"), mapsize);

	if (mapsize > 0)
	{
		for (int i = 0; i < mapsize; i++) {
			for (int j = 0; j < mapsize; j++)
			{
				map[i].IntArray.Add(0);
				map[i].IntArray[j] = wall;
			}
		}
	}

}

void ADungeonGenerate::SpawnBox()
{
    BoxName = "/Game/BluePrints/MapBox_BP.MapBox_BP_C";
	//BoxName = "/Script/MapBox";
	TSubclassOf<class AActor> sc = TSoftClassPtr<AActor>(FSoftObjectPath(*BoxName)).LoadSynchronous();
	if (sc != nullptr)
	{

		for (int i = 0; i < mapsize; i++) {
			for (int j = 0; j < mapsize; j++) {
				if (map[i].IntArray[j] == wall)
				{
					AActor* a = GetWorld()->SpawnActor<AActor>(sc);
					a->SetActorLocation(FVector(i * 200, j * 200, 0));
				}
			}
		}

	}



}

void ADungeonGenerate::CreateSpaceData()
{
	int32 roomcount = FMath::RandRange(roomMincount, roomMaxcount);

	TArray<int32> meetpointsx;
	meetpointsx.Init(0, meetpointcount);

	TArray<int32> meetpointsy;
	meetpointsy.Init(0, meetpointcount);

	for (int i = 0; i < meetpointsx.Num(); i++) {
		meetpointsx[i] = FMath::RandRange(mapsize / 4, mapsize * 3 / 4);
		meetpointsy[i] = FMath::RandRange(mapsize / 4, mapsize * 3 / 4);
		map[meetpointsy[i]].IntArray[meetpointsx[i]] = road;
	}


	for (int i = 0; i < roomcount; i++) {
		int32 roomheight = FMath::RandRange(roomMinheight, roomMaxheight);

		int32 roomwidth = FMath::RandRange(roomMinwidth, roomMaxwidth);

		int32 roompointx = FMath::RandRange(2, mapsize - roomMaxwidth - 2);

		int32 roompointy = FMath::RandRange(2, mapsize - roomMaxwidth - 2);

		int32 roadstartpointx = FMath::RandRange(roompointx, roompointx + roomwidth);

		int32 roadstartpointy = FMath::RandRange(roompointy, roompointy + roomheight);

		bool isroad = CreateRoomData(roomheight, roomwidth, roompointx, roompointy);

		if (isroad == false)
		{
			CreateRoadData(roadstartpointx, roadstartpointy, meetpointsx[FMath::RandRange(0, 0)], meetpointsy[FMath::RandRange(0, 0)]);
		}

	}


}

bool ADungeonGenerate::CreateRoomData(int32 roomheight, int32 roomwidth, int32 roompointx, int32 roompointy)
{
	bool isroad = false;
	for (int i = 0; i < roomheight; i++) {
		for (int j = 0; j < roomwidth; j++) {
			if (map[roompointy + i].IntArray[roompointx + j] == road) {
				isroad = true;
			}
			else {
				map[roompointy + i].IntArray[roompointx + j] = road;
			}
		}
	}
	return isroad;
}

void ADungeonGenerate::CreateRoadData(int roadStartPointX, int roadStartPointY, int meetPointX, int meetPointY)
{
	bool isright;
	if (roadStartPointX > meetPointX) {
		isright = true;
	}
	else
	{
		isright = false;
	}


	bool isunder;
	if (roadStartPointY > meetPointY) {
		isunder = false;
	}
	else
	{
		isunder = true;
	}


	if (FMath::RandRange(0, 2) == 0) {
		while (roadStartPointX != meetPointX) {
			map[roadStartPointY].IntArray[roadStartPointX] = road;
			if (isright == true) {
				roadStartPointX--;
			}
			else {
				roadStartPointX++;
			}
		}


		while (roadStartPointY != meetPointY)
		{
			map[roadStartPointY].IntArray[roadStartPointX] = road;
			if (isunder == true) {
				roadStartPointY++;
			}
			else {
				roadStartPointY--;
			}
		}
	}
	else {
		while (roadStartPointY != meetPointY)
		{
			map[roadStartPointY].IntArray[roadStartPointX] = road;
			if (isunder == true) {
				roadStartPointY++;
			}
			else {
				roadStartPointY--;
			}
		}


		while (roadStartPointX != meetPointX) {
			map[roadStartPointY].IntArray[roadStartPointX] = road;
			if (isright == true) {
				roadStartPointX--;
			}
			else {
				roadStartPointX++;
			}
		}
	}

}


