// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "CrazyRallyHud.generated.h"


UCLASS(config = Game)
class ACrazyRallyHud : public AHUD
{
	GENERATED_BODY()

public:
	ACrazyRallyHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
