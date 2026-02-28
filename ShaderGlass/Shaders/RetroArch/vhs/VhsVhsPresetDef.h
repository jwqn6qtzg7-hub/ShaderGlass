/*
ShaderGlass preset vhs / vhs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/vhs/vhs.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class VhsVhsPresetDef : public PresetDef
{
public:
	VhsVhsPresetDef() : PresetDef{}
	{
		Name = "vhs";
		Category = "vhs";
	}

	void Build() {
         	ShaderDefs.push_back(VhsShadersVhsShaderDef()
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(VhsShadersRewindShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "source"));
            TextureDefs.push_back(VhsResourcesRewTextureDef()
.Param("name", "rew"));
            TextureDefs.push_back(VhsResourcesPlayTextureDef()
.Param("name", "play"));
	}
};
}
