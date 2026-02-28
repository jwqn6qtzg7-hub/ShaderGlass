/*
ShaderGlass preset presets/handheld-plus-color-mod / ags001-gba-color-motionblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/handheld-plus-color-mod/ags001-gba-color-motionblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModAgs001GbaColorMotionblurPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModAgs001GbaColorMotionblurPresetDef() : PresetDef{}
	{
		Name = "ags001-gba-color-motionblur";
		Category = "presets/handheld-plus-color-mod";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersResponseTimeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001LightShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
