// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASTRAEUSWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UASTRAEUSWheelFront::UASTRAEUSWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}