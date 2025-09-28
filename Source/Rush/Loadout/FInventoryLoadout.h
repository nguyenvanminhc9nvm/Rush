#pragma once

#include "CoreMinimal.h"
#include "FInventoryLoadout.generated.h"

USTRUCT(BlueprintType)
struct FAttachmentMeshes
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory")
	FDataTableRowHandle RowHandleMeshScope;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory")
	FDataTableRowHandle RowHandleMeshLaser;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory")
	FDataTableRowHandle RowHandleMeshMuzzle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory")
	FDataTableRowHandle RowHandleMeshGrip;
};

USTRUCT(BlueprintType)
struct FPreset: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableRowHandle RowHandleSkins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAttachmentMeshes Attachments;
};

USTRUCT(BlueprintType)
struct FInventoryLoadout
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StartingItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPreset Preset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* Icon;
};
