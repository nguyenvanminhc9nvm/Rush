#pragma once

#include "CoreMinimal.h"
#include "EBoltState.generated.h"

UENUM(Blueprintable)
enum EBoltState : uint8
{
	None 	  UMETA(DisplayName = "None"),
	Queued   UMETA(DisplayName = "Queued"),
	Forced   UMETA(DisplayName = "Forced"),
};