#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Engine.h"
#include "RushInventoryCharacterComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipped);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFullyHolstered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHolsterStateChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMakeViewModelVisible);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHolstering);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnholstering);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnarmed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnedStartingItems);

class USkeletalMeshComponent;
struct FInventoryStartingItems;

UENUM(BlueprintType)
enum EHolsterState: uint8
{
	Available UMETA(DisplayName = "Available"),
	Holstered UMETA(DisplayName = "Holstered"),
};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RUSH_API URushInventoryCharacterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	URushInventoryCharacterComponent(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	USkeletalMeshComponent* FirstPersonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	USkeletalMeshComponent* ThirdPersonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	int EquippedIndexAtStart = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	TArray<FInventoryStartingItems> StartingItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	int InventoryCapacity = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	bool bCanDropItems = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	float DroppingForce = 700.0f;

	UPROPERTY(EditAnywhere,	 BlueprintReadWrite, Category="Rush|Inventory")
	float InitialUnholsterDelay = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	bool bShowUnarmedArms = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Inventory")
	bool bUseUnarmedStateAnimations = true;


	// Function
	UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	TArray<AActor*> GetInventory() const;

	UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	AActor* GetEquippedItem() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Rush|Inventory")
	bool HasSpace() const;

	UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	int GetEquippedIndex() const;

	UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	AActor* GetPawnOwner() const;

	UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	EHolsterState GetHolsterState() const;

	


private:
	UPROPERTY()
	TArray<AActor*> Inventory;

	UPROPERTY()
	AActor* EquippedItem = nullptr;

	UPROPERTY()
	AActor* PawnOwner = nullptr;

	UPROPERTY()
	TEnumAsByte<EHolsterState> HolsterState = EHolsterState::Available;

	UPROPERTY()
	bool bStarted = false;

	UPROPERTY()
	bool bFullyHolstered = true;

	UPROPERTY()
	FName UnHolsterName = TEXT("Unholster");

	UPROPERTY()
	FName HolsterName = TEXT("Holster");

	UPROPERTY()
	bool bSpawnerInitialized = false;

	UPROPERTY()
	bool bRefreshUnholster = true;

	UPROPERTY()
	bool bEquippingHolster = true;

	UPROPERTY()
	int EquippingItem = 0;

	UPROPERTY()
	bool bChangingItem = false;

	UPROPERTY()
	bool bEquippedProperty = false;
};