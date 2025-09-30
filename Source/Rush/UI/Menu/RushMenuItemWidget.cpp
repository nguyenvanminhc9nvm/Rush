#include "RushMenuItemWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

URushMenuItemWidget::URushMenuItemWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CurrentWeaponData = nullptr;
}

void URushMenuItemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Bind button click event
	if (SelectButton)
	{
		SelectButton->OnClicked.AddDynamic(this, &URushMenuItemWidget::OnSelectButtonClicked);
	}
}

void URushMenuItemWidget::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	// Cast the list item object to our weapon data
	UWeaponIconData* WeaponData = Cast<UWeaponIconData>(ListItemObject);
	if (WeaponData)
	{
		CurrentWeaponData = WeaponData;

		// Update UI with weapon data
		if (BaseImage && WeaponData->BaseImage)
		{
			BaseImage->SetBrushFromTexture(WeaponData->BaseImage);
		}

		if (MagazineImage && WeaponData->MagazineImage)
		{
			MagazineImage->SetBrushFromTexture(WeaponData->MagazineImage);
		}

		if (IronsightsImage && WeaponData->IronsightsImage)
		{
			IronsightsImage->SetBrushFromTexture(WeaponData->IronsightsImage);
		}

		if (MuzzleImage && WeaponData->MuzzleImage)
		{
			MuzzleImage->SetBrushFromTexture(WeaponData->MuzzleImage);
		}

		if (ScopeImage && WeaponData->ScopeImage)
		{
			ScopeImage->SetBrushFromTexture(WeaponData->ScopeImage);
		}

		if (GripImage && WeaponData->GripImage)
		{
			GripImage->SetBrushFromTexture(WeaponData->GripImage);
		}

		if (ButtonText)
		{
			ButtonText->SetText(FText::FromString(WeaponData->WeaponName));
		}
	}
}

void URushMenuItemWidget::OnSelectButtonClicked()
{
	if (CurrentWeaponData)
	{
		// Call Blueprint event
		OnWeaponSelected(CurrentWeaponData);
	}
}
