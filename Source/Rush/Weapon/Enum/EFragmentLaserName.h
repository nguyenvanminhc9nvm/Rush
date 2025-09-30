#pragma once

#include "CoreMinimal.h"
#include "EFragmentLaserName.generated.h"

UENUM(BlueprintType)
enum EFragmentLaserName: uint8
{
	Laser_Hidden UMETA(DisplayName = "Hidden"),
	Flashlight UMETA(DisplayName = "Flashlight"),
	LaserSight UMETA(DisplayName = "Lasersight")
};