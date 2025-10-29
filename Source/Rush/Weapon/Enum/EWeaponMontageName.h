#pragma once

#include "CoreMinimal.h"
#include "EWeaponMontageName.generated.h"

UENUM(BlueprintType)
enum EWeaponMontageName : uint8
{
    Weapon_Fire                    UMETA(DisplayName = "Fire"),
    Weapon_Fire_Empty              UMETA(DisplayName = "Fire-Empty"),
    Weapon_Reload                  UMETA(DisplayName = "Reload"),
    Weapon_Reload_Empty            UMETA(DisplayName = "Reload-Empty"),
    Weapon_Inspect                 UMETA(DisplayName = "Inspect"),
    Weapon_Holster                 UMETA(DisplayName = "Holster"),
    Weapon_Unholster               UMETA(DisplayName = "Unholster"),
    Weapon_Montage_None               UMETA(DisplayName = "Weapon_None")
};





