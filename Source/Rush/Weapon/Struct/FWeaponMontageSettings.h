#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FWeaponMontageSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponMontageSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* MontageBaseFirstPerson = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* MontageBaseThirdPerson = nullptr;

    FWeaponMontageSettings() {}
};


USTRUCT(Blueprintable)
struct FWeaponMontageSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsJump;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsFire;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsFireEmpty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReload;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReloadEmpty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReloadBolt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReloadOpen;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReloadInsert;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsReloadClose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsInspect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsInspectSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsHolster;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsHolsterSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsUnholster;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsUnholsterSmooth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsThrowGrenade;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsThrowGrenadeAdditive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsKnifeAttack;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsKnifeAttackAdditive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsAttack01;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsAttack02;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FWeaponMontageSettings WeaponMontageSettingsNone;
};
