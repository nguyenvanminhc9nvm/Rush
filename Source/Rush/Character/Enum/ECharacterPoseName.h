#pragma once

#include "CoreMinimal.h"
#include "ECharacterPoseName.generated.h"

UENUM(BlueprintType)
enum ECharacterPoseName : uint8
{
	// Pose
	Idle                    UMETA(DisplayName = "Idle"),
	Idle_Walking            UMETA(DisplayName = "Idle-Walking"),
	Idle_Crouch             UMETA(DisplayName = "Idle-Crouch"),
	Aim                     UMETA(DisplayName = "Aim"),
	Aim_Walking             UMETA(DisplayName = "Aim-Walking"),
	Aim_Crouch              UMETA(DisplayName = "Aim-Crouch"),
	Ready                   UMETA(DisplayName = "Ready"),
	Ready_Walking           UMETA(DisplayName = "Ready-Walking"),
	Ready_Crouch            UMETA(DisplayName = "Ready-Crouch"),

	// sequence
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
