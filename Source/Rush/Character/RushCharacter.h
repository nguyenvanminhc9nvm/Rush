// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Rush/Input/RushInputAction.h"
#include "RushCharacter.generated.h"

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Component")
	URushInputComponent* RushInputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush|Movement")
	URushAbilitySystemComponent* AbilitySystemComponent;

	virtual UInputComponent* CreatePlayerInputComponent() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Components")
	class UPhysicalAnimationComponent* PhysicalAnimationComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UIConfig")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Movement")
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

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Anim Instance")
	float LeaningAlphaSetter = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Anim Instance")
	bool bIsLeaningSetter = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Anim Instance")
	bool bLeaningSwitchedSetter = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Anim Instance")
	FVector LeaningLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush Anim Instance")
	FVector LeaningRotation = FVector::ZeroVector;

};
