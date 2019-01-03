// Copyright (c) 2018 ArsenStudio

using UnrealBuildTool;
using System.Collections.Generic;

public class ConanExampleEditorTarget : TargetRules
{
	public ConanExampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "ConanExample" } );
	}
}
