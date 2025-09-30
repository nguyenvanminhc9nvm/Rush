#pragma once

#include "CoreMinimal.h"
#include "EGripName.generated.h"

UENUM(BlueprintType)
enum EGripName: uint8
{
	Grip_Hidden UMETA(DisplayName = "Hidden"),
	Grip01 UMETA(DisplayName = "Grip-01"),
	Bipod01 UMETA(DisplayName = "Bipod-01"),
	Bipod02 UMETA(DisplayName = "Bipod-02")
};
