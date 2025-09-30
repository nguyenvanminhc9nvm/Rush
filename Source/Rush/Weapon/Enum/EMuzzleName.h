#pragma once

#include "CoreMinimal.h"
#include "EMuzzleName.generated.h"

UENUM(BlueprintType)
enum EMuzzleName: uint8
{
	Muzzle_Hidden UMETA(DisplayName = "Hidden"),
	Muzzle_Silencer01 UMETA(DisplayName = "Silencer-01"),
	Muzzle_Silencer02 UMETA(DisplayName = "Silencer-02"),
	Muzzle_Silencer03 UMETA(DisplayName = "Silencer-03")
};
