/*
ShaderGlass preset presets/handheld-plus-color-mod / bandlimit-pixel-gba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/presets/handheld-plus-color-mod/bandlimit-pixel-gba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModBandlimitPixelGbaColorPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModBandlimitPixelGbaColorPresetDef() : PresetDef{}
	{
		Name = "bandlimit-pixel-gba-color";
		Category = "presets/handheld-plus-color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef());
         	ShaderDefs.push_back(LinearLinearizeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(PixelArtScalingShadersBandlimitPixelShaderDef()
.Param("filter_linear", "true"));
	}
};
}
