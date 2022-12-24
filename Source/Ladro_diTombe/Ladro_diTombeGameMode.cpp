// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ladro_diTombeGameMode.h"
#include "Ladro_diTombeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALadro_diTombeGameMode::ALadro_diTombeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
