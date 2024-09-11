// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multi2Project2 : ModuleRules
{
	public Multi2Project2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
