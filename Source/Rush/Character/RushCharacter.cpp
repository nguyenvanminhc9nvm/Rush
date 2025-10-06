// Fill out your copyright notice in the Description page of Project Settings.


#include "RushCharacter.h"

#include "Rush/Input/RushInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "RushAbilitySystemComponent.h"
#include "RushCharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Rush/Core/GameMode/RushGameMode.h"
#include "Rush/Tags/LogUtils.h"


ARushCharacter::ARushCharacter(const FObjectInitializer& ObjectInitializer): Super(
	ObjectInitializer.SetDefaultSubobjectClass<URushCharacterMovementComponent>(CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AbilitySystemComponent = CreateDefaultSubobject<URushAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	PhysicalAnimationComponent = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("PhysicalAnimationComponent"));
}

UInputComponent* ARushCharacter::CreatePlayerInputComponent()
{
	// Create as a component of this actor and register it so it has a valid world during ClientRestart
	RushInputComponent = NewObject<URushInputComponent>(this, URushInputComponent::StaticClass(), TEXT("URushInputComponent"));
	if (RushInputComponent)
	{
		RushInputComponent->RegisterComponent();
	}
	ULogUtils::Log(TEXT("RushInputComponent: Name: ") + (RushInputComponent ? RushInputComponent->GetName() : TEXT("nullptr")), ELogLevel::Debug, TEXT("RushCharacter"), true, 5.f);
	OnRushInputReady.Broadcast();
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
			if (UIConfig)
			{
				ULogUtils::Log(TEXT("UIConfig: Found: ") + UIConfig->GetName(), ELogLevel::Debug, TEXT("RushCharacter"), true, 5.f);
			
				RushInputComponent->AddInputMappings(UIConfig, Subsystem);
			}
		}
	}
}
