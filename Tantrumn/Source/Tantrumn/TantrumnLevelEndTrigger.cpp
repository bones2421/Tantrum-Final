// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnLevelEndTrigger.h"
#include "TantrumnCharacterBase.h"
#include "TantrumnGameStateBase.h"

ATantrumnLevelEndTrigger::ATantrumnLevelEndTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ATantrumnLevelEndTrigger::OnOverlapBegin);
}

void ATantrumnLevelEndTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ATantrumnLevelEndTrigger::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (HasAuthority())
	{
		if (ATantrumnGameStateBase* TantrumnGameState =  GetWorld()->GetGameState<ATantrumnGameStateBase>())
		{
			ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(OtherActor);
			TantrumnGameState->OnPlayerReachedEnd(TantrumnCharacterBase);
		}
	}
	
}
