// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnGameInstance.h"
#include "TantrumnGameWidget.h"
#include "TantrumnGameStateBase.h"
#include "TantrumnPlayerController.h"

void UTantrumnGameInstance::DisplayCountdown(float GameCountdownDuration, ATantrumnPlayerController* TantrumnPlayerController)
{
	if (GetWorld())
	{
		UTantrumnGameWidget* PlayerGameWidget = nullptr;
		UTantrumnGameWidget** GameWidget = GameWidgets.Find(TantrumnPlayerController);
		if (!GameWidget)
		{
			PlayerGameWidget = CreateWidget<UTantrumnGameWidget>(TantrumnPlayerController, GameWidgetClass);
			if (PlayerGameWidget)
			{
				//only do this once
				//atm we never remove this as it has the race time
				PlayerGameWidget->AddToPlayerScreen();
				GameWidgets.Add(TantrumnPlayerController, PlayerGameWidget);
			}
		}
		else
		{
			PlayerGameWidget = *GameWidget;
		}
		
		if (PlayerGameWidget)
		{
			PlayerGameWidget->StartCountdown(GameCountdownDuration, TantrumnPlayerController);
			TantrumnGameStateBase = GetWorld()->GetGameState<ATantrumnGameStateBase>();
			if (!TantrumnGameStateBase)
			{
				GetWorld()->GameStateSetEvent.AddUObject(this, &UTantrumnGameInstance::OnGameStateSet);
			}
		}
	}
}

void UTantrumnGameInstance::OnGameStateSet(AGameStateBase* GameStateBase)
{
	TantrumnGameStateBase = Cast<ATantrumnGameStateBase>(GameStateBase);
}

void UTantrumnGameInstance::DisplayLevelComplete(ATantrumnPlayerController* TantrumnPlayerController)
{
	UTantrumnGameWidget** GameWidget = GameWidgets.Find(TantrumnPlayerController);
	if (GameWidget)
	{
		(*GameWidget)->DisplayResults();
	}
}

void UTantrumnGameInstance::RestartGame(ATantrumnPlayerController* TantrumnPlayerController)
{
	UTantrumnGameWidget** GameWidget = GameWidgets.Find(TantrumnPlayerController);
	if (GameWidget)
	{
		(*GameWidget)->RemoveResults();
		//restore game input 
		FInputModeGameOnly InputMode;
		TantrumnPlayerController->SetInputMode(InputMode);
		TantrumnPlayerController->SetShowMouseCursor(false);
	}
	
}

void UTantrumnGameInstance::OnRetrySelected(ATantrumnPlayerController* TantrumnPlayerController)
{
	UTantrumnGameWidget** GameWidget = GameWidgets.Find(TantrumnPlayerController);
	if (GameWidget)
	{
		RestartGame(TantrumnPlayerController);
		TantrumnPlayerController->ServerRestartLevel();
	}
}