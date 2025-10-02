#pragma once

#include "CoreMinimal.h"
#include "EWeaponMontageName.generated.h"

UENUM(BlueprintType)
enum EWeaponMontageName : uint8
{
    Fire                    UMETA(DisplayName = "Fire"),
    Fire_Empty              UMETA(DisplayName = "Fire-Empty"),
    Reload                  UMETA(DisplayName = "Reload"),
    Reload_Empty            UMETA(DisplayName = "Reload-Empty"),
    Inspect                 UMETA(DisplayName = "Inspect"),
    Holster                 UMETA(DisplayName = "Holster"),
    Unholster               UMETA(DisplayName = "Unholster")
};
