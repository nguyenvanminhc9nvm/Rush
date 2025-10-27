#include "WeaponInformationLibrary.h"

#include "Blueprint/UserWidget.h"
#include "Rush/Ability/AbilitiesSettingsLibrary.h"
#include "Rush/Ability/Enum/EAbilityName.h"
#include "Rush/Character/Library/CharacterAR01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR02MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR02PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR03MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR03PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun02MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun02PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun03MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun03PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun04MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun04PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterRocketLauncher01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterRocketLauncher01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterGL01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterGL01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterShotgun01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterShotgun01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG02MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG02PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG03MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG03PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG04MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG04PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG05MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG05PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper01MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper01PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper02MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper02PoseSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper03MontageSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper03PoseSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/AR01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02GripSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/AR02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03GripSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/AR03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun02GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun03GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun04GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun04MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun04MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Handgun04WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/HandgunWeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/RL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/GL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/GripBPLibrary.h"
#include "Rush/Weapon/Library/LaserBPLibrary.h"
#include "Rush/Weapon/Library/Shotgun01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Shotgun01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02GripSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03GripSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04GripSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG04WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05GripSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/SMG05WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03GripSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03MontageSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Library/Sniper03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Library/LaserSettingsLibrary.h"
#include "Rush/Weapon/Library/LasersightSettingsBPLibrary.h"
#include "Rush/Weapon/Library/MuzzleBPLibrary.h"
#include "Rush/Weapon/Library/ScopeBPLibrary.h"
#include "Rush/Weapon/Library/ScopeSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponAnimationSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponMovementSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponSettingsLibrary.h"

static TMap<EWeaponName, FWeaponInformationEntry> GWeaponInformationMap;

static void InitWeaponInformation()
{
	if (GWeaponInformationMap.Num() > 0) return;

	FWeaponInformationEntry AssaultRifle01;
	AssaultRifle01.Name = EWeaponName::Assault_Rifle_01;
	AssaultRifle01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));

	// scope
	AssaultRifle01.ScopeEntry = UScopeBPLibrary::GetScopeByName(EWeaponIconName::Scope_Default);
	AssaultRifle01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(AssaultRifle01.ScopeEntry.Name);
	AssaultRifle01.ScopeIcon = UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle01.ScopeEntry.Name);

	// laser
	AssaultRifle01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(EWeaponIconName::Lasersight);
	AssaultRifle01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(AssaultRifle01.LaserEntry.Name);
	AssaultRifle01.LaserIcon = UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle01.LaserEntry.Name);
	AssaultRifle01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);

	// muzzle
	AssaultRifle01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	AssaultRifle01.MuzzleSettingsEntry = UAR01MuzzleSettingsLibrary::GetMuzzleSettingsByName(AssaultRifle01.MuzzleEntry.Name);
	AssaultRifle01.MuzzleIcon = UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle01.MuzzleEntry.Name);

	// grip
	AssaultRifle01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	AssaultRifle01.GripSettingEntry = UAR01GripSettingsLibrary::GetGripSettingsByName(AssaultRifle01.GripEntry.Name);
	AssaultRifle01.GripIcon = UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle01.GripEntry.Name);

	// other settings
	AssaultRifle01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_01);
	AssaultRifle01.CharacterPoseSettings = UCharacterAR01PoseSettingsLibrary::GetAllCharacterAR01PoseSettings();
	AssaultRifle01.CharacterMontageSettings = UCharacterAR01MontageSettingsLibrary::GetAllCharacterAR01MontageSettings();
	AssaultRifle01.WeaponMontage = UAR01MontageSettingsLibrary::GetAllAR01MontageSettings();
	AssaultRifle01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_01);
	AssaultRifle01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);
	AssaultRifle01.WeaponIconSettings = UAR01WeaponIconSettingsLibrary::GetAllAR01WeaponIcons();
	AssaultRifle01.WeaponSoundSettings = UAR01WeaponSoundSettingsLibrary::GetAllAR01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Assault_Rifle_01, AssaultRifle01);

	FWeaponInformationEntry AssaultRifle02;
	AssaultRifle02.Name = EWeaponName::Assault_Rifle_02;
	AssaultRifle02.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	AssaultRifle02.ScopeEntry = UScopeBPLibrary::GetScopeByName(EWeaponIconName::Scope_Default);
	AssaultRifle02.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(AssaultRifle02.ScopeEntry.Name);
	AssaultRifle02.ScopeIcon = UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle02.ScopeEntry.Name);

	// Laser
	AssaultRifle02.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	AssaultRifle02.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(AssaultRifle02.LaserEntry.Name);
	AssaultRifle02.LaserIcon = UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle02.LaserEntry.Name);
	AssaultRifle02.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);

	// Muzzle
	AssaultRifle02.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	AssaultRifle02.MuzzleSettingsEntry = UAR02MuzzleSettingsLibrary::GetAR02MuzzleSettingsByName(AssaultRifle02.MuzzleEntry.Name);
	AssaultRifle02.MuzzleIcon = UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle02.MuzzleEntry.Name);

	// Grip
	AssaultRifle02.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	AssaultRifle02.GripSettingEntry = UAR02GripSettingsLibrary::GetAR02GripSettingsByName(AssaultRifle02.GripEntry.Name);
	AssaultRifle02.GripIcon = UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle02.GripEntry.Name);

	// Other Settings
	AssaultRifle02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_02);
	AssaultRifle02.CharacterPoseSettings = UCharacterAR02PoseSettingsLibrary::GetAllCharacterAR02PoseSettings();
	AssaultRifle02.CharacterMontageSettings = UCharacterAR02MontageSettingsLibrary::GetAllCharacterAR02MontageSettings();
	AssaultRifle02.WeaponMontage = UAR02MontageSettingsLibrary::GetAllAR02MontageSettings();
	AssaultRifle02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_02);
	AssaultRifle02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);
	AssaultRifle02.WeaponIconSettings = UAR02WeaponIconSettingsLibrary::GetAllAR02WeaponIcons();
	AssaultRifle02.WeaponSoundSettings = UAR02WeaponSoundSettingsLibrary::GetAllAR02WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Assault_Rifle_02, AssaultRifle02);

	FWeaponInformationEntry AssaultRifle03;
	AssaultRifle03.Name = EWeaponName::Assault_Rifle_03;
	AssaultRifle03.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	AssaultRifle03.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	AssaultRifle03.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(AssaultRifle03.ScopeEntry.Name);
	AssaultRifle03.ScopeIcon = UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle03.ScopeEntry.Name);
	 
	AssaultRifle03.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	AssaultRifle03.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(AssaultRifle03.LaserEntry.Name);
	AssaultRifle03.LaserIcon = UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle03.LaserEntry.Name);
	AssaultRifle03.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	AssaultRifle03.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	AssaultRifle03.MuzzleSettingsEntry = UAR03MuzzleSettingsLibrary::GetAR03MuzzleSettingsByName(AssaultRifle03.MuzzleEntry.Name);
	AssaultRifle03.MuzzleIcon = UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle03.MuzzleEntry.Name);
	AssaultRifle03.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	AssaultRifle03.GripSettingEntry = UAR03GripSettingsLibrary::GetAR03GripSettingsByName(AssaultRifle03.GripEntry.Name);
	AssaultRifle03.GripIcon = UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(AssaultRifle03.GripEntry.Name);
	AssaultRifle03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_03);
	AssaultRifle03.CharacterPoseSettings = UCharacterAR03PoseSettingsLibrary::GetAllCharacterAR03PoseSettings();
	AssaultRifle03.CharacterMontageSettings = UCharacterAR03MontageSettingsLibrary::GetAllCharacterAR03MontageSettings();
	AssaultRifle03.WeaponMontage = UAR03MontageSettingsLibrary::GetAllAR03MontageSettings();
	AssaultRifle03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_03);
	AssaultRifle03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);
	AssaultRifle03.WeaponIconSettings = UAR03WeaponIconSettingsLibrary::GetAllAR03WeaponIcons();
	AssaultRifle03.WeaponSoundSettings = UAR03WeaponSoundSettingsLibrary::GetAllAR03WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Assault_Rifle_03, AssaultRifle03);

	FWeaponInformationEntry Handgun01;
	Handgun01.Name = EWeaponName::Handgun_01;
	Handgun01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_02_01.WBP_LPSP_Crosshair_Classic_02_01_C"));
	// Scope
	Handgun01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Handgun01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Handgun01.ScopeEntry.Name);
	Handgun01.ScopeIcon = UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun01.ScopeEntry.Name);

	Handgun01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Handgun01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Handgun01.LaserEntry.Name);
	Handgun01.LaserIcon = UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun01.LaserEntry.Name);
	Handgun01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Handgun01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Handgun01.MuzzleSettingsEntry = UHandgun01MuzzleSettingsLibrary::GetHandgun01MuzzleSettingsByName(Handgun01.MuzzleEntry.Name);
	Handgun01.MuzzleIcon = UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun01.MuzzleEntry.Name);
	Handgun01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Handgun01.GripSettingEntry = UHandgun01GripSettingsLibrary::GetHandgun01GripSettingsByName(Handgun01.GripEntry.Name);
	Handgun01.GripIcon = UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun01.GripEntry.Name);
	Handgun01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_01);
	Handgun01.CharacterPoseSettings = UCharacterHandgun01PoseSettingsLibrary::GetAllCharacterHandgun01PoseSettings();
	Handgun01.CharacterMontageSettings = UCharacterHandgun01MontageSettingsLibrary::GetAllCharacterHandgun01MontageSettings();
	Handgun01.WeaponMontage = UHandgun01MontageSettingsLibrary::GetAllHandgun01MontageSettings();
	Handgun01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_01);
	Handgun01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun01.WeaponIconSettings = UHandgun01WeaponIconSettingsLibrary::GetAllHandgun01WeaponIcons();
	Handgun01.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetAllHandgunWeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Handgun_01, Handgun01);

	FWeaponInformationEntry Handgun02;
	Handgun02.Name = EWeaponName::Handgun_02;
	Handgun02.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_02_01.WBP_LPSP_Crosshair_Classic_02_01_C"));
	// Scope
	Handgun02.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Handgun02.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Handgun02.ScopeEntry.Name);
	Handgun02.ScopeIcon = UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun02.ScopeEntry.Name);
	
	Handgun02.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Handgun02.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Handgun02.LaserEntry.Name);
	Handgun02.LaserIcon = UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun02.LaserEntry.Name);
	Handgun02.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Handgun02.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Handgun02.MuzzleSettingsEntry = UHandgun02MuzzleSettingsLibrary::GetHandgun02MuzzleSettingsByName(Handgun02.MuzzleEntry.Name);
	Handgun02.MuzzleIcon = UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun02.MuzzleEntry.Name);
	Handgun02.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Handgun02.GripSettingEntry = UHandgun02GripSettingsLibrary::GetHandgun02GripSettingsByName(Handgun02.GripEntry.Name);
	Handgun02.GripIcon = UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun02.GripEntry.Name);
	Handgun02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_02);
	Handgun02.CharacterPoseSettings = UCharacterHandgun02PoseSettingsLibrary::GetAllCharacterHandgun02PoseSettings();
	Handgun02.CharacterMontageSettings = UCharacterHandgun02MontageSettingsLibrary::GetAllCharacterHandgun02MontageSettings();
	Handgun02.WeaponMontage = UHandgun02MontageSettingsLibrary::GetAllHandgun02MontageSettings();
	Handgun02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_02);
	Handgun02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun02.WeaponIconSettings = UHandgun02WeaponIconSettingsLibrary::GetAllHandgun02WeaponIcons();
	Handgun02.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetAllHandgunWeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Handgun_02, Handgun02);

	FWeaponInformationEntry Handgun03;
	Handgun03.Name = EWeaponName::Handgun_03;
	Handgun03.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_02_01.WBP_LPSP_Crosshair_Classic_02_01_C"));
	// Scope
	Handgun03.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Handgun03.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Handgun03.ScopeEntry.Name);
	Handgun03.ScopeIcon = UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun03.ScopeEntry.Name);
	
	Handgun03.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Handgun03.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Handgun03.LaserEntry.Name);
	Handgun03.LaserIcon = UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun03.LaserEntry.Name);
	Handgun03.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Handgun03.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Handgun03.MuzzleSettingsEntry = UHandgun03MuzzleSettingsLibrary::GetHandgun03MuzzleSettingsByName(Handgun03.MuzzleEntry.Name);
	Handgun03.MuzzleIcon = UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun03.MuzzleEntry.Name);
	Handgun03.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Handgun03.GripSettingEntry = UHandgun03GripSettingsLibrary::GetHandgun03GripSettingsByName(Handgun03.GripEntry.Name);
	Handgun03.GripIcon = UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun03.GripEntry.Name);
	Handgun03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_03);
	Handgun03.CharacterPoseSettings = UCharacterHandgun03PoseSettingsLibrary::GetAllCharacterHandgun03PoseSettings();
	Handgun03.CharacterMontageSettings = UCharacterHandgun03MontageSettingsLibrary::GetAllCharacterHandgun03MontageSettings();
	Handgun03.WeaponMontage = UHandgun03MontageSettingsLibrary::GetAllHandgun03MontageSettings();
	Handgun03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_03);
	Handgun03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun03.WeaponIconSettings = UHandgun03WeaponIconSettingsLibrary::GetAllHandgun03WeaponIcons();
	Handgun03.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetAllHandgunWeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Handgun_03, Handgun03);

	FWeaponInformationEntry Handgun04;
	Handgun04.Name = EWeaponName::Handgun_04;
	Handgun04.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_02_01.WBP_LPSP_Crosshair_Classic_02_01_C"));
	// Scope
	Handgun04.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Handgun04.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Handgun04.ScopeEntry.Name);
	Handgun04.ScopeIcon = UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun04.ScopeEntry.Name);
	
	Handgun04.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Handgun04.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Handgun04.LaserEntry.Name);
	Handgun04.LaserIcon = UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun04.LaserEntry.Name);
	Handgun04.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Handgun04.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Handgun04.MuzzleSettingsEntry = UHandgun04MuzzleSettingsLibrary::GetHandgun04MuzzleSettingsByName(Handgun04.MuzzleEntry.Name);
	Handgun04.MuzzleIcon = UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun04.MuzzleEntry.Name);
	Handgun04.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Handgun04.GripSettingEntry = UHandgun04GripSettingsLibrary::GetHandgun04GripSettingsByName(Handgun04.GripEntry.Name);
	Handgun04.GripIcon = UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(Handgun04.GripEntry.Name);
	Handgun04.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_04);
	Handgun04.CharacterPoseSettings = UCharacterHandgun04PoseSettingsLibrary::GetAllCharacterHandgun04PoseSettings();
	Handgun04.CharacterMontageSettings = UCharacterHandgun04MontageSettingsLibrary::GetAllCharacterHandgun04MontageSettings();
	Handgun04.WeaponMontage = UHandgun04MontageSettingsLibrary::GetAllHandgun04MontageSettings();
	Handgun04.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_04);
	Handgun04.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun04.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun04.WeaponIconSettings = UHandgun04WeaponIconSettingsLibrary::GetAllHandgun04WeaponIcons();
	Handgun04.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetAllHandgunWeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Handgun_04, Handgun04);

	FWeaponInformationEntry RocketLauncher01;
	RocketLauncher01.Name = EWeaponName::Rocket_Launcher_01;
	RocketLauncher01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	RocketLauncher01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	RocketLauncher01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(RocketLauncher01.ScopeEntry.Name);
	RocketLauncher01.ScopeIcon = URL01WeaponIconSettingsLibrary::GetWeaponIconByName(RocketLauncher01.ScopeEntry.Name);
	
	RocketLauncher01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(EWeaponIconName::NoneHidden);
	RocketLauncher01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(RocketLauncher01.LaserEntry.Name);
	RocketLauncher01.LaserIcon = URL01WeaponIconSettingsLibrary::GetWeaponIconByName(RocketLauncher01.LaserEntry.Name);
	RocketLauncher01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	RocketLauncher01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	RocketLauncher01.MuzzleSettingsEntry = URL01MuzzleSettingsLibrary::GetRL01MuzzleSettingsByName(RocketLauncher01.MuzzleEntry.Name);
	RocketLauncher01.MuzzleIcon = URL01WeaponIconSettingsLibrary::GetWeaponIconByName(RocketLauncher01.MuzzleEntry.Name);
	RocketLauncher01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	RocketLauncher01.GripSettingEntry = URL01GripSettingsLibrary::GetRL01GripSettingsByName(RocketLauncher01.GripEntry.Name);
	RocketLauncher01.GripIcon = URL01WeaponIconSettingsLibrary::GetWeaponIconByName(RocketLauncher01.GripEntry.Name);
	RocketLauncher01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Rocket_Launcher_01);
	RocketLauncher01.CharacterPoseSettings = UCharacterRocketLauncher01PoseSettingsLibrary::GetAllCharacterRocketLauncher01PoseSettings();
	RocketLauncher01.CharacterMontageSettings = UCharacterRocketLauncher01MontageSettingsLibrary::GetAllCharacterRocketLauncher01MontageSettings();
	RocketLauncher01.WeaponMontage = URL01MontageSettingsLibrary::GetAllRL01MontageSettings();
	RocketLauncher01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Rocket_Launcher_01);
	RocketLauncher01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Rocket_Launcher_Abilities);
	RocketLauncher01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Launcher_Heavy_Movement);
	RocketLauncher01.WeaponIconSettings = URL01WeaponIconSettingsLibrary::GetAllRL01WeaponIcons();
	RocketLauncher01.WeaponSoundSettings = URL01WeaponSoundSettingsLibrary::GetAllRL01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Rocket_Launcher_01, RocketLauncher01);

	FWeaponInformationEntry GrenadeLauncher01;
	GrenadeLauncher01.Name = EWeaponName::Grenade_Launcher_01;
	GrenadeLauncher01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	GrenadeLauncher01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	GrenadeLauncher01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(GrenadeLauncher01.ScopeEntry.Name);
	GrenadeLauncher01.ScopeIcon = UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(GrenadeLauncher01.ScopeEntry.Name);
	
	GrenadeLauncher01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(NoneHidden);
	GrenadeLauncher01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(GrenadeLauncher01.LaserEntry.Name);
	GrenadeLauncher01.LaserIcon = UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(GrenadeLauncher01.LaserEntry.Name);
	GrenadeLauncher01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	GrenadeLauncher01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	GrenadeLauncher01.MuzzleSettingsEntry = UGL01MuzzleSettingsLibrary::GetGL01MuzzleSettingsByName(GrenadeLauncher01.MuzzleEntry.Name);
	GrenadeLauncher01.MuzzleIcon = UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(GrenadeLauncher01.MuzzleEntry.Name);
	GrenadeLauncher01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	GrenadeLauncher01.GripSettingEntry = UGL01GripSettingsLibrary::GetGL01GripSettingsByName(GrenadeLauncher01.GripEntry.Name);
	GrenadeLauncher01.GripIcon = UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(GrenadeLauncher01.GripEntry.Name);
	GrenadeLauncher01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Grenade_Launcher_01);
	GrenadeLauncher01.CharacterPoseSettings = UCharacterGL01PoseSettingsLibrary::GetAllCharacterGL01PoseSettings();
	GrenadeLauncher01.CharacterMontageSettings = UCharacterGL01MontageSettingsLibrary::GetAllCharacterGL01MontageSettings();
	GrenadeLauncher01.WeaponMontage = UGL01MontageSettingsLibrary::GetAllGL01MontageSettings();
	GrenadeLauncher01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Grenade_Launcher_01);
	GrenadeLauncher01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Grenade_Launcher_Abilities);
	GrenadeLauncher01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Launcher_Movement);
	GrenadeLauncher01.WeaponIconSettings = UGL01WeaponIconSettingsLibrary::GetAllGL01WeaponIcons();
	GrenadeLauncher01.WeaponSoundSettings = UGL01WeaponSoundSettingsLibrary::GetAllGL01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Grenade_Launcher_01, GrenadeLauncher01);

	FWeaponInformationEntry Shotgun01;
	Shotgun01.Name = EWeaponName::Shotgun_01;
	Shotgun01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	Shotgun01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Shotgun01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Shotgun01.ScopeEntry.Name);
	Shotgun01.ScopeIcon = UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Shotgun01.ScopeEntry.Name);
	
	Shotgun01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Flashlight);
	Shotgun01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Shotgun01.LaserEntry.Name);
	Shotgun01.LaserIcon = UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Shotgun01.LaserEntry.Name);
	Shotgun01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Shotgun01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Shotgun01.MuzzleSettingsEntry = UShotgun01MuzzleSettingsLibrary::GetShotgun01MuzzleSettingsByName(Shotgun01.MuzzleEntry.Name);
	Shotgun01.MuzzleIcon = UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Shotgun01.MuzzleEntry.Name);
	Shotgun01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Shotgun01.GripSettingEntry = UShotgun01GripSettingsLibrary::GetShotgun01GripSettingsByName(Shotgun01.GripEntry.Name);
	Shotgun01.GripIcon = UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(Shotgun01.GripEntry.Name);
	Shotgun01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Shotgun_01);
	Shotgun01.CharacterPoseSettings = UCharacterShotgun01PoseSettingsLibrary::GetAllCharacterShotgun01PoseSettings();
	Shotgun01.CharacterMontageSettings = UCharacterShotgun01MontageSettingsLibrary::GetAllCharacterShotgun01MontageSettings();
	Shotgun01.WeaponMontage = UShotgun01MontageSettingsLibrary::GetAllShotgun01MontageSettings();
	Shotgun01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Shotgun_01);
	Shotgun01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Shotgun_Abilities);
	Shotgun01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Shotgun_Movement);
	Shotgun01.WeaponIconSettings = UShotgun01WeaponIconSettingsLibrary::GetAllShotgun01WeaponIcons();
	Shotgun01.WeaponSoundSettings = UShotgun01WeaponSoundSettingsLibrary::GetAllShotgun01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Shotgun_01, Shotgun01);

	FWeaponInformationEntry SMG01;
	SMG01.Name = EWeaponName::SMG_01;
	SMG01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	SMG01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	SMG01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(SMG01.ScopeEntry.Name);
	SMG01.ScopeIcon = USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(SMG01.ScopeEntry.Name);
	
	SMG01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	SMG01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(SMG01.LaserEntry.Name);
	SMG01.LaserIcon = USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(SMG01.LaserEntry.Name);
	SMG01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	SMG01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	SMG01.MuzzleSettingsEntry = USMG01MuzzleSettingsLibrary::GetSMG01MuzzleSettingsByName(SMG01.MuzzleEntry.Name);
	SMG01.MuzzleIcon = USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(SMG01.MuzzleEntry.Name);
	SMG01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	SMG01.GripSettingEntry = USMG01GripSettingsLibrary::GetSMG01GripSettingsByName(SMG01.GripEntry.Name);
	SMG01.GripIcon = USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(SMG01.GripEntry.Name);
	SMG01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_01);
	SMG01.CharacterPoseSettings = UCharacterSMG01PoseSettingsLibrary::GetAllCharacterSMG01PoseSettings();
	SMG01.CharacterMontageSettings = UCharacterSMG01MontageSettingsLibrary::GetAllCharacterSMG01MontageSettings();
	SMG01.WeaponMontage = USMG01MontageSettingsLibrary::GetAllSMG01MontageSettings();
	SMG01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_01);
	SMG01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG01.WeaponIconSettings = USMG01WeaponIconSettingsLibrary::GetAllSMG01WeaponIcons();
	SMG01.WeaponSoundSettings = USMG01WeaponSoundSettingsLibrary::GetAllSMG01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::SMG_01, SMG01);

	FWeaponInformationEntry SMG02;
	SMG02.Name = EWeaponName::SMG_02;
	SMG02.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	SMG02.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	SMG02.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(SMG02.ScopeEntry.Name);
	SMG02.ScopeIcon = USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(SMG02.ScopeEntry.Name);
	
	SMG02.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	SMG02.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(SMG02.LaserEntry.Name);
	SMG02.LaserIcon = USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(SMG02.LaserEntry.Name);
	SMG02.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	SMG02.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	SMG02.MuzzleSettingsEntry = USMG02MuzzleSettingsLibrary::GetSMG02MuzzleSettingsByName(SMG02.MuzzleEntry.Name);
	SMG02.MuzzleIcon = USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(SMG02.MuzzleEntry.Name);
	SMG02.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	SMG02.GripSettingEntry = USMG02GripSettingsLibrary::GetSMG02GripSettingsByName(SMG02.GripEntry.Name);
	SMG02.GripIcon = USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(SMG02.GripEntry.Name);
	SMG02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_02);
	SMG02.CharacterPoseSettings = UCharacterSMG02PoseSettingsLibrary::GetAllCharacterSMG02PoseSettings();
	SMG02.CharacterMontageSettings = UCharacterSMG02MontageSettingsLibrary::GetAllCharacterSMG02MontageSettings();
	SMG02.WeaponMontage = USMG02MontageSettingsLibrary::GetAllSMG02MontageSettings();
	SMG02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_02);
	SMG02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG02.WeaponIconSettings = USMG02WeaponIconSettingsLibrary::GetAllSMG02WeaponIcons();
	SMG02.WeaponSoundSettings = USMG02WeaponSoundSettingsLibrary::GetAllSMG02WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::SMG_02, SMG02);

	FWeaponInformationEntry SMG03;
	SMG03.Name = EWeaponName::SMG_03;
	SMG03.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	SMG03.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	SMG03.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(SMG03.ScopeEntry.Name);
	SMG03.ScopeIcon = USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(SMG03.ScopeEntry.Name);
	
	SMG03.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	SMG03.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(SMG03.LaserEntry.Name);
	SMG03.LaserIcon = USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(SMG03.LaserEntry.Name);
	SMG03.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	SMG03.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	SMG03.MuzzleSettingsEntry = USMG03MuzzleSettingsLibrary::GetSMG03MuzzleSettingsByName(SMG03.MuzzleEntry.Name);
	SMG03.MuzzleIcon = USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(SMG03.MuzzleEntry.Name);
	SMG03.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	SMG03.GripSettingEntry = USMG03GripSettingsLibrary::GetSMG03GripSettingsByName(SMG03.GripEntry.Name);
	SMG03.GripIcon = USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(SMG03.GripEntry.Name);
	SMG03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_03);
	SMG03.CharacterPoseSettings = UCharacterSMG03PoseSettingsLibrary::GetAllCharacterSMG03PoseSettings();
	SMG03.CharacterMontageSettings = UCharacterSMG03MontageSettingsLibrary::GetAllCharacterSMG03MontageSettings();
	SMG03.WeaponMontage = USMG03MontageSettingsLibrary::GetAllSMG03MontageSettings();
	SMG03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_03);
	SMG03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG03.WeaponIconSettings = USMG03WeaponIconSettingsLibrary::GetAllSMG03WeaponIcons();
	SMG03.WeaponSoundSettings = USMG03WeaponSoundSettingsLibrary::GetAllSMG03WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::SMG_03, SMG03);

	FWeaponInformationEntry SMG04;
	SMG04.Name = EWeaponName::SMG_04;
	SMG04.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	SMG04.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	SMG04.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(SMG04.ScopeEntry.Name);
	SMG04.ScopeIcon = USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(SMG04.ScopeEntry.Name);
	
	SMG04.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	SMG04.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(SMG04.LaserEntry.Name);
	SMG04.LaserIcon = USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(SMG04.LaserEntry.Name);
	SMG04.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	SMG04.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	SMG04.MuzzleSettingsEntry = USMG04MuzzleSettingsLibrary::GetSMG04MuzzleSettingsByName(SMG04.MuzzleEntry.Name);
	SMG04.MuzzleIcon = USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(SMG04.MuzzleEntry.Name);
	SMG04.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	SMG04.GripSettingEntry = USMG04GripSettingsLibrary::GetSMG04GripSettingsByName(SMG04.GripEntry.Name);
	SMG04.GripIcon = USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(SMG04.GripEntry.Name);
	SMG04.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_04);
	SMG04.CharacterPoseSettings = UCharacterSMG04PoseSettingsLibrary::GetAllCharacterSMG04PoseSettings();
	SMG04.CharacterMontageSettings = UCharacterSMG04MontageSettingsLibrary::GetAllCharacterSMG04MontageSettings();
	SMG04.WeaponMontage = USMG04MontageSettingsLibrary::GetAllSMG04MontageSettings();
	SMG04.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_04);
	SMG04.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG04.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG04.WeaponIconSettings = USMG04WeaponIconSettingsLibrary::GetAllSMG04WeaponIcons();
	SMG04.WeaponSoundSettings = USMG04WeaponSoundSettingsLibrary::GetAllSMG04WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::SMG_04, SMG04);

	FWeaponInformationEntry SMG05;
	SMG05.Name = EWeaponName::SMG_05;
	SMG05.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	// Scope
	SMG05.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	SMG05.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(SMG05.ScopeEntry.Name);
	SMG05.ScopeIcon = USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(SMG05.ScopeEntry.Name);
	
	SMG05.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	SMG05.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(SMG05.LaserEntry.Name);
	SMG05.LaserIcon = USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(SMG05.LaserEntry.Name);
	SMG05.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	SMG05.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	SMG05.MuzzleSettingsEntry = USMG05MuzzleSettingsLibrary::GetSMG05MuzzleSettingsByName(SMG05.MuzzleEntry.Name);
	SMG05.MuzzleIcon = USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(SMG05.MuzzleEntry.Name);
	SMG05.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	SMG05.GripSettingEntry = USMG05GripSettingsLibrary::GetSMG05GripSettingsByName(SMG05.GripEntry.Name);
	SMG05.GripIcon = USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(SMG05.GripEntry.Name);
	SMG05.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_05);
	SMG05.CharacterPoseSettings = UCharacterSMG05PoseSettingsLibrary::GetAllCharacterSMG05PoseSettings();
	SMG05.CharacterMontageSettings = UCharacterSMG05MontageSettingsLibrary::GetAllCharacterSMG05MontageSettings();
	SMG05.WeaponMontage = USMG05MontageSettingsLibrary::GetAllSMG05MontageSettings();
	SMG05.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_05);
	SMG05.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG05.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG05.WeaponIconSettings = USMG05WeaponIconSettingsLibrary::GetAllSMG05WeaponIcons();
	SMG05.WeaponSoundSettings = USMG05WeaponSoundSettingsLibrary::GetAllSMG05WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::SMG_05, SMG05);

	FWeaponInformationEntry Sniper01;
	Sniper01.Name = EWeaponName::Sniper_01;
	Sniper01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_02_01.WBP_LPSP_Crosshair_Classic_02_01_C"));
	// Scope
	Sniper01.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Sniper01.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Sniper01.ScopeEntry.Name);
	Sniper01.ScopeIcon = USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper01.ScopeEntry.Name);
	
	Sniper01.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Sniper01.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Sniper01.LaserEntry.Name);
	Sniper01.LaserIcon = USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper01.LaserEntry.Name);
	Sniper01.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Sniper01.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Sniper01.MuzzleSettingsEntry = USniper01MuzzleSettingsLibrary::GetSniper01MuzzleSettingsByName(Sniper01.MuzzleEntry.Name);
	Sniper01.MuzzleIcon = USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper01.MuzzleEntry.Name);
	Sniper01.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Sniper01.GripSettingEntry = USniper01GripSettingsLibrary::GetSniper01GripSettingsByName(Sniper01.GripEntry.Name);
	Sniper01.GripIcon = USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper01.GripEntry.Name);
	Sniper01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_01);
	Sniper01.CharacterPoseSettings = UCharacterSniper01PoseSettingsLibrary::GetAllCharacterSniper01PoseSettings();
	Sniper01.CharacterMontageSettings = UCharacterSniper01MontageSettingsLibrary::GetAllCharacterSniper01MontageSettings();
	Sniper01.WeaponMontage = USniper01MontageSettingsLibrary::GetAllSniper01MontageSettings();
	Sniper01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_01);
	Sniper01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper01.WeaponIconSettings = USniper01WeaponIconSettingsLibrary::GetAllSniper01WeaponIcons();
	Sniper01.WeaponSoundSettings = USniper01WeaponSoundSettingsLibrary::GetAllSniper01WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Sniper_01, Sniper01);

	FWeaponInformationEntry Sniper02;
	Sniper02.Name = EWeaponName::Sniper_02;
	Sniper02.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	Sniper02.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Sniper02.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Sniper02.ScopeEntry.Name);
	Sniper02.ScopeIcon = USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper02.ScopeEntry.Name);
	
	Sniper02.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(Lasersight);
	Sniper02.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Sniper02.LaserEntry.Name);
	Sniper02.LaserIcon = USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper02.LaserEntry.Name);
	Sniper02.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Sniper02.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Sniper02.MuzzleSettingsEntry = USniper02MuzzleSettingsLibrary::GetSniper02MuzzleSettingsByName(Sniper02.MuzzleEntry.Name);
	Sniper02.MuzzleIcon = USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper02.MuzzleEntry.Name);
	Sniper02.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Sniper02.GripSettingEntry = USniper02GripSettingsLibrary::GetSniper02GripSettingsByName(Sniper02.GripEntry.Name);
	Sniper02.GripIcon = USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper02.GripEntry.Name);
	Sniper02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_02);
	Sniper02.CharacterPoseSettings = UCharacterSniper02PoseSettingsLibrary::GetAllCharacterSniper02PoseSettings();
	Sniper02.CharacterMontageSettings = UCharacterSniper02MontageSettingsLibrary::GetAllCharacterSniper02MontageSettings();
	Sniper02.WeaponMontage = USniper02MontageSettingsLibrary::GetAllSniper02MontageSettings();
	Sniper02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_02);
	Sniper02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper02.WeaponIconSettings = USniper02WeaponIconSettingsLibrary::GetAllSniper02WeaponIcons();
	Sniper02.WeaponSoundSettings = USniper02WeaponSoundSettingsLibrary::GetAllSniper02WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Sniper_02, Sniper02);

	FWeaponInformationEntry Sniper03;
	Sniper03.Name = EWeaponName::Sniper_03;
	Sniper03.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Circle.WBP_LPSP_Crosshair_Circle_C"));
	// Scope
	Sniper03.ScopeEntry = UScopeBPLibrary::GetScopeByName(Scope_Default);
	Sniper03.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(Sniper03.ScopeEntry.Name);
	Sniper03.ScopeIcon = USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper03.ScopeEntry.Name);
	
	Sniper03.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(EWeaponIconName::Lasersight);
	Sniper03.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(Sniper03.LaserEntry.Name);
	Sniper03.LaserIcon = USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper03.LaserEntry.Name);
	Sniper03.LasersightSettingsEntry = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);
	Sniper03.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName::NoneHidden);
	Sniper03.MuzzleSettingsEntry = USniper03MuzzleSettingsLibrary::GetSniper03MuzzleSettingsByName(Sniper03.MuzzleEntry.Name);
	Sniper03.MuzzleIcon = USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper03.MuzzleEntry.Name);
	Sniper03.GripEntry = UGripBPLibrary::GetGripByName(EWeaponIconName::NoneHidden);
	Sniper03.GripSettingEntry = USniper03GripSettingsLibrary::GetSniper03GripSettingsByName(Sniper03.GripEntry.Name);
	Sniper03.GripIcon = USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(Sniper03.GripEntry.Name);
	Sniper03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_03);
	Sniper03.CharacterPoseSettings = UCharacterSniper03PoseSettingsLibrary::GetAllCharacterSniper03PoseSettings();
	Sniper03.CharacterMontageSettings = UCharacterSniper03MontageSettingsLibrary::GetAllCharacterSniper03MontageSettings();
	Sniper03.WeaponMontage = USniper03MontageSettingsLibrary::GetAllSniper03MontageSettings();
	Sniper03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_03);
	Sniper03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper03.WeaponIconSettings = USniper03WeaponIconSettingsLibrary::GetAllSniper03WeaponIcons();
	Sniper03.WeaponSoundSettings = USniper03WeaponSoundSettingsLibrary::GetAllSniper03WeaponSounds();
	
	GWeaponInformationMap.Add(EWeaponName::Sniper_03, Sniper03);
	
}

FWeaponInformationEntry UWeaponInformationLibrary::GetWeaponInformationByName(EWeaponName WeaponName)
{
	InitWeaponInformation();
	if (GWeaponInformationMap.Contains(WeaponName))
	{
		return GWeaponInformationMap[WeaponName];
	}
	
	return FWeaponInformationEntry();
}



TArray<FWeaponInformationEntry> UWeaponInformationLibrary::GetAllWeaponInformationEntries()
{
	InitWeaponInformation();
	TArray<FWeaponInformationEntry> WeaponInformationEntries;
	GWeaponInformationMap.GenerateValueArray(WeaponInformationEntries);
	return WeaponInformationEntries;
}

FWeaponInformationEntry UWeaponInformationLibrary::GetWeaponInformationByProperties(
	const EWeaponName WeaponName,
	const EWeaponIconName ScopeName,
	const EWeaponIconName LaserName,
	const EWeaponIconName MuzzleName,
	const EWeaponIconName GripName
)
{
	InitWeaponInformation();
	
	// Get base weapon configuration
	FWeaponInformationEntry WeaponInfo;
	if (GWeaponInformationMap.Contains(WeaponName))
	{
		WeaponInfo = GWeaponInformationMap[WeaponName];
	}
	else
	{
		return FWeaponInformationEntry();
	}
	
	WeaponInfo.ScopeEntry = UScopeBPLibrary::GetScopeByName(ScopeName);
	WeaponInfo.ScopeSettingsEntry = UScopeSettingsLibrary::GetScopeSettingsByName(WeaponInfo.ScopeEntry.Name);
	WeaponInfo.ScopeIcon = GetScopeIconForWeapon(WeaponName, ScopeName);
	
	
	WeaponInfo.LaserEntry = ULaserBPLibrary::GetWeaponFragmentLaserByName(LaserName);
	WeaponInfo.LaserSettingsEntry = ULaserSettingsLibrary::GetLaserSettingsByName(WeaponInfo.LaserEntry.Name);
	WeaponInfo.LaserIcon = GetLaserIconForWeapon(WeaponName, WeaponInfo.LaserEntry.Name);
	
	WeaponInfo.MuzzleEntry = UMuzzleBPLibrary::GetMuzzleByName(MuzzleName);
	WeaponInfo.MuzzleSettingsEntry = GetMuzzleSettingsForWeapon(WeaponName, WeaponInfo.MuzzleEntry.Name);
	WeaponInfo.MuzzleIcon = GetMuzzleIconForWeapon(WeaponName, WeaponInfo.MuzzleEntry.Name);
	
	WeaponInfo.GripEntry = UGripBPLibrary::GetGripByName(GripName);
	WeaponInfo.GripSettingEntry = GetGripSettingsForWeapon(WeaponName, WeaponInfo.GripEntry.Name);
	WeaponInfo.GripIcon = GetGripIconForWeapon(WeaponName, WeaponInfo.GripEntry.Name);
	
	return WeaponInfo;
}

FWeaponIcon UWeaponInformationLibrary::GetLaserIconForWeapon(EWeaponName WeaponName, EWeaponIconName LaserName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Assault_Rifle_02: return UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Assault_Rifle_03: return UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Handgun_01: return UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Handgun_02: return UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Handgun_03: return UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Handgun_04: return UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Rocket_Launcher_01: return URL01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Grenade_Launcher_01: return UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Shotgun_01: return UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::SMG_01: return USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::SMG_02: return USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::SMG_03: return USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::SMG_04: return USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::SMG_05: return USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Sniper_01: return USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Sniper_02: return USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	case EWeaponName::Sniper_03: return USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(LaserName);
	default: return FWeaponIcon();
	}
}

FWeaponIcon UWeaponInformationLibrary::GetScopeIconForWeapon(EWeaponName WeaponName, EWeaponIconName ScopeName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Assault_Rifle_02: return UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Assault_Rifle_03: return UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Handgun_01: return UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Handgun_02: return UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Handgun_03: return UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Handgun_04: return UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Rocket_Launcher_01: return URL01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Grenade_Launcher_01: return UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Shotgun_01: return UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::SMG_01: return USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::SMG_02: return USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::SMG_03: return USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::SMG_04: return USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::SMG_05: return USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Sniper_01: return USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Sniper_02: return USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	case EWeaponName::Sniper_03: return USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(ScopeName);
	default: return FWeaponIcon();
	}
}

FGripSettingsEntry UWeaponInformationLibrary::GetGripSettingsForWeapon(EWeaponName WeaponName, EWeaponIconName GripName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01GripSettingsLibrary::GetGripSettingsByName(GripName);
	case EWeaponName::Assault_Rifle_02: return UAR02GripSettingsLibrary::GetAR02GripSettingsByName(GripName);
	case EWeaponName::Assault_Rifle_03: return UAR03GripSettingsLibrary::GetAR03GripSettingsByName(GripName);
	case EWeaponName::Handgun_01: return UHandgun01GripSettingsLibrary::GetHandgun01GripSettingsByName(GripName);
	case EWeaponName::Handgun_02: return UHandgun02GripSettingsLibrary::GetHandgun02GripSettingsByName(GripName);
	case EWeaponName::Handgun_03: return UHandgun03GripSettingsLibrary::GetHandgun03GripSettingsByName(GripName);
	case EWeaponName::Handgun_04: return UHandgun04GripSettingsLibrary::GetHandgun04GripSettingsByName(GripName);
	case EWeaponName::Rocket_Launcher_01: return URL01GripSettingsLibrary::GetRL01GripSettingsByName(GripName);
	case EWeaponName::Grenade_Launcher_01: return UGL01GripSettingsLibrary::GetGL01GripSettingsByName(GripName);
	case EWeaponName::Shotgun_01: return UShotgun01GripSettingsLibrary::GetShotgun01GripSettingsByName(GripName);
	case EWeaponName::SMG_01: return USMG01GripSettingsLibrary::GetSMG01GripSettingsByName(GripName);
	case EWeaponName::SMG_02: return USMG02GripSettingsLibrary::GetSMG02GripSettingsByName(GripName);
	case EWeaponName::SMG_03: return USMG03GripSettingsLibrary::GetSMG03GripSettingsByName(GripName);
	case EWeaponName::SMG_04: return USMG04GripSettingsLibrary::GetSMG04GripSettingsByName(GripName);
	case EWeaponName::SMG_05: return USMG05GripSettingsLibrary::GetSMG05GripSettingsByName(GripName);
	case EWeaponName::Sniper_01: return USniper01GripSettingsLibrary::GetSniper01GripSettingsByName(GripName);
	case EWeaponName::Sniper_02: return USniper02GripSettingsLibrary::GetSniper02GripSettingsByName(GripName);
	case EWeaponName::Sniper_03: return USniper03GripSettingsLibrary::GetSniper03GripSettingsByName(GripName);
	default: return FGripSettingsEntry();
	}
}

FWeaponIcon UWeaponInformationLibrary::GetGripIconForWeapon(EWeaponName WeaponName, EWeaponIconName GripName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Assault_Rifle_02: return UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Assault_Rifle_03: return UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Handgun_01: return UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Handgun_02: return UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Handgun_03: return UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Handgun_04: return UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Rocket_Launcher_01: return URL01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Grenade_Launcher_01: return UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Shotgun_01: return UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::SMG_01: return USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::SMG_02: return USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::SMG_03: return USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::SMG_04: return USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::SMG_05: return USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Sniper_01: return USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Sniper_02: return USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	case EWeaponName::Sniper_03: return USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(GripName);
	default: return FWeaponIcon();
	}
}

FMuzzleSettingsEntry UWeaponInformationLibrary::GetMuzzleSettingsForWeapon(EWeaponName WeaponName, EWeaponIconName MuzzleName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01MuzzleSettingsLibrary::GetMuzzleSettingsByName(MuzzleName);
	case EWeaponName::Assault_Rifle_02: return UAR02MuzzleSettingsLibrary::GetAR02MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Assault_Rifle_03: return UAR03MuzzleSettingsLibrary::GetAR03MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Handgun_01: return UHandgun01MuzzleSettingsLibrary::GetHandgun01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Handgun_02: return UHandgun02MuzzleSettingsLibrary::GetHandgun02MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Handgun_03: return UHandgun03MuzzleSettingsLibrary::GetHandgun03MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Handgun_04: return UHandgun04MuzzleSettingsLibrary::GetHandgun04MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Rocket_Launcher_01: return URL01MuzzleSettingsLibrary::GetRL01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Grenade_Launcher_01: return UGL01MuzzleSettingsLibrary::GetGL01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Shotgun_01: return UShotgun01MuzzleSettingsLibrary::GetShotgun01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::SMG_01: return USMG01MuzzleSettingsLibrary::GetSMG01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::SMG_02: return USMG02MuzzleSettingsLibrary::GetSMG02MuzzleSettingsByName(MuzzleName);
	case EWeaponName::SMG_03: return USMG03MuzzleSettingsLibrary::GetSMG03MuzzleSettingsByName(MuzzleName);
	case EWeaponName::SMG_04: return USMG04MuzzleSettingsLibrary::GetSMG04MuzzleSettingsByName(MuzzleName);
	case EWeaponName::SMG_05: return USMG05MuzzleSettingsLibrary::GetSMG05MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Sniper_01: return USniper01MuzzleSettingsLibrary::GetSniper01MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Sniper_02: return USniper02MuzzleSettingsLibrary::GetSniper02MuzzleSettingsByName(MuzzleName);
	case EWeaponName::Sniper_03: return USniper03MuzzleSettingsLibrary::GetSniper03MuzzleSettingsByName(MuzzleName);
	default: return FMuzzleSettingsEntry();
	}
}

FWeaponIcon UWeaponInformationLibrary::GetMuzzleIconForWeapon(EWeaponName WeaponName, EWeaponIconName MuzzleName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Assault_Rifle_02: return UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Assault_Rifle_03: return UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Handgun_01: return UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Handgun_02: return UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Handgun_03: return UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Handgun_04: return UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Rocket_Launcher_01: return URL01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Grenade_Launcher_01: return UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Shotgun_01: return UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::SMG_01: return USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::SMG_02: return USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::SMG_03: return USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::SMG_04: return USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::SMG_05: return USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Sniper_01: return USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Sniper_02: return USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	case EWeaponName::Sniper_03: return USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(MuzzleName);
	default: return FWeaponIcon();
	}
}
