#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RushAbilityTask_Tick.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityTaskTickDelegate, float, DeltaTime);

UCLASS()
class RUSH_API URushAbilityTask_Tick : public UAbilityTask
{
	GENERATED_BODY()

public:
	URushAbilityTask_Tick(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Start Tick Task", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
	static URushAbilityTask_Tick* CreateTickTask(UGameplayAbility* OwningAbility);

	virtual void TickTask(float DeltaTime) override;
	virtual void Activate() override;

	UPROPERTY(BlueprintAssignable)
	FAbilityTaskTickDelegate OnTick;
};

