// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonGenerate.generated.h"

USTRUCT(BlueprintType)
struct FIntArrayElement
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		TArray<int32> IntArray;

public:
	int32 GetValue(int32 X)
	{
		if (IntArray.IsValidIndex(X))
		{
			return IntArray[X];
		}

		return 0;
	}


};


UCLASS()
class DEMONSLAYER_API ADungeonGenerate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADungeonGenerate();

private:
	int32 wall = 9;

	int32 road = 0;

	int32 mapsize;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		TArray<FIntArrayElement> map;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMinheight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMaxheight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMinwidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMaxwidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMincount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MapData")
		int32 roomMaxcount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "MapData")
		int32 meetpointcount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MapData")
		FString BoxName;

	void ResetMap();

	void SpawnBox();

	void CreateSpaceData();

	bool CreateRoomData(int32 roomheight, int32 roomwidth, int32 roompointx, int32 roompointy);


	void CreateRoadData(int roadStartPointX, int roadStartPointY, int meetPointX, int meetPointY);
};
