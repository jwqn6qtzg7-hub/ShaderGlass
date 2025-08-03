/*
ShaderGlass preset handheld / dot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/handheld/dot.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldDotPresetDef : public PresetDef
{
public:
	HandheldDotPresetDef() : PresetDef{}
	{
		Name = "dot";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersDotShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
