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




