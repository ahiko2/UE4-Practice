#pragma once

#include "GameFramework/Actor.h" // (1)
#include "CppExampleStruct.h"
#include "CppExampleEnum.h"
#include "CppExampleActor.generated.h" // (2)

UCLASS(BlueprintType) // (3)
class ACppExampleActor : public AActor // (4)
{
    GENERATED_BODY() // (5)

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book") // (6)
      FCppExampleStruct MyStructProp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book") // (6)
	  ECppExampleEnum Type;

    UFUNCTION(BlueprintCallable, Category = "UE C++ book") // (7)
      float MyActorFunc(const float Input);
};
