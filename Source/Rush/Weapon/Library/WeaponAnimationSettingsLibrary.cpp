#include "WeaponAnimationSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Library/CharacterAR01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR02BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR02SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR03BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterAR03SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun02BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun02SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun03BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun03SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun04BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterHandgun04SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterRL01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterRocketLauncher01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterShotgun01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterShotgun01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG02BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG02SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG03BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG03SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG04BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG04SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG05BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSMG05SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper01BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper01SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper02BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper02SequenceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper03BlendspaceSettingsLibrary.h"
#include "Rush/Character/Library/CharacterSniper03SequenceSettingsLibrary.h"
#include "Rush/Weapon/Struct/FScopeSettingsEntry.h"

static TMap<EWeaponName, FWeaponAnimationSettings> GWeaponAnimationSettingsMap;

static void InitWeaponAnimationSettingsMap()
{
    if (GWeaponAnimationSettingsMap.Num() > 0) return;

    FWeaponAnimationSettings AR01Settings;
    AR01Settings.Name = EWeaponName::Assault_Rifle_01;
    AR01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    AR01Settings.PlayRateBreathing = 1.0f;
    AR01Settings.PlayRateRunning = 1.0f;
    AR01Settings.PlayRateTurning = 1.0f;
    AR01Settings.PlayRateWalking = 1.0f;
    AR01Settings.LagMovementInterpSpeed = 10.f;
    AR01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    AR01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    AR01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.0f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    AR01Settings.bOverrideTPStandingLag = false;
    AR01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    AR01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    AR01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    AR01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    AR01Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR01Settings.MontageOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(0, 0.f, 0), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    AR01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    AR01Settings.CharacterSequenceSettingsAimingWalking = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    AR01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    AR01Settings.CharacterSequenceSettingsTurning = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Turning);
    AR01Settings.CharacterSequenceSettingsJog = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Jog);
    AR01Settings.CharacterSequenceSettingsSprint = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Sprint);
    AR01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    AR01Settings.CharacterSequenceSettingsSprintTactical = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    AR01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterAR01SequenceSettingsLibrary::GetCharacterSequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    AR01Settings.CharacterBlendspaceSettingsAiming = UCharacterAR01BlendspaceSettingsLibrary::GetCharacterAR01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    AR01Settings.CharacterBlendspaceSettingsLeaning = UCharacterAR01BlendspaceSettingsLibrary::GetCharacterAR01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    AR01Settings.CharacterBlendspaceSettingsWalking = UCharacterAR01BlendspaceSettingsLibrary::GetCharacterAR01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);

    // Leaning
    AR01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    AR01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01, AR01Settings);

    // Assault Rifle 02 Settings
    FWeaponAnimationSettings AR02Settings;
    AR02Settings.Name = EWeaponName::Assault_Rifle_02;
    AR02Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    AR02Settings.PlayRateBreathing = 1.0f;
    AR02Settings.PlayRateRunning = 1.0f;
    AR02Settings.PlayRateTurning = 1.0f;
    AR02Settings.PlayRateWalking = 1.0f;
    AR02Settings.LagMovementInterpSpeed = 10.f;
    AR02Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    AR02Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    AR02Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR02Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.0f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(3, 0, 0),
                        FVector(0, 0, 1)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    AR02Settings.bOverrideTPStandingLag = false;
    AR02Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    AR02Settings.StandingLagLocationControllerMultiplier = 1.0f;
    AR02Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat RunningRotation(-0.13002985715866089f, 0.086410090327262878f, 0.011376149021089077f, 0.98767209053039551f);
    AR02Settings.RunningOffset = FTransform(RunningRotation, FVector(0.f, -2.f, -3.f), FVector(1.f, 1.f, 1.f));
    AR02Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR02Settings.MontageOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR02Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(0, 0.f, 0.2f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    AR02Settings.CharacterSequenceSettingsAimingBreathing = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    AR02Settings.CharacterSequenceSettingsAimingWalking = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    AR02Settings.CharacterSequenceSettingsStandingBreathing = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    AR02Settings.CharacterSequenceSettingsTurning = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Turning);
    AR02Settings.CharacterSequenceSettingsJog = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Jog);
    AR02Settings.CharacterSequenceSettingsSprint = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Sprint);
    AR02Settings.CharacterSequenceSettingsSprintImpulse = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    AR02Settings.CharacterSequenceSettingsSprintTactical = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    AR02Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterAR02SequenceSettingsLibrary::GetCharacterAR02SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    AR02Settings.CharacterBlendspaceSettingsAiming = UCharacterAR02BlendspaceSettingsLibrary::GetCharacterAR02BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    AR02Settings.CharacterBlendspaceSettingsLeaning = UCharacterAR02BlendspaceSettingsLibrary::GetCharacterAR02BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    AR02Settings.CharacterBlendspaceSettingsWalking = UCharacterAR02BlendspaceSettingsLibrary::GetCharacterAR02BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    AR02Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    AR02Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02, AR02Settings);

    // Assault Rifle 03 Settings
    FWeaponAnimationSettings AR03Settings;
    AR03Settings.Name = EWeaponName::Assault_Rifle_03;
    AR03Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    AR03Settings.PlayRateBreathing = 1.0f;
    AR03Settings.PlayRateRunning = 1.0f;
    AR03Settings.PlayRateTurning = 1.0f;
    AR03Settings.PlayRateWalking = 1.0f;
    AR03Settings.LagMovementInterpSpeed = 10.f;
    AR03Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    AR03Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    AR03Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR03Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.0f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    AR03Settings.bOverrideTPStandingLag = false;
    AR03Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    AR03Settings.StandingLagLocationControllerMultiplier = 1.0f;
    AR03Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    AR03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat AR03RunningRotation(-0.043619528412818909f, 0.0f, 0.0f, 0.99904823303222656f);
    AR03Settings.RunningOffset = FTransform(AR03RunningRotation, FVector(1.f, -2.f, -1.f), FVector(1.f, 1.f, 1.f));
    AR03Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    AR03Settings.MontageOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat AR03LoweredRotation(0.031619973480701447f, 0.039817754179239273f, -0.13149262964725494f, 0.99001234769821167f);
    AR03Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(AR03LoweredRotation, FVector(2.f, 0.f, -0.5f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    AR03Settings.CharacterSequenceSettingsAimingBreathing = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    AR03Settings.CharacterSequenceSettingsAimingWalking = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    AR03Settings.CharacterSequenceSettingsStandingBreathing = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    AR03Settings.CharacterSequenceSettingsTurning = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Turning);
    AR03Settings.CharacterSequenceSettingsJog = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Jog);
    AR03Settings.CharacterSequenceSettingsSprint = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Sprint);
    AR03Settings.CharacterSequenceSettingsSprintImpulse = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    AR03Settings.CharacterSequenceSettingsSprintTactical = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    AR03Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterAR03SequenceSettingsLibrary::GetCharacterAR03SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    AR03Settings.CharacterBlendspaceSettingsAiming = UCharacterAR03BlendspaceSettingsLibrary::GetCharacterAR03BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    AR03Settings.CharacterBlendspaceSettingsLeaning = UCharacterAR03BlendspaceSettingsLibrary::GetCharacterAR03BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    AR03Settings.CharacterBlendspaceSettingsWalking = UCharacterAR03BlendspaceSettingsLibrary::GetCharacterAR03BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    AR03Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    AR03Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03, AR03Settings);

    // Handgun 01 Settings
    FWeaponAnimationSettings Handgun01Settings;
    Handgun01Settings.Name = EWeaponName::Handgun_01;
    Handgun01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Handgun01Settings.PlayRateBreathing = 1.0f;
    Handgun01Settings.PlayRateRunning = 1.07f;
    Handgun01Settings.PlayRateTurning = 1.0f;
    Handgun01Settings.PlayRateWalking = 1.15f;
    Handgun01Settings.LagMovementInterpSpeed = 10.f;
    Handgun01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Handgun01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Handgun01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.5f, 0.0f, 0.0f),
                FVector(0.0f, -2.f, -1.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(2.f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.5f)
                    ),
                    FDirectionVectors(
                        FVector(0, 2, 1),
                        FVector(1.5f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.6, 0.5f, 0.0085f
                ));
    Handgun01Settings.bOverrideTPStandingLag = false;
    Handgun01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Handgun01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat Handgun01RunningRotation(-0.039614185690879822f, -0.08888496458530426f, 0.039614193141460419f, 0.994465172290802f);
    Handgun01Settings.RunningOffset = FTransform(Handgun01RunningRotation, FVector(-8.f, -10.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Handgun01MontageRotation(0.11766382306814194f, -0.11724476516246796f, 0.12517668306827545f, 0.97813069820404053f);
    Handgun01Settings.MontageOffset = FTransform(Handgun01MontageRotation, FVector(-7.f, 10.f, -8.f), FVector(1.f, 1.f, 1.f));
    Handgun01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(3.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Handgun01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Handgun01Settings.CharacterSequenceSettingsAimingWalking = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Handgun01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Handgun01Settings.CharacterSequenceSettingsTurning = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Turning);
    Handgun01Settings.CharacterSequenceSettingsJog = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Jog);
    Handgun01Settings.CharacterSequenceSettingsSprint = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Sprint);
    Handgun01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Handgun01Settings.CharacterSequenceSettingsSprintTactical = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Handgun01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterHandgun01SequenceSettingsLibrary::GetCharacterHandgun01SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Handgun01Settings.CharacterBlendspaceSettingsAiming = UCharacterHandgun01BlendspaceSettingsLibrary::GetCharacterHandgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Handgun01Settings.CharacterBlendspaceSettingsLeaning = UCharacterHandgun01BlendspaceSettingsLibrary::GetCharacterHandgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Handgun01Settings.CharacterBlendspaceSettingsWalking = UCharacterHandgun01BlendspaceSettingsLibrary::GetCharacterHandgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Handgun01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Handgun01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01, Handgun01Settings);

    // Handgun 02 Settings
    FWeaponAnimationSettings Handgun02Settings;
    Handgun02Settings.Name = EWeaponName::Handgun_02;
    Handgun02Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Handgun02Settings.PlayRateBreathing = 1.0f;
    Handgun02Settings.PlayRateRunning = 1.07f;
    Handgun02Settings.PlayRateTurning = 1.0f;
    Handgun02Settings.PlayRateWalking = 1.15f;
    Handgun02Settings.LagMovementInterpSpeed = 10.f;
    Handgun02Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Handgun02Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Handgun02Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun02Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.5f, 0.0f, 0.0f),
                FVector(0.0f, -2.f, -1.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(2.f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.5f)
                    ),
                    FDirectionVectors(
                        FVector(0, 2, 1),
                        FVector(1.5f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.6, 0.5f, 0.0085f
                ));
    Handgun02Settings.bOverrideTPStandingLag = false;
    Handgun02Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun02Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Handgun02Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat Handgun02RunningRotation(-0.039613999426364899f, -0.088885001838207245f, 0.039613999426364899f, 0.99446499347686768f);
    Handgun02Settings.RunningOffset = FTransform(Handgun02RunningRotation, FVector(-8.f, -10.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun02Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Handgun02MontageRotation(0.11766382306814194f, -0.11724476516246796f, 0.12517668306827545f, 0.97813069820404053f);
    Handgun02Settings.MontageOffset = FTransform(Handgun02MontageRotation, FVector(-7.f, 10.f, -8.f), FVector(1.f, 1.f, 1.f));
    Handgun02Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(3.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Handgun02Settings.CharacterSequenceSettingsAimingBreathing = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Handgun02Settings.CharacterSequenceSettingsAimingWalking = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Handgun02Settings.CharacterSequenceSettingsStandingBreathing = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Handgun02Settings.CharacterSequenceSettingsTurning = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Turning);
    Handgun02Settings.CharacterSequenceSettingsJog = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Jog);
    Handgun02Settings.CharacterSequenceSettingsSprint = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Sprint);
    Handgun02Settings.CharacterSequenceSettingsSprintImpulse = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Handgun02Settings.CharacterSequenceSettingsSprintTactical = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Handgun02Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Handgun02Settings.CharacterBlendspaceSettingsAiming = UCharacterHandgun02BlendspaceSettingsLibrary::GetCharacterHandgun02BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Handgun02Settings.CharacterBlendspaceSettingsLeaning = UCharacterHandgun02BlendspaceSettingsLibrary::GetCharacterHandgun02BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Handgun02Settings.CharacterBlendspaceSettingsWalking = UCharacterHandgun02BlendspaceSettingsLibrary::GetCharacterHandgun02BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Handgun02Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Handgun02Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02, Handgun02Settings);

    // Handgun 03 Settings
    FWeaponAnimationSettings Handgun03Settings;
    Handgun03Settings.Name = EWeaponName::Handgun_03;
    Handgun03Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Handgun03Settings.PlayRateBreathing = 1.0f;
    Handgun03Settings.PlayRateRunning = 1.07f;
    Handgun03Settings.PlayRateTurning = 1.0f;
    Handgun03Settings.PlayRateWalking = 1.15f;
    Handgun03Settings.LagMovementInterpSpeed = 10.f;
    Handgun03Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Handgun03Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Handgun03Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun03Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.5f, 0.0f, 0.0f),
                FVector(0.0f, -2.f, -1.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(2.f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.5f)
                    ),
                    FDirectionVectors(
                        FVector(0, 2, 1),
                        FVector(1.5f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.6, 0.5f, 0.0085f
                ));
    Handgun03Settings.bOverrideTPStandingLag = false;
    Handgun03Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun03Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Handgun03Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat Handgun03RunningRotation(-0.039613999426364899f, -0.088885001838207245f, 0.039613999426364899f, 0.99446499347686768f);
    Handgun03Settings.RunningOffset = FTransform(Handgun03RunningRotation, FVector(-8.f, -10.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun03Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Handgun03MontageRotation(0.11766382306814194f, -0.11724476516246796f, 0.12517668306827545f, 0.97813069820404053f);
    Handgun03Settings.MontageOffset = FTransform(Handgun03MontageRotation, FVector(-7.f, 10.f, -8.f), FVector(1.f, 1.f, 1.f));
    Handgun03Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(3.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Handgun03Settings.CharacterSequenceSettingsAimingBreathing = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Handgun03Settings.CharacterSequenceSettingsAimingWalking = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Handgun03Settings.CharacterSequenceSettingsStandingBreathing = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Handgun03Settings.CharacterSequenceSettingsTurning = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Turning);
    Handgun03Settings.CharacterSequenceSettingsJog = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Jog);
    Handgun03Settings.CharacterSequenceSettingsSprint = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Sprint);
    Handgun03Settings.CharacterSequenceSettingsSprintImpulse = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Handgun03Settings.CharacterSequenceSettingsSprintTactical = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Handgun03Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterHandgun03SequenceSettingsLibrary::GetCharacterHandgun03SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Handgun03Settings.CharacterBlendspaceSettingsAiming = UCharacterHandgun03BlendspaceSettingsLibrary::GetCharacterHandgun03BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Handgun03Settings.CharacterBlendspaceSettingsLeaning = UCharacterHandgun03BlendspaceSettingsLibrary::GetCharacterHandgun03BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Handgun03Settings.CharacterBlendspaceSettingsWalking = UCharacterHandgun03BlendspaceSettingsLibrary::GetCharacterHandgun03BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Handgun03Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Handgun03Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03, Handgun03Settings);

    // Handgun 04 Settings
    FWeaponAnimationSettings Handgun04Settings;
    Handgun04Settings.Name = EWeaponName::Handgun_04;
    Handgun04Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Handgun04Settings.PlayRateBreathing = 1.0f;
    Handgun04Settings.PlayRateRunning = 1.07f;
    Handgun04Settings.PlayRateTurning = 1.0f;
    Handgun04Settings.PlayRateWalking = 1.15f;
    Handgun04Settings.LagMovementInterpSpeed = 10.f;
    Handgun04Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Handgun04Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Handgun04Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun04Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.5f, 0.0f, 0.0f),
                FVector(0.0f, -2.f, -1.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(2.f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.5f)
                    ),
                    FDirectionVectors(
                        FVector(0, 2, 1),
                        FVector(1.5f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.6, 0.5f, 0.0085f
                ));
    Handgun04Settings.bOverrideTPStandingLag = false;
    Handgun04Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun04Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Handgun04Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun04Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Handgun04Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat Handgun04RunningRotation(-0.039613999426364899f, -0.088885001838207245f, 0.039613999426364899f, 0.99446499347686768f);
    Handgun04Settings.RunningOffset = FTransform(Handgun04RunningRotation, FVector(-8.f, -10.f, 0.f), FVector(1.f, 1.f, 1.f));
    Handgun04Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Handgun04MontageRotation(0.11766382306814194f, -0.11724476516246796f, 0.12517668306827545f, 0.97813069820404053f);
    Handgun04Settings.MontageOffset = FTransform(Handgun04MontageRotation, FVector(-7.f, 10.f, -8.f), FVector(1.f, 1.f, 1.f));
    Handgun04Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(3.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Handgun04Settings.CharacterSequenceSettingsAimingBreathing = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Handgun04Settings.CharacterSequenceSettingsAimingWalking = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Handgun04Settings.CharacterSequenceSettingsStandingBreathing = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Handgun04Settings.CharacterSequenceSettingsTurning = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Turning);
    Handgun04Settings.CharacterSequenceSettingsJog = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Jog);
    Handgun04Settings.CharacterSequenceSettingsSprint = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Sprint);
    Handgun04Settings.CharacterSequenceSettingsSprintImpulse = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Handgun04Settings.CharacterSequenceSettingsSprintTactical = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Handgun04Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterHandgun04SequenceSettingsLibrary::GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Handgun04Settings.CharacterBlendspaceSettingsAiming = UCharacterHandgun04BlendspaceSettingsLibrary::GetCharacterHandgun04BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Handgun04Settings.CharacterBlendspaceSettingsLeaning = UCharacterHandgun04BlendspaceSettingsLibrary::GetCharacterHandgun04BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Handgun04Settings.CharacterBlendspaceSettingsWalking = UCharacterHandgun04BlendspaceSettingsLibrary::GetCharacterHandgun04BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Handgun04Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Handgun04Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04, Handgun04Settings);

    // Rocket Launcher 01 Settings
    FWeaponAnimationSettings RL01Settings;
    RL01Settings.Name = EWeaponName::Rocket_Launcher_01;
    RL01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    RL01Settings.PlayRateBreathing = 1.0f;
    RL01Settings.PlayRateRunning = 1.0f;
    RL01Settings.PlayRateTurning = 1.0f;
    RL01Settings.PlayRateWalking = 1.0f;
    RL01Settings.LagMovementInterpSpeed = 10.f;
    RL01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    RL01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    RL01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    RL01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    RL01Settings.bOverrideTPStandingLag = false;
    RL01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    RL01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    RL01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    RL01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    RL01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    FQuat RL01RunningRotation(-0.026176949962973595f, 0.0f, 0.0f, 0.99965733289718628f);
    RL01Settings.RunningOffset = FTransform(RL01RunningRotation, FVector(0.f, -1.f, -2.f), FVector(1.f, 1.f, 1.f));
    RL01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat RL01MontageRotation(0.087156131863594055f, 0.0f, 0.0f, 0.99619466066360474f);
    RL01Settings.MontageOffset = FTransform(RL01MontageRotation, FVector(0.f, 0.f, -1.f), FVector(1.f, 1.f, 1.f));
    RL01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    RL01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    RL01Settings.CharacterSequenceSettingsAimingWalking = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    RL01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    RL01Settings.CharacterSequenceSettingsTurning = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Turning);
    RL01Settings.CharacterSequenceSettingsJog = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Jog);
    RL01Settings.CharacterSequenceSettingsSprint = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Sprint);
    RL01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    RL01Settings.CharacterSequenceSettingsSprintTactical = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    RL01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterRocketLauncher01SequenceSettingsLibrary::GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    RL01Settings.CharacterBlendspaceSettingsAiming = UCharacterRL01BlendspaceSettingsLibrary::GetCharacterRL01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    RL01Settings.CharacterBlendspaceSettingsLeaning = UCharacterRL01BlendspaceSettingsLibrary::GetCharacterRL01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    RL01Settings.CharacterBlendspaceSettingsWalking = UCharacterRL01BlendspaceSettingsLibrary::GetCharacterRL01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    RL01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    RL01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Rocket_Launcher_01, RL01Settings);

    // Shotgun 01 Settings
    FWeaponAnimationSettings Shotgun01Settings;
    Shotgun01Settings.Name = EWeaponName::Shotgun_01;
    Shotgun01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Shotgun01Settings.PlayRateBreathing = 1.0f;
    Shotgun01Settings.PlayRateRunning = 1.0f;
    Shotgun01Settings.PlayRateTurning = 1.0f;
    Shotgun01Settings.PlayRateWalking = 1.0f;
    Shotgun01Settings.LagMovementInterpSpeed = 10.f;
    Shotgun01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Shotgun01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Shotgun01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Shotgun01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    Shotgun01Settings.bOverrideTPStandingLag = false;
    Shotgun01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Shotgun01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Shotgun01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Shotgun01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Shotgun01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    Shotgun01Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(-2.5f, -2.f, -2.f), FVector(1.f, 1.f, 1.f));
    Shotgun01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Shotgun01MontageRotation(0.08888571709394455f, -0.039613954722881317f, 0.047210142016410828f, 0.99413341283798218f);
    Shotgun01Settings.MontageOffset = FTransform(Shotgun01MontageRotation, FVector(2.f, 10.f, 0.f), FVector(1.f, 1.f, 1.f));
    Shotgun01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Shotgun01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Shotgun01Settings.CharacterSequenceSettingsAimingWalking = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Shotgun01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Shotgun01Settings.CharacterSequenceSettingsTurning = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Turning);
    Shotgun01Settings.CharacterSequenceSettingsJog = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Jog);
    Shotgun01Settings.CharacterSequenceSettingsSprint = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Sprint);
    Shotgun01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Shotgun01Settings.CharacterSequenceSettingsSprintTactical = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Shotgun01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Shotgun01Settings.CharacterBlendspaceSettingsAiming = UCharacterShotgun01BlendspaceSettingsLibrary::GetCharacterShotgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Shotgun01Settings.CharacterBlendspaceSettingsLeaning = UCharacterShotgun01BlendspaceSettingsLibrary::GetCharacterShotgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Shotgun01Settings.CharacterBlendspaceSettingsWalking = UCharacterShotgun01BlendspaceSettingsLibrary::GetCharacterShotgun01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Shotgun01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Shotgun01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01, Shotgun01Settings);

    // SMG 01 Settings
    FWeaponAnimationSettings SMG01Settings;
    SMG01Settings.Name = EWeaponName::SMG_01;
    SMG01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    SMG01Settings.PlayRateBreathing = 1.0f;
    SMG01Settings.PlayRateRunning = 1.0f;
    SMG01Settings.PlayRateTurning = 1.0f;
    SMG01Settings.PlayRateWalking = 1.0f;
    SMG01Settings.LagMovementInterpSpeed = 10.f;
    SMG01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    SMG01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    SMG01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    SMG01Settings.bOverrideTPStandingLag = false;
    SMG01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    SMG01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    SMG01Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG01MontageRotation(0.087142996490001678f, 0.0015210865531116724f, 0.017385993152856827f, 0.99604296684265137f);
    SMG01Settings.MontageOffset = FTransform(SMG01MontageRotation, FVector(-2.f, 5.f, -2.f), FVector(1.f, 1.f, 1.f));
    SMG01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, -2.5f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    SMG01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    SMG01Settings.CharacterSequenceSettingsAimingWalking = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    SMG01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    SMG01Settings.CharacterSequenceSettingsTurning = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Turning);
    SMG01Settings.CharacterSequenceSettingsJog = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Jog);
    SMG01Settings.CharacterSequenceSettingsSprint = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Sprint);
    SMG01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    SMG01Settings.CharacterSequenceSettingsSprintTactical = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    SMG01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSMG01SequenceSettingsLibrary::GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    SMG01Settings.CharacterBlendspaceSettingsAiming = UCharacterSMG01BlendspaceSettingsLibrary::GetCharacterSMG01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    SMG01Settings.CharacterBlendspaceSettingsLeaning = UCharacterSMG01BlendspaceSettingsLibrary::GetCharacterSMG01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    SMG01Settings.CharacterBlendspaceSettingsWalking = UCharacterSMG01BlendspaceSettingsLibrary::GetCharacterSMG01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    SMG01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    SMG01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01, SMG01Settings);

    // SMG 02 Settings
    FWeaponAnimationSettings SMG02Settings;
    SMG02Settings.Name = EWeaponName::SMG_02;
    SMG02Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    SMG02Settings.PlayRateBreathing = 1.0f;
    SMG02Settings.PlayRateRunning = 1.0f;
    SMG02Settings.PlayRateTurning = 1.0f;
    SMG02Settings.PlayRateWalking = 1.0f;
    SMG02Settings.LagMovementInterpSpeed = 10.f;
    SMG02Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    SMG02Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    SMG02Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG02Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    SMG02Settings.bOverrideTPStandingLag = false;
    SMG02Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG02Settings.StandingLagLocationControllerMultiplier = 1.0f;
    SMG02Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    SMG02Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.f, -2.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG02Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG02MontageRotation(0.087142996490001678f, 0.001521000056527555f, 0.017386000603437424f, 0.99604302644729614f);
    SMG02Settings.MontageOffset = FTransform(SMG02MontageRotation, FVector(-2.f, 5.f, -2.f), FVector(1.f, 1.f, 1.f));
    SMG02Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.5f, 0.f, -1.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    SMG02Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    SMG02Settings.CharacterSequenceSettingsAimingWalking = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    SMG02Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    SMG02Settings.CharacterSequenceSettingsTurning = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Turning);
    SMG02Settings.CharacterSequenceSettingsJog = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Jog);
    SMG02Settings.CharacterSequenceSettingsSprint = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Sprint);
    SMG02Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    SMG02Settings.CharacterSequenceSettingsSprintTactical = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    SMG02Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSMG02SequenceSettingsLibrary::GetCharacterSMG02SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    SMG02Settings.CharacterBlendspaceSettingsAiming = UCharacterSMG02BlendspaceSettingsLibrary::GetCharacterSMG02BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    SMG02Settings.CharacterBlendspaceSettingsLeaning = UCharacterSMG02BlendspaceSettingsLibrary::GetCharacterSMG02BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    SMG02Settings.CharacterBlendspaceSettingsWalking = UCharacterSMG02BlendspaceSettingsLibrary::GetCharacterSMG02BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    SMG02Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    SMG02Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02, SMG02Settings);

    // SMG 03 Settings
    FWeaponAnimationSettings SMG03Settings;
    SMG03Settings.Name = EWeaponName::SMG_03;
    SMG03Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    SMG03Settings.PlayRateBreathing = 1.0f;
    SMG03Settings.PlayRateRunning = 1.0f;
    SMG03Settings.PlayRateTurning = 1.0f;
    SMG03Settings.PlayRateWalking = 1.0f;
    SMG03Settings.LagMovementInterpSpeed = 10.f;
    SMG03Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    SMG03Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    SMG03Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG03Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    SMG03Settings.bOverrideTPStandingLag = false;
    SMG03Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG03Settings.StandingLagLocationControllerMultiplier = 1.0f;
    SMG03Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG03Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    SMG03Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.f, -2.f, -1.8f), FVector(1.f, 1.f, 1.f));
    SMG03Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG03MontageRotation(0.087142996490001678f, 0.0015210865531116724f, 0.017385993152856827f, 0.99604296684265137f);
    SMG03Settings.MontageOffset = FTransform(SMG03MontageRotation, FVector(-2.f, 5.f, -2.f), FVector(1.f, 1.f, 1.f));
    SMG03Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.5f, 0.f, -1.5f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    SMG03Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    SMG03Settings.CharacterSequenceSettingsAimingWalking = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    SMG03Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    SMG03Settings.CharacterSequenceSettingsTurning = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Turning);
    SMG03Settings.CharacterSequenceSettingsJog = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Jog);
    SMG03Settings.CharacterSequenceSettingsSprint = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Sprint);
    SMG03Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    SMG03Settings.CharacterSequenceSettingsSprintTactical = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    SMG03Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    SMG03Settings.CharacterBlendspaceSettingsAiming = UCharacterSMG03BlendspaceSettingsLibrary::GetCharacterSMG03BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    SMG03Settings.CharacterBlendspaceSettingsLeaning = UCharacterSMG03BlendspaceSettingsLibrary::GetCharacterSMG03BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    SMG03Settings.CharacterBlendspaceSettingsWalking = UCharacterSMG03BlendspaceSettingsLibrary::GetCharacterSMG03BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    SMG03Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    SMG03Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03, SMG03Settings);

    // SMG 04 Settings
    FWeaponAnimationSettings SMG04Settings;
    SMG04Settings.Name = EWeaponName::SMG_04;
    SMG04Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    SMG04Settings.PlayRateBreathing = 1.0f;
    SMG04Settings.PlayRateRunning = 1.0f;
    SMG04Settings.PlayRateTurning = 1.0f;
    SMG04Settings.PlayRateWalking = 1.0f;
    SMG04Settings.LagMovementInterpSpeed = 10.f;
    SMG04Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    SMG04Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    SMG04Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG04Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    SMG04Settings.bOverrideTPStandingLag = false;
    SMG04Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG04Settings.StandingLagLocationControllerMultiplier = 1.0f;
    SMG04Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG04Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG04Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    SMG04Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.f, -2.f, -3.f), FVector(1.f, 1.f, 1.f));
    SMG04Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG04MontageRotation(0.17362168431282043f, 0.0030305767431855202f, 0.01718725822865963f, 0.98465776443481445f);
    SMG04Settings.MontageOffset = FTransform(SMG04MontageRotation, FVector(-2.f, 5.f, -5.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG04LoweredRotation(0.0f, 0.0f, -0.021814893931150436f, 0.99976199865341187f);
    SMG04Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(SMG04LoweredRotation, FVector(3.f, -5.f, 0.5f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    SMG04Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    SMG04Settings.CharacterSequenceSettingsAimingWalking = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    SMG04Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    SMG04Settings.CharacterSequenceSettingsTurning = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Turning);
    SMG04Settings.CharacterSequenceSettingsJog = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Jog);
    SMG04Settings.CharacterSequenceSettingsSprint = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Sprint);
    SMG04Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    SMG04Settings.CharacterSequenceSettingsSprintTactical = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    SMG04Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSMG04SequenceSettingsLibrary::GetCharacterSMG04SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    SMG04Settings.CharacterBlendspaceSettingsAiming = UCharacterSMG04BlendspaceSettingsLibrary::GetCharacterSMG04BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    SMG04Settings.CharacterBlendspaceSettingsLeaning = UCharacterSMG04BlendspaceSettingsLibrary::GetCharacterSMG04BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    SMG04Settings.CharacterBlendspaceSettingsWalking = UCharacterSMG04BlendspaceSettingsLibrary::GetCharacterSMG04BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    SMG04Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    SMG04Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04, SMG04Settings);

    // SMG 05 Settings
    FWeaponAnimationSettings SMG05Settings;
    SMG05Settings.Name = EWeaponName::SMG_05;
    SMG05Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    SMG05Settings.PlayRateBreathing = 1.0f;
    SMG05Settings.PlayRateRunning = 1.0f;
    SMG05Settings.PlayRateTurning = 1.0f;
    SMG05Settings.PlayRateWalking = 1.0f;
    SMG05Settings.LagMovementInterpSpeed = 10.f;
    SMG05Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    SMG05Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    SMG05Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG05Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    SMG05Settings.bOverrideTPStandingLag = false;
    SMG05Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG05Settings.StandingLagLocationControllerMultiplier = 1.0f;
    SMG05Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG05Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    SMG05Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    SMG05Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(-1.f, -2.f, 0.f), FVector(1.f, 1.f, 1.f));
    SMG05Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat SMG05MontageRotation(0.087142996490001678f, 0.0015210865531116724f, 0.017385993152856827f, 0.99604296684265137f);
    SMG05Settings.MontageOffset = FTransform(SMG05MontageRotation, FVector(-2.f, 5.f, -2.f), FVector(1.f, 1.f, 1.f));
    SMG05Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(2.5f, -2.f, 0.f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    SMG05Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    SMG05Settings.CharacterSequenceSettingsAimingWalking = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    SMG05Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    SMG05Settings.CharacterSequenceSettingsTurning = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Turning);
    SMG05Settings.CharacterSequenceSettingsJog = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Jog);
    SMG05Settings.CharacterSequenceSettingsSprint = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Sprint);
    SMG05Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    SMG05Settings.CharacterSequenceSettingsSprintTactical = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    SMG05Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSMG05SequenceSettingsLibrary::GetCharacterSMG05SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    SMG05Settings.CharacterBlendspaceSettingsAiming = UCharacterSMG05BlendspaceSettingsLibrary::GetCharacterSMG05BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    SMG05Settings.CharacterBlendspaceSettingsLeaning = UCharacterSMG05BlendspaceSettingsLibrary::GetCharacterSMG05BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    SMG05Settings.CharacterBlendspaceSettingsWalking = UCharacterSMG05BlendspaceSettingsLibrary::GetCharacterSMG05BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    SMG05Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    SMG05Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05, SMG05Settings);

    // Sniper 01 Settings
    FWeaponAnimationSettings Sniper01Settings;
    Sniper01Settings.Name = EWeaponName::Sniper_01;
    Sniper01Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Sniper01Settings.PlayRateBreathing = 1.0f;
    Sniper01Settings.PlayRateRunning = 1.0f;
    Sniper01Settings.PlayRateTurning = 1.0f;
    Sniper01Settings.PlayRateWalking = 1.0f;
    Sniper01Settings.LagMovementInterpSpeed = 10.f;
    Sniper01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Sniper01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    Sniper01Settings.StandingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper01Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    Sniper01Settings.bOverrideTPStandingLag = false;
    Sniper01Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Sniper01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Sniper01Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Sniper01Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    Sniper01Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper01Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Sniper01MontageRotation(0.13052175939083099f, 0.0011390461586415768f, 0.0086518777534365654f, 0.99140697717666626f);
    Sniper01Settings.MontageOffset = FTransform(Sniper01MontageRotation, FVector(-1.f, 10.f, -5.f), FVector(1.f, 1.f, 1.f));
    Sniper01Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(1.f, -1.f, 0.25f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Sniper01Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Sniper01Settings.CharacterSequenceSettingsAimingWalking = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Sniper01Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Sniper01Settings.CharacterSequenceSettingsTurning = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Turning);
    Sniper01Settings.CharacterSequenceSettingsJog = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Jog);
    Sniper01Settings.CharacterSequenceSettingsSprint = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Sprint);
    Sniper01Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Sniper01Settings.CharacterSequenceSettingsSprintTactical = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Sniper01Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSniper01SequenceSettingsLibrary::GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Sniper01Settings.CharacterBlendspaceSettingsAiming = UCharacterSniper01BlendspaceSettingsLibrary::GetCharacterSniper01BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Sniper01Settings.CharacterBlendspaceSettingsLeaning = UCharacterSniper01BlendspaceSettingsLibrary::GetCharacterSniper01BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Sniper01Settings.CharacterBlendspaceSettingsWalking = UCharacterSniper01BlendspaceSettingsLibrary::GetCharacterSniper01BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Sniper01Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Sniper01Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01, Sniper01Settings);

    // Sniper 02 Settings
    FWeaponAnimationSettings Sniper02Settings;
    Sniper02Settings.Name = EWeaponName::Sniper_02;
    Sniper02Settings.BlendSettings = FBlendSettings(.4f, .3f, .25f);
    Sniper02Settings.PlayRateBreathing = 1.0f;
    Sniper02Settings.PlayRateRunning = 1.0f;
    Sniper02Settings.PlayRateTurning = 1.0f;
    Sniper02Settings.PlayRateWalking = 1.0f;
    Sniper02Settings.LagMovementInterpSpeed = 10.f;
    Sniper02Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    Sniper02Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    FQuat Sniper02StandingRotation(0.f, 0.021814877167344093f, 0.f, 0.99976199865341187f);
    Sniper02Settings.StandingOffset = FTransform(Sniper02StandingRotation, FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper02Settings.StandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(2.f, 0.0f, 0.0f),
                FVector(0.0f, -1.75f, 0.f)
                ), FDirectionVectors(
                FVector(0, 0 , 1),
                    FVector(1.2f, 0, -0.5f)
                )), FDirectionTransform(
                    FDirectionVectors(
                        FVector(3, 0, 0),
                        FVector(0, 0, 1.f)
                    ),
                    FDirectionVectors(
                        FVector(0, 3, 0.25f),
                        FVector(0.25f, 0, 0)
                    )
                ), FSpringInterpolation(
                0.8, 0.5f, 0.01f
                ));
    Sniper02Settings.bOverrideTPStandingLag = false;
    Sniper02Settings.TPStandingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Sniper02Settings.StandingLagLocationControllerMultiplier = 1.0f;
    Sniper02Settings.AimingOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector::ZeroVector,
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                ),
                FDirectionVectors(
                    FVector::ZeroVector,
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.4, 0.5f, 0.006f
            )
       );
    Sniper02Settings.AimingLag = FLagValues(
        FDirectionTransform(
            FDirectionVectors(
                FVector(.1f, 0.0f, 0.0f),
                FVector::ZeroVector
            ), FDirectionVectors(
                FVector(0, 0.1 , 0),
                FVector::ZeroVector
            )), FDirectionTransform(
                FDirectionVectors(
                    FVector(0.3f, 0, 0),
                    FVector(0, 0, 0.15f)
                ),
                FDirectionVectors(
                    FVector(0, 1.3f, 0.3f),
                    FVector::ZeroVector
                )
            ), FSpringInterpolation(
                0.9f, 0.5f, 0.009f
            ));
    Sniper02Settings.RunningOffset = FTransform(FRotator(0.f, 0.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    Sniper02Settings.CrouchingOffset = FTransform(FRotator(0.f, 5.f, 0.f), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));
    FQuat Sniper02MontageRotation(0.13052175939083099f, 0.0011390461586415768f, 0.0086518777534365654f, 0.99140697717666626f);
    Sniper02Settings.MontageOffset = FTransform(Sniper02MontageRotation, FVector(-1.f, 10.f, -5.f), FVector(1.f, 1.f, 1.f));
    Sniper02Settings.LoweredSettings = FLoweredSettings(
       FBlendSettings(0.225, 0.225, 0.25),
       FTransform(FRotator(0.f, 0.f, 0.f), FVector(1.5f, -3.5f, -0.5f), FVector(1.f, 1.f, 1.f)),
       true,
       true,
       0,
       true
    );
    // Sequence
    Sniper02Settings.CharacterSequenceSettingsAimingBreathing = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Aiming_Breathing);
    Sniper02Settings.CharacterSequenceSettingsAimingWalking = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Aiming_Walking);
    Sniper02Settings.CharacterSequenceSettingsStandingBreathing = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Standing_Breathing);
    Sniper02Settings.CharacterSequenceSettingsTurning = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Turning);
    Sniper02Settings.CharacterSequenceSettingsJog = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Jog);
    Sniper02Settings.CharacterSequenceSettingsSprint = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Sprint);
    Sniper02Settings.CharacterSequenceSettingsSprintImpulse = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Sprint_Impulse);
    Sniper02Settings.CharacterSequenceSettingsSprintTactical = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Sprint_Tactical);
    Sniper02Settings.CharacterSequenceSettingsCrouchingWalking = UCharacterSniper02SequenceSettingsLibrary::GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName::Crouching_Walking);
    
    // Blendspace
    Sniper02Settings.CharacterBlendspaceSettingsAiming = UCharacterSniper02BlendspaceSettingsLibrary::GetCharacterSniper02BlendspaceSettingsByName(ECharacterBlendspaceName::Aim_Offset);
    Sniper02Settings.CharacterBlendspaceSettingsLeaning = UCharacterSniper02BlendspaceSettingsLibrary::GetCharacterSniper02BlendspaceSettingsByName(ECharacterBlendspaceName::Leaning);
    Sniper02Settings.CharacterBlendspaceSettingsWalking = UCharacterSniper02BlendspaceSettingsLibrary::GetCharacterSniper02BlendspaceSettingsByName(ECharacterBlendspaceName::Walking);
    Sniper02Settings.LeanSettings = FLeanSettings(
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Location.VC_WEP_Leaning_Location'")),
       TSoftObjectPtr<UCurveVector>(FSoftObjectPath("/Script/Engine.CurveVector'/Game/InfimaGames/LowPolyShooterPack/Data/Curves/Leaning/VC_WEP_Leaning_Rotation.VC_WEP_Leaning_Rotation'"))
    );
    Sniper02Settings.AimingSyncTime = FBlendSettings(0.25f, 0.25f, 0.25f);

    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02, Sniper02Settings);
}

FWeaponAnimationSettings UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName WeaponName)
{
    InitWeaponAnimationSettingsMap();
    if (GWeaponAnimationSettingsMap.Contains(WeaponName))
    {
        return GWeaponAnimationSettingsMap[WeaponName];
    }
    return FWeaponAnimationSettings(); // Return default settings if not found
}

