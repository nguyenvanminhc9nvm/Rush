#pragma once

#include "CoreMinimal.h"
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
#include "IWeaponInterface.generated.h"


struct FGripSettingsEntry;
struct FWeaponSound;
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
	UFUNCTION()
	virtual int GetAmmunitionTotal() = 0;

	UFUNCTION()
	virtual int GetAmmunitionCurrent() = 0;

	// Character and Animation Functions
	UFUNCTION()
	virtual FCharacterMontageSettings GetCharacterAnimationMontages() = 0;

	UFUNCTION()
	virtual FCharacterPoseSettings GetCharacterAnimationPoses() = 0;
	
	// Weapon Settings and Configuration
	UFUNCTION()
	virtual FWeaponSettings GetWeaponSettings() = 0;
	
	UFUNCTION()
	virtual bool IsOutOfAmmunition() = 0;

	UFUNCTION()
	virtual bool IsFullOfAmmunition() = 0;
	
	UFUNCTION()
	virtual void OnUpdateAmmunition(bool bFill, int Amount) = 0;

	UFUNCTION()
	virtual FWeaponAnimationSettings GetWeaponAnimationSettings() = 0;
	
	// Weapon Functionality
	UFUNCTION()
	virtual void FireProjectile(FVector FirePointLocation) = 0;
	
	UFUNCTION()
	virtual void MontagePlay(FName Name, bool bFirstPerson) = 0;

	UFUNCTION()
	virtual void MontageStop(bool bIsFirstPerson, FName Name, float BlendTime) = 0;
	
	UFUNCTION()
	virtual void MontageStopAll(float BlendTime) = 0;
	
	UFUNCTION()
	virtual void OnChangeSettingsPhysical() = 0;

	// Weapon Icons
	UFUNCTION()
	virtual UTexture2D* GetIconBody() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconMagazine() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconMuzzle() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconScope() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconGrip() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconLaser() = 0;

	UFUNCTION()
	virtual UTexture2D* GetIconIronsights() = 0;
	
	// UI and Crosshair
	UFUNCTION()
	virtual TSubclassOf<UUserWidget> GetWidgetClassCrosshair() = 0;

	UFUNCTION()
	virtual FWeaponAnimationSettings GetSettingAnimation() = 0;

	UFUNCTION()
	virtual FScopeSettingsEntry GetScopeSettings() = 0;

	// Weapon Meshes
	UFUNCTION()
	virtual UStaticMesh* GetStaticMeshMuzzle() = 0;

	UFUNCTION()
	virtual UStaticMesh* GetStaticMeshMagazine() = 0;

	UFUNCTION()
	virtual UStaticMesh* GetStaticMeshScope() = 0;

	UFUNCTION()
	virtual UStaticMesh* GetStaticMeshBody() = 0;

	UFUNCTION()
	virtual UStaticMesh* GetStaticMeshIronsights() = 0;
	
	// Offset Functions
	UFUNCTION()
	virtual FVector GetOffset() = 0;

	UFUNCTION()
	virtual void OnUpdate() = 0;
	
	// Laser Functions
	UFUNCTION()
	virtual FLaserSettingsEntry GetLaserSettings() = 0;

	UFUNCTION()
	virtual void OnEquipped() = 0;

	UFUNCTION()
	virtual void OnUnequipped() = 0;

	// Slide Functions
	UFUNCTION()
	virtual bool IsSlideRackedVisually() = 0;

	UFUNCTION()
	virtual void SetSlideRackedVisually(bool bRacked) = 0;

	
	UFUNCTION()
	virtual void OnLaserTurnOn() = 0;

	UFUNCTION()
	virtual void OnLaserTurnOff() = 0;

	UFUNCTION()
	virtual void OnLaserToggle() = 0;

	// Aiming Functions
	UFUNCTION()
	virtual void OnAimingStart() = 0;
	
	// Scope Settings
	UFUNCTION()
	virtual void GetSettingsScope() = 0;

	UFUNCTION()
	virtual void OnAimingSet(bool Value) = 0;

	UFUNCTION()
	virtual void OnAimingStop() = 0;
	
	// Casing Functions
	UFUNCTION()
	virtual void OnSpawnCasing(float Offset, float ImpulseMultiplier) = 0;

	// Character Movement Settings
	UFUNCTION()
	virtual FWeaponMovementSettings GetCharacterSettingsMovement() = 0;

	// Visual Ammunition
	UFUNCTION()
	virtual void OnResetVisualAmmunition() = 0;

	// Weapon Skin
	UFUNCTION()
	virtual FWeaponSkinEntry GetSkin() = 0;

	UFUNCTION()
	virtual UStaticMesh* GetGripStaticMesh() = 0;

	UFUNCTION()
	virtual void OnAmmunitionSet(int Amount) = 0;

	UFUNCTION()
	virtual FWeaponPhysicalSettings OnChangeSettingsPhysicalBody() = 0;

	UFUNCTION()
	virtual FWeaponPhysicalSettings OnChangeSettingsPhysicalAttachments() = 0;

	UFUNCTION()
	virtual void OnCharacterLanded() = 0;

	UFUNCTION()
	virtual void OnCharacterJumped() = 0;

	UFUNCTION()
	virtual FName GetWeaponName() = 0;

	UFUNCTION()
	virtual EBoltState GetBoltState() = 0;

	UFUNCTION()
	virtual void SetBoltState(EBoltState NewState) = 0;

	UFUNCTION()
	virtual bool IsLaserTurnedOn() = 0;

	UFUNCTION()
	virtual void OnSetLaserTurnOn(bool bTurnedOn) = 0;

	UFUNCTION()
	virtual bool IsHiddenMagazineVisually() = 0;

	UFUNCTION()
	virtual void OnSetHiddenMagazineVisually(bool bHidden) = 0;

	UFUNCTION()
	virtual bool IsSlideRacked() = 0;

	UFUNCTION()
	virtual void OnSetSlideRacked(bool bRacked) = 0;

	UFUNCTION()
	virtual bool IsHiddenMagazine() = 0;

	UFUNCTION()
	virtual void OnSetHiddenMagazine(bool bHidden) = 0;

	UFUNCTION()
	virtual void OnSetMovementSpread(float Spread) = 0;

	UFUNCTION()
	virtual void OnSpawnAttachmentComponent() = 0;

	UFUNCTION()
	virtual void OnStopAudioPlaying() = 0;

	UFUNCTION()
	virtual bool IsShowingIronsights() = 0;

	UFUNCTION()
	virtual bool IsShowingScope() = 0;

	UFUNCTION()
	virtual FWeaponSettings GetWeaponSetting() = 0;

	UFUNCTION()
	virtual float GetSpreadMultiplier() = 0;

	UFUNCTION()
	virtual FWeaponSound GetWeaponSoundSettings() = 0;

	UFUNCTION()
	virtual FName GetSocketNameScope() = 0;

	UFUNCTION()
	virtual void OnWeaponDrop(FVector ThrowImpulse, FVector AngularImpulse) = 0;

	UFUNCTION()
	virtual void OnEquipSavedLoadout() = 0;

	UFUNCTION()
	virtual void OnSavedLoadout() = 0;

	UFUNCTION()
	virtual FGripSettingsEntry GetGripSettings() = 0;

	UFUNCTION()
	virtual void SetReserveMagazineVisibility(bool bVisible) = 0;

	UFUNCTION()
	virtual void OnReloadInterrupt() = 0;

	UFUNCTION()
	virtual FVector GetExtraAimOffset() = 0;

	UFUNCTION()
	virtual void UpdateAnimationForState(bool bIsThirdPerson) = 0;

	UFUNCTION()
	virtual void Unholstered() = 0;

	UFUNCTION()
	virtual void UpdateWeaponPresets() = 0;

	UFUNCTION()
	virtual void UpdateViewmodel() = 0;
};