#include "Characters/CGCharacterBase.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ACGCharacterBase::ACGCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

ECGTeam ACGCharacterBase::GetTeam() const
{
	return Team;
}

void ACGCharacterBase::SetTeam(ECGTeam NewTeam)
{
	Team = NewTeam;
}

ECGCombatState ACGCharacterBase::GetCombatState() const
{
	return CombatState;
}

void ACGCharacterBase::SetCombatState(ECGCombatState NewState)
{
	if (CombatState == NewState)
	{
		return;
	}

	CombatState = NewState;

	if (CombatState == ECGCombatState::Dead)
	{
		HandleDeath();
	}
}

bool ACGCharacterBase::IsAlive() const
{
	return CombatState != ECGCombatState::Dead;
}

void ACGCharacterBase::HandleHitReact_Implementation()
{
	SetCombatState(ECGCombatState::HitStunned);
}

void ACGCharacterBase::HandleDeath_Implementation()
{
	GetCharacterMovement()->DisableMovement();
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}