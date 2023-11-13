// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DriveGamePawn.h"
#include "DriveGameSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class DRIVEGAME_API ADriveGameSportsCar : public ADriveGamePawn
{
	GENERATED_BODY()
	
public:

	ADriveGameSportsCar();
};
