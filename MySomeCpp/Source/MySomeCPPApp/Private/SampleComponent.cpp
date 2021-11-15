#include "SampleComponent.h"


// Sets default values for this component's properties
USampleComponent::USampleComponent()
{
  PrimaryComponentTick.bCanEverTick = true; // (C1)
  Locations.Emplace(FVector(1, 0, 0)); // (C2)
}


// Called when the game starts
void USampleComponent::BeginPlay()
{
	Super::BeginPlay(); // (C3)

	ElapsedTime = 0.0f; // (C4)
}

void USampleComponent::EndPlay(const EEndPlayReason::Type EndPlayReason) {
  Super::EndPlay(EndPlayReason); // (C5)

  AActor *Owner = GetOwner(); // (C6)
  FString Message;
  if (Owner)
    Message = Owner->GetActorLabel() + " EndPlay()";
  else
    Message = "EndPlay()";

  if (GEngine)
    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, Message);
}

// Called every frame
void USampleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction); // (C7)

  ElapsedTime += DeltaTime; // (C8)
  FString Message =
    FString::Printf(TEXT("Actor Elapsed:%f Delta:%f"),
      ElapsedTime, DeltaTime);
  if (GEngine)
    GEngine->AddOnScreenDebugMessage
    (-1, 5.0f, FColor::Green, Message);
}

