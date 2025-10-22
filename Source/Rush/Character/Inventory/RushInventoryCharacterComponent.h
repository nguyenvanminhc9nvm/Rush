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
	//
	// // Function
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// TArray<AActor*> GetInventory() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// AActor* GetEquippedItem() const;
	//
	// UFUNCTION(BlueprintCallable, BlueprintPure, Category="Rush|Inventory")
	// bool HasSpace() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void TryPickUpItem(AActor* Item);
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// int GetPreviousItemIndex() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// int GetNextItemIndex() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// int GetEquippedIndex() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void TryDropEquipped(bool bPlayDropAnimation);
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// AActor* GetEquipped();
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// AActor* GetPawnOwner() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// EHolsterState GetHolsterState() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// FName GetNameMontageHolster() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// FName GetNameMontageUnholster() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// USkeletalMesh* GetFirstPersonMesh() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// USkeletalMesh* GetThirdPersonMesh() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void TryStartHolsterWeaponAbility();
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void StopAllOwnerMontages();
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void DropEquipped(bool bEquipNext);
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void TryEquipItemAdded(int Added);
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// bool IsChangingItem() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// bool GetFullyHolstered() const;
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void AddItemToInventory(AActor* Item);
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void LocalEquipNextItem();
	//
	// UFUNCTION(BlueprintCallable, Category="Rush|Inventory")
	// void ThrowEquippedItem();

private:
	
	UPROPERTY()
	USkeletalMeshComponent* FirstPersonMesh;

	UPROPERTY()
	USkeletalMeshComponent* ThirdPersonMesh;

	UPROPERTY()
	int EquippedIndexAtStart = 0;
	
	UPROPERTY()
	int InventoryCapacity = 3;

	UPROPERTY()
	bool bCanDropItems = true;

	UPROPERTY()
	float DroppingForce = 700.0f;

	UPROPERTY()
	float InitialUnholsterDelay = 0.5f;

	UPROPERTY()
	bool bShowUnarmedArms = true;

	UPROPERTY()
	bool bUseUnarmedStateAnimations = true;
	
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