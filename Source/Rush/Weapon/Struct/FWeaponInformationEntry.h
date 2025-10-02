#pragma once

#include "CoreMinimal.h"
#include "FGripSettingsEntry.h"
#include "FLaserSettingsEntry.h"
#include "FMuzzleSettingsEntry.h"
#include "FScopeSettingsEntry.h"
#include "FWeaponAnimationSettings.h"
#include "FWeaponInformationEntry.generated.h"

struct FGripSettingsEntry;
struct FLaserSettingsEntry;
struct FScopeSettingsEntry;
enum EWeaponInformationName : uint8;

USTRUCT(BlueprintType)
struct FWeaponInformationEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponInformationName> Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WidgetClassCrosshair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EScopeName RowHandleScopeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFragmentLaserName RowHandleLaserSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMuzzleName RowHandleMuzzleSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGripName RowHandleGripSettings;

	
};
