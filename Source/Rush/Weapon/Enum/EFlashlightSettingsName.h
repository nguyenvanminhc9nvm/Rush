#pragma once

#include "CoreMinimal.h"
#include "EFlashlightSettingsName.generated.h"

UENUM(BlueprintType)
enum EFlashlightSettingsName : uint8
{
    Flashlight_Normal,
    Flashlight_Neon,
    Flashlight_Tactical
};
