#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FLasersightSettingsEntry.generated.h"

enum class ELasersightSettingsName;

USTRUCT(BlueprintType)
struct RUSH_API FLasersightSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lasersight Settings")
    ELasersightSettingsName Name;

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
