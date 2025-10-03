#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Rush/Weapon/Struct/FPreset.h"
#include "RushMenuWidget.generated.h"

class UWeaponIconData;

UCLASS(BlueprintType)
class RUSH_API URushMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	URushMenuWidget(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION()
	void OnWeaponSelected(UWeaponIconData* SelectedWeaponData);

	UFUNCTION()
	void OnItemMenuClicked();
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget))
	class UWidgetSwitcher* MenuWidgetSwitcher;

	// Widget references
	UPROPERTY(meta=(BindWidget))
	class URushMenuItemWidget* WeaponDetailWidget;

	UPROPERTY(meta=(BindWidget))
	class URushListWeaponWidget* WeaponListWidget;

	// Current selected weapon data
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Data")
	UWeaponIconData* SelectedWeaponData;

};