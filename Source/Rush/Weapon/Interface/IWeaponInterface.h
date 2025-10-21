#pragma once

#include "CoreMinimal.h"
#include "IWeaponInterface.generated.h"
#include "Engine/Texture2D.h"
#include "Engine/StaticMesh.h"
#include "Blueprint/UserWidget.h"
#include "Animation/AnimMontage.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Rush/Weapon/Enum/EBoltState.h"
#include "Rush/Weapon/Library/WeaponPhysicalSettingsLibrary.h"
#include "Rush/Weapon/Struct/FScopeSettingsEntry.h"
#include "Rush/Weapon/Struct/FWeaponMovementSettings.h"
#include "Rush/Weapon/Struct/FWeaponSkinEntry.h"

struct FGripSettingsEntry;
struct FWeaponSound;
struct FWeaponIronSightEntry;
struct FLaserSettingsEntry;
struct FCharacterMontageSettings;
struct FCharacterPoseSettings;
struct FWeaponAnimationSettings;
struct FWeaponSettings;

UINTERFACE(BlueprintType)
class RUSH_API UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

class RUSH_API IWeaponInterface
{
	GENERATED_BODY()

public:
	// Ammunition Functions
	UFUNCTION(BlueprintCallable)
	virtual int GetAmmunitionTotal() = 0;

	UFUNCTION(BlueprintCallable)
	virtual int GetAmmunitionCurrent() = 0;

	// Character and Animation Functions
	UFUNCTION(BlueprintCallable)
	virtual FCharacterMontageSettings* GetCharacterAnimationMontages() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FCharacterPoseSettings* GetCharacterAnimationPoses() = 0;
	
	// Weapon Settings and Configuration
	UFUNCTION(BlueprintCallable)
	virtual FWeaponSettings GetWeaponSettings() = 0;
	
	UFUNCTION(BlueprintCallable)
	virtual bool IsOutOfAmmunition() = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsFullOfAmmunition() = 0;
	
	UFUNCTION(BlueprintCallable)
	virtual void OnUpdateAmmunition(bool bFill, int Amount) = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponAnimationSettings GetWeaponAnimationSettings() = 0;
	
	// Weapon Functionality
	UFUNCTION(BlueprintCallable)
	virtual void FireProjectile(FVector FirePointLocation) = 0;
	
	UFUNCTION(BlueprintCallable)
	virtual void MontagePlay(FName Name, bool bFirstPerson) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void MontageStop(bool bIsFirstPerson, FName Name, float BlendTime) = 0;
	
	UFUNCTION(BlueprintCallable)
	virtual void MontageStopAll(float BlendTime) = 0;
	
	UFUNCTION(BlueprintCallable)
	virtual void OnChangeSettingsPhysical() = 0;

	// Weapon Icons
	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconBody() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconMagazine() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconMuzzle() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconScope() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconGrip() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconLaser() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UTexture2D* GetIconIronsights() = 0;
	
	// UI and Crosshair
	UFUNCTION(BlueprintCallable)
	virtual TSubclassOf<UUserWidget> GetWidgetClassCrosshair() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponAnimationSettings GetSettingAnimation() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FScopeSettingsEntry GetScopeSettings() = 0;

	// Weapon Meshes
	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetStaticMeshMuzzle() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetStaticMeshMagazine() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetStaticMeshScope() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetStaticMeshBody() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetStaticMeshIronsights() = 0;
	
	// Offset Functions
	UFUNCTION(BlueprintCallable)
	virtual FVector GetOffset() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnUpdate() = 0;
	
	// Laser Functions
	UFUNCTION(BlueprintCallable)
	virtual FLaserSettingsEntry GetLaserSettings() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnEquipped() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnUnequipped() = 0;

	// Slide Functions
	UFUNCTION(BlueprintCallable)
	virtual bool IsSlideRackedVisually() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void SetSlideRackedVisually(bool bRacked) = 0;

	
	UFUNCTION(BlueprintCallable)
	virtual void OnLaserTurnOn() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnLaserTurnOff() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnLaserToggle() = 0;

	// Aiming Functions
	UFUNCTION(BlueprintCallable)
	virtual void OnAimingStart() = 0;
	
	// Scope Settings
	UFUNCTION(BlueprintCallable)
	virtual void GetSettingsScope() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnAimingSet(bool Value) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnAimingStop() = 0;
	
	// Casing Functions
	UFUNCTION(BlueprintCallable)
	virtual void OnSpawnCasing(float Offset, float ImpulseMultiplier) = 0;

	// Character Movement Settings
	UFUNCTION(BlueprintCallable)
	virtual FWeaponMovementSettings GetCharacterSettingsMovement() = 0;

	// Visual Ammunition
	UFUNCTION(BlueprintCallable)
	virtual void OnResetVisualAmmunition() = 0;

	// Weapon Skin
	UFUNCTION(BlueprintCallable)
	virtual FWeaponSkinEntry GetSkin() = 0;

	UFUNCTION(BlueprintCallable)
	virtual UStaticMesh* GetGripStaticMesh() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnAmmunitionSet(int Amount) = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponPhysicalSettings OnChangeSettingsPhysicalBody() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponPhysicalSettings OnChangeSettingsPhysicalAttachments() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnCharacterLanded() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnCharacterJumped() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FName GetWeaponName() = 0;

	UFUNCTION(BlueprintCallable)
	virtual EBoltState GetBoltState() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void SetBoltState(EBoltState NewState) = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsLaserTurnedOn() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSetLaserTurnOn(bool bTurnedOn) = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsHiddenMagazineVisually() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSetHiddenMagazineVisually(bool bHidden) = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsSlideRacked() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSetSlideRacked(bool bRacked) = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsHiddenMagazine() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSetHiddenMagazine(bool bHidden) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSetMovementSpread(float Spread) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSpawnAttachmentComponent() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnStopAudioPlaying() = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsShowingIronsights() = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool IsShowingScope() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponSettings GetWeaponSetting() = 0;

	UFUNCTION(BlueprintCallable)
	virtual float GetSpreadMultiplier() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FWeaponSound GetWeaponSoundSettings() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FName GetSocketNameScope() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnWeaponDrop(FVector ThrowImpulse, FVector AngularImpulse) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnEquipSavedLoadout() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnSavedLoadout() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FGripSettingsEntry GetGripSettings() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void SetReserveMagazineVisibility(bool bVisible) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void OnReloadInterrupt() = 0;

	UFUNCTION(BlueprintCallable)
	virtual FVector GetExtraAimOffset() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void UpdateAnimationForState(bool bIsThirdPerson) = 0;

	UFUNCTION(BlueprintCallable)
	virtual void Unholstered() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void UpdateWeaponPresets() = 0;

	UFUNCTION(BlueprintCallable)
	virtual void UpdateViewmodel() = 0;
};