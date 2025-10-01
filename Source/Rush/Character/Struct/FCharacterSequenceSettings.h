#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimSequence.h"
#include "FCharacterSequenceSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FCharacterSequenceSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Sequences")
    UAnimSequence* SequenceBaseFirstPerson = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Sequences")
    UAnimSequence* SequenceBaseThirdPerson = nullptr;

    FCharacterSequenceSettings()
    {
        // Initialize with default values
    }
};
