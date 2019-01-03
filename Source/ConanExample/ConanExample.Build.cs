// Copyright (c) 2018 ArsenStudio

using UnrealBuildTool;
using Conan;

public class ConanExample : ModuleRules
{
	public ConanExample(ReadOnlyTargetRules Target) : base(Target)
	{
        ConanBuildInfo.Setup();
        this.LinkAllConanLibraries();

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
