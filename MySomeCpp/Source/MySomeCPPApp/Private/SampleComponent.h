// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SampleComponent.generated.h"


UCLASS(meta=(BlueprintSpawnableComponent), ClassGroup = ("UE_C++_book")) // (H1)
class USampleComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USampleComponent();

  UPROPERTY(EditAnywhere, BlueprintReadWrite,
    Category = "UE C++ book") // (H2)
    TArray<FVector> Locations;

protected:
    virtual void BeginPlay() override; // (H3)
    virtual void EndPlay(const
    EEndPlayReason::Type EndPlayReason) override; // (H4)

public:	
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

 private:
    float ElapsedTime; // (H6)
};
