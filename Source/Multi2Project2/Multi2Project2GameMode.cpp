// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multi2Project2GameMode.h"
#include "Multi2Project2Character.h"
#include "UObject/ConstructorHelpers.h"

AMulti2Project2GameMode::AMulti2Project2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
