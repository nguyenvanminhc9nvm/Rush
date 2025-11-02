#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "FCharacterMontageSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FCharacterMontageSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* MontageBaseFirstPerson = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* MontageBaseThirdPerson = nullptr;

    FCharacterMontageSettings()
    {
        // Initialize with default values
    }
};


USTRUCT(Blueprintable)
struct FCharacterWeaponMontageSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsJump;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsFire;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsFireEmpty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReload;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReloadEmpty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReloadBolt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReloadOpen;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReloadInsert;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsReloadClose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsInspect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsInspectSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsHolster;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsHolsterSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsUnholster;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsUnholsterSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsThrowGrenade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsThrowGrenadeAdditive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsKnifeAttack;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsKnifeAttackAdditive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsAttack01;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsAttack02;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterMontageSettings WeaponMontageSettingsNone;
};
