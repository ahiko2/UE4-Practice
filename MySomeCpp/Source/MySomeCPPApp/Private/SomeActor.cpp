#include "SomeActor.h"
#include "SampleActor.h"

ASomeActor::ASomeActor(const FObjectInitializer & ObjectInitializer)
: Super(ObjectInitializer) {
    SampleActor =
        ObjectInitializer.CreateDefaultSubobject<ASampleActor>
    (this, TEXT("SampleActor"));
}

