#pragma once

#include "CoreMinimal.h"
#include "Characters/CGCharacterBase.h"
#include "CGHeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class CRYSTALGATE_API ACGHeroCharacter : public ACGCharacterBase
{
	GENERATED_BODY()

public:
	ACGHeroCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CrystalGate|Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CrystalGate|Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
};