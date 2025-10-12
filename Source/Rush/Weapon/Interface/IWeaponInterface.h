#pragma once

#include "CoreMinimal.h"
#include "IWeaponInterface.generated.h"

struct FWeaponSettings;

UINTERFACE(BlueprintType)
class RUSH_API UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

class RUSH_API IWeaponInterface
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	int GetAmmunitionTotal();

	UFUNCTION(BlueprintCallable)
	int GetAmmunitionCurrent();

	UFUNCTION(BlueprintCallable)
	UAnimMontage* GetCharacterAnimationMontages();

	UFUNCTION(BlueprintCallable)
	FWeaponSettings GetWeaponSettings();

	UFUNCTION(BlueprintCallable)
	bool IsOutOfAmmunition();

	UFUNCTION(BlueprintCallable)
	bool IsFullOfAmmunition();

	UFUNCTION(BlueprintCallable)
	void OnUpdateAmmunition(bool bFill, int Amount);

	UFUNCTION(BlueprintCallable)
	void FireProjectile(FVector FirePointLocation);

	UFUNCTION(BlueprintCallable)
	void MontagePlay(FName Name, bool bFirstPerson);

	UFUNCTION(BlueprintCallable)
	void MontageStop(bool bIsFirstPerson, FName Name, float BlendTime);

	UFUNCTION(BlueprintCallable)
	void MontageStopAll(float BlendTime);

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconBody();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconMagazine();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconMuzzle();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconSight();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconScope();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconGrip();

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIconLaser();

	
};