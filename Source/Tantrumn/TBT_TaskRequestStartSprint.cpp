// Fill out your copyright notice in the Description page of Project Settings.


#include "TBT_TaskRequestStartSprint.h"
#include "TantrumnAIController.h"
#include "TantrumnCharacterBase.h"

EBTNodeResult::Type UTBT_TaskRequestStartSprint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	const ATantrumnAIController* TantrumnAIController = Cast<ATantrumnAIController>(OwnerComp.GetOwner());
	ATantrumnCharacterBase* TantrumnCharacterBase = TantrumnAIController ? TantrumnAIController->GetPawn<ATantrumnCharacterBase>() : nullptr;
	if (TantrumnCharacterBase)
	{
		TantrumnCharacterBase->RequestSprintStart();
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}