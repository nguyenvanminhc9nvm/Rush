// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Rush/Input/RushInputAction.h"
#include "Rush/Weapon/Struct/FLaserSettingsEntry.h"
#include "Rush/Weapon/Struct/FScopeSettingsEntry.h"
#include "RushCharacter.generated.h"

struct FScopeSettingsEntry;
class UCameraComponent;
class USpringArmComponent;
class URushAbilitySystemComponent;
class URushInputComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRushInputReady);


UCLASS()
class RUSH_API ARushCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	explicit ARushCharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	URushInputComponent* RushInputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	URushAbilitySystemComponent* AbilitySystemComponent;

	virtual UInputComponent* CreatePlayerInputComponent() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicalAnimationComponent* PhysicalAnimationComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<URushInputConfig> UIConfig;

	UPROPERTY(BlueprintAssignable)
	FOnRushInputReady OnRushInputReady;

	UFUNCTION(BlueprintImplementableEvent)
	void ToggleWeaponLaser(bool bIsDiable);

	UFUNCTION(BlueprintImplementableEvent)
	void TogglePerspectiveChange(bool bIsFirstPerson);

	UFUNCTION(BlueprintImplementableEvent)
	void ToggleHolster();

	UFUNCTION(BlueprintImplementableEvent)
	void ToggleFreeLook();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bIsLowerWeapon = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForwardBlocked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAiming = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ControlRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CameraUnlockedStartRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCameraUnlocked = false;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FVector GetForwardRotation() const;

	UFUNCTION(BlueprintImplementableEvent)
	bool IsFirstPersonView() const;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeaningAlphaSetter = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLeaningSetter = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLeaningSwitchedSetter = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LeaningLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LeaningRotation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScopeSettingsEntry WeaponScopeSettingsEntry;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLaserSettingsEntry WeaponSettingLaserEntry;
};
