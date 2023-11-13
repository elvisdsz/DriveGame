// Copyright Epic Games, Inc. All Rights Reserved.

#include "DriveGameWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UDriveGameWheelFront::UDriveGameWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}