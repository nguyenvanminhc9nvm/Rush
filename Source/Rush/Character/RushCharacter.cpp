// Fill out your copyright notice in the Description page of Project Settings.


#include "RushCharacter.h"

#include "Rush/Input/RushInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "RushAbilitySystemComponent.h"
#include "RushCharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Rush/Core/GameMode/RushGameMode.h"


ARushCharacter::ARushCharacter(const FObjectInitializer& ObjectInitializer): Super(
	ObjectInitializer.SetDefaultSubobjectClass<URushCharacterMovementComponent>(CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AbilitySystemComponent = CreateDefaultSubobject<URushAbilitySystemComponent>(TEXT("AbilitySystemComponent"));


}

UInputComponent* ARushCharacter::CreatePlayerInputComponent()
{
	// Create as a component of this actor and register it so it has a valid world during ClientRestart
	RushInputComponent = NewObject<URushInputComponent>(this, URushInputComponent::StaticClass(), TEXT("URushInputComponent"));
	if (RushInputComponent)
	{
		RushInputComponent->RegisterComponent();
	}
	return RushInputComponent;
}

void ARushCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	RushInputComponent = Cast<URushInputComponent>(PlayerInputComponent);
	if (const APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<
			UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (const ARushGameMode* GameMode = Cast<ARushGameMode>(GetWorld()->GetAuthGameMode()))
			{
				if (const URushInputConfig* InputConfig = GameMode->UIConfig)
				{
					RushInputComponent->AddInputMappings(InputConfig, Subsystem);
				}
			}
		}
	}
}
