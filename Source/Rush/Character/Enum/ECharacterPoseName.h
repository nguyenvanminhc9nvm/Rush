#pragma once

#include "CoreMinimal.h"
#include "ECharacterPoseName.generated.h"

UENUM(BlueprintType)
enum ECharacterPoseName : uint8
{
	Idle                    UMETA(DisplayName = "Idle"),
	Idle_Walking            UMETA(DisplayName = "Idle-Walking"),
	Idle_Crouch             UMETA(DisplayName = "Idle-Crouch"),
	Aim                     UMETA(DisplayName = "Aim"),
	Aim_Walking             UMETA(DisplayName = "Aim-Walking"),
	Aim_Crouch              UMETA(DisplayName = "Aim-Crouch"),
	Ready                   UMETA(DisplayName = "Ready"),
	Ready_Walking           UMETA(DisplayName = "Ready-Walking"),
	Ready_Crouch            UMETA(DisplayName = "Ready-Crouch")
};
