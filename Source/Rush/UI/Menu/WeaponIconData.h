#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "Rush/Weapon/Struct/FWeaponInformationEntry.h"
#include "WeaponIconData.generated.h"

struct FWeaponInformationEntry;
enum EWeaponName : uint8;

UCLASS(BlueprintType)
class RUSH_API UWeaponIconData : public UObject
{
	GENERATED_BODY()

public:
	UWeaponIconData();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon Icon Data")
	FWeaponInformationEntry WeaponInfoEntry;
};
