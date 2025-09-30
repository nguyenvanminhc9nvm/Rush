#pragma once

#include "CoreMinimal.h"
#include "EWeaponSkinName.generated.h"

UENUM(BlueprintType)
enum EWeaponSkinName: uint8
{
	DefaultAssaultRifle01 UMETA(DisplayName = "Default-Assault-Rifle-01"),
	DefaultAssaultRifle02 UMETA(DisplayName = "Default-Assault-Rifle-02"),
	DefaultAssaultRifle03 UMETA(DisplayName = "Default-Assault-Rifle-03"),
	DefaultHandgun01 UMETA(DisplayName = "Default-Handgun-01"),
	DefaultHandgun02 UMETA(DisplayName = "Default-Handgun-02"),
	DefaultHandgun03 UMETA(DisplayName = "Default-Handgun-03"),
	DefaultHandgun04 UMETA(DisplayName = "Default-Handgun-04"),
	DefaultLauncherGrenade01 UMETA(DisplayName = "Default-Launcher-Grenade-01"),
	DefaultLauncherRocket01 UMETA(DisplayName = "Default-Launcher-Rocket-01"),
	DefaultSMG01 UMETA(DisplayName = "Default-SMG-01"),
	DefaultSMG02 UMETA(DisplayName = "Default-SMG-02"),
	DefaultSMG03 UMETA(DisplayName = "Default-SMG-03"),
	DefaultSMG04 UMETA(DisplayName = "Default-SMG-04"),
	DefaultSniper02 UMETA(DisplayName = "Default-Sniper-02"),
	DefaultSniper03 UMETA(DisplayName = "Default-Sniper-03"),
	CustomElite UMETA(DisplayName = "Custom-Elite"),
	CustomForest UMETA(DisplayName = "Custom-Forest"),
	CustomSciFi UMETA(DisplayName = "Custom-SciFi"),
	CustomAntiTank UMETA(DisplayName = "Custom-Anti-Tank"),
	CustomNeon UMETA(DisplayName = "Custom-Neon"),
	CustomNeonSpecial UMETA(DisplayName = "Custom-Neon-Special"),
	CustomStealth UMETA(DisplayName = "Custom-Stealth"),
	CustomVenomous UMETA(DisplayName = "Custom-Venomous"),
	CustomHoming UMETA(DisplayName = "Custom-Homing"),
	CustomTech UMETA(DisplayName = "Custom-Tech"),
	CustomCitrus UMETA(DisplayName = "Custom-Citrus"),
	CustomTactical UMETA(DisplayName = "Custom-Tactical"),
	CustomEvil UMETA(DisplayName = "Custom-Evil"),
	CustomModern UMETA(DisplayName = "Custom-Modern"),
	CustomArmored UMETA(DisplayName = "Custom-Armored"),
	CustomHitman UMETA(DisplayName = "Custom-Hitman"),
	CustomBreach UMETA(DisplayName = "Custom-Breach"),
	CustomLava UMETA(DisplayName = "Custom-Lava"),
	WorstBrassEver UMETA(DisplayName = "Worst-Brass-Ever"),
	Invisible UMETA(DisplayName = "Invisible")
};
