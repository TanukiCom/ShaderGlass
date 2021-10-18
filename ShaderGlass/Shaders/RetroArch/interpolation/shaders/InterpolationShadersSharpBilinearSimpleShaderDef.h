/*
ShaderGlass shader interpolation-shaders\sharp-bilinear-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/interpolation/shaders/sharp-bilinear-simple.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Author: rsn8887 (based on TheMaister)
License: Public domain

This is an integer prescale filter that should be combined
with a bilinear hardware filtering (GL_BILINEAR filter or some such) to achieve
a smooth scaling result with minimum blur. This is good for pixelgraphics
that are scaled by non-integer factors.

The prescale factor and texel coordinates are precalculated
in the vertex shader for speed.

 Figure out where in the texel to sample to get correct pre-scaled bilinear.
 Uses the hardware bilinear interpolator to avoid having to sample 4 times manually.

*/

#pragma once

namespace RetroArchInterpolationShadersSharpBilinearSimpleShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,193,23,
194,27,198,115,150,177,
40,200,236,129,14,192,
172,186,1,0,0,0,
132,5,0,0,5,0,
0,0,52,0,0,0,
92,2,0,0,168,2,
0,0,48,3,0,0,
232,4,0,0,82,68,
69,70,32,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
246,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,85,66,
79,0,80,117,115,104,
0,171,171,171,124,0,
0,0,1,0,0,0,
184,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,3,0,0,0,
24,1,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,224,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,244,0,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
235,0,0,0,144,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,172,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,208,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
172,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
228,1,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,172,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,162,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,15,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
128,0,0,0,4,0,
0,0,8,0,0,0,
104,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
104,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,3,0,0,
104,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,12,0,0,
113,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,2,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,176,1,
0,0,80,0,1,0,
108,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
3,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,194,32,16,0,
0,0,0,0,101,0,
0,3,50,32,16,0,
1,0,0,0,103,0,
0,4,242,32,16,0,
2,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,56,0,
0,8,194,32,16,0,
0,0,0,0,6,20,
16,0,1,0,0,0,
6,132,32,0,1,0,
0,0,2,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,14,0,0,9,
50,0,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,70,128,32,0,
1,0,0,0,2,0,
0,0,65,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,52,0,
0,10,50,32,16,0,
1,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,0,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,2,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,10,0,
0,0,1,0,0,0,
0,0,0,0,6,0,
0,0,8,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,71,254,
15,135,181,238,26,138,
166,200,251,247,172,137,
245,164,1,0,0,0,
120,5,0,0,5,0,
0,0,52,0,0,0,
20,2,0,0,120,2,
0,0,172,2,0,0,
220,4,0,0,82,68,
69,70,216,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
174,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,80,
117,115,104,0,179,0,
0,0,3,0,0,0,
208,0,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,100,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
100,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,1,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,100,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,90,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,92,0,0,0,
3,0,0,0,8,0,
0,0,80,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,80,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,12,12,
0,0,80,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,0,0,0,
83,86,95,84,97,114,
103,101,116,0,171,171,
83,72,69,88,40,2,
0,0,80,0,0,0,
138,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,3,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,194,16,16,0,
0,0,0,0,98,16,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,2,0,0,0,
14,0,0,10,50,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,70,16,16,0,
1,0,0,0,0,0,
0,11,50,0,16,0,
0,0,0,0,70,0,
16,128,65,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
26,0,0,5,194,0,
16,0,0,0,0,0,
166,30,16,0,0,0,
0,0,0,0,0,10,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,191,0,0,0,191,
52,0,0,8,50,0,
16,0,1,0,0,0,
70,0,16,128,65,0,
0,0,0,0,0,0,
230,10,16,0,0,0,
0,0,51,0,0,7,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,1,0,0,0,
0,0,0,8,50,0,
16,0,0,0,0,0,
70,0,16,128,65,0,
0,0,0,0,0,0,
230,10,16,0,0,0,
0,0,65,0,0,5,
194,0,16,0,0,0,
0,0,166,30,16,0,
0,0,0,0,50,0,
0,9,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,230,10,16,0,
0,0,0,0,0,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,14,0,0,8,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,128,
32,0,1,0,0,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,15,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,11,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class InterpolationShadersSharpBilinearSimpleShaderDef : public ShaderDef
{
public:
	InterpolationShadersSharpBilinearSimpleShaderDef() : ShaderDef{}
	{
		Name = "sharp-bilinear-simple";
		VertexByteCode = RetroArchInterpolationShadersSharpBilinearSimpleShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchInterpolationShadersSharpBilinearSimpleShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchInterpolationShadersSharpBilinearSimpleShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchInterpolationShadersSharpBilinearSimpleShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
