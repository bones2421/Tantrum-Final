// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnAIController.h"
#include "TantrumnCharacterBase.h"
#include "TantrumnPlayerState.h"

void ATantrumnAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(InPawn))
	{
		if (ATantrumnPlayerState* TantrumnPlayerState = GetPlayerState<ATantrumnPlayerState>())
		{
			TantrumnPlayerState->SetCurrentState(EPlayerGameState::Waiting);
		}
	}
}

void ATantrumnAIController::OnUnPossess()
{
	Super::OnUnPossess();
}

void ATantrumnAIController::OnReachedEnd()
{
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->ServerPlayCelebrateMontage();
	}
}