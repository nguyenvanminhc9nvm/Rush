#pragma once

#include "CoreMinimal.h"
#include "WeaponIconData.h"
#include "Blueprint/UserWidget.h"
#include "RushWeaponSelectedWidget.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMenuItemClickedDelegate);


UCLASS(BlueprintType)
class RUSH_API URushWeaponSelectedWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	FOnMenuItemClickedDelegate OnMenuItemClickedDelegate;

	UFUNCTION()
	void OnButtonClicked();
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TitleMenu;

	UPROPERTY(meta = (BindWidget))
	class URushMenuItemWidget* WeaponDetailWidget;

	UPROPERTY(meta= (BindWidget))
	class UButton* SelectedWeaponButton;

	UPROPERTY()
	UWeaponIconData* SelectedWeaponData;

	UFUNCTION(BlueprintCallable, Category="Weapon")
	void SetListItemObject(UObject* ListItemObject);
};