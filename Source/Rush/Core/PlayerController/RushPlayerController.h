#pragma once

#include "CoreMinimal.h"
#include "RushPlayerController.generated.h"

UCLASS()
class RUSH_API ARushPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY()
	TSubclassOf<UUserWidget> SpawnerMenuClass;
};