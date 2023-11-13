// Copyright Epic Games, Inc. All Rights Reserved.

#include "DriveGameGameMode.h"
#include "DriveGamePlayerController.h"

ADriveGameGameMode::ADriveGameGameMode()
{
	PlayerControllerClass = ADriveGamePlayerController::StaticClass();
}
