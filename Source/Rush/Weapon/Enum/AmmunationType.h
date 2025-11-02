#pragma once

#include "CoreMinimal.h"
#include "AmmunationType.generated.h"

UENUM(Blueprintable, BlueprintType)
enum EAmmunationType: uint8
{
	SMG 	  UMETA(DisplayName = "SMG"),
	AssaultRifle   UMETA(DisplayName = "AssaultRifle"),
	Handgun	UMETA(DisplayName = "Handgun"),
	Grenade	UMETA(DisplayName = "Grenade"),
	Launcher	UMETA(DisplayName = "Launcher"),
	Sniper 	UMETA(DisplayName = "Sniper"),
	Shotgun	UMETA(DisplayName = "Shotgun"),
};