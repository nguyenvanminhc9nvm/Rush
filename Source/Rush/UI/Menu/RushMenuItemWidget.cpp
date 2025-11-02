#include "RushMenuItemWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

URushMenuItemWidget::URushMenuItemWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CurrentWeaponData = nullptr;
}

void URushMenuItemWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
}

void URushMenuItemWidget::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	// Cast the list item object to our weapon data
	UWeaponIconData* WeaponData = Cast<UWeaponIconData>(ListItemObject);
	if (WeaponData)
	{
		CurrentWeaponData = WeaponData;

		BodyImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.BodyIcon.Texture.Get());

		MagazineImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.MagazineEntry.Texture);

		IronsightsImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.IronsightEntry.Icon);

		ScopeImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.ScopeIcon.Texture.Get());

		MuzzleImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.MuzzleIcon.Texture.Get());

		GripImage->SetBrushFromTexture(CurrentWeaponData->WeaponInfoEntry.GripIcon.Texture.Get());

		ButtonText->SetText(FText::FromString(UEnum::GetValueAsString(CurrentWeaponData->WeaponInfoEntry.Name)));
	}
}

void URushMenuItemWidget::SetListItemObject(UObject* ListItemObject)
{
	NativeOnListItemObjectSet(ListItemObject);
}
