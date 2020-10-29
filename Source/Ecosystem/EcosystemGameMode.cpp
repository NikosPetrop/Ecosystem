// Copyright Epic Games, Inc. All Rights Reserved.

#include "EcosystemGameMode.h"
#include "EcosystemPlayerController.h"
#include "EcosystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEcosystemGameMode::AEcosystemGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEcosystemPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}