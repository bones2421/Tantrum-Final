// Fill out your copyright notice in the Description page of Project Settings.


#include "TBT_TaskAttemptPullObject.h"
#include "TantrumnAIController.h"
#include "TantrumnCharacterBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

UTBT_TaskAttemptPullObject::UTBT_TaskAttemptPullObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Attempt Pull Object";
	bNotifyTick = false;
	bNotifyTaskFinished = true;


	// accept only vectors
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UTBT_TaskAttemptPullObject, BlackboardKey));
}

EBTNodeResult::Type UTBT_TaskAttemptPullObject::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	const ATantrumnAIController* TantrumnAIController = Cast<ATantrumnAIController>(OwnerComp.GetOwner());
	ATantrumnCharacterBase* TantrumnCharacterBase = TantrumnAIController ? TantrumnAIController->GetPawn<ATantrumnCharacterBase>() : nullptr;
	if (TantrumnCharacterBase)
	{
		if (const UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent())
		{
			const FVector TargetLocation = MyBlackboard->GetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID());
			if (TantrumnCharacterBase->AttemptPullObjectAtLocation(TargetLocation))
			{
				return EBTNodeResult::Succeeded;
			}
		}
	}

	return EBTNodeResult::Failed;
}