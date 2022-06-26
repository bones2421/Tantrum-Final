// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TBT_TaskAttemptPullObject.generated.h"

/**
 * 
 */
UCLASS()
class TANTRUMN_API UTBT_TaskAttemptPullObject : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UTBT_TaskAttemptPullObject(const FObjectInitializer& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)  override;
};
