#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SampleActor.generated.h"

UCLASS() // (H1)
class ASampleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASampleActor(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, 
		Category = "UE C++ book") // (H2)
	TArray<FVector> Locations;

protected:
	virtual void BeginPlay() override; // (H3)
	virtual void EndPlay(const 
		EEndPlayReason::Type EndPlayReason) override; // (H4)

public:	
	virtual void Tick(float DeltaTime) override; // (H5)

private:
	float ElapsedTime; // (H6)
};
