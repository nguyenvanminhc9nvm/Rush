#include "RushMenuWidget.h"

#include "RushListWeaponWidget.h"
#include "RushMenuItemWidget.h"
#include "RushWeaponSelectedWidget.h"
#include "Rush/Weapon/Weapon_Information/WeaponInformationLibrary.h"
#include "WeaponIconData.h"
#include "Components/WidgetSwitcher.h"
#include "Rush/Weapon/Enum/EWeaponName.h"


void URushMenuWidget::OnWeaponSelected(UWeaponIconData* InSelectedWeaponData)
{
	this->SelectedWeaponData = InSelectedWeaponData;
	if (MenuWidgetSwitcher)
	{
		MenuWidgetSwitcher->SetActiveWidget(WeaponSelectedWidget);
		if (WeaponSelectedWidget->WeaponDetailWidget)
		{
			WeaponSelectedWidget->SetListItemObject(SelectedWeaponData);
		} 
	}
}

void URushMenuWidget::OnItemMenuClicked()
{
	if (MenuWidgetSwitcher)
	{
		MenuWidgetSwitcher->SetActiveWidget(WeaponListWidget);
	}
}


void URushMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	// Setup delegates after widgets are initialized
	if (WeaponListWidget)
	{
		WeaponListWidget->OnWeaponSelectedDelegate.AddDynamic(this, &URushMenuWidget::OnWeaponSelected);
	}

	if (WeaponSelectedWidget)
	{
		WeaponSelectedWidget->OnMenuItemClickedDelegate.AddDynamic(this, &URushMenuWidget::OnItemMenuClicked);
	}
}
