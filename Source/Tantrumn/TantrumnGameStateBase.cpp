// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "TantrumnCharacterBase.h"
#include "TantrumnPlayerController.h"
#include "TantrumnPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TantrumnAIController.h"

void ATantrumnGameStateBase::UpdateResults(ATantrumnPlayerState* PlayerState, ATantrumnCharacterBase* TantrumnCharacter)
{
	if (!PlayerState || !TantrumnCharacter)
	{
		return;
	}

	const bool IsWinner = Results.Num() == 0;
	PlayerState->SetIsWinner(IsWinner);
	PlayerState->SetCurrentState(EPlayerGameState::Finished);

	FGameResult Result;
	Result.Name = TantrumnCharacter->GetName();
	//TODO get the actual time it took in order to post to a leaderboard/results widget
	Result.Time = 5.0f;
	Results.Add(Result);
}

//only ever called by the authority
void ATantrumnGameStateBase::OnPlayerReachedEnd(ATantrumnCharacterBase* TantrumnCharacter)
{
	ensureMsgf(HasAuthority(), TEXT("ATantrumnGameStateBase::OnPlayerReachedEnd being called from Non Authority!"));

	//two cases, Player or AI reaches the end
	if (ATantrumnPlayerController* TantrumnPlayerController = TantrumnCharacter->GetController<ATantrumnPlayerController>())
	{
		TantrumnPlayerController->ClientReachedEnd();
		TantrumnCharacter->GetCharacterMovement()->DisableMovement();
		ATantrumnPlayerState* PlayerState = TantrumnPlayerController->GetPlayerState<ATantrumnPlayerState>();
		UpdateResults(PlayerState, TantrumnCharacter);

		//TODO this will not work once JIP(Join In Progress) is enabled
		if (Results.Num() >= PlayerArray.Num())
		{
			GameState = EGameState::GameOver;
		}
	}
	else if (ATantrumnAIController* TantrumnAIController = TantrumnCharacter->GetController<ATantrumnAIController>())
	{
		ATantrumnPlayerState* PlayerState = TantrumnAIController->GetPlayerState<ATantrumnPlayerState>();
		UpdateResults(PlayerState, TantrumnCharacter);
		TantrumnAIController->OnReachedEnd();
	}

}

void ATantrumnGameStateBase::ClearResults()
{
	Results.Empty();
}

void ATantrumnGameStateBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	FDoRepLifetimeParams SharedParams;
	//SharedParams.bIsPushBased = true;
	//SharedParams.Condition = COND_SkipOwner;

	DOREPLIFETIME_WITH_PARAMS_FAST(ATantrumnGameStateBase, GameState, SharedParams);
	DOREPLIFETIME_WITH_PARAMS_FAST(ATantrumnGameStateBase, Results, SharedParams);

	//DOREPLIFETIME(ATantrumnCharacterBase, CharacterThrowState);
}

void ATantrumnGameStateBase::OnRep_GameState(const EGameState& OldGameState)
{
	UE_LOG(LogTemp, Warning, TEXT("OldGameState: %s"), *UEnum::GetDisplayValueAsText(OldGameState).ToString());
	UE_LOG(LogTemp, Warning, TEXT("GameState: %s"), *UEnum::GetDisplayValueAsText(GameState).ToString());
}