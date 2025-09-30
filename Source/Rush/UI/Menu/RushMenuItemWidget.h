#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "WeaponIconData.h"
#include "RushMenuItemWidget.generated.h"

UCLASS(BlueprintType)
class RUSH_API URushMenuItemWidget: public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

public:
	URushMenuItemWidget(const FObjectInitializer& ObjectInitializer);

	// IUserObjectListEntry interface
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

protected:
	virtual void NativeConstruct() override;

	// UI Components
	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CanvasPanel;

	UPROPERTY(meta = (BindWidget))
	class UButton* SelectButton;

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* VerticalBox;

	// Weapon component images
	UPROPERTY(meta = (BindWidget))
	class UImage* BaseImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* MagazineImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* IronsightsImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* MuzzleImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* ScopeImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* GripImage;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ButtonText;

	// Current weapon data
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Data")
	UWeaponIconData* CurrentWeaponData;

	// Button click event
	UFUNCTION()
	void OnSelectButtonClicked();

	// Blueprint events
	UFUNCTION(BlueprintImplementableEvent, Category = "Weapon Menu")
	void OnWeaponSelected(UWeaponIconData* WeaponData);
};