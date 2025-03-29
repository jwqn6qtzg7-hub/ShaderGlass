/*
ShaderGlass preset deblur / deblur-luma imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/deblur/deblur-luma.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(DeblurShadersDeblurLumaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
