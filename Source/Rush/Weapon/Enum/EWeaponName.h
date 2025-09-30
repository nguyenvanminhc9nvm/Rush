#pragma once

#include "CoreMinimal.h"
#include "EWeaponName.generated.h"

UENUM(BlueprintType)
enum EWeaponName : uint8
{
	// Assault Rifles
	Assault_Rifle_01                    UMETA(DisplayName = "Assault Rifle 01"),
	Assault_Rifle_01_Evil               UMETA(DisplayName = "Assault Rifle 01 Evil"),
	Assault_Rifle_01_Tactical           UMETA(DisplayName = "Assault Rifle 01 Tactical"),
	Assault_Rifle_01_Elite              UMETA(DisplayName = "Assault Rifle 01 Elite"),
	Assault_Rifle_02                    UMETA(DisplayName = "Assault Rifle 02"),
	Assault_Rifle_02_01                 UMETA(DisplayName = "Assault Rifle 02-01"),
	Assault_Rifle_02_Elite              UMETA(DisplayName = "Assault Rifle 02 Elite"),
	Assault_Rifle_02_Evil               UMETA(DisplayName = "Assault Rifle 02 Evil"),
	Assault_Rifle_02_Forest             UMETA(DisplayName = "Assault Rifle 02 Forest"),
	Assault_Rifle_02_Skulls             UMETA(DisplayName = "Assault Rifle 02 Skulls"),
	Assault_Rifle_03                    UMETA(DisplayName = "Assault Rifle 03"),
	Assault_Rifle_03_Elite              UMETA(DisplayName = "Assault Rifle 03 Elite"),
	Assault_Rifle_03_SciFi              UMETA(DisplayName = "Assault Rifle 03 SciFi"),
	Assault_Rifle_03_Tactical           UMETA(DisplayName = "Assault Rifle 03 Tactical"),

	// Grenade Launchers
	Grenade_Launcher_01                 UMETA(DisplayName = "Grenade Launcher 01"),
	Grenade_Launcher_01_AntiTank        UMETA(DisplayName = "Grenade Launcher 01 AntiTank"),
	Grenade_Launcher_01_Citrus          UMETA(DisplayName = "Grenade Launcher 01 Citrus"),
	Grenade_Launcher_01_Tactical        UMETA(DisplayName = "Grenade Launcher 01 Tactical"),

	// Handguns
	Handgun_01                          UMETA(DisplayName = "Handgun 01"),
	Handgun_01_Neon                     UMETA(DisplayName = "Handgun 01 Neon"),
	Handgun_01_Tactical                 UMETA(DisplayName = "Handgun 01 Tactical"),
	Handgun_02                          UMETA(DisplayName = "Handgun 02"),
	Handgun_02_Stealth                  UMETA(DisplayName = "Handgun 02 Stealth"),
	Handgun_02_Tactical                 UMETA(DisplayName = "Handgun 02 Tactical"),
	Handgun_03                          UMETA(DisplayName = "Handgun 03"),
	Handgun_03_Skulls                   UMETA(DisplayName = "Handgun 03 Skulls"),
	Handgun_03_Tactical                 UMETA(DisplayName = "Handgun 03 Tactical"),
	Handgun_04                          UMETA(DisplayName = "Handgun 04"),
	Handgun_04_Tactical                 UMETA(DisplayName = "Handgun 04 Tactical"),
	Handgun_04_Venomous                 UMETA(DisplayName = "Handgun 04 Venomous"),

	// Rocket Launchers
	Rocket_Launcher_01                  UMETA(DisplayName = "Rocket Launcher 01"),
	Rocket_Launcher_01_Homing           UMETA(DisplayName = "Rocket Launcher 01 Homing"),

	// Shotguns
	Shotgun_01                          UMETA(DisplayName = "Shotgun 01"),
	Shotgun_01_Tactical                 UMETA(DisplayName = "Shotgun 01 Tactical"),
	Shotgun_01_Tech                     UMETA(DisplayName = "Shotgun 01 Tech"),

	// SMGs
	SMG_01                              UMETA(DisplayName = "SMG 01"),
	SMG_01_Citrus                       UMETA(DisplayName = "SMG 01 Citrus"),
	SMG_01_Tactical                     UMETA(DisplayName = "SMG 01 Tactical"),
	SMG_02                              UMETA(DisplayName = "SMG 02"),
	SMG_02_Citrus                       UMETA(DisplayName = "SMG 02 Citrus"),
	SMG_02_Tactical                     UMETA(DisplayName = "SMG 02 Tactical"),
	SMG_03                              UMETA(DisplayName = "SMG 03"),
	SMG_03_Tactical                     UMETA(DisplayName = "SMG 03 Tactical"),
	SMG_03_Evil                         UMETA(DisplayName = "SMG 03 Evil"),
	SMG_04                              UMETA(DisplayName = "SMG 04"),
	SMG_04_Tactical                     UMETA(DisplayName = "SMG 04 Tactical"),
	SMG_04_Modern                       UMETA(DisplayName = "SMG 04 Modern"),
	SMG_05                              UMETA(DisplayName = "SMG 05"),
	SMG_05_Armored                      UMETA(DisplayName = "SMG 05 Armored"),
	SMG_05_Tactical                     UMETA(DisplayName = "SMG 05 Tactical"),

	// Snipers
	Sniper_01                           UMETA(DisplayName = "Sniper 01"),
	Sniper_01_Hitman                    UMETA(DisplayName = "Sniper 01 Hitman"),
	Sniper_01_Tactical                  UMETA(DisplayName = "Sniper 01 Tactical"),
	Sniper_02                           UMETA(DisplayName = "Sniper 02"),
	Sniper_02_Breach                    UMETA(DisplayName = "Sniper 02 Breach"),
	Sniper_02_Tactical                  UMETA(DisplayName = "Sniper 02 Tactical"),
	Sniper_03                           UMETA(DisplayName = "Sniper 03"),
	Sniper_03_Tactical                  UMETA(DisplayName = "Sniper 03 Tactical"),
	Sniper_03_Heavy                     UMETA(DisplayName = "Sniper 03 Heavy")
};