// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TantrumnGameInstance.generated.h"

class ATantrumnPlayerController;
class ATantrumnGameStateBase;
class UTantrumnGameWidget;

UCLASS()
class TANTRUMN_API UTantrumnGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	void DisplayCountdown(float GameCountdownDuration, ATantrumnPlayerController* TantrumnPlayerController);
	void DisplayLevelComplete(ATantrumnPlayerController* TantrumnPlayerController);

	UFUNCTION(BlueprintPure)
	ATantrumnGameStateBase* GetGameState() const { return TantrumnGameStateBase; }

	UFUNCTION(BlueprintCallable)
	void OnRetrySelected(ATantrumnPlayerController* TantrumnPlayerController);

	UFUNCTION()
	void RestartGame(ATantrumnPlayerController* TantrumnPlayerController);
protected:
	UFUNCTION()
	void OnGameStateSet(AGameStateBase* GameStateBase);

private:
	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UTantrumnGameWidget> GameWidgetClass; // Exposed class to check the type of widget to display

	UPROPERTY()
	TMap<APlayerController*, UTantrumnGameWidget*> GameWidgets;

	UPROPERTY()
	ATantrumnGameStateBase* TantrumnGameStateBase;
};
