#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FGripSettingsEntry.generated.h"

enum EWeaponIconName : uint8;

USTRUCT(BlueprintType)
struct RUSH_API FAnimationSequences
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation Sequences")
    TSoftObjectPtr<UAnimSequence> SequenceBaseFirstPerson;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation Sequences")
    TSoftObjectPtr<UAnimSequence> SequenceBaseThirdPerson;
};

USTRUCT(BlueprintType)
struct RUSH_API FGripSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip Settings")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip Settings")
    FAnimationSequences IdlePoses;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip Settings")
    FAnimationSequences AimedPoses;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip Settings")
    FAnimationSequences HolsteredPoses;
};
