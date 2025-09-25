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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Movement")
	bool bWantsToSprint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Movement")
	bool bWantToAim = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Movement")
	FVector SprintSpeed = FVector(700.0f, 700.0f, 700.0f);
};