#pragma once

#include "CoreMinimal.h"
#include "Animation/BlendSpace.h"
#include "Animation/BlendSpace1D.h"
#include "FCharacterBlendspaceSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FCharacterBlendspaceSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blendspace")
    UBlendSpace* Blendspace = nullptr;

    FCharacterBlendspaceSettings()
    {
        // Initialize with default values
    }
};
