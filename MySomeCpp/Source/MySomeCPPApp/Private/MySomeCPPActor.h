#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySomeCPPActor.generated.h"

UCLASS()
class AMySomeCPPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMySomeCPPActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float MyVelocity; // in [m/s]

public:
	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		static float DelayOfSound(const float Distance);

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		void SetMyVelocity(const float Velocity);

	UFUNCTION(BlueprintPure, Category = "UE C++ book")
		float Delay(const float Distance) const;  // (1)

};
