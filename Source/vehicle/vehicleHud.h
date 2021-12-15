// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "vehicleHud.generated.h"


UCLASS(config = Game)
class AvehicleHud : public AHUD
{
	GENERATED_BODY()

public:
	AvehicleHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
