#pragma once

#include "CoreMinimal.h"
#include "FGripSettingsEntry.h"
#include "FLaserSettingsEntry.h"
#include "FMuzzleSettingsEntry.h"
#include "FScopeSettingsEntry.h"
#include "FWeaponAnimationSettings.h"
#include "FWeaponIcon.h"
#include "FWeaponMontageSettings.h"
#include "FWeaponMovementSettings.h"
#include "FWeaponSettings.h"
#include "FWeaponSound.h"
#include "Rush/Ability/Struct/FAbilities.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "Rush/Weapon/Enum/EWeaponMovementName.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "FWeaponInformationEntry.generated.h"

struct FWeaponAnimationSettings;
enum EWeaponIconName : uint8;
enum EAbilityName : uint8;
enum EWeaponMontageName : uint8;
enum ECharacterMontageName : uint8;
enum ECharacterPoseName : uint8;
struct FGripSettingsEntry;
struct FLaserSettingsEntry;
struct FScopeSettingsEntry;

USTRUCT(BlueprintType)
struct FWeaponInformationEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponName> Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WidgetClassCrosshair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FScopeSettingsEntry> RowHandleScopeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLaserSettingsEntry> RowHandleLaserSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMuzzleSettingsEntry> RowHandleMuzzleSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGripSettingsEntry> RowHandleGripSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponAnimationSettings WeaponAnimationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterPoseSettings> CharacterPoseSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterMontageSettings> CharacterMontageSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWeaponMontageSettings> WeaponMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponSettings WeaponSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilities CharacterAbilitySetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponMovementSettings WeaponMovementSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWeaponIcon> WeaponIconSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWeaponSound> WeaponSoundSettings;
};
