// Fill out your copyright notice in the Description page of Project Settings.


#include "RushCharacter.h"

#include "Rush/GameMode/RushGameMode.h"
#include "Rush/Input/RushInputComponent.h"
#include "EnhancedInputSubsystems.h"


ARushCharacter::ARushCharacter(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
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
