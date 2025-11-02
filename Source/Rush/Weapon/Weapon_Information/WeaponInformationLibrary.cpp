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
#include "Rush/Weapon/Library/FlashlightSettingsBPLibrary.h"
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
#include "Rush/Weapon/Library/IronsightSettingsLibrary.h"
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
#include "Rush/Weapon/Library/MagazineSettingsLibrary.h"
#include "Rush/Weapon/Library/MuzzleBPLibrary.h"
#include "Rush/Weapon/Library/ScopeBPLibrary.h"
#include "Rush/Weapon/Library/ScopeSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponAnimationSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponIronsightLibrary.h"
#include "Rush/Weapon/Library/WeaponMovementSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponSettingsLibrary.h"
#include "Rush/Weapon/Library/WeaponSkinBPLibrary.h"
#include "Rush/Weapon/Library/WeaponPhysicalSettingsLibrary.h"

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

	// Skin
	AssaultRifle01.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultAssaultRifle01);

	// Magazine
	AssaultRifle01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Assault_Rifle_01);
	
	// Body Icon
	AssaultRifle01.BodyIcon = UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Ironsight
	AssaultRifle01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Assault_Rifle_01);
	AssaultRifle01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Assault_Rifle_01);

	// Flashlight
	AssaultRifle01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	AssaultRifle01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_01);
	AssaultRifle01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
		
	AssaultRifle01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_01);
	AssaultRifle01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_01);
	AssaultRifle01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);

	// Character Pose
	AssaultRifle01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Assault_Rifle_01);
	AssaultRifle01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_01);

	// Sound
	AssaultRifle01.WeaponSoundSettings = UAR01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	AssaultRifle02.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultAssaultRifle02);

	// Magazine
	AssaultRifle02.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Assault_Rifle_02);

	// Ironsight
	AssaultRifle02.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Assault_Rifle_02);
	AssaultRifle02.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Assault_Rifle_02);

	// Flashlight
	AssaultRifle02.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	AssaultRifle02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_02);
	AssaultRifle02.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	AssaultRifle02.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_02);
	AssaultRifle02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_02);
	AssaultRifle02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);

	// Character Pose
	AssaultRifle02.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Assault_Rifle_02);
	AssaultRifle02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle02.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_02);

	// Sound
	AssaultRifle02.WeaponSoundSettings = UAR02WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	AssaultRifle03.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultAssaultRifle03);

	// Magazine
	AssaultRifle03.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Assault_Rifle_03);

	// Ironsight
	AssaultRifle03.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Assault_Rifle_03);
	AssaultRifle03.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Assault_Rifle_03);

	// Flashlight
	AssaultRifle03.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	AssaultRifle03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Assault_Rifle_03);
	AssaultRifle03.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	AssaultRifle03.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_03);
	AssaultRifle03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Assault_Rifle_03);
	AssaultRifle03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Assault_Rifle_Movement);
	AssaultRifle03.BodyIcon = UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	AssaultRifle03.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Assault_Rifle_03);
	AssaultRifle03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Assault_Rifle_Abilities);
	AssaultRifle03.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Assault_Rifle_03);

	// Sound
	AssaultRifle03.WeaponSoundSettings = UAR03WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Handgun01.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultHandgun01);

	// Magazine
	Handgun01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Handgun_01);

	// Ironsight
	Handgun01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Handgun_01);
	Handgun01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Handgun_01);

	// Flashlight
	Handgun01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Handgun01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_01);
	Handgun01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Handgun01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Handgun_01);
	Handgun01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_01);
	Handgun01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun01.BodyIcon = UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Handgun01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Handgun_01);
	Handgun01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Handgun_01);

	// Sound
	Handgun01.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Handgun02.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultHandgun02);

	// Magazine
	Handgun02.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Handgun_02);

	// Ironsight
	Handgun02.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Handgun_02);
	Handgun02.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Handgun_02);

	// Flashlight
	Handgun02.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Handgun02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_02);
	Handgun02.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Handgun02.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Handgun_02);
	Handgun02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_02);
	Handgun02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun02.BodyIcon = UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Handgun02.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Handgun_02);
	Handgun02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun02.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Handgun_02);

	// Sound
	Handgun02.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Handgun03.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultHandgun03);

	// Magazine
	Handgun03.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Handgun_03);

	// Ironsight
	Handgun03.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Handgun_03);
	Handgun03.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Handgun_03);

	// Flashlight
	Handgun03.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Handgun03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_03);
	Handgun03.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Handgun03.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Handgun_03);
	Handgun03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_03);
	Handgun03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun03.BodyIcon = UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Handgun03.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Handgun_03);
	Handgun03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun03.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Handgun_03);

	// Sound
	Handgun03.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Handgun04.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultHandgun04);

	// Magazine
	Handgun04.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Handgun_04);

	// Ironsight
	Handgun04.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Handgun_04);
	Handgun04.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Handgun_04);

	// Flashlight
	Handgun04.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Handgun04.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Handgun_04);
	Handgun04.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Handgun04.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Handgun_04);
	Handgun04.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Handgun_04);
	Handgun04.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Handgun_Movement);
	Handgun04.BodyIcon = UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Handgun04.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Handgun_04);
	Handgun04.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Handgun_Abilities);
	Handgun04.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Handgun_04);

	// Sound
	Handgun04.WeaponSoundSettings = UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	RocketLauncher01.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultLauncherRocket01);

	// Magazine
	RocketLauncher01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Rocket_Launcher_01);

	// Ironsight
	RocketLauncher01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Rocket_Launcher_01);
	RocketLauncher01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Rocket_Launcher_01);

	// Flashlight
	RocketLauncher01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	RocketLauncher01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Rocket_Launcher_01);
	RocketLauncher01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	RocketLauncher01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Rocket_Launcher_01);
	RocketLauncher01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Rocket_Launcher_01);
	RocketLauncher01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Launcher_Heavy_Movement);
	RocketLauncher01.BodyIcon = URL01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	RocketLauncher01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Rocket_Launcher_01);
	RocketLauncher01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Rocket_Launcher_Abilities);
	RocketLauncher01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Rocket_Launcher_01);

	// Sound
	RocketLauncher01.WeaponSoundSettings = URL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	GrenadeLauncher01.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultLauncherGrenade01);

	// Magazine
	GrenadeLauncher01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Grenade_Launcher_01);

	// Ironsight
	GrenadeLauncher01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Grenade_Launcher_01);
	GrenadeLauncher01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Grenade_Launcher_01);

	// Flashlight
	GrenadeLauncher01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	GrenadeLauncher01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Grenade_Launcher_01);
	GrenadeLauncher01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	GrenadeLauncher01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Grenade_Launcher_01);
	GrenadeLauncher01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Grenade_Launcher_01);
	GrenadeLauncher01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Launcher_Movement);
	GrenadeLauncher01.BodyIcon = UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	GrenadeLauncher01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Grenade_Launcher_01);
	GrenadeLauncher01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Grenade_Launcher_Abilities);
	GrenadeLauncher01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Grenade_Launcher_01);

	// Sound
	GrenadeLauncher01.WeaponSoundSettings = UGL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Magazine
	Shotgun01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Shotgun_01);

	// Ironsight
	Shotgun01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Shotgun_01);
	Shotgun01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Shotgun_01);

	// Flashlight
	Shotgun01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Shotgun01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Shotgun_01);
	Shotgun01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Shotgun01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Shotgun_01);
	Shotgun01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Shotgun_01);
	Shotgun01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Shotgun_Movement);
	Shotgun01.BodyIcon = UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Shotgun01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Shotgun_01);
	Shotgun01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Shotgun_Abilities);
	Shotgun01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Shotgun_01);

	// Sound
	Shotgun01.WeaponSoundSettings = UShotgun01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	SMG01.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSMG01);

	// Magazine
	SMG01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::SMG_01);

	// Ironsight
	SMG01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::SMG_01);
	SMG01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::SMG_01);

	// Flashlight
	SMG01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	SMG01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_01);
	SMG01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	SMG01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::SMG_01);
	SMG01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_01);
	SMG01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG01.BodyIcon = USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	SMG01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::SMG_01);
	SMG01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::SMG_01);

	// Sound
	SMG01.WeaponSoundSettings = USMG01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	SMG02.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSMG02);

	// Magazine
	SMG02.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::SMG_02);

	// Ironsight
	SMG02.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::SMG_02);
	SMG02.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::SMG_02);

	// Flashlight
	SMG02.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	SMG02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_02);
	SMG02.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	SMG02.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::SMG_02);
	SMG02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_02);
	SMG02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG02.BodyIcon = USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	SMG02.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::SMG_02);
	SMG02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG02.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::SMG_02);

	// Sound
	SMG02.WeaponSoundSettings = USMG02WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	SMG03.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSMG03);

	// Magazine
	SMG03.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::SMG_03);

	// Ironsight
	SMG03.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::SMG_03);
	SMG03.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::SMG_03);

	// Flashlight
	SMG03.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	SMG03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_03);
	SMG03.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	SMG03.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::SMG_03);
	SMG03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_03);
	SMG03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG03.BodyIcon = USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	SMG03.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::SMG_03);
	SMG03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG03.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::SMG_03);

	// Sound
	SMG03.WeaponSoundSettings = USMG03WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	SMG04.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSMG04);

	// Magazine
	SMG04.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::SMG_04);

	// Ironsight
	SMG04.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::SMG_04);
	SMG04.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::SMG_04);

	// Flashlight
	SMG04.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	SMG04.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_04);
	SMG04.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	SMG04.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::SMG_04);
	SMG04.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_04);
	SMG04.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG04.BodyIcon = USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	SMG04.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::SMG_04);
	SMG04.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG04.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::SMG_04);

	// Sound
	SMG04.WeaponSoundSettings = USMG04WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Magazine
	SMG05.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::SMG_05);

	// Ironsight
	SMG05.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::SMG_05);
	SMG05.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::SMG_05);

	// Flashlight
	SMG05.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	SMG05.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(SMG_05);
	SMG05.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	SMG05.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::SMG_05);
	SMG05.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::SMG_05);
	SMG05.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::SMG_Movement);
	SMG05.BodyIcon = USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	SMG05.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::SMG_05);
	SMG05.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::SMG_Abilities);
	SMG05.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::SMG_05);

	// Sound
	SMG05.WeaponSoundSettings = USMG05WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Magazine
	Sniper01.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Sniper_01);

	// Ironsight
	Sniper01.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Sniper_01);
	Sniper01.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Sniper_01);

	// Flashlight
	Sniper01.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Sniper01.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_01);
	Sniper01.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Sniper01.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Sniper_01);
	Sniper01.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_01);
	Sniper01.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper01.BodyIcon = USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Sniper01.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Sniper_01);
	Sniper01.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper01.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Sniper_01);

	// Sound
	Sniper01.WeaponSoundSettings = USniper01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Sniper02.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSniper02);

	// Magazine
	Sniper02.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Sniper_02);

	// Ironsight
	Sniper02.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Sniper_02);
	Sniper02.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Sniper_02);

	// Flashlight
	Sniper02.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Sniper02.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_02);
	Sniper02.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Sniper02.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Sniper_02);
	Sniper02.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_02);
	Sniper02.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper02.BodyIcon = USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Sniper02.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Sniper_02);
	Sniper02.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper02.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Sniper_02);

	// Sound
	Sniper02.WeaponSoundSettings = USniper02WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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

	// Skin
	Sniper03.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName::DefaultSniper03);

	// Magazine
	Sniper03.MagazineEntry = UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName::Sniper_03);

	// Ironsight
	Sniper03.IronsightEntry = UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName::Sniper_03);
	Sniper03.IronsightSettingsEntry = UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName::Sniper_03);

	// Flashlight
	Sniper03.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);

	// Weapon Settings
	Sniper03.WeaponSettings = UWeaponSettingsLibrary::GetWeaponSettingsByName(Sniper_03);
	Sniper03.WeaponPhysicalSettingsEntry = UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon();
	Sniper03.WeaponMontageSettingsEntry = UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName::Sniper_03);
	Sniper03.WeaponAnimationSettings = UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName::Sniper_03);
	Sniper03.WeaponMovementSettings = UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName::Sniper_Movement);
	Sniper03.BodyIcon = USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName::Body);

	// Character Pose
	Sniper03.CharacterWeaponPoseSettings = UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName::Sniper_03);
	Sniper03.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName::Sniper_Abilities);
	Sniper03.CharacterMontageSettingsEntry = UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName::Sniper_03);

	// Sound
	Sniper03.WeaponSoundSettings = USniper03WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName::Character_Montage_None);
	
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
EWeaponName WeaponName,
	EWeaponIconName ScopeName, EWeaponIconName LaserName, EWeaponIconName MuzzleName, EWeaponIconName GripName,
	EWeaponSkinName SkinName, EFlashlightSettingsName FlashlightName,
	ECharacterMontageName WeaponSoundSetting, EAbilityName AbilityName
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

	WeaponInfo.SkinEntry = UWeaponSkinBPLibrary::GetWeaponSkinByName(SkinName);
	WeaponInfo.CharacterAbilitySetting = UAbilitiesSettingsLibrary::GetAbilitiesByName(AbilityName);
	WeaponInfo.WeaponSoundSettings = GetWeaponSoundSettingsForWeapon(WeaponName, WeaponSoundSetting);
	
	WeaponInfo.FlashlightSettingsEntry = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(FlashlightName);
	
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

FWeaponMontageSettings UWeaponInformationLibrary::GetWeaponMontageSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName MontageName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01MontageSettingsLibrary::GetAR01MontageSettingsByName(MontageName);
	case EWeaponName::Assault_Rifle_02: return UAR02MontageSettingsLibrary::GetAR02MontageSettingsByName(MontageName);
	case EWeaponName::Assault_Rifle_03: return UAR03MontageSettingsLibrary::GetAR03MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_01: return UHandgun01MontageSettingsLibrary::GetHandgun01MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_02: return UHandgun02MontageSettingsLibrary::GetHandgun02MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_03: return UHandgun03MontageSettingsLibrary::GetHandgun03MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_04: return UHandgun04MontageSettingsLibrary::GetHandgun04MontageSettingsByName(MontageName);
	case EWeaponName::Rocket_Launcher_01: return URL01MontageSettingsLibrary::GetRL01MontageSettingsByName(MontageName);
	case EWeaponName::Grenade_Launcher_01: return UGL01MontageSettingsLibrary::GetGL01MontageSettingsByName(MontageName);
	case EWeaponName::Shotgun_01: return UShotgun01MontageSettingsLibrary::GetShotgun01MontageSettingsByName(MontageName);
	case EWeaponName::SMG_01: return USMG01MontageSettingsLibrary::GetSMG01MontageSettingsByName(MontageName);
	case EWeaponName::SMG_02: return USMG02MontageSettingsLibrary::GetSMG02MontageSettingsByName(MontageName);
	case EWeaponName::SMG_03: return USMG03MontageSettingsLibrary::GetSMG03MontageSettingsByName(MontageName);
	case EWeaponName::SMG_04: return USMG04MontageSettingsLibrary::GetSMG04MontageSettingsByName(MontageName);
	case EWeaponName::SMG_05: return USMG05MontageSettingsLibrary::GetSMG05MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_01: return USniper01MontageSettingsLibrary::GetSniper01MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_02: return USniper02MontageSettingsLibrary::GetSniper02MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_03: return USniper03MontageSettingsLibrary::GetSniper03MontageSettingsByName(MontageName);
	default: return FWeaponMontageSettings();
	}
}

FCharacterPoseSettings UWeaponInformationLibrary::GetCharacterPoseSettingsForWeapon(EWeaponName WeaponName, ECharacterPoseName PoseName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UCharacterAR01PoseSettingsLibrary::GetCharacterAR01PoseSettingsByName(PoseName);
	case EWeaponName::Assault_Rifle_02: return UCharacterAR02PoseSettingsLibrary::GetCharacterAR02PoseSettingsByName(PoseName);
	case EWeaponName::Assault_Rifle_03: return UCharacterAR03PoseSettingsLibrary::GetCharacterAR03PoseSettingsByName(PoseName);
	case EWeaponName::Handgun_01: return UCharacterHandgun01PoseSettingsLibrary::GetCharacterHandgun01PoseSettingsByName(PoseName);
	case EWeaponName::Handgun_02: return UCharacterHandgun02PoseSettingsLibrary::GetCharacterHandgun02PoseSettingsByName(PoseName);
	case EWeaponName::Handgun_03: return UCharacterHandgun03PoseSettingsLibrary::GetCharacterHandgun03PoseSettingsByName(PoseName);
	case EWeaponName::Handgun_04: return UCharacterHandgun04PoseSettingsLibrary::GetCharacterHandgun04PoseSettingsByName(PoseName);
	case EWeaponName::Rocket_Launcher_01: return UCharacterRocketLauncher01PoseSettingsLibrary::GetCharacterRocketLauncher01PoseSettingsByName(PoseName);
	case EWeaponName::Grenade_Launcher_01: return UCharacterGL01PoseSettingsLibrary::GetCharacterGL01PoseSettingsByName(PoseName);
	case EWeaponName::Shotgun_01: return UCharacterShotgun01PoseSettingsLibrary::GetCharacterShotgun01PoseSettingsByName(PoseName);
	case EWeaponName::SMG_01: return UCharacterSMG01PoseSettingsLibrary::GetCharacterSMG01PoseSettingsByName(PoseName);
	case EWeaponName::SMG_02: return UCharacterSMG02PoseSettingsLibrary::GetCharacterSMG02PoseSettingsByName(PoseName);
	case EWeaponName::SMG_03: return UCharacterSMG03PoseSettingsLibrary::GetCharacterSMG03PoseSettingsByName(PoseName);
	case EWeaponName::SMG_04: return UCharacterSMG04PoseSettingsLibrary::GetCharacterSMG04PoseSettingsByName(PoseName);
	case EWeaponName::SMG_05: return UCharacterSMG05PoseSettingsLibrary::GetCharacterSMG05PoseSettingsByName(PoseName);
	case EWeaponName::Sniper_01: return UCharacterSniper01PoseSettingsLibrary::GetCharacterSniper01PoseSettingsByName(PoseName);
	case EWeaponName::Sniper_02: return UCharacterSniper02PoseSettingsLibrary::GetCharacterSniper02PoseSettingsByName(PoseName);
	case EWeaponName::Sniper_03: return UCharacterSniper03PoseSettingsLibrary::GetCharacterSniper03PoseSettingsByName(PoseName);
	default: return FCharacterPoseSettings();
	}
}

FCharacterMontageSettings UWeaponInformationLibrary::GetCharacterMontageSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName MontageName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UCharacterAR01MontageSettingsLibrary::GetCharacterAR01MontageSettingsByName(MontageName);
	case EWeaponName::Assault_Rifle_02: return UCharacterAR02MontageSettingsLibrary::GetCharacterAR02MontageSettingsByName(MontageName);
	case EWeaponName::Assault_Rifle_03: return UCharacterAR03MontageSettingsLibrary::GetCharacterAR03MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_01: return UCharacterHandgun01MontageSettingsLibrary::GetCharacterHandgun01MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_02: return UCharacterHandgun02MontageSettingsLibrary::GetCharacterHandgun02MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_03: return UCharacterHandgun03MontageSettingsLibrary::GetCharacterHandgun03MontageSettingsByName(MontageName);
	case EWeaponName::Handgun_04: return UCharacterHandgun04MontageSettingsLibrary::GetCharacterHandgun04MontageSettingsByName(MontageName);
	case EWeaponName::Rocket_Launcher_01: return UCharacterRocketLauncher01MontageSettingsLibrary::GetCharacterRocketLauncher01MontageSettingsByName(MontageName);
	case EWeaponName::Grenade_Launcher_01: return UCharacterGL01MontageSettingsLibrary::GetCharacterGL01MontageSettingsByName(MontageName);
	case EWeaponName::Shotgun_01: return UCharacterShotgun01MontageSettingsLibrary::GetCharacterShotgun01MontageSettingsByName(MontageName);
	case EWeaponName::SMG_01: return UCharacterSMG01MontageSettingsLibrary::GetCharacterSMG01MontageSettingsByName(MontageName);
	case EWeaponName::SMG_02: return UCharacterSMG02MontageSettingsLibrary::GetCharacterSMG02MontageSettingsByName(MontageName);
	case EWeaponName::SMG_03: return UCharacterSMG03MontageSettingsLibrary::GetCharacterSMG03MontageSettingsByName(MontageName);
	case EWeaponName::SMG_04: return UCharacterSMG04MontageSettingsLibrary::GetCharacterSMG04MontageSettingsByName(MontageName);
	case EWeaponName::SMG_05: return UCharacterSMG05MontageSettingsLibrary::GetCharacterSMG05MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_01: return UCharacterSniper01MontageSettingsLibrary::GetCharacterSniper01MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_02: return UCharacterSniper02MontageSettingsLibrary::GetCharacterSniper02MontageSettingsByName(MontageName);
	case EWeaponName::Sniper_03: return UCharacterSniper03MontageSettingsLibrary::GetCharacterSniper03MontageSettingsByName(MontageName);
	default: return FCharacterMontageSettings();
	}
}

FWeaponSound UWeaponInformationLibrary::GetWeaponSoundSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName SoundName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01: return UAR01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Assault_Rifle_02: return UAR02WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Assault_Rifle_03: return UAR03WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Handgun_01: return UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Handgun_02: return UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Handgun_03: return UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Handgun_04: return UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Rocket_Launcher_01: return URL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Grenade_Launcher_01: return UGL01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Shotgun_01: return UShotgun01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::SMG_01: return USMG01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::SMG_02: return USMG02WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::SMG_03: return USMG03WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::SMG_04: return USMG04WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::SMG_05: return USMG05WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Sniper_01: return USniper01WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Sniper_02: return USniper02WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	case EWeaponName::Sniper_03: return USniper03WeaponSoundSettingsLibrary::GetWeaponSoundByName(SoundName);
	default: return FWeaponSound();
	}
}

FWeaponPhysicalSettingsEntry UWeaponInformationLibrary::GetWeaponPhysicalSettingsEntryForWeapon()
{
	return FWeaponPhysicalSettingsEntry(
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Hidden),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Icon),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Static),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Physics),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Physics_Attached),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Viewmodel),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Viewmodel_Third_Person),
	UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState::Static_Shadow)
	);
}

// Helper chung cho Character Weapon Montage Settings Entry
static FCharacterWeaponMontageSettingsEntry CreateCharacterMontageSettingsEntry(const TFunction<FCharacterMontageSettings(ECharacterMontageName)>& Get)
{
	return FCharacterWeaponMontageSettingsEntry(
		Get(ECharacterMontageName::Character_Montage_Jump),
		Get(ECharacterMontageName::Character_Montage_Fire),
		Get(ECharacterMontageName::Character_Montage_Fire_Empty),
		Get(ECharacterMontageName::Character_Montage_Reload),
		Get(ECharacterMontageName::Character_Montage_Reload_Empty),
		Get(ECharacterMontageName::Character_Montage_Reload_Bolt),
		Get(ECharacterMontageName::Character_Montage_Reload_Open),
		Get(ECharacterMontageName::Character_Montage_Reload_Insert),
		Get(ECharacterMontageName::Character_Montage_Reload_Close),
		Get(ECharacterMontageName::Character_Montage_Inspect),
		Get(ECharacterMontageName::Character_Montage_Inspect_Smooth),
		Get(ECharacterMontageName::Character_Montage_Holster),
		Get(ECharacterMontageName::Character_Montage_Holster_Smooth),
		Get(ECharacterMontageName::Character_Montage_Unholster),
		Get(ECharacterMontageName::Character_Montage_Unholster_Smooth),
		Get(ECharacterMontageName::Character_Montage_Throw_Grenade),
		Get(ECharacterMontageName::Character_Montage_Throw_Grenade_Additive),
		Get(ECharacterMontageName::Character_Montage_Knife_Attack),
		Get(ECharacterMontageName::Character_Montage_Knife_Attack_Additive),
		Get(ECharacterMontageName::Character_Montage_Attack_01),
		Get(ECharacterMontageName::Character_Montage_Attack_02),
		Get(ECharacterMontageName::Character_Montage_None)
	);
}

FCharacterWeaponMontageSettingsEntry UWeaponInformationLibrary::GetCharacterMontageSettingsEntryForWeapon(EWeaponName WeaponName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterAR01MontageSettingsLibrary::GetCharacterAR01MontageSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_02:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterAR02MontageSettingsLibrary::GetCharacterAR02MontageSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_03:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterAR03MontageSettingsLibrary::GetCharacterAR03MontageSettingsByName(Name); });
	case EWeaponName::Handgun_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterHandgun01MontageSettingsLibrary::GetCharacterHandgun01MontageSettingsByName(Name); });
	case EWeaponName::Handgun_02:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterHandgun02MontageSettingsLibrary::GetCharacterHandgun02MontageSettingsByName(Name); });
	case EWeaponName::Handgun_03:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterHandgun03MontageSettingsLibrary::GetCharacterHandgun03MontageSettingsByName(Name); });
	case EWeaponName::Handgun_04:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterHandgun04MontageSettingsLibrary::GetCharacterHandgun04MontageSettingsByName(Name); });
	case EWeaponName::Rocket_Launcher_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterRocketLauncher01MontageSettingsLibrary::GetCharacterRocketLauncher01MontageSettingsByName(Name); });
	case EWeaponName::Grenade_Launcher_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterGL01MontageSettingsLibrary::GetCharacterGL01MontageSettingsByName(Name); });
	case EWeaponName::Shotgun_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterShotgun01MontageSettingsLibrary::GetCharacterShotgun01MontageSettingsByName(Name); });
	case EWeaponName::SMG_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSMG01MontageSettingsLibrary::GetCharacterSMG01MontageSettingsByName(Name); });
	case EWeaponName::SMG_02:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSMG02MontageSettingsLibrary::GetCharacterSMG02MontageSettingsByName(Name); });
	case EWeaponName::SMG_03:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSMG03MontageSettingsLibrary::GetCharacterSMG03MontageSettingsByName(Name); });
	case EWeaponName::SMG_04:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSMG04MontageSettingsLibrary::GetCharacterSMG04MontageSettingsByName(Name); });
	case EWeaponName::SMG_05:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSMG05MontageSettingsLibrary::GetCharacterSMG05MontageSettingsByName(Name); });
	case EWeaponName::Sniper_01:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSniper01MontageSettingsLibrary::GetCharacterSniper01MontageSettingsByName(Name); });
	case EWeaponName::Sniper_02:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSniper02MontageSettingsLibrary::GetCharacterSniper02MontageSettingsByName(Name); });
	case EWeaponName::Sniper_03:
		return CreateCharacterMontageSettingsEntry([](ECharacterMontageName Name) { return UCharacterSniper03MontageSettingsLibrary::GetCharacterSniper03MontageSettingsByName(Name); });
	default: return FCharacterWeaponMontageSettingsEntry();
	}
}

// Helper chung cho Weapon Montage Settings Entry
static FWeaponMontageSettingsEntry CreateWeaponMontageSettingsEntry(const TFunction<FWeaponMontageSettings(ECharacterMontageName)>& Get)
{
	return FWeaponMontageSettingsEntry(
		Get(ECharacterMontageName::Character_Montage_Jump),
		Get(ECharacterMontageName::Character_Montage_Fire),
		Get(ECharacterMontageName::Character_Montage_Fire_Empty),
		Get(ECharacterMontageName::Character_Montage_Reload),
		Get(ECharacterMontageName::Character_Montage_Reload_Empty),
		Get(ECharacterMontageName::Character_Montage_Reload_Bolt),
		Get(ECharacterMontageName::Character_Montage_Reload_Open),
		Get(ECharacterMontageName::Character_Montage_Reload_Insert),
		Get(ECharacterMontageName::Character_Montage_Reload_Close),
		Get(ECharacterMontageName::Character_Montage_Inspect),
		Get(ECharacterMontageName::Character_Montage_Inspect_Smooth),
		Get(ECharacterMontageName::Character_Montage_Holster),
		Get(ECharacterMontageName::Character_Montage_Holster_Smooth),
		Get(ECharacterMontageName::Character_Montage_Unholster),
		Get(ECharacterMontageName::Character_Montage_Unholster_Smooth),
		Get(ECharacterMontageName::Character_Montage_Throw_Grenade),
		Get(ECharacterMontageName::Character_Montage_Throw_Grenade_Additive),
		Get(ECharacterMontageName::Character_Montage_Knife_Attack),
		Get(ECharacterMontageName::Character_Montage_Knife_Attack_Additive),
		Get(ECharacterMontageName::Character_Montage_Attack_01),
		Get(ECharacterMontageName::Character_Montage_Attack_02),
		Get(ECharacterMontageName::Character_Montage_None)
	);
}

// Helper chung cho Character Weapon Pose Settings
static FCharacterWeaponPoseSettings CreatePoseSettings(const TFunction<FCharacterPoseSettings(ECharacterPoseName)>& Get)
{
	return FCharacterWeaponPoseSettings(
		Get(ECharacterPoseName::Idle),
		Get(ECharacterPoseName::Idle_Walking),
		Get(ECharacterPoseName::Idle_Crouch),
		Get(ECharacterPoseName::Aim),
		Get(ECharacterPoseName::Aim_Walking),
		Get(ECharacterPoseName::Aim_Crouch),
		Get(ECharacterPoseName::Ready),
		Get(ECharacterPoseName::Ready_Walking),
		Get(ECharacterPoseName::Ready_Crouch)
	);
}

FCharacterWeaponPoseSettings UWeaponInformationLibrary::GetCharacterWeaponPoseSettingsForWeapon(EWeaponName WeaponName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterAR01PoseSettingsLibrary::GetCharacterAR01PoseSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_02:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterAR02PoseSettingsLibrary::GetCharacterAR02PoseSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_03:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterAR03PoseSettingsLibrary::GetCharacterAR03PoseSettingsByName(Name); });
	case EWeaponName::Handgun_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterHandgun01PoseSettingsLibrary::GetCharacterHandgun01PoseSettingsByName(Name); });
	case EWeaponName::Handgun_02:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterHandgun02PoseSettingsLibrary::GetCharacterHandgun02PoseSettingsByName(Name); });
	case EWeaponName::Handgun_03:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterHandgun03PoseSettingsLibrary::GetCharacterHandgun03PoseSettingsByName(Name); });
	case EWeaponName::Handgun_04:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterHandgun04PoseSettingsLibrary::GetCharacterHandgun04PoseSettingsByName(Name); });
	case EWeaponName::Rocket_Launcher_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterRocketLauncher01PoseSettingsLibrary::GetCharacterRocketLauncher01PoseSettingsByName(Name); });
	case EWeaponName::Grenade_Launcher_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterGL01PoseSettingsLibrary::GetCharacterGL01PoseSettingsByName(Name); });
	case EWeaponName::Shotgun_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterShotgun01PoseSettingsLibrary::GetCharacterShotgun01PoseSettingsByName(Name); });
	case EWeaponName::SMG_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSMG01PoseSettingsLibrary::GetCharacterSMG01PoseSettingsByName(Name); });
	case EWeaponName::SMG_02:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSMG02PoseSettingsLibrary::GetCharacterSMG02PoseSettingsByName(Name); });
	case EWeaponName::SMG_03:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSMG03PoseSettingsLibrary::GetCharacterSMG03PoseSettingsByName(Name); });
	case EWeaponName::SMG_04:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSMG04PoseSettingsLibrary::GetCharacterSMG04PoseSettingsByName(Name); });
	case EWeaponName::SMG_05:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSMG05PoseSettingsLibrary::GetCharacterSMG05PoseSettingsByName(Name); });
	case EWeaponName::Sniper_01:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSniper01PoseSettingsLibrary::GetCharacterSniper01PoseSettingsByName(Name); });
	case EWeaponName::Sniper_02:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSniper02PoseSettingsLibrary::GetCharacterSniper02PoseSettingsByName(Name); });
	case EWeaponName::Sniper_03:
		return CreatePoseSettings([](ECharacterPoseName Name) { return UCharacterSniper03PoseSettingsLibrary::GetCharacterSniper03PoseSettingsByName(Name); });
	default: return FCharacterWeaponPoseSettings();
	}
}

FWeaponMontageSettingsEntry UWeaponInformationLibrary::GetWeaponMontageSettingsEntryForWeapon(EWeaponName WeaponName)
{
	switch (WeaponName)
	{
	case EWeaponName::Assault_Rifle_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UAR01MontageSettingsLibrary::GetAR01MontageSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_02:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UAR02MontageSettingsLibrary::GetAR02MontageSettingsByName(Name); });
	case EWeaponName::Assault_Rifle_03:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UAR03MontageSettingsLibrary::GetAR03MontageSettingsByName(Name); });
	case EWeaponName::Handgun_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UHandgun01MontageSettingsLibrary::GetHandgun01MontageSettingsByName(Name); });
	case EWeaponName::Handgun_02:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UHandgun02MontageSettingsLibrary::GetHandgun02MontageSettingsByName(Name); });
	case EWeaponName::Handgun_03:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UHandgun03MontageSettingsLibrary::GetHandgun03MontageSettingsByName(Name); });
	case EWeaponName::Handgun_04:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UHandgun04MontageSettingsLibrary::GetHandgun04MontageSettingsByName(Name); });
	case EWeaponName::Rocket_Launcher_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return URL01MontageSettingsLibrary::GetRL01MontageSettingsByName(Name); });
	case EWeaponName::Grenade_Launcher_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UGL01MontageSettingsLibrary::GetGL01MontageSettingsByName(Name); });
	case EWeaponName::Shotgun_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return UShotgun01MontageSettingsLibrary::GetShotgun01MontageSettingsByName(Name); });
	case EWeaponName::SMG_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USMG01MontageSettingsLibrary::GetSMG01MontageSettingsByName(Name); });
	case EWeaponName::SMG_02:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USMG02MontageSettingsLibrary::GetSMG02MontageSettingsByName(Name); });
	case EWeaponName::SMG_03:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USMG03MontageSettingsLibrary::GetSMG03MontageSettingsByName(Name); });
	case EWeaponName::SMG_04:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USMG04MontageSettingsLibrary::GetSMG04MontageSettingsByName(Name); });
	case EWeaponName::SMG_05:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USMG05MontageSettingsLibrary::GetSMG05MontageSettingsByName(Name); });
	case EWeaponName::Sniper_01:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USniper01MontageSettingsLibrary::GetSniper01MontageSettingsByName(Name); });
	case EWeaponName::Sniper_02:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USniper02MontageSettingsLibrary::GetSniper02MontageSettingsByName(Name); });
	case EWeaponName::Sniper_03:
		return CreateWeaponMontageSettingsEntry([](ECharacterMontageName Name) { return USniper03MontageSettingsLibrary::GetSniper03MontageSettingsByName(Name); });
	default: return FWeaponMontageSettingsEntry();
	}
}
