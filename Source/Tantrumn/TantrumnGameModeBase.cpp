// Copyright Epic Games, Inc. All Rights Reserved.


#include "TantrumnGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TantrumnGameInstance.h"
#include "TantrumnGameStateBase.h"
#include "TantrumnPlayerController.h"
#include "TantrumnPlayerState.h"
#include "TantrumnAIController.h"

#include "TantrumnGameWidget.h"

ATantrumnGameModeBase::ATantrumnGameModeBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATantrumnGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	if (ATantrumnGameStateBase* TantrumnGameState = GetGameState<ATantrumnGameStateBase>())
	{
		TantrumnGameState->SetGameState(EGameState::Waiting);
	}
}

void ATantrumnGameModeBase::AttemptStartGame()
{
	if (ATantrumnGameStateBase* TantrumnGameState = GetGameState<ATantrumnGameStateBase>())
	{
		TantrumnGameState->SetGameState(EGameState::Waiting);
	}
	if (GetNumPlayers() == NumExpectedPlayers)
	{
		//this needs to be replicated, call a function on game instance and replicate
		DisplayCountdown();
		if (GameCountdownDuration > SMALL_NUMBER)
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATantrumnGameModeBase::StartGame, GameCountdownDuration, false);
		}
		else
		{
			//this is always called from the authority, aka here
			StartGame();
		}
		
	}
}

void ATantrumnGameModeBase::DisplayCountdown()
{
	//set the hud for the game instances here, and the controller can then do what it needs
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerState && !MustSpectate(PlayerController))
		{
			if (ATantrumnPlayerController* TantrumnPlayerController = Cast< ATantrumnPlayerController>(PlayerController))
			{
				TantrumnPlayerController->ClientDisplayCountdown(GameCountdownDuration, GameWidgetClass);
			}
		}
	}
}
//broadcast this?
void ATantrumnGameModeBase::StartGame()
{
	if (ATantrumnGameStateBase* TantrumnGameState = GetGameState<ATantrumnGameStateBase>())
	{
		TantrumnGameState->SetGameState(EGameState::Playing);
		TantrumnGameState->ClearResults();
	}

	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerState && !MustSpectate(PlayerController))
		{
			//cast and start?
			//this does not work on all controllers...
			FInputModeGameOnly InputMode;
			PlayerController->SetInputMode(InputMode);
			PlayerController->SetShowMouseCursor(false);

			ATantrumnPlayerState* PlayerState = PlayerController->GetPlayerState<ATantrumnPlayerState>();
			if (PlayerState)
			{
				PlayerState->SetCurrentState(EPlayerGameState::Playing);
				PlayerState->SetIsWinner(false);
			}
		}
	}

	for (FConstControllerIterator Iterator = GetWorld()->GetControllerIterator(); Iterator; ++Iterator)
	{
		ATantrumnAIController* TantrumnAIController = Cast<ATantrumnAIController>(Iterator->Get());
		if (TantrumnAIController)
		{
			ATantrumnPlayerState* PlayerState = TantrumnAIController->GetPlayerState<ATantrumnPlayerState>();
			if (PlayerState)
			{
				PlayerState->SetCurrentState(EPlayerGameState::Playing);
				PlayerState->SetIsWinner(false);
			}
		}
	}
		
}

void ATantrumnGameModeBase::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);

	if (APlayerController* PlayerController = Cast<APlayerController>(NewPlayer))
	{
		if (PlayerController->GetCharacter() && PlayerController->GetCharacter()->GetCharacterMovement())
		{
			PlayerController->GetCharacter()->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
			ATantrumnPlayerState* PlayerState = PlayerController->GetPlayerState<ATantrumnPlayerState>();
			if (PlayerState)
			{
				PlayerState->SetCurrentState(EPlayerGameState::Waiting);
			}
		}
	}

	AttemptStartGame();
}

void ATantrumnGameModeBase::RestartGame()
{
	//destroy the actor
	for (FConstControllerIterator Iterator = GetWorld()->GetControllerIterator(); Iterator; ++Iterator)
	{
		ATantrumnAIController* TantrumnAIController = Cast<ATantrumnAIController>(Iterator->Get());
		if (TantrumnAIController && TantrumnAIController->GetPawn())
		{
			TantrumnAIController->Destroy(true);
		}
	}

	ResetLevel();
	//RestartGame();
	//GetWorld()->ServerTravel(TEXT("?Restart"), false);
	//ProcessServerTravel("?Restart");
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerState && !MustSpectate(PlayerController))
		{
			if (ATantrumnPlayerController* TantrumnPlayerController = Cast< ATantrumnPlayerController>(PlayerController))
			{
				TantrumnPlayerController->ClientRestartGame();
			}
			RestartPlayer(PlayerController);
		}
	}
}
