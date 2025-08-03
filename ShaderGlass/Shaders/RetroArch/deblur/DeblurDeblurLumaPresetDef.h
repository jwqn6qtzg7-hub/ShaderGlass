/*
ShaderGlass preset deblur / deblur-luma imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/deblur/deblur-luma.slangp
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
