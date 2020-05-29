// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrazyRallyGameMode.h"
#include "CrazyRallyPawn.h"
#include "CrazyRallyHud.h"

ACrazyRallyGameMode::ACrazyRallyGameMode()
{
	DefaultPawnClass = ACrazyRallyPawn::StaticClass();
	HUDClass = ACrazyRallyHud::StaticClass();
}
