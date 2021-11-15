#include "MySomeCPPActor.h"


// Sets default values
AMySomeCPPActor::AMySomeCPPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMySomeCPPActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMySomeCPPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

auto AMySomeCPPActor::DelayOfSound(const float Distance) -> float {
	static const float SoundVelocity = 340.29; // [m/s]
	return Distance / SoundVelocity;
}

auto AMySomeCPPActor::SetMyVelocity(const float Velocity) -> void {
	MyVelocity = Velocity;
}

auto AMySomeCPPActor::Delay(const float Distance) const -> float {
	if (MyVelocity <= 0.0f) {
		return 0.0f;
	} else {
		return Distance / MyVelocity;
	}
}

