#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RushCharacterMovementComponent.generated.h"


UCLASS(BlueprintType)
class RUSH_API URushCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	URushCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Character Movement Component")
	FVector2D Movement = FVector2D::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Character Movement Component")
	bool bIsSprint = false;
};