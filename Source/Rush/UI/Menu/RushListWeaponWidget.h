#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RushListWeaponWidget.generated.h"

class UWeaponIconData;

// declare one params
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponSelectedDelegate, UWeaponIconData*, SelectedWeaponData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseButtonClickedDelegate);
UCLASS(BlueprintType)
class RUSH_API URushListWeaponWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	URushListWeaponWidget();

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon List")
	TArray<UWeaponIconData*> WeaponIconDataArray;

	UPROPERTY(meta = (BindWidget))
	class UListView* WeaponListView;

	UPROPERTY(meta=(BindWidget))
	class UButton* CloseButton;

public:
	// Handle weapon selection from list
	UFUNCTION()
	void OnWeaponItemClicked(UObject* ClickedItem);

	// Handle close button click
	UFUNCTION()
	void OnCloseButtonClicked();

	FOnWeaponSelectedDelegate OnWeaponSelectedDelegate;

	FOnCloseButtonClickedDelegate OnCloseButtonClickedDelegate;
};