#pragma once

#include "CoreMinimal.h"
#include "EWeaponMovementName.generated.h"

UENUM(BlueprintType)
enum EWeaponMovementName : uint8
{
	// Weapon Movement Types
	Assault_Rifle_Movement                    UMETA(DisplayName = "Assault Rifle Movement"),
	Assault_Rifle_Jetpack_Movement            UMETA(DisplayName = "Assault Rifle Jetpack Movement"),
	Handgun_Movement                          UMETA(DisplayName = "Handgun Movement"),
	Launcher_Movement                         UMETA(DisplayName = "Launcher Movement"),
	Launcher_Heavy_Movement                   UMETA(DisplayName = "Launcher Heavy Movement"),
	Shotgun_Movement                          UMETA(DisplayName = "Shotgun Movement"),
	SMG_Movement                              UMETA(DisplayName = "SMG Movement"),
	Sniper_Movement                           UMETA(DisplayName = "Sniper Movement"),
	Sniper_Heavy_Movement                     UMETA(DisplayName = "Sniper Heavy Movement")
};
