#include "RushWeaponActor.h"

#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Rush/Weapon/Library/AR01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun04MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/HandgunWeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Weapon_Information/WeaponInformationLibrary.h"

ARushWeaponActor::ARushWeaponActor(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	SocketLaser = CreateDefaultSubobject<USceneComponent>(TEXT("SocketLaser"));
	SocketLaser->SetupAttachment(WeaponMesh); 
	SocketLaser->SetRelativeLocation(FVector(0.f, 46.f, 7.f));
	SocketLaser->SetRelativeRotation(FRotator::ZeroRotator);

	SocketMagazine = CreateDefaultSubobject<USceneComponent>(TEXT("SocketMagazine"));
	SocketMagazine->SetupAttachment(WeaponMesh);
	SocketMagazine->SetRelativeLocation(FVector(0.f, 10.f, -4.f));
	SocketMagazine->SetRelativeRotation(FRotator::ZeroRotator);

	SMeshMagazine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshMagazine"));
	SMeshMagazine->SetupAttachment(SocketMagazine);

	SocketDefault = CreateDefaultSubobject<USceneComponent>(TEXT("SocketDefault"));
	SocketDefault->SetupAttachment(WeaponMesh);
	SocketDefault->SetRelativeLocation(FVector(.0f, -4.516501f, 1.138527f));
	SMeshIronSights = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshIronSights"));
	SMeshIronSights->SetupAttachment(SocketDefault);

	PivotScope = CreateDefaultSubobject<USceneComponent>(TEXT("PivotScope"));
	PivotScope->SetupAttachment(WeaponMesh);
	SocketScope = CreateDefaultSubobject<USceneComponent>(TEXT("SocketScope"));
	SocketScope->SetupAttachment(PivotScope);

	SocketMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("SocketMuzzle"));
	SocketMuzzle->SetupAttachment(WeaponMesh);

	SocketGrip = CreateDefaultSubobject<USceneComponent>(TEXT("SocketGrip"));
	SocketGrip->SetupAttachment(WeaponMesh);
	SocketGrip->SetRelativeLocation(FVector(0.f, 31.209257f	, 3.241087f));
	SMeshGrip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshGrip"));
	SMeshGrip->SetupAttachment(SocketGrip);
}

void ARushWeaponActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
}

void ARushWeaponActor::BeginPlay()
{
	Super::BeginPlay();
}

FWeaponInformationEntry ARushWeaponActor::GetWeaponInformationEntry()
{
	return UWeaponInformationLibrary::GetWeaponInformationByProperties(WeaponEquipped, ScopeEquipped, LaserEquipped, MuzzleEquipped, GripEquipped, SkinEquipped);
}

FWeaponMontageSettings ARushWeaponActor::GetWeaponMontageByName()
{
	FWeaponMontageSettings MontageSettings = FWeaponMontageSettings();
	switch (WeaponEquipped)
	{
	case Assault_Rifle_01:
	case Assault_Rifle_01_Evil:
	case Assault_Rifle_01_Tactical:
	case Assault_Rifle_01_Elite:
		MontageSettings = UAR01MontageSettingsLibrary::GetAR01MontageSettingsByName(PreviousMontageName);
		break;
	case Assault_Rifle_02:
	case Assault_Rifle_02_01:
	case Assault_Rifle_02_Elite:
	case Assault_Rifle_02_Evil:
	case Assault_Rifle_02_Forest:
	case Assault_Rifle_02_Skulls:
		MontageSettings = UAR02MontageSettingsLibrary::GetAR02MontageSettingsByName(PreviousMontageName);
		break;
	case Assault_Rifle_03:
	case Assault_Rifle_03_Elite:
	case Assault_Rifle_03_SciFi:
	case Assault_Rifle_03_Tactical:
		MontageSettings = UAR03MontageSettingsLibrary::GetAR03MontageSettingsByName(PreviousMontageName);
		break;
	case Grenade_Launcher_01:
	case Grenade_Launcher_01_AntiTank:
	case Grenade_Launcher_01_Citrus:
	case Grenade_Launcher_01_Tactical:
		MontageSettings = UGL01MontageSettingsLibrary::GetGL01MontageSettingsByName(PreviousMontageName);
		break;
	case Handgun_01:
	case Handgun_01_Neon:
	case Handgun_01_Tactical:
		MontageSettings = UHandgun01MontageSettingsLibrary::GetHandgun01MontageSettingsByName(PreviousMontageName);
		break;
	case Handgun_02:
	case Handgun_02_Stealth:
	case Handgun_02_Tactical:
		MontageSettings = UHandgun02MontageSettingsLibrary::GetHandgun02MontageSettingsByName(PreviousMontageName);
		break;
	case Handgun_03:
	case Handgun_03_Skulls:
	case Handgun_03_Tactical:
		MontageSettings = UHandgun03MontageSettingsLibrary::GetHandgun03MontageSettingsByName(PreviousMontageName);
		break;
	case Handgun_04:
	case Handgun_04_Tactical:
	case Handgun_04_Venomous:
		MontageSettings = UHandgun04MontageSettingsLibrary::GetHandgun04MontageSettingsByName(PreviousMontageName);
		break;
	case Rocket_Launcher_01:
	case Rocket_Launcher_01_Homing:
		MontageSettings = URL01MontageSettingsLibrary::GetRL01MontageSettingsByName(PreviousMontageName);
		break;
	case Shotgun_01:
	case Shotgun_01_Tactical:
	case Shotgun_01_Tech:
		MontageSettings = UShotgun01MontageSettingsLibrary::GetShotgun01MontageSettingsByName(PreviousMontageName);
		break;
	case SMG_01:
	case SMG_01_Citrus:
	case SMG_01_Tactical:
		MontageSettings = USMG01MontageSettingsLibrary::GetSMG01MontageSettingsByName(PreviousMontageName);
		break;
	case SMG_02:
	case SMG_02_Citrus:
	case SMG_02_Tactical:
		MontageSettings = USMG02MontageSettingsLibrary::GetSMG02MontageSettingsByName(PreviousMontageName);
		break;
	case SMG_03:
	case SMG_03_Tactical:
	case SMG_03_Evil:
		MontageSettings = USMG03MontageSettingsLibrary::GetSMG03MontageSettingsByName(PreviousMontageName);
		break;
	case SMG_04:
	case SMG_04_Tactical:
	case SMG_04_Modern:
		MontageSettings = USMG04MontageSettingsLibrary::GetSMG04MontageSettingsByName(PreviousMontageName);
		break;
	case SMG_05:
	case SMG_05_Armored:
	case SMG_05_Tactical:
		MontageSettings = USMG05MontageSettingsLibrary::GetSMG05MontageSettingsByName(PreviousMontageName);
		break;
	case Sniper_01:
	case Sniper_01_Hitman:
	case Sniper_01_Tactical:
		MontageSettings = USniper01MontageSettingsLibrary::GetSniper01MontageSettingsByName(PreviousMontageName);
		break;
	case Sniper_02:
	case Sniper_02_Breach:
	case Sniper_02_Tactical:
		MontageSettings = USniper02MontageSettingsLibrary::GetSniper02MontageSettingsByName(PreviousMontageName);
		break;
	case Sniper_03:
	case Sniper_03_Tactical:
	case Sniper_03_Heavy:
		MontageSettings = USniper03MontageSettingsLibrary::GetSniper03MontageSettingsByName(PreviousMontageName);
		break;
	default: ;
	}

	return MontageSettings;
}

FWeaponSound ARushWeaponActor::GetWeaponSoundByName()
{
	FWeaponSound SoundBase = FWeaponSound();
	switch (WeaponEquipped)
	{
	case Assault_Rifle_01:
	case Assault_Rifle_01_Evil:
	case Assault_Rifle_01_Tactical:
	case Assault_Rifle_01_Elite:
		SoundBase = UAR01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Assault_Rifle_02:
	case Assault_Rifle_02_01:
	case Assault_Rifle_02_Elite:
	case Assault_Rifle_02_Evil:
	case Assault_Rifle_02_Forest:
	case Assault_Rifle_02_Skulls:
		SoundBase = UAR02WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Assault_Rifle_03:
	case Assault_Rifle_03_Elite:
	case Assault_Rifle_03_SciFi:
	case Assault_Rifle_03_Tactical:
		SoundBase = UAR03WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Grenade_Launcher_01:
	case Grenade_Launcher_01_AntiTank:
	case Grenade_Launcher_01_Citrus:
	case Grenade_Launcher_01_Tactical:
		SoundBase = UGL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Handgun_01:
	case Handgun_01_Neon:
	case Handgun_01_Tactical:
	case Handgun_02:
	case Handgun_02_Stealth:
	case Handgun_02_Tactical:
	case Handgun_03:
	case Handgun_03_Skulls:
	case Handgun_03_Tactical:
	case Handgun_04:
	case Handgun_04_Tactical:
	case Handgun_04_Venomous:
		SoundBase = UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Rocket_Launcher_01:
	case Rocket_Launcher_01_Homing:
		SoundBase = URL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Shotgun_01:
	case Shotgun_01_Tactical:
	case Shotgun_01_Tech:
		SoundBase = UShotgun01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case SMG_01:
	case SMG_01_Citrus:
	case SMG_01_Tactical:
		SoundBase = USMG01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case SMG_02:
	case SMG_02_Citrus:
	case SMG_02_Tactical:
		SoundBase = USMG02WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case SMG_03:
	case SMG_03_Tactical:
	case SMG_03_Evil:
		SoundBase = USMG03WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case SMG_04:
	case SMG_04_Tactical:
	case SMG_04_Modern:
		SoundBase = USMG04WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case SMG_05:
	case SMG_05_Armored:
	case SMG_05_Tactical:
		SoundBase = USMG05WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Sniper_01:
	case Sniper_01_Hitman:
	case Sniper_01_Tactical:
		SoundBase = USniper01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Sniper_02:
	case Sniper_02_Breach:
	case Sniper_02_Tactical:
		SoundBase = USniper02WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	case Sniper_03:
	case Sniper_03_Tactical:
	case Sniper_03_Heavy:
		SoundBase = USniper03WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
		break;
	default:
		SoundBase = UAR01WeaponSoundSettingsLibrary::GetWeaponSoundByName(PreviousMontageName);
	}

	return SoundBase;
}

