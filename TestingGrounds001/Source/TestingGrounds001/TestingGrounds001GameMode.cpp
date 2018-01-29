// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGrounds001GameMode.h"
#include "TestingGrounds001HUD.h"
#include "TestingGrounds001Character.h"
#include "UObject/ConstructorHelpers.h"

ATestingGrounds001GameMode::ATestingGrounds001GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGrounds001HUD::StaticClass();
}
