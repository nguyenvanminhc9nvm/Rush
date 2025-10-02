#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "FWeaponSound.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponSound
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Sound")
    TEnumAsByte<ECharacterMontageName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Sound")
    float Delay = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Sound")
    TSoftObjectPtr<class USoundCue> SoundCue;
};
