#include "SampleFunctions.h"
#include "SampleComponent.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

auto USampleFunctions::GenerateSampleActor(
    AActor* AnotherActor,
    FVector Location) -> ASampleActor* {
    if (!AnotherActor) return nullptr;
    UWorld* World = AnotherActor->GetWorld();
    ASampleActor* Actor = World->SpawnActor<ASampleActor>();  // (1)
    Actor->Locations.SetNum(1);
    Actor->Locations[0] = Location;
    return Actor; // (2)
}

auto USampleFunctions::AttachSampleComponent(
    AActor* Actor, FVector Location) -> void {
    if (!Actor) return;
    USampleComponent *Comp = NewObject<USampleComponent>(Actor); // (1)
    Comp->Locations.SetNum(1);
    Comp->Locations[0] = Location;
    Actor->AddInstanceComponent(Comp); // (2)
    Comp->RegisterComponent(); // (3)
}

auto USampleFunctions::AttachRedMaterial(
    AStaticMeshActor* Actor) -> bool {
    UMaterial* mat = LoadObject<UMaterial>(
        nullptr,
        TEXT("Material'/Game/RedMaterial.RedMaterial'")); // (1)
    if (mat) {
        Actor->GetStaticMeshComponent()->SetMaterial(0, mat); // (2)
        return true;
    }
    else {
        return false;
    }
}


#if PLATFORM_WINDOWS || PLATFORM_MAC
#include "c_lib_test.h"
#include "CVector2f.h"

auto USampleFunctions::StaticCAndCppCallTest(const int32 val,
	const float xReal, const float xImag,
	const float yReal, const float yImag)
-> TArray<float> {
   const int c_result = c_lib_function(val); // (1)
   typedef std::complex<float> cfloat;
   const cfloat x(xReal, xImag);
   const cfloat y(yReal, yImag);
   const CVector2f vec(x, y);  // (2)
   const cfloat cpp_result = vec * vec; // (3)
   return TArray<float>({ (float)c_result,
      cpp_result.real(), cpp_result.imag() });
}
#else
auto USampleFunctions::StaticCAndCppCallTest(const int32 val,
                                             const float xReal, const float xImag,
                                             const float yReal, const float yImag)
-> TArray<float> {
    return TArray<float>();
}
#endif

auto USampleFunctions::DynamicCCallTest(const int32 val, bool& success)
-> int32 {
	typedef int(*_dll_function)(int val);  // (1)
	static void* dll_ptr = nullptr;  // (2)
	static _dll_function func_ptr = nullptr; // (3)
#if PLATFORM_WINDOWS
	const static FString dllname = "c_dll_sample.dll";  // (4)
#elif PLATFORM_MAC
    const static FString dllname = "libc_dll_sample.dylib"; // (5)
#else
    const static FString dllname;
#endif
	const static FString funcname = "c_dll_function";  // (6)
	if (!dll_ptr) {
		dll_ptr = FPlatformProcess::GetDllHandle(*dllname); // (7)
		if (!dll_ptr) {
			success = false;
			return 0;
		}
	}
	if (!func_ptr) {
		func_ptr = (_dll_function)
			FPlatformProcess::GetDllExport(dll_ptr, *funcname); // (8)
		if (!func_ptr) {
			success = false;
			return 0;
		}
	}

	success = true;
	return (*func_ptr)(val); // (9)
}
