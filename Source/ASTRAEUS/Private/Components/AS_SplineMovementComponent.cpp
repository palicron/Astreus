// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AS_SplineMovementComponent.h"

UAS_SplineMovementComponent::UAS_SplineMovementComponent()
{
	SplineOffset = FVector2D(0.0f, 0.0f);
	SplineOffsetRange = 850.f;
	bSnapToSplineAtStart = true;
}

void UAS_SplineMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerPtr = GetOwner();
}

void UAS_SplineMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAS_SplineMovementComponent::UpdateSplineVectors()
{
}
