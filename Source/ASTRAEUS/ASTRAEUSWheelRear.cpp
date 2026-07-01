// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASTRAEUSWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UASTRAEUSWheelRear::UASTRAEUSWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}