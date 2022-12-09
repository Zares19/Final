// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalGameMode.h"
#include "FinalHUD.h"
#include "FinalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinalGameMode::AFinalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFinalHUD::StaticClass();
}
