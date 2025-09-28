#pragma once

#include "CoreMinimal.h"
#include "RushInterfaceGameMode.generated.h"

struct FInventoryLoadout;
class ARushPlayerController;

UINTERFACE()
class URushInterfaceGameMode : public UInterface
{
	GENERATED_BODY()
};

class IRushInterfaceGameMode
{
	GENERATED_BODY()

public:
	virtual void SpawnPlayerCustom(ARushPlayerController* PlayerController, UDataTable InventoryData, bool BOverrideAttachment, FInventoryLoadout Loadout) = 0;
};
