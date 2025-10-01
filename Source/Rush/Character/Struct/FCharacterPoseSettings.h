#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimSequence.h"
#include "FCharacterPoseSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FCharacterPoseSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Sequences")
    UAnimSequence* SequenceBaseFirstPerson = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Sequences")
    UAnimSequence* SequenceBaseThirdPerson = nullptr;

    FCharacterPoseSettings()
    {
        // Initialize with default values
    }
};
