/*
ShaderGlass preset interpolation / pixellate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/interpolation/pixellate.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationPixellatePresetDef : public PresetDef
{
public:
	InterpolationPixellatePresetDef() : PresetDef{}
	{
		Name = "pixellate";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersPixellateShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
