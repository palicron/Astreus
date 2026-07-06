// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "AS_SplineMovementComponent.generated.h"

class USplineComponent;
/**
 * 
 */
UCLASS()
class ASTRAEUS_API UAS_SplineMovementComponent : public UFloatingPawnMovement
{
	GENERATED_BODY()

public:
	UAS_SplineMovementComponent();
	
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable, Category="Spline Movement")
	void AddLateralMovement(const float DeltaTime, const FVector2D Direction);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spline Movement")
	TObjectPtr<USplineComponent> TargetSpline;

	TWeakObjectPtr<AActor> OwnerPtr;

	FVector2D SplineOffset;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Spline Movement")
	float SplineOffsetRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Spline Movement")
	uint8 bSnapToSplineAtStart : 1;

private:
	
	FVector UpSplineVector;
	
	FVector RightSplineVector;
	
	void UpdateSplineVectors();
};
