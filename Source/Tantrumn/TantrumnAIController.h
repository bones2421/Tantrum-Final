// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TantrumnAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANTRUMN_API ATantrumnAIController : public AAIController
{
	GENERATED_BODY()
public:

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	UFUNCTION()
	void OnReachedEnd();
};
