#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SomeActor.generated.h"

class ASampleActor;

UCLASS(BlueprintType)
class ASomeActor : public AActor
{
	GENERATED_BODY()
	
public:
    ASomeActor(const FObjectInitializer & ObjectInitializer);
	
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
    ASampleActor* SampleActor;
};
