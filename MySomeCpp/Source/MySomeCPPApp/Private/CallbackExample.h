// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CallbackExample.generated.h"

UCLASS()
class ACallbackExample : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
	void ExecuteDelegate(const float FloatVal, const int32 Intal);

	// dynamic multicast delegates
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FZeroInputDelegate);  // (1)
	UPROPERTY(BlueprintAssignable, Category = "UE C++ book") // (2)
	FZeroInputDelegate TheZeroInputDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTwoInputsDelegate, float, FloatVal, int32, IntVal); // (3)
	UPROPERTY(BlueprintAssignable, Category = "UE C++ book") // (4)
	FTwoInputsDelegate TheTwoInputsDelegate;

	// BP events
	UFUNCTION(BlueprintImplementableEvent, Category = "UE C++ book") // (1)
	void FloatInputEvent(const float FloValue);

	UFUNCTION(BlueprintNativeEvent, Category = "UE C++ book") // (2)
	void VectorInputEvent(const FVector& VecValue);

	// BP functions
	UFUNCTION(BlueprintImplementableEvent, Category = "UE C++ book") // (3)
	float IntInputFunction(const int32 IntInput);

	UFUNCTION(BlueprintNativeEvent, Category = "UE C++ book") // (4)
	TArray<float> VecArrayInputFunction(const TArray<FVector>& VecValues);
};
