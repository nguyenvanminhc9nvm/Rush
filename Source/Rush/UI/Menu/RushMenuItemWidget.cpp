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
		
		for (const auto& Icon : CurrentWeaponData->WeaponInfoEntry.WeaponIconSettings)
		{
			if (Icon.Name == EWeaponIconName::Body && BodyImage)
			{
				BodyImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			if (Icon.Name == EWeaponIconName::Magazine && MagazineImage)
			{
				MagazineImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			if (Icon.Name == EWeaponIconName::Scope_Default && IronsightsImage)
			{
				IronsightsImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			if (Icon.Name == EWeaponIconName::Scope_01 && ScopeImage)
			{
				ScopeImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			if (Icon.Name == EWeaponIconName::Silencer_01 && MuzzleImage)
			{
				MuzzleImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			if (Icon.Name == EWeaponIconName::Grip_01 && GripImage)
			{
				GripImage->SetBrushFromTexture(Icon.Texture.LoadSynchronous());
			}
			// set text weapon enum by get umeta
			ButtonText->SetText(FText::FromString(UEnum::GetValueAsString(CurrentWeaponData->WeaponInfoEntry.Name)));
		}
	}
}

void URushMenuItemWidget::SetListItemObject(UObject* ListItemObject)
{
	NativeOnListItemObjectSet(ListItemObject);
}
