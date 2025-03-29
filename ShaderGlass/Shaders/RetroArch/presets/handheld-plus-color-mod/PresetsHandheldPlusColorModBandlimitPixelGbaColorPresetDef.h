/*
ShaderGlass preset presets/handheld-plus-color-mod / bandlimit-pixel-gba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/handheld-plus-color-mod/bandlimit-pixel-gba-color.slangp
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
