#include "RushPlayerController.h"

#include "Blueprint/UserWidget.h"

void ARushPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (SpawnerMenuClass)
	{
		if (UUserWidget* SpawnerMenu = CreateWidget<UUserWidget>(this, SpawnerMenuClass))
		{
			SpawnerMenu->AddToViewport();
		}
	}
}
