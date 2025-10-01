#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "FCharacterMontageSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FCharacterMontageSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* SequenceBaseFirstPerson = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Montages")
    UAnimMontage* SequenceBaseThirdPerson = nullptr;

    FCharacterMontageSettings()
    {
        // Initialize with default values
    }
};
