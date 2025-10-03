#include "RushListWeaponWidget.h"
#include "WeaponIconData.h"
#include "Components/ListView.h"
#include "Rush/Weapon/Weapon_Information/WeaponInformationLibrary.h"
#include "RushMenuWidget.h"
#include "Components/Button.h"

URushListWeaponWidget::URushListWeaponWidget()
{
	
}

void URushListWeaponWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Initialize weapon data
	TArray<FWeaponInformationEntry> WeaponInformation = UWeaponInformationLibrary::GetAllWeaponInformationEntries();
	WeaponIconDataArray.Empty();
	
	for (const auto& Info : WeaponInformation)
	{
		UWeaponIconData* NewData = NewObject<UWeaponIconData>(this);
		NewData->WeaponInfoEntry = Info;
		WeaponIconDataArray.Add(NewData);
	}

	// Setup ListView
	if (WeaponListView)
	{
		WeaponListView->ClearListItems();
		for (UWeaponIconData* Data : WeaponIconDataArray)
		{
			WeaponListView->AddItem(Data);
		}
		
		// Bind selection event
		WeaponListView->OnItemClicked().AddUObject(this, &URushListWeaponWidget::OnWeaponItemClicked);
	}

	// Bind close button
	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &URushListWeaponWidget::OnCloseButtonClicked);
	}
}


void URushListWeaponWidget::OnWeaponItemClicked(UObject* ClickedItem)
{
	if (ClickedItem)
	{
		if (Cast<UWeaponIconData>(ClickedItem))
		{
			OnWeaponSelectedDelegate.Broadcast(Cast<UWeaponIconData>(ClickedItem));
		}
	}
}

void URushListWeaponWidget::OnCloseButtonClicked()
{
	OnCloseButtonClickedDelegate.Broadcast();
}
