// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnCppMobileGameMode.h"
#include "LearnCppMobilePlayerController.h"
#include "LearnCppMobileCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnCppMobileGameMode::ALearnCppMobileGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALearnCppMobilePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}