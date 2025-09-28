#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Rush/Interface/RushInterfaceGameMode.h"
#include "RushGameMode.generated.h"

class URushInputConfig;

UCLASS(BlueprintType)
class RUSH_API ARushGameMode : public AGameModeBase, public IRushInterfaceGameMode
{
	GENERATED_BODY()

public:
	ARushGameMode(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIConfig")
	TObjectPtr<URushInputConfig> UIConfig;

	virtual void SpawnPlayerCustom(ARushPlayerController* PlayerController, UDataTable InventoryData, bool BOverrideAttachment, FInventoryLoadout Loadout) override;
};