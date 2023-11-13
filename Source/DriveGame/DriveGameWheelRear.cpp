// Copyright Epic Games, Inc. All Rights Reserved.

#include "DriveGameWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UDriveGameWheelRear::UDriveGameWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}