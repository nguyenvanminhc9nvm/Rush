#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RushMenuWidget.generated.h"

class UWeaponIconData;

UCLASS(BlueprintType)
class RUSH_API URushMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnWeaponSelected(UWeaponIconData* InSelectedWeaponData);

	UFUNCTION()
	void OnItemMenuClicked();
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget))
	class UWidgetSwitcher* MenuWidgetSwitcher;

	// Widget references
	UPROPERTY(meta=(BindWidget))
	class URushWeaponSelectedWidget* WeaponSelectedWidget;

	UPROPERTY(meta=(BindWidget))
	class URushListWeaponWidget* WeaponListWidget;

	// Current selected weapon data
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Data")
	UWeaponIconData* SelectedWeaponData;

};