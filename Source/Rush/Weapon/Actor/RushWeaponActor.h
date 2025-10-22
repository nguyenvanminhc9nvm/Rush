#pragma once

#include "CoreMinimal.h"
#include "RushWeaponActor.generated.h"

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RUSH_API ARushWeaponActor : public AActor
{
	GENERATED_BODY()

public:
	ARushWeaponActor(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	USkeletalMeshComponent* WeaponMesh;
	
	// UPROPERTY(EditAnywhere,	BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketLaser;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketMagazine;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// UStaticMeshComponent* SMeshMagazine;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketDefault;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// UStaticMeshComponent* SMeshIronSights;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* PivotScope;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketScope;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketMuzzle;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// USceneComponent* SocketGrip;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Weapon")
	// UStaticMeshComponent* SMeshGrip;

	
};