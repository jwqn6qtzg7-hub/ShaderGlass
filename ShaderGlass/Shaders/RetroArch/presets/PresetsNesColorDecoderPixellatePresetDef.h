/*
ShaderGlass preset presets / nes-color-decoder+pixellate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/presets/nes-color-decoder+pixellate.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsNesColorDecoderPixellatePresetDef : public PresetDef
{
public:
	PresetsNesColorDecoderPixellatePresetDef() : PresetDef{}
	{
		Name = "nes-color-decoder+pixellate";
		Category = "presets";
	}

	virtual void Build() {
         	ShaderDefs.push_back(Nes_raw_paletteShadersNesColorDecoderShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(PixelArtScalingShadersPixellateShaderDef());
	}
};
}
