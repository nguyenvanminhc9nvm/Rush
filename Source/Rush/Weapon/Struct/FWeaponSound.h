#pragma once

#include "CoreMinimal.h"
#include "FWeaponSound.generated.h"

enum ECharacterMontageName : uint8;

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





