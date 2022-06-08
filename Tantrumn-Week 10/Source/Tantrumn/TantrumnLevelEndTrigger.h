// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "TantrumnLevelEndTrigger.generated.h"

class ATantrumnGameModeBase; 

UCLASS(Blueprintable, BlueprintType)
class TANTRUMN_API ATantrumnLevelEndTrigger : public ATriggerVolume
{
	GENERATED_BODY()

public:

	ATantrumnLevelEndTrigger();

protected:

	virtual void BeginPlay() override;

private:
	
	// Custom Overlap function to override the Actor BeginOverlap version. 
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	
};
