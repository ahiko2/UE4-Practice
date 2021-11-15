#include "CallbackExample.h"

auto ACallbackExample::ExecuteDelegate(const float FloatVal, const int32 IntVal) -> void {
    TheZeroInputDelegate.Broadcast(); // (1)
    TheTwoInputsDelegate.Broadcast(FloatVal, IntVal); // (2)
}

static FVector TheVector;
auto ACallbackExample::VectorInputEvent_Implementation(const FVector& VecValue) 
-> void {
    TheVector = VecValue;
}

auto ACallbackExample::VecArrayInputFunction_Implementation(const TArray<FVector>& VecValues) 
-> TArray<float> {
    TArray<float> Result;
    for (const auto& Val : VecValues)
        Result.Emplace(FVector::Dist(TheVector, Val));
    return Result;    
}