#pragma once

#include "CoreMinimal.h"
#include "FPreset.generated.h"

enum EGripName : uint8;
enum EMuzzleName : uint8;
enum EFragmentLaserName : uint8;
enum EScopeName : uint8;
enum EWeaponSkinName : uint8;

USTRUCT(BlueprintType)
struct FWeaponPreset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TEnumAsByte<EWeaponSkinName> RowHandleSkins;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TEnumAsByte<EScopeName> RowHandleMeshScope;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TEnumAsByte<EFragmentLaserName> RowHandleMeshLaser;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TEnumAsByte<EMuzzleName> RowHandleMeshMuzzle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TEnumAsByte<EGripName> RowHandleMeshGrip;
};
