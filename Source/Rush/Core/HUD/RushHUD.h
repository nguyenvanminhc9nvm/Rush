#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RushHUD.generated.h"

UCLASS(BlueprintType)
class RUSH_API ARushHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARushHUD();

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<class UUserWidget> RushMenuWidgetClass;
};