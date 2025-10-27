#pragma once

#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "Components/TimelineComponent.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Rush/Weapon/Struct/FScopeEntry.h"
#include "Rush/Weapon/Struct/FWeaponInformationEntry.h"
#include "RushWeaponActor.generated.h"

struct FWeaponInformationEntry;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RUSH_API ARushWeaponActor : public AActor
{
	GENERATED_BODY()

public:
	ARushWeaponActor(const FObjectInitializer& ObjectInitializer);

	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void BeginPlay() override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USkeletalMeshComponent* WeaponMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketLaser;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketMagazine;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SMeshMagazine;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketDefault;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SMeshIronSights;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* PivotScope;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketScope;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketMuzzle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SocketGrip;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SMeshGrip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPointLightComponent* SLightPointMuzzleFlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent* SAudioComponentPlaying;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponName> WeaponEquipped = EWeaponName::Assault_Rifle_01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponIconName> ScopeEquipped = EWeaponIconName::NoneHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponIconName> MuzzleEquipped = EWeaponIconName::NoneHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponIconName> GripEquipped = EWeaponIconName::NoneHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponIconName> LaserEquipped = EWeaponIconName::NoneHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponInformationEntry WeaponInformationEntry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLaserOn = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLaserTurnedOn = false;
public:
	UFUNCTION(BlueprintCallable)
	FWeaponInformationEntry GetWeaponInformationEntry();
	
};