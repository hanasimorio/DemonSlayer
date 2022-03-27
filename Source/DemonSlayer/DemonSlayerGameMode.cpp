// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemonSlayerGameMode.h"
#include "DemonSlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemonSlayerGameMode::ADemonSlayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
