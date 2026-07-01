// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ASTRAEUSPawn.h"
#include "ASTRAEUSSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AASTRAEUSSportsCar : public AASTRAEUSPawn
{
	GENERATED_BODY()
	
public:

	AASTRAEUSSportsCar();
};
