#include "RushAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

URushAnimInstance::URushAnimInstance()
{
}

void URushAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	const ACharacter* OwningCharacter = Cast<ACharacter>(TryGetPawnOwner());
	if (!OwningCharacter)
	{
		return;
	}
	
}
