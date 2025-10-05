#include "RushWeaponSelectedWidget.h"

#include "RushMenuItemWidget.h"
#include "Components/Button.h"

void URushWeaponSelectedWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (SelectedWeaponButton)
	{
		SelectedWeaponButton->OnClicked.AddDynamic(this, &URushWeaponSelectedWidget::OnButtonClicked);
	}
}

void URushWeaponSelectedWidget::OnButtonClicked()
{
	OnMenuItemClickedDelegate.Broadcast();
}

void URushWeaponSelectedWidget::SetListItemObject(UObject* ListItemObject)
{
	if (WeaponDetailWidget)
	{
		WeaponDetailWidget->SetListItemObject(ListItemObject);
	}
}
