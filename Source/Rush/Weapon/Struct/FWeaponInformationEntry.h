#pragma once

#include "CoreMinimal.h"
#include "FGripSettingsEntry.h"
#include "FLaserSettingsEntry.h"
#include "FMuzzleSettingsEntry.h"
#include "FScopeSettingsEntry.h"
#include "FWeaponAnimationSettings.h"
#include "EWeaponName.h"
#include "FWeaponInformationEntry.generated.h"

struct FGripSettingsEntry;
struct FLaserSettingsEntry;
struct FScopeSettingsEntry;

USTRUCT(BlueprintType)
struct FWeaponInformationEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponName> Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WidgetClassCrosshair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EScopeName> RowHandleScopeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFragmentLaserName> RowHandleLaserSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMuzzleName> RowHandleMuzzleSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EGripName> RowHandleGripSettings;

	
};
