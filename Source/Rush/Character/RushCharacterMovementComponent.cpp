#include "RushCharacterMovementComponent.h"

URushCharacterMovementComponent::URushCharacterMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	GravityScale = 1.5f;
	MaxAcceleration = 3000.0f;
	BrakingFriction = 1.0f;
	BrakingFrictionFactor = 1.0f;
	bUseSeparateBrakingFriction = true;
	SetCrouchedHalfHeight(54.0f);
	Mass = 400.0f;
	MaxStepHeight = 25.0f;
	MinAnalogWalkSpeed = 150.0f;
	BrakingDecelerationWalking = 1500.0f;
	bCanWalkOffLedgesWhenCrouching = true;

	// Walking
	SetWalkableFloorAngle(45.0f);
	GroundFriction = 10.0f;
	MaxWalkSpeed = 400.0f;

	// Rotation Rate
	RotationRate = FRotator(-1.0f, 0.0f, 0.0f);
	bUseControllerDesiredRotation = true;
	
	// Jump
	JumpZVelocity = 600.0f;
	AirControl = .35f;

	// physics interaction
	StandingDownwardForceScale = 0.0f;
	PushForceFactor = 75000.0f;

	NavAgentProps.bCanCrouch = true;
	NavAgentProps.bCanFly = true;
	NavAgentProps.bCanSwim = true;
	NavAgentProps.bCanJump = true;
	NavAgentProps.bCanWalk = true;
}

