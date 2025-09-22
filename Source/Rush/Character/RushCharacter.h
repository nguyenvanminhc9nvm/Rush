// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RushCharacter.generated.h"

class URushInputComponent;

UCLASS()
class RUSH_API ARushCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	explicit ARushCharacter(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Component")
	URushInputComponent* RushInputComponent;

	virtual UInputComponent* CreatePlayerInputComponent() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
