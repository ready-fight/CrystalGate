#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ECGTeam : uint8
{
	Player,
	Enemy,git 
	Neutral
};

UENUM(BlueprintType)
enum class ECGCombatState : uint8
{
	None,
	Attacking,
	Dodging,
	Blocking,
	HitStunned,
	Dead
};
