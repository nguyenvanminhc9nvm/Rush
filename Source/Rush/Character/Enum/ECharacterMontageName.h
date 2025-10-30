#pragma once

#include "CoreMinimal.h"
#include "ECharacterMontageName.generated.h"

UENUM(BlueprintType)
enum ECharacterMontageName : uint8
{
	Character_Montage_Jump                    UMETA(DisplayName = "Jump"),
	Character_Montage_Fire                    UMETA(DisplayName = "Fire"),
	Character_Montage_Fire_Empty              UMETA(DisplayName = "Fire-Empty"),
	Character_Montage_Reload                  UMETA(DisplayName = "Reload"),
	Character_Montage_Reload_Empty            UMETA(DisplayName = "Reload-Empty"),
	Character_Montage_Reload_Bolt             UMETA(DisplayName = "Reload-Bolt"),
	Character_Montage_Reload_Open             UMETA(DisplayName = "Reload-Open"),
	Character_Montage_Reload_Insert           UMETA(DisplayName = "Reload-Insert"),
	Character_Montage_Reload_Close            UMETA(DisplayName = "Reload-Close"),
	Character_Montage_Inspect                 UMETA(DisplayName = "Inspect"),
	Character_Montage_Inspect_Smooth          UMETA(DisplayName = "Inspect-Smooth"),
	Character_Montage_Holster                 UMETA(DisplayName = "Holster"),
	Character_Montage_Holster_Smooth          UMETA(DisplayName = "Holster-Smooth"),
	Character_Montage_Unholster               UMETA(DisplayName = "Unholster"),
	Character_Montage_Unholster_Smooth        UMETA(DisplayName = "Unholster-Smooth"),
	Character_Montage_Throw_Grenade           UMETA(DisplayName = "Throw-Grenade"),
	Character_Montage_Throw_Grenade_Additive  UMETA(DisplayName = "Throw-Grenade-Additive"),
	Character_Montage_Knife_Attack            UMETA(DisplayName = "Knife-Attack"),
	Character_Montage_Knife_Attack_Additive   UMETA(DisplayName = "Knife-Attack-Additive"),
	Character_Montage_Attack_01               UMETA(DisplayName = "Attack-01"),
	Character_Montage_Attack_02               UMETA(DisplayName = "Attack-02"),
	Character_Montage_None               UMETA(DisplayName = "None"),
};
