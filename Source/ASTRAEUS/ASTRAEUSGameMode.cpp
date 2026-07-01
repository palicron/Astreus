// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASTRAEUSGameMode.h"
#include "ASTRAEUSPlayerController.h"

AASTRAEUSGameMode::AASTRAEUSGameMode()
{
	PlayerControllerClass = AASTRAEUSPlayerController::StaticClass();
}
