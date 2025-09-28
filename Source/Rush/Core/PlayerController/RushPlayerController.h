#pragma once

#include "CoreMinimal.h"
#include "RushPlayerController.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class RUSH_API ARushPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> SpawnerMenuClass;
};