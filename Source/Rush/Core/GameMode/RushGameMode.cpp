#include "RushGameMode.h"

#include "Rush/ActorComponent/RushInventoryComponent.h"
#include "Rush/Core/PlayerController/RushPlayerController.h"
#include "Rush/Loadout/FInventoryLoadout.h"

ARushGameMode::ARushGameMode(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

void ARushGameMode::SpawnPlayerCustom(ARushPlayerController* PlayerController, UDataTable InventoryData,
	bool BOverrideAttachment, FInventoryLoadout Loadout)
{
	if (DefaultPawnClass && PlayerController)
	{
		// get pawn from PlayerController
		if (APawn* Pawn = PlayerController->K2_GetPawn())
		{
			Pawn->Destroy();
		}
	}

	UClass* PawnClass = DefaultPawnClass; 
	AActor* PlayerStart = K2_FindPlayerStart(PlayerController); 

	FTransform SpawnTransform = PlayerStart->GetTransform();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = PlayerController;
	SpawnParams.Instigator = PlayerController ? PlayerController->GetPawn() : nullptr;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	APawn* Character = GetWorld()->SpawnActor<APawn>(
		PawnClass,
		SpawnTransform,
		SpawnParams
	);

	if (URushInventoryComponent* InventoryComponent = Character->FindComponentByClass<URushInventoryComponent>())
	{
		
	}
}
