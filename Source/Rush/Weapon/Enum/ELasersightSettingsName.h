#pragma once

#include "CoreMinimal.h"
#include "ELasersightSettingsName.generated.h"

UENUM(BlueprintType)
enum ELasersightSettingsName : uint8
{
    Laser_Normal = 0 UMETA(DisplayName = "Normal"),
    Laser_Neon = 1 UMETA(DisplayName = "Neon"),
    Laser_Yellow = 2 UMETA(DisplayName = "Yellow"),
    Laser_Tactical = 3 UMETA(DisplayName = "Tactical"),
    Laser_Evil = 4 UMETA(DisplayName = "Evil"),
    Laser_Venomous = 5 UMETA(DisplayName = "Venomous"),
};
