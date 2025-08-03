/*
ShaderGlass preset dithering / checkerboard-dedither imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/dithering/checkerboard-dedither.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringCheckerboardDeditherPresetDef : public PresetDef
{
public:
	DitheringCheckerboardDeditherPresetDef() : PresetDef{}
	{
		Name = "checkerboard-dedither";
		Category = "dithering";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersCheckerboardDeditherLinearizeShaderDef()
.Param("alias", "LinearGamma")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
