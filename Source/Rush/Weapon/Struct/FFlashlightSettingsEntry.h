#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FFlashlightSettingsEntry.generated.h"


enum class EFlashlightSettingsName;

USTRUCT(BlueprintType)
struct RUSH_API FFlashlightSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flashlight Settings")
    EFlashlightSettingsName Name;

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
