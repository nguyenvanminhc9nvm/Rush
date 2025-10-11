#pragma once

#include "CoreMinimal.h"

namespace FirstPersonSettings
{
	inline FVector Offset = FVector(0.0f, 80.0f, 0.0f);

	inline FVector OffsetAiming = FVector(0.0f, 85.0f, 0.0f);

	inline FVector OffsetHolstered = FVector(0.0f, 80.0f, 0.0f);

	inline FVector OffsetRunning = FVector(0.0f, 80.0f, 0.0f);

	inline float OffsetInterpolationSpeed = 0.0f;

	inline float Distance = 150.0f;

	inline float DistanceAiming = 120.0f;

	inline float DistanceRunning = 150.0f;

	inline float DistanceHolstered = 200.0f;

	inline float DistanceInterpolationSpeed = 0.0f;

	inline float ViewBlocked = .6f;

	inline float LeaningAmplitude = 25.0f;
}
