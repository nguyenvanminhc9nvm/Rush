#pragma once

#include "CoreMinimal.h"
#include "ECharacterMontageName.generated.h"

UENUM(BlueprintType)
enum ECharacterMontageName : uint8
{
	Jump                    UMETA(DisplayName = "Jump"),
	Fire                    UMETA(DisplayName = "Fire"),
	Fire_Empty              UMETA(DisplayName = "Fire-Empty"),
	Reload                  UMETA(DisplayName = "Reload"),
	Reload_Empty            UMETA(DisplayName = "Reload-Empty"),
	Reload_Bolt             UMETA(DisplayName = "Reload-Bolt"),
	Reload_Open             UMETA(DisplayName = "Reload-Open"),
	Reload_Insert           UMETA(DisplayName = "Reload-Insert"),
	Reload_Close            UMETA(DisplayName = "Reload-Close"),
	Inspect                 UMETA(DisplayName = "Inspect"),
	Inspect_Smooth          UMETA(DisplayName = "Inspect-Smooth"),
	Holster                 UMETA(DisplayName = "Holster"),
	Holster_Smooth          UMETA(DisplayName = "Holster-Smooth"),
	Unholster               UMETA(DisplayName = "Unholster"),
	Unholster_Smooth        UMETA(DisplayName = "Unholster-Smooth"),
	Throw_Grenade           UMETA(DisplayName = "Throw-Grenade"),
	Throw_Grenade_Additive  UMETA(DisplayName = "Throw-Grenade-Additive"),
	Knife_Attack            UMETA(DisplayName = "Knife-Attack"),
	Knife_Attack_Additive   UMETA(DisplayName = "Knife-Attack-Additive")
};
