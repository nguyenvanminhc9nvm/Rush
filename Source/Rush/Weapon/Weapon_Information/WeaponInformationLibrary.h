#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Rush/Weapon/Struct/FWeaponInformationEntry.h"
#include "WeaponInformationLibrary.generated.h"

UCLASS(BlueprintType)
class RUSH_API UWeaponInformationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Weapon Information Settings")
	static FWeaponInformationEntry GetWeaponInformationByName(EWeaponName WeaponName);

	UFUNCTION(BlueprintCallable, Category = "Weapon Information Settings")
	static TArray<FWeaponInformationEntry> GetAllWeaponInformationEntries();

	UFUNCTION(BlueprintCallable, Category = "Weapon Information Settings")
	static FWeaponInformationEntry GetWeaponInformationByProperties(
		EWeaponName WeaponName,
		EWeaponIconName ScopeName,
		EWeaponIconName LaserName,
		EWeaponIconName MuzzleName,
		EWeaponIconName GripName,
		EWeaponSkinName SkinName,
		EFlashlightSettingsName FlashlightName,
		ECharacterMontageName WeaponSoundSetting,
		EAbilityName AbilityName
		);

	UFUNCTION()
	static FWeaponIcon GetScopeIconForWeapon(EWeaponName WeaponName, EWeaponIconName ScopeName);

	UFUNCTION()
	static FWeaponIcon GetLaserIconForWeapon(EWeaponName WeaponName, EWeaponIconName LaserName);

	UFUNCTION()
	static FWeaponIcon GetGripIconForWeapon(EWeaponName WeaponName, EWeaponIconName GripName);

	UFUNCTION()
	static FGripSettingsEntry GetGripSettingsForWeapon(EWeaponName WeaponName, EWeaponIconName GripName);

	UFUNCTION()
	static FMuzzleSettingsEntry GetMuzzleSettingsForWeapon(EWeaponName WeaponName, EWeaponIconName MuzzleName);

	UFUNCTION()
	static FWeaponIcon GetMuzzleIconForWeapon(EWeaponName WeaponName, EWeaponIconName MuzzleName);

	UFUNCTION()
	static FWeaponMontageSettings GetWeaponMontageSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName MontageName);

	UFUNCTION()
	static FCharacterPoseSettings GetCharacterPoseSettingsForWeapon(EWeaponName WeaponName, ECharacterPoseName PoseName);

	UFUNCTION()
	static FCharacterMontageSettings GetCharacterMontageSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName MontageName);

	UFUNCTION()
	static FWeaponSound GetWeaponSoundSettingsForWeapon(EWeaponName WeaponName, ECharacterMontageName SoundName);

	UFUNCTION()
	static FWeaponPhysicalSettingsEntry GetWeaponPhysicalSettingsEntryForWeapon();

	UFUNCTION()
	static FCharacterWeaponMontageSettingsEntry GetCharacterMontageSettingsEntryForWeapon(EWeaponName WeaponName);

	UFUNCTION()
	static FCharacterWeaponPoseSettings GetCharacterWeaponPoseSettingsForWeapon(EWeaponName WeaponName);

	UFUNCTION()
	static FWeaponMontageSettingsEntry GetWeaponMontageSettingsEntryForWeapon(EWeaponName WeaponName);
};