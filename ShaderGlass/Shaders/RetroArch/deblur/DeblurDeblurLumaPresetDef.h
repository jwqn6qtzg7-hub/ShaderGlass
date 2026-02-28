/*
ShaderGlass preset deblur / deblur-luma imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deblur/deblur-luma.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeblurDeblurLumaPresetDef : public PresetDef
{
public:
	DeblurDeblurLumaPresetDef() : PresetDef{}
	{
		Name = "deblur-luma";
		Category = "deblur";
	}

	void Build() {
         	ShaderDefs.push_back(DeblurShadersDeblurLumaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
