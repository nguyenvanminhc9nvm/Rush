#pragma once

#include "CoreMinimal.h"
#include "RushWeaponFragmentActor.generated.h"

USTRUCT(BlueprintType)
struct FRushFragmentWeaponActor: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> FragmentActor;
	
};

USTRUCT(BlueprintType)
struct FRushFragmentWeaponMesh: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMesh* FragmentMesh;
};

USTRUCT()
struct FRushFragmentWeaponIronSight: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMesh* FragmentMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Icon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDataTableRowHandle RowHandleSettingScope;
};

USTRUCT(BlueprintType)
struct FRushFragmentWeaponLaser: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bOffWhileAiming;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bOffWhileRunning;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bOffWhileLowered;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector RelativeLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USoundBase* ToggleSoundCue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bFlashlight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bLaserSight;
};