/*
ShaderGlass preset vhs / vhs_and_crt_godot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/vhs/vhs_and_crt_godot.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class VhsVhs_and_crt_godotPresetDef : public PresetDef
{
public:
	VhsVhs_and_crt_godotPresetDef() : PresetDef{}
	{
		Name = "vhs_and_crt_godot";
		Category = "vhs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(VhsShadersVhs_and_crt_godotShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(VhsShadersVhs_fontShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
