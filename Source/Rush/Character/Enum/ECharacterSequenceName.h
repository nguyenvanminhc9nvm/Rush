#pragma once

#include "CoreMinimal.h"
#include "ECharacterSequenceName.generated.h"

UENUM(BlueprintType)
enum ECharacterSequenceName : uint8
{
	Standing_Breathing      UMETA(DisplayName = "Standing-Breathing"),
	Aiming_Walking          UMETA(DisplayName = "Aiming-Walking"),
	Aiming_Breathing        UMETA(DisplayName = "Aiming-Breathing"),
	Turning                 UMETA(DisplayName = "Turning"),
	Jog                     UMETA(DisplayName = "Jog"),
	Sprint                  UMETA(DisplayName = "Sprint"),
	Sprint_Impulse          UMETA(DisplayName = "Sprint-Impulse"),
	Sprint_Tactical         UMETA(DisplayName = "Sprint-Tactical"),
	Crouching_Walking       UMETA(DisplayName = "Crouching-Walking")
};
