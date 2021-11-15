#pragma once
#include "PropDefaultClass.generated.h"

UCLASS(BlueprintType)
class UPropDefaultClass : public UObject {
  GENERATED_BODY()

  public:
  UPROPERTY(EditAnywhere, Category = "UE C++ book")
  FRotator Rotator;

  UPropDefaultClass();
};
