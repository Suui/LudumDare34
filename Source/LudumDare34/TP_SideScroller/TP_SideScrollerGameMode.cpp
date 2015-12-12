// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "LudumDare34.h"
#include "TP_SideScrollerGameMode.h"
#include "TP_SideScrollerCharacter.h"

ATP_SideScrollerGameMode::ATP_SideScrollerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
