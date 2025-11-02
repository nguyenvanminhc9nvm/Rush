#pragma once
#include "CoreMinimal.h"
#include "EAbilityName.generated.h"

UENUM(BlueprintType)
enum EAbilityName: uint8
{
	Assault_Rifle_Abilities         UMETA(DisplayName = "Assault-Rifle"),
	Handgun_Abilities              UMETA(DisplayName = "Handgun"),
	SMG_Abilities                  UMETA(DisplayName = "SMG"),
	Sniper_Abilities               UMETA(DisplayName = "Sniper"),
	Shotgun_Abilities              UMETA(DisplayName = "Shotgun"),
	Rocket_Launcher_Abilities      UMETA(DisplayName = "Rocket-Launcher"),
	Grenade_Launcher_Abilities     UMETA(DisplayName = "Grenade-Launcher"),
	None_Abilities     UMETA(DisplayName = "None_Abilities")
};