// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/Character.h"
#include "Sound/SoundCue.h"
#include "TantrumnCharacterBase.generated.h"

class AThrowableActor;

UENUM(BlueprintType)
enum class ECharacterThrowState : uint8
{
	None			UMETA(DisplayName = "None"),
	RequestingPull	UMETA(DisplayName = "RequestingPull"),
	Pulling			UMETA(DisplayName = "Pulling"),
	Attached		UMETA(DisplayName = "Attached"),
	Throwing		UMETA(DisplayName = "Throwing"),
};

UCLASS()
class TANTRUMN_API ATantrumnCharacterBase : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATantrumnCharacterBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Landed(const FHitResult& Hit) override;

	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode = 0) override;
	virtual void FellOutOfWorld(const class UDamageType& dmgType) override;

	void RequestSprintStart();
	void RequestSprintEnd();

	void RequestThrowObject();
	void RequestPullObject();
	void RequestStopPullObject();
	void ResetThrowableObject();

	void RequestUseObject();

	void OnThrowableAttached(AThrowableActor* InThrowableActor);

	bool CanThrowObject() const { return CharacterThrowState == ECharacterThrowState::Attached; }

	UFUNCTION(BlueprintPure)
	bool IsPullingObject() const { return CharacterThrowState == ECharacterThrowState::RequestingPull || CharacterThrowState == ECharacterThrowState::Pulling; }

	UFUNCTION(BlueprintPure)
	bool IsThrowing() const { return CharacterThrowState == ECharacterThrowState::Throwing; }

	UFUNCTION(BlueprintPure)
	ECharacterThrowState GetCharacterThrowState() const { return CharacterThrowState; }

	UFUNCTION(BlueprintPure)
	bool IsStunned() const { return bIsStunned; }

	UFUNCTION(BlueprintPure)
	bool IsBeingRescued() const { return bIsBeingRescued; }

	UFUNCTION(BlueprintPure)
	bool IsHovering() const;

	UFUNCTION(Server, Reliable)
	void ServerPlayCelebrateMontage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SphereCastPlayerView();
	void SphereCastActorTransform();
	void LineCastActorTransform();
	void ProcessTraceResult(const FHitResult& HitResult);

	/*UFUNCTION(Server, Reliable)
	void PullObject();*/

	//RPC's actions that can need to be done on the server in order to replicate
	UFUNCTION(Server, Reliable)
	void ServerSprintStart();

	UFUNCTION(Server, Reliable)
	void ServerSprintEnd();

	UFUNCTION(Server, Reliable)
	void ServerPullObject(AThrowableActor* InThrowableActor);

	UFUNCTION(Server, Reliable)
	void ServerRequestPullObject(bool bIsPulling);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerRequestThrowObject();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastRequestThrowObject();

	UFUNCTION(Client, Reliable)
	void ClientThrowableAttached(AThrowableActor* InThrowableActor);

	UFUNCTION(Server, Reliable)
	void ServerBeginThrow();

	UFUNCTION(Server, Reliable)
	void ServerFinishThrow();

	bool PlayThrowMontage();
	bool PlayCelebrateMontage();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayCelebrateMontage();

	void UpdateThrowMontagePlayRate();
	void UnbindMontage();

	

	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	UFUNCTION()
	void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	void OnStunBegin(float StunRatio);
	void UpdateStun(float DeltaTime);
	void OnStunEnd();
	
	//these only happen on the server
	//the variable bIsBeingRescued is replicated
	void StartRescue();
	void UpdateRescue(float DeltaTime);
	void EndRescue();

	UPROPERTY(EditAnywhere, Category = "Movement")
	float SprintSpeed = 1200.0f;

	UPROPERTY(EditAnywhere, Category = "Fall Impact")
	float MinImpactSpeed = 600.0f;

	UPROPERTY(EditAnywhere, Category = "Fall Impact")
	float MaxImpactSpeed = 1200.0f;

	//Time in Seconds
	UPROPERTY(EditAnywhere, Category = "Fall Impact")
	float MinStunTime = 1.0f;
	//Time in Seconds
	UPROPERTY(EditAnywhere, Category = "Fall Impact")
	float MaxStunTime = 1.0f;
	//Sound Cue Fall Impact
	UPROPERTY(EditAnywhere, Category = "Fall Impact")
	USoundCue* HeavyLandSound = nullptr;

	float StunTime = 0.0f;
	//float StunBeginTimestamp = 0.0f;
	float CurrentStunTimer = 0.0f;

	bool bIsStunned = false;
	bool bIsSprinting = false;

	float MaxWalkSpeed = 0.0f;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CharacterThrowState, Category = "Throw")
	//UPROPERTY(VisibleAnywhere, replicated, Category = "Throw")
	ECharacterThrowState CharacterThrowState = ECharacterThrowState::None;

	UFUNCTION()
	void OnRep_CharacterThrowState(const ECharacterThrowState& OldCharacterThrowState);

	UPROPERTY(EditAnywhere, Category = "Throw", meta = (ClampMin = "0.0", Unit = "ms"))
	float ThrowSpeed = 2000.0f;

	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimMontage* ThrowMontage = nullptr;

	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimMontage* CelebrateMontage = nullptr;

	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;

	//handle fall out of world
	UPROPERTY(replicated)
	FVector LastGroundPosition = FVector::ZeroVector; 

	UPROPERTY(ReplicatedUsing = OnRep_IsBeingRescued)
	bool bIsBeingRescued = false;
	
	UFUNCTION()
	void OnRep_IsBeingRescued();

	UPROPERTY(EditAnywhere, Category = "KillZ")
	float TimeToRescuePlayer = 3.f;

	FVector FallOutOfWorldPosition = FVector::ZeroVector;
	float CurrentRescueTime = 0.0f;

private:

	UPROPERTY()
	AThrowableActor* ThrowableActor;

	void ApplyEffect_Implementation(EEffectType EffectType, bool bIsBuff) override;
	void UpdateEffect(float DeltaTime);
	void EndEffect();

	bool bIsUnderEffect = false;
	bool bIsEffectBuff = false;

	float DefautlEffectCooldown = 5.0f;
	float EffectCooldown = 0.0f;

	EEffectType CurrentEffect = EEffectType::None;

};
