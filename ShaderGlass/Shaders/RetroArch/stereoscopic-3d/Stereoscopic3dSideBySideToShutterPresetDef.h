/*
ShaderGlass preset stereoscopic-3d / side-by-side-to-shutter imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/stereoscopic-3d/side-by-side-to-shutter.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dSideBySideToShutterPresetDef : public PresetDef
{
public:
	Stereoscopic3dSideBySideToShutterPresetDef() : PresetDef{}
	{
		Name = "side-by-side-to-shutter";
		Category = "stereoscopic-3d";
	}

	void Build() {
         	ShaderDefs.push_back(Stereoscopic3dShadersSbsToShutterShaderDef()
.Param("scale_type", "source"));
	}
};
}
