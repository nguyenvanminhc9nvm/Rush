#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Enum/EFlashlightSettingsName.h"
#include "FFlashlightSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FFlashlightSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
	TEnumAsByte<EFlashlightSettingsName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    float Intensity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    float AttenuationRadius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    float InnerConeAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    float OuterConeAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    FLinearColor Color;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    TSoftObjectPtr<UMaterialInterface> LightFunctionMaterial;
};
