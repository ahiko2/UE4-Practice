using UnrealBuildTool;

public class MySomeCPPApp : ModuleRules
{
    public MySomeCPPApp(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        PublicIncludePaths.Add(ModuleDirectory +
            "/library/header/");  // (1)

        if (Target.Platform == UnrealTargetPlatform.Win64) {  // (W1)
            PublicAdditionalLibraries.Add(ModuleDirectory +
            "/library/lib/c_lib_sample.lib"); // (W2)

            var DLLPath = ModuleDirectory + "../../../Binaries/Win64/c_dll_sample.dll";
            PublicDelayLoadDLLs.Add(DLLPath);
            RuntimeDependencies.Add(new RuntimeDependency(DLLPath)); // (W3)
        }
        if (Target.Platform == UnrealTargetPlatform.Mac) { // (M1)
            PublicAdditionalLibraries.Add(ModuleDirectory +
                "/library/lib/libc_lib_sample.a"); // (M2)

            var DLLPath = ModuleDirectory + "../../../Binaries/Mac/libc_dll_sample.dylib";
            PublicDelayLoadDLLs.Add(DLLPath);
            RuntimeDependencies.Add(new RuntimeDependency(DLLPath)); // (M3)
        }
    }
}
