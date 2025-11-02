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

USTRUCT(Blueprintable)
struct FCharacterWeaponPoseSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsIdle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsIdleWalking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsIdleCrouch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsAim;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsAimWalking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsAimCrouch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsReady;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsReadyWalking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterPoseSettings CharacterPoseSettingsReadyCrouch;
};
