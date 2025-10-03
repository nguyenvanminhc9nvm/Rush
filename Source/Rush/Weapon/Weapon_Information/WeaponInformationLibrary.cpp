#include "WeaponInformationLibrary.h"

#include "Rush/Ability/AbilitiesSettingsLibrary.h"
#include "Rush/Ability/Enum/EAbilityName.h"
#include "Rush/Character/CharacterAR01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterAR01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterAR02MontageSettingsLibrary.h"
#include "Rush/Character/CharacterAR02PoseSettingsLibrary.h"
#include "Rush/Character/CharacterAR03MontageSettingsLibrary.h"
#include "Rush/Character/CharacterAR03PoseSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun02MontageSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun02PoseSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun03MontageSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun03PoseSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun04MontageSettingsLibrary.h"
#include "Rush/Character/CharacterHandgun04PoseSettingsLibrary.h"
#include "Rush/Character/CharacterRocketLauncher01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterRocketLauncher01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterGL01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterGL01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterShotgun01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterShotgun01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSMG01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSMG01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSMG02MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSMG02PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSMG03MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSMG03PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSMG04MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSMG04PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSMG05MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSMG05PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSniper01MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSniper01PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSniper02MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSniper02PoseSettingsLibrary.h"
#include "Rush/Character/CharacterSniper03MontageSettingsLibrary.h"
#include "Rush/Character/CharacterSniper03PoseSettingsLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Weapon/AR01GripSettingsLibrary.h"
#include "Rush/Weapon/AR01MontageSettingsLibrary.h"
#include "Rush/Weapon/AR01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/AR01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/AR01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/AR02GripSettingsLibrary.h"
#include "Rush/Weapon/AR02MontageSettingsLibrary.h"
#include "Rush/Weapon/AR02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/AR02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/AR02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/AR03GripSettingsLibrary.h"
#include "Rush/Weapon/AR03MontageSettingsLibrary.h"
#include "Rush/Weapon/AR03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/AR03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/AR03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Handgun01GripSettingsLibrary.h"
#include "Rush/Weapon/Handgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Handgun01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Handgun01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Handgun02GripSettingsLibrary.h"
#include "Rush/Weapon/Handgun02MontageSettingsLibrary.h"
#include "Rush/Weapon/Handgun02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Handgun02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Handgun03GripSettingsLibrary.h"
#include "Rush/Weapon/Handgun03MontageSettingsLibrary.h"
#include "Rush/Weapon/Handgun03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Handgun03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Handgun04GripSettingsLibrary.h"
#include "Rush/Weapon/Handgun04MontageSettingsLibrary.h"
#include "Rush/Weapon/Handgun04MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Handgun04WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/HandgunWeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/RL01GripSettingsLibrary.h"
#include "Rush/Weapon/RL01MontageSettingsLibrary.h"
#include "Rush/Weapon/RL01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/RL01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/RL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/GL01GripSettingsLibrary.h"
#include "Rush/Weapon/GL01MontageSettingsLibrary.h"
#include "Rush/Weapon/GL01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/GL01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/GL01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Shotgun01GripSettingsLibrary.h"
#include "Rush/Weapon/Shotgun01MontageSettingsLibrary.h"
#include "Rush/Weapon/Shotgun01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Shotgun01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Shotgun01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/SMG01GripSettingsLibrary.h"
#include "Rush/Weapon/SMG01MontageSettingsLibrary.h"
#include "Rush/Weapon/SMG01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/SMG01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/SMG01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/SMG02GripSettingsLibrary.h"
#include "Rush/Weapon/SMG02MontageSettingsLibrary.h"
#include "Rush/Weapon/SMG02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/SMG02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/SMG02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/SMG03GripSettingsLibrary.h"
#include "Rush/Weapon/SMG03MontageSettingsLibrary.h"
#include "Rush/Weapon/SMG03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/SMG03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/SMG03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/SMG04GripSettingsLibrary.h"
#include "Rush/Weapon/SMG04MontageSettingsLibrary.h"
#include "Rush/Weapon/SMG04MuzzleSettingsLibrary.h"
#include "Rush/Weapon/SMG04WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/SMG04WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/SMG05GripSettingsLibrary.h"
#include "Rush/Weapon/SMG05MontageSettingsLibrary.h"
#include "Rush/Weapon/SMG05MuzzleSettingsLibrary.h"
#include "Rush/Weapon/SMG05WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/SMG05WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Sniper01GripSettingsLibrary.h"
#include "Rush/Weapon/Sniper01MontageSettingsLibrary.h"
#include "Rush/Weapon/Sniper01MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Sniper01WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Sniper01WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Sniper02GripSettingsLibrary.h"
#include "Rush/Weapon/Sniper02MontageSettingsLibrary.h"
#include "Rush/Weapon/Sniper02MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Sniper02WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Sniper02WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/Sniper03GripSettingsLibrary.h"
#include "Rush/Weapon/Sniper03MontageSettingsLibrary.h"
#include "Rush/Weapon/Sniper03MuzzleSettingsLibrary.h"
#include "Rush/Weapon/Sniper03WeaponIconSettingsLibrary.h"
#include "Rush/Weapon/Sniper03WeaponSoundSettingsLibrary.h"
#include "Rush/Weapon/LaserSettingsLibrary.h"
#include "Rush/Weapon/ScopeSettingsLibrary.h"
#include "Rush/Weapon/WeaponAnimationSettingsLibrary.h"
#include "Rush/Weapon/WeaponMovementSettingsLibrary.h"
#include "Rush/Weapon/WeaponSettingsLibrary.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"

static TMap<EWeaponName, FWeaponInformationEntry> GWeaponInformationMap;

static void InitWeaponInformation()
{
	if (GWeaponInformationMap.Num() > 0) return;

	FWeaponInformationEntry AssaultRifle01;
	AssaultRifle01.Name = EWeaponName::Assault_Rifle_01;
	AssaultRifle01.WidgetClassCrosshair = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/UI/Crosshairs/WBP_LPSP_Crosshair_Classic_01.WBP_LPSP_Crosshair_Classic_01_C"));
	AssaultRifle01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	AssaultRifle01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	AssaultRifle01.RowHandleMuzzleSettings = UAR01MuzzleSettingsLibrary::GetAllMuzzleSettings();
	AssaultRifle01.RowHandleGripSettings = UAR01GripSettingsLibrary::GetAllGripSettings();
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
	AssaultRifle02.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	AssaultRifle02.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	AssaultRifle02.RowHandleMuzzleSettings = UAR02MuzzleSettingsLibrary::GetAllAR02MuzzleSettings();
	AssaultRifle02.RowHandleGripSettings = UAR02GripSettingsLibrary::GetAllAR02GripSettings();
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
	AssaultRifle03.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	AssaultRifle03.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	AssaultRifle03.RowHandleMuzzleSettings = UAR03MuzzleSettingsLibrary::GetAllAR03MuzzleSettings();
	AssaultRifle03.RowHandleGripSettings = UAR03GripSettingsLibrary::GetAllAR03GripSettings();
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
	Handgun01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Handgun01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Handgun01.RowHandleMuzzleSettings = UHandgun01MuzzleSettingsLibrary::GetAllHandgun01MuzzleSettings();
	Handgun01.RowHandleGripSettings = UHandgun01GripSettingsLibrary::GetAllHandgun01GripSettings();
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
	Handgun02.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Handgun02.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Handgun02.RowHandleMuzzleSettings = UHandgun02MuzzleSettingsLibrary::GetAllHandgun02MuzzleSettings();
	Handgun02.RowHandleGripSettings = UHandgun02GripSettingsLibrary::GetAllHandgun02GripSettings();
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
	Handgun03.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Handgun03.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Handgun03.RowHandleMuzzleSettings = UHandgun03MuzzleSettingsLibrary::GetAllHandgun03MuzzleSettings();
	Handgun03.RowHandleGripSettings = UHandgun03GripSettingsLibrary::GetAllHandgun03GripSettings();
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
	Handgun04.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Handgun04.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Handgun04.RowHandleMuzzleSettings = UHandgun04MuzzleSettingsLibrary::GetAllHandgun04MuzzleSettings();
	Handgun04.RowHandleGripSettings = UHandgun04GripSettingsLibrary::GetAllHandgun04GripSettings();
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
	RocketLauncher01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	RocketLauncher01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	RocketLauncher01.RowHandleMuzzleSettings = URL01MuzzleSettingsLibrary::GetAllRL01MuzzleSettings();
	RocketLauncher01.RowHandleGripSettings = URL01GripSettingsLibrary::GetAllRL01GripSettings();
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
	GrenadeLauncher01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	GrenadeLauncher01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	GrenadeLauncher01.RowHandleMuzzleSettings = UGL01MuzzleSettingsLibrary::GetAllGL01MuzzleSettings();
	GrenadeLauncher01.RowHandleGripSettings = UGL01GripSettingsLibrary::GetAllGL01GripSettings();
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
	Shotgun01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Shotgun01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Shotgun01.RowHandleMuzzleSettings = UShotgun01MuzzleSettingsLibrary::GetAllShotgun01MuzzleSettings();
	Shotgun01.RowHandleGripSettings = UShotgun01GripSettingsLibrary::GetAllShotgun01GripSettings();
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
	SMG01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	SMG01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	SMG01.RowHandleMuzzleSettings = USMG01MuzzleSettingsLibrary::GetAllSMG01MuzzleSettings();
	SMG01.RowHandleGripSettings = USMG01GripSettingsLibrary::GetAllSMG01GripSettings();
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
	SMG02.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	SMG02.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	SMG02.RowHandleMuzzleSettings = USMG02MuzzleSettingsLibrary::GetAllSMG02MuzzleSettings();
	SMG02.RowHandleGripSettings = USMG02GripSettingsLibrary::GetAllSMG02GripSettings();
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
	SMG03.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	SMG03.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	SMG03.RowHandleMuzzleSettings = USMG03MuzzleSettingsLibrary::GetAllSMG03MuzzleSettings();
	SMG03.RowHandleGripSettings = USMG03GripSettingsLibrary::GetAllSMG03GripSettings();
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
	SMG04.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	SMG04.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	SMG04.RowHandleMuzzleSettings = USMG04MuzzleSettingsLibrary::GetAllSMG04MuzzleSettings();
	SMG04.RowHandleGripSettings = USMG04GripSettingsLibrary::GetAllSMG04GripSettings();
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
	SMG05.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	SMG05.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	SMG05.RowHandleMuzzleSettings = USMG05MuzzleSettingsLibrary::GetAllSMG05MuzzleSettings();
	SMG05.RowHandleGripSettings = USMG05GripSettingsLibrary::GetAllSMG05GripSettings();
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
	Sniper01.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Sniper01.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Sniper01.RowHandleMuzzleSettings = USniper01MuzzleSettingsLibrary::GetAllSniper01MuzzleSettings();
	Sniper01.RowHandleGripSettings = USniper01GripSettingsLibrary::GetAllSniper01GripSettings();
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
	Sniper02.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Sniper02.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Sniper02.RowHandleMuzzleSettings = USniper02MuzzleSettingsLibrary::GetAllSniper02MuzzleSettings();
	Sniper02.RowHandleGripSettings = USniper02GripSettingsLibrary::GetAllSniper02GripSettings();
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
	Sniper03.RowHandleScopeSettings = UScopeSettingsLibrary::GetAllScopeSettings();
	Sniper03.RowHandleLaserSettings = ULaserSettingsLibrary::GetAllLaserSettings();
	Sniper03.RowHandleMuzzleSettings = USniper03MuzzleSettingsLibrary::GetAllSniper03MuzzleSettings();
	Sniper03.RowHandleGripSettings = USniper03GripSettingsLibrary::GetAllSniper03GripSettings();
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
