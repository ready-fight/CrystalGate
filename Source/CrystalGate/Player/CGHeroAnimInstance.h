#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CGHeroAnimInstance.generated.h"

class ACGHeroCharacter;

UCLASS()
class CRYSTALGATE_API UCGHeroAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "CrystalGate|Animation")
	TObjectPtr<ACGHeroCharacter> HeroCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "CrystalGate|Animation")
	float GroundSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "CrystalGate|Animation")
	bool bHasAcceleration = false;

	UPROPERTY(BlueprintReadOnly, Category = "CrystalGate|Animation")
	bool bIsFalling = false;

	UPROPERTY(BlueprintReadOnly, Category = "CrystalGate|Animation")
	bool bShouldMove = false;
};
