#pragma once

#include "CoreMinimal.h"
#include "EWeaponIconName.generated.h"

UENUM(BlueprintType)
enum EWeaponIconName : uint8
{
	// Weapon Icons
	Body                                    UMETA(DisplayName = "Body"),
	Silencer_01                             UMETA(DisplayName = "Silencer-01"),
	Silencer_02                             UMETA(DisplayName = "Silencer-02"),
	Silencer_03                             UMETA(DisplayName = "Silencer-03"),
	Scope_01                                UMETA(DisplayName = "Scope-01"),
	Scope_02                                UMETA(DisplayName = "Scope-02"),
	Scope_03                                UMETA(DisplayName = "Scope-03"),
	Scope_04                                UMETA(DisplayName = "Scope-04"),
	Scope_05                                UMETA(DisplayName = "Scope-05"),
	Scope_06                                UMETA(DisplayName = "Scope-06"),
	Scope_07                                UMETA(DisplayName = "Scope-07"),
	Scope_08                                UMETA(DisplayName = "Scope-08"),
	Grip_01                                 UMETA(DisplayName = "Grip-01"),
	Bipod_01                                UMETA(DisplayName = "Bipod-01"),
	Bipod_02                                UMETA(DisplayName = "Bipod-02"),
	Flashlight                              UMETA(DisplayName = "Flashlight"),
	Lasersight                              UMETA(DisplayName = "Lasersight"),
	Magazine                                UMETA(DisplayName = "Magazine"),
	Scope_Default                           UMETA(DisplayName = "Scope-Default"),
	Scope_Launcher_Grenade_01               UMETA(DisplayName = "Scope-Launcher-Grenade-01")
};
