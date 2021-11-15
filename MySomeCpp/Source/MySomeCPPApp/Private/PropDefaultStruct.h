#pragma once
#include "PropDefaultStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropDefaultStruct {
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, Category = "UE C++ book")
  float Length = 30; // (1)

  UPROPERTY(EditAnywhere, Category = "UE C++ book")
  FVector Position; // (2)

  FPropDefaultStruct(); // (3)
};
