#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RushMenuWidget.generated.h"

UCLASS(BlueprintType)
class RUSH_API URushMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	URushMenuWidget(const FObjectInitializer& ObjectInitializer);
};