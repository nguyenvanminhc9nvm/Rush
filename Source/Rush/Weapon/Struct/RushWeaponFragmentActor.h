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
