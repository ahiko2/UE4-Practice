#pragma once
#include "GameFramework/Actor.h"
#include "ClassWPropExample.generated.h"

UCLASS(BlueprintType)
class UClassWPropExample : public UObject
{
    GENERATED_BODY()
  private:
    UPROPERTY()  // (1)
    AActor* OwningActor;  // (2)

  public:
    UPROPERTY(EditAnywhere, Category = "UE C++ book")  // (3)
    FVector ThePosition;  // (4)
};
