/*
ShaderGlass preset handheld/console-border / gba-ags001-color-motionblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/console-border/gba-ags001-color-motionblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldConsoleBorderGbaAgs001ColorMotionblurPresetDef : public PresetDef
{
public:
	HandheldConsoleBorderGbaAgs001ColorMotionblurPresetDef() : PresetDef{}
	{
		Name = "gba-ags001-color-motionblur";
		Category = "handheld/console-border";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersResponseTimeShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001LightShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(HandheldConsoleBorderShaderFilesBorderAutoScaleShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(HandheldConsoleBorderResourcesGbaBorderSquare4xTextureDef()
.Param("linear", "true")
.Param("name", "BORDER"));
	}
};
}
