// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SampleActor.h"
#include "SampleFunctions.generated.h"

/**
 * 
 */
UCLASS()
class USampleFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
	static ASampleActor* GenerateSampleActor(
		AActor* AnotherActor, FVector Location);

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
	static void AttachSampleComponent(
		AActor* Actor, FVector Location);

  UFUNCTION(BlueprintCallable, Category = "UE C++ book")
  static bool AttachRedMaterial(AStaticMeshActor* Actor);

  UFUNCTION(BlueprintCallable, Category = "UE C++ book")
	  static TArray<float> StaticCAndCppCallTest(const int32 value,
		  const float xReal, const float xImag,
		  const float yReal, const float yImag);

  UFUNCTION(BlueprintCallable, Category = "UE C++ book")
    static int32 DynamicCCallTest(const int32 value, bool& success);

};
