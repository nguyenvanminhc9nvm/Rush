#pragma once

#include "CoreMinimal.h"
#include "EFragmentLaserName.generated.h"

UENUM(BlueprintType)
enum EFragmentLaserName: uint8
{
	Fragment_Laser_Hidden UMETA(DisplayName = "Hidden"),
	Fragment_Flashlight UMETA(DisplayName = "Flashlight"),
	Fragment_LaserSight UMETA(DisplayName = "Lasersight")
};