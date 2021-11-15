#include "SampleActor.h"

// Sets default values
ASampleActor::ASampleActor()
{
	PrimaryActorTick.bCanEverTick = true; // (C1)
	Locations.Emplace(FVector(1, 0, 0)); // (C2)
}

// Called when the game starts or when spawned
void ASampleActor::BeginPlay()
{
	Super::BeginPlay(); // (C3)	

	ElapsedTime = 0.0f; // (C4)
}

void ASampleActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason); // (C5)

	FString Message = GetActorLabel() + " EndPlay()";
	if (GEngine)
		GEngine->AddOnScreenDebugMessage  // (C6)
			(-1, // just add a new message, not overwriting
	 		5.0f, // displaying second
			FColor::Yellow, // message color
			Message); // message text
}

// Called every frame
void ASampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // (C7)

	ElapsedTime += DeltaTime; // (C8)
	FString Message = 
	    FString::Printf(TEXT("Actor Elapsed:%f Delta:%f"), 
			ElapsedTime, DeltaTime);
	if (GEngine)
		GEngine->AddOnScreenDebugMessage
		(-1, 5.0f, FColor::Red, Message);
}
