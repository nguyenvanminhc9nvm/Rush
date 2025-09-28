#pragma once

#include "CoreMinimal.h"
#include "Rush/Loadout/FInventoryLoadout.h"
#include "InventoryStartingItems.generated.h"

struct FPreset;

USTRUCT(BlueprintType)
struct FInventoryStartingItems
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Inventory")
	bool bRandomize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Inventory")
	FDataTableRowHandle InventorySlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Inventory")
	bool bOverrideAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Inventory")
	FPreset Attachments;
};
