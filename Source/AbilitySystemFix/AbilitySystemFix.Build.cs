// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AbilitySystemFix : ModuleRules
{
	public AbilitySystemFix(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", 
				"GameplayAbilities",
				"GameplayTasks",
				// ... add other public dependencies that you statically link with here ...
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				// ... add private dependencies that you statically link with here ...	
			}
			);
	}
}
