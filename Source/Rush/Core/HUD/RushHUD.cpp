#include "RushHUD.h"

#include "Blueprint/UserWidget.h"
#include "Rush/Tags/LogUtils.h"

ARushHUD::ARushHUD()
{
	
}

void ARushHUD::BeginPlay()
{
	Super::BeginPlay();
	// init Rush Menu Widget
	if (RushMenuWidgetClass)
	{
		if (UUserWidget* RushMenu = CreateWidget<UUserWidget>(GetWorld(), RushMenuWidgetClass))
		{
			ULogUtils::Log("Rush Menu Widget created and added to viewport.", ELogLevel::Info, "RushHUD", true);
			RushMenu->AddToViewport();
		}
	}
}
