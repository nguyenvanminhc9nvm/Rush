#include "RushAbilityTask_Tick.h"

#include "Rush/Tags/LogUtils.h"

URushAbilityTask_Tick::URushAbilityTask_Tick(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	bTickingTask = true;
}

URushAbilityTask_Tick* URushAbilityTask_Tick::CreateTickTask(UGameplayAbility* OwningAbility)
{
	return NewAbilityTask<URushAbilityTask_Tick>(OwningAbility);;
}

void URushAbilityTask_Tick::Activate()
{
	Super::Activate();
}

void URushAbilityTask_Tick::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnTick.Broadcast(DeltaTime);
	}
}

