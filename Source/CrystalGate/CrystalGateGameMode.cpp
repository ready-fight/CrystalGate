// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrystalGateGameMode.h"
#include "CrystalGateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrystalGateGameMode::ACrystalGateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
