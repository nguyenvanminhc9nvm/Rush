#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Enum/ELasersightSettingsName.h"
#include "FLasersightSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FLasersightSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    TEnumAsByte<ELasersightSettingsName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    float LasersightBeamThickness;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    FLinearColor LasersightBeamColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    TSoftObjectPtr<UMaterialInterface> LasersightBeamMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    float LasersightDotSizeBase;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    float LasersightDotSizeMultiplier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    FLinearColor LasersightDotColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    TSoftObjectPtr<UMaterialInterface> LasersightDotMaterial;
};
