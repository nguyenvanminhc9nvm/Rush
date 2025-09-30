#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "WeaponIconData.generated.h"

enum EWeaponName : uint8;

UCLASS(BlueprintType)
class RUSH_API UWeaponIconData : public UObject
{
	GENERATED_BODY()

public:
	UWeaponIconData();

	// Base weapon image
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* BaseImage;

	// Weapon component images
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* MagazineImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* IronsightsImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* MuzzleImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* ScopeImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Icons")
	UTexture2D* GripImage;

	// Weapon name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
	EWeaponName WeaponName;
};
