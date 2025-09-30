#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "../Enum/EWeaponIconName.h"
#include "FWeaponIcon.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponIcon
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icon")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icon")
    TSoftObjectPtr<UTexture2D> Texture;
};
