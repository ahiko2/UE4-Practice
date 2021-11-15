#pragma once
#include "PropertyAccess.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccess {
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, Category = "UE C++ book")
  float EditableFloat; // (1)

  UPROPERTY(BlueprintReadWrite, Category = "UE C++ book")
  float ReadWriteFloat; // (2) 

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
  float EditableReadWriteFloat; // (3)
};
