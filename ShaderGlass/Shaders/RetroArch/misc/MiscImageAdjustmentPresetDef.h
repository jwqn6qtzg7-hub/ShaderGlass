/*
ShaderGlass preset misc / image-adjustment imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/image-adjustment.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscImageAdjustmentPresetDef : public PresetDef
{
public:
	MiscImageAdjustmentPresetDef() : PresetDef{}
	{
		Name = "image-adjustment";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersImageAdjustmentShaderDef()
.Param("scale_type", "source"));
	}
};
}
