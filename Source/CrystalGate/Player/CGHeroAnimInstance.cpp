#include "Player/CGHeroAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Player/CGHeroCharacter.h"

void UCGHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	HeroCharacter = Cast<ACGHeroCharacter>(TryGetPawnOwner());
}

void UCGHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!HeroCharacter)
	{
		HeroCharacter = Cast<ACGHeroCharacter>(TryGetPawnOwner());
	}

	if (!HeroCharacter)
	{
		return;
	}

	const FVector Velocity = HeroCharacter->GetVelocity();
	const FVector HorizontalVelocity = FVector(Velocity.X, Velocity.Y, 0.0f);

	GroundSpeed = HorizontalVelocity.Size();

	const UCharacterMovementComponent* MovementComponent = HeroCharacter->GetCharacterMovement();
	if (!MovementComponent)
	{
		return;
	}

	bHasAcceleration = MovementComponent->GetCurrentAcceleration().SizeSquared() > 0.0f;
	bIsFalling = MovementComponent->IsFalling();
	bShouldMove = GroundSpeed > 3.0f && bHasAcceleration;
}
