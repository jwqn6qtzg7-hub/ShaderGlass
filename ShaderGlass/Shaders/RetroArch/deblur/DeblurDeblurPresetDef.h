/*
ShaderGlass preset deblur / deblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deblur/deblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeblurDeblurPresetDef : public PresetDef
{
public:
	DeblurDeblurPresetDef() : PresetDef{}
	{
		Name = "deblur";
		Category = "deblur";
	}

	void Build() {
         	ShaderDefs.push_back(DeblurShadersDeblurShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
