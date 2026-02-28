/*
ShaderGlass preset presets/crt-plus-signal / c64-monitor imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/crt-plus-signal/c64-monitor.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsCrtPlusSignalC64MonitorPresetDef : public PresetDef
{
public:
	PresetsCrtPlusSignalC64MonitorPresetDef() : PresetDef{}
	{
		Name = "c64-monitor";
		Category = "presets/crt-plus-signal";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "artifact_colors_refpass")
.Param("scale_type_x", "absolute")
.Param("scale_x", "640.0"));
         	ShaderDefs.push_back(NtscShadersArtifactColorsArtifactColors0ShaderDef()
.Param("alias", "Pass1")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(NtscShadersArtifactColorsArtifactColors1ShaderDef()
.Param("alias", "Pass2")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(NtscShadersArtifactColorsArtifactColors2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersCrtLottesShaderDef());
	}
};
}
