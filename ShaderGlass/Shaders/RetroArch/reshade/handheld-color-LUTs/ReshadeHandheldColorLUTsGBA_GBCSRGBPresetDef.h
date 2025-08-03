/*
ShaderGlass preset reshade/handheld-color-LUTs / GBA_GBC-sRGB imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/reshade/handheld-color-LUTs/GBA_GBC-sRGB.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHandheldColorLUTsGBA_GBCSRGBPresetDef : public PresetDef
{
public:
	ReshadeHandheldColorLUTsGBA_GBCSRGBPresetDef() : PresetDef{}
	{
		Name = "GBA_GBC-sRGB";
		Category = "reshade/handheld-color-LUTs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldGBA_GBCSRGBTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT"));
	}
};
}
