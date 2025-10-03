#include "RushMenuWidget.h"

#include "RushListWeaponWidget.h"
#include "RushMenuItemWidget.h"
#include "Rush/Weapon/Weapon_Information/WeaponInformationLibrary.h"
#include "WeaponIconData.h"
#include "Components/WidgetSwitcher.h"
#include "Rush/Weapon/Enum/EWeaponName.h"

URushMenuWidget::URushMenuWidget(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	SelectedWeaponData = nullptr;
}

void URushMenuWidget::OnWeaponSelected(UWeaponIconData* SelectedWeaponData)
{
	this->SelectedWeaponData = SelectedWeaponData;
	if (MenuWidgetSwitcher && WeaponDetailWidget)
	{
		MenuWidgetSwitcher->SetActiveWidget(WeaponDetailWidget);
		WeaponDetailWidget->SetListItemObject(SelectedWeaponData);
	}
}

void URushMenuWidget::OnItemMenuClicked()
{
	if (MenuWidgetSwitcher && WeaponDetailWidget)
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
	if (WeaponDetailWidget)
	{
		WeaponDetailWidget->IsFromMain = true;
		WeaponDetailWidget->OnMenuItemClickedDelegate.AddDynamic(this, &URushMenuWidget::OnItemMenuClicked);
	}
}
