// Copyright Epic Games, Inc. All Rights Reserved.

#include "LastClawGameMode.h"
#include "LastClawCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALastClawGameMode::ALastClawGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
