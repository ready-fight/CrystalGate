#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Core/CGTypes.h"
#include "CGCharacterBase.generated.h"

UCLASS()
class CRYSTALGATE_API ACGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ACGCharacterBase();

	UFUNCTION(BlueprintCallable, Category = "CrystalGate|Character")
	ECGTeam GetTeam() const;

	UFUNCTION(BlueprintCallable, Category = "CrystalGate|Character")
	void SetTeam(ECGTeam NewTeam);

	UFUNCTION(BlueprintCallable, Category = "CrystalGate|Character")
	ECGCombatState GetCombatState() const;

	UFUNCTION(BlueprintCallable, Category = "CrystalGate|Character")
	void SetCombatState(ECGCombatState NewState);

	UFUNCTION(BlueprintCallable, Category = "CrystalGate|Character")
	bool IsAlive() const;

	UFUNCTION(BlueprintNativeEvent, Category = "CrystalGate|Character")
	void HandleHitReact();

	UFUNCTION(BlueprintNativeEvent, Category = "CrystalGate|Character")
	void HandleDeath();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CrystalGate|Character")
	ECGTeam Team = ECGTeam::Neutral;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CrystalGate|Character")
	ECGCombatState CombatState = ECGCombatState::None;
};