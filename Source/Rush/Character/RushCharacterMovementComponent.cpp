#include "RushCharacterMovementComponent.h"

URushCharacterMovementComponent::URushCharacterMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	MaxAcceleration = 800.0f;
	BrakingFrictionFactor = 1.0f;
	SetCrouchedHalfHeight(60.0f);
	bUseSeparateBrakingFriction = true;
	GroundFriction = 5.0f;
	MaxWalkSpeed = 500.0f;
	MinAnalogWalkSpeed = 150.0f;
	BrakingDecelerationWalking = 1500.0f;
	bCanWalkOffLedgesWhenCrouching = true;
	PerchRadiusThreshold = 20.0f;
	bUseFlatBaseForFloorChecks = true;
	JumpZVelocity = 500.0f;
	AirControl = 0.25f;
	RotationRate = FRotator(0.0f, 0.0f, -1.0f);
	bUseControllerDesiredRotation = true; 
}

