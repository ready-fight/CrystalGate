// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CrystalGate : ModuleRules
{
	public CrystalGate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"AIModule",
			"NavigationSystem",
			"UMG",
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] { });
		
		PrivateIncludePaths.AddRange(new string[]
		{
			ModuleDirectory
		});

	}
}
