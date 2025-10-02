#pragma once

#include "CoreMinimal.h"
#include "EWeaponInformationName.generated.h"

UENUM(BlueprintType)
enum EWeaponInformationName : uint8
{
	Assault_Rifle_01 	  UMETA(DisplayName = "Assault-Rifle-01"),
	Assault_Rifle_01_Custom 	  UMETA(DisplayName = "Assault-Rifle-01-Custom"),
	Assault_Rifle_02 	  UMETA(DisplayName = "Assault-Rifle-02"),
	Assault_Rifle_02_Custom 	  UMETA(DisplayName = "Assault-Rifle-02-Custom"),
	Assault_Rifle_03 	  UMETA(DisplayName = "Assault-Rifle-03"),
	Assault_Rifle_03_Custom 	  UMETA(DisplayName = "Assault-Rifle-03-Custom"),
	Handgun_01 	          UMETA(DisplayName = "Handgun-01"),
	Handgun_01_Custom 	  UMETA(DisplayName = "Handgun-01-Custom"),
	Handgun_02 	          UMETA(DisplayName = "Handgun-02"),
	Handgun_02_Custom 	  UMETA(DisplayName = "Handgun-02-Custom"),
	Handgun_03 	          UMETA(DisplayName = "Handgun-03"),
	Handgun_03_Custom 	  UMETA(DisplayName = "Handgun-03-Custom"),
	Handgun_04 	          UMETA(DisplayName = "Handgun-04"),
	Handgun_04_Custom 	  UMETA(DisplayName = "Handgun-04-Custom"),
	Launcher_Rocket_01 UMETA(DisplayName = "Launcher-Rocket-01"),
	Launcher_Rocket_01_Custom UMETA(DisplayName = "Launcher-Rocket-01-Custom"),
	Launcher_Grenade_01 UMETA(DisplayName = "Launcher-Grenade-01"),
	Launcher_Grenade_01_Custom UMETA(DisplayName = "Launcher-Grenade-01-Custom"),
	Shotgun_01 UMETA(DisplayName = "Shotgun-01"),
	Shotgun_01_Custom UMETA(DisplayName = "Shotgun-01-Custom"),
	SMG_01 	          UMETA(DisplayName = "SMG-01"),
	SMG_01_Custom 	  UMETA(DisplayName = "SMG-01-Custom"),
	SMG_02 	          UMETA(DisplayName = "SMG-02"),
	SMG_02_Custom 	  UMETA(DisplayName = "SMG-02-Custom"),
	SMG_03 	          UMETA(DisplayName = "SMG-03"),
	SMG_03_Custom 	  UMETA(DisplayName = "SMG-03-Custom"),
	SMG_04 	          UMETA(DisplayName = "SMG-04"),
	SMG_04_Custom 	  UMETA(DisplayName = "SMG-04-Custom"),
	SMG_05 	          UMETA(DisplayName = "SMG-05"),
	SMG_05_Custom 	  UMETA(DisplayName = "SMG-05-Custom"),
	Sniper_01 	          UMETA(DisplayName = "Sniper-01"),
	Sniper_01_Custom 	  UMETA(DisplayName = "Sniper-01-Custom"),
	Sniper_02 	          UMETA(DisplayName = "Sniper-02"),
	Sniper_02_Custom 	  UMETA(DisplayName = "Sniper-02-Custom"),
	Sniper_03 	          UMETA(DisplayName = "Sniper-03"),
	Sniper_03_Custom 	  UMETA(DisplayName = "Sniper-03-Custom")
};