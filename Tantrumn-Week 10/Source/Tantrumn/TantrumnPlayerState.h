// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TantrumnPlayerState.generated.h"

// Enum to track the current state of the game 
UENUM(BlueprintType)
enum class EPlayerGameState : uint8
{
	None		UMETA(DisplayName = "None"),
	Waiting		UMETA(DisplayName = "Waiting"),
	Playing		UMETA(DisplayName = "Playing"),
	Finished	UMETA(DisplayName = "Finished")
};

UCLASS()
class TANTRUMN_API ATantrumnPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	EPlayerGameState GetCurrentState() const { return CurrentState; }

	void SetCurrentState(EPlayerGameState PlayerGameState) { CurrentState = PlayerGameState; }

	UFUNCTION(BlueprintPure)
	bool IsWinner() const { return bIsWinner; }

	void SetIsWinner(bool IsWinner) { bIsWinner = IsWinner; }
protected:
	UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
	EPlayerGameState CurrentState = EPlayerGameState::None;

	UPROPERTY(replicated)
	bool bIsWinner = false;

	UFUNCTION()
	virtual void OnRep_CurrentState(const EPlayerGameState& OldGameState){}
};
