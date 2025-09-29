#pragma once

#include "CoreMinimal.h"
#include "FPreset.generated.h"

enum class EWeaponSkinName : uint8;

USTRUCT(BlueprintType)
struct FWeaponPreset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EWeaponSkinName RowHandleSkins;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName RowHandleMeshScope;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName RowHandleMeshLaser;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName RowHandleMeshMuzzle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName RowHandleMeshGrip;
};
