/*
ShaderGlass preset reshade / blendoverlay imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/blendoverlay.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeBlendoverlayPresetDef : public PresetDef
{
public:
	ReshadeBlendoverlayPresetDef() : PresetDef{}
	{
		Name = "blendoverlay";
		Category = "reshade";
	}

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersBlendoverlayBlendoverlayShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(ReshadeShadersBlendoverlayGrayscale_slotmaskTextureDef()
.Param("name", "overlay"));
            OverrideParam("LUTHeight", (float)4.000000);
            OverrideParam("LUTWidth", (float)6.000000);
	}
};
}
