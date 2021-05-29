// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatterManCppGameMode.h"
#include "BatterManCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABatterManCppGameMode::ABatterManCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
