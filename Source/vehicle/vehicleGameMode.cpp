// Copyright Epic Games, Inc. All Rights Reserved.

#include "vehicleGameMode.h"
#include "vehiclePawn.h"
#include "vehicleHud.h"

AvehicleGameMode::AvehicleGameMode()
{
	DefaultPawnClass = AvehiclePawn::StaticClass();
	HUDClass = AvehicleHud::StaticClass();
}
