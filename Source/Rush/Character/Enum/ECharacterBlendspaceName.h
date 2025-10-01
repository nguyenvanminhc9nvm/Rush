#pragma once

#include "CoreMinimal.h"
#include "ECharacterBlendspaceName.generated.h"

UENUM(BlueprintType)
enum ECharacterBlendspaceName : uint8
{
	Walking                 UMETA(DisplayName = "Walking"),
	Leaning                 UMETA(DisplayName = "Leaning"),
	Aim_Offset              UMETA(DisplayName = "Aim-Offset")
};
