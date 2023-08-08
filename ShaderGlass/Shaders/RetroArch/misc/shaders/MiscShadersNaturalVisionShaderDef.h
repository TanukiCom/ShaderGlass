/*
ShaderGlass shader misc-shaders\natural-vision imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/misc/shaders/natural-vision.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


ShadX's Natural Vision Shader

Ported and tweaked by Hyllian - 2016
parameterized by Sp00kyFox


    VERTEX_SHADER    

*/

#pragma once

namespace RetroArchMiscShadersNaturalVisionShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,110,239,
1,38,44,138,120,137,
121,214,212,137,93,170,
129,5,1,0,0,0,
140,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
240,2,0,0,82,68,
69,70,0,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
216,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,85,66,79,0,
92,0,0,0,1,0,
0,0,120,0,0,0,
64,0,0,0,0,0,
0,0,0,0,0,0,
160,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,180,0,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,77,
86,80,0,102,108,111,
97,116,52,120,52,0,
2,0,3,0,4,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,171,0,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
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
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,8,1,
0,0,80,0,1,0,
66,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
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
16,0,1,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,4,0,
0,0,4,0,0,0,
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
0,0,0,0,0,0,
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,173,205,
212,208,165,105,58,219,
56,170,164,214,119,193,
123,242,1,0,0,0,
88,7,0,0,5,0,
0,0,52,0,0,0,
8,3,0,0,60,3,
0,0,112,3,0,0,
188,6,0,0,82,68,
69,70,204,2,0,0,
1,0,0,0,196,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
163,2,0,0,82,68,
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
117,114,99,101,0,112,
117,115,104,95,99,111,
110,115,116,97,110,116,
0,171,171,171,179,0,
0,0,7,0,0,0,
220,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,244,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,16,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,52,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
16,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
70,2,0,0,32,0,
0,0,4,0,0,0,
2,0,0,0,88,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,124,2,
0,0,36,0,0,0,
4,0,0,0,2,0,
0,0,88,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,2,0,0,
40,0,0,0,4,0,
0,0,2,0,0,0,
88,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
145,2,0,0,44,0,
0,0,4,0,0,0,
2,0,0,0,88,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,154,2,
0,0,48,0,0,0,
4,0,0,0,2,0,
0,0,88,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,6,2,0,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,71,73,78,0,102,
108,111,97,116,0,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,81,2,0,0,
112,97,114,97,109,115,
95,71,79,85,84,0,
112,97,114,97,109,115,
95,89,0,112,97,114,
97,109,115,95,73,0,
112,97,114,97,109,115,
95,81,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,68,3,0,0,
80,0,0,0,209,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,56,0,0,8,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,25,0,
0,5,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,70,2,16,0,
0,0,0,0,47,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,128,32,0,
1,0,0,0,2,0,
0,0,25,0,0,5,
18,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,216,128,24,63,
27,133,140,190,149,124,
164,190,0,0,0,0,
70,2,16,0,0,0,
0,0,16,0,0,10,
18,0,16,0,0,0,
0,0,2,64,0,0,
236,135,88,62,134,200,
5,191,22,77,159,62,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,8,66,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,3,0,
0,0,56,0,0,8,
34,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
2,0,0,0,52,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,216,128,24,191,
134,200,5,191,0,0,
0,0,51,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
216,128,24,63,134,200,
5,63,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,204,207,116,63,
117,251,30,63,0,0,
0,0,70,2,16,0,
0,0,0,0,47,0,
0,5,18,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,151,83,139,190,
188,186,37,191,0,0,
0,0,70,2,16,0,
0,0,0,0,16,0,
0,10,18,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
209,177,141,191,211,48,
218,63,0,0,0,0,
70,2,16,0,0,0,
0,0,47,0,0,5,
66,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,47,0,
0,5,34,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
14,0,0,11,18,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,26,128,32,0,
1,0,0,0,2,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
25,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,25,0,
0,0,2,0,0,0,
0,0,0,0,2,0,
0,0,22,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class MiscShadersNaturalVisionShaderDef : public ShaderDef
{
public:
	MiscShadersNaturalVisionShaderDef() : ShaderDef{}
	{
		Name = "natural-vision";
		VertexByteCode = RetroArchMiscShadersNaturalVisionShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchMiscShadersNaturalVisionShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchMiscShadersNaturalVisionShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchMiscShadersNaturalVisionShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("GIN", -1, 32, 4, 0.000000f, 10.000000f, 2.200000f, 0.050000f, "NaturalVision Gamma In"));
		Params.push_back(ShaderParam("GOUT", -1, 36, 4, 0.000000f, 10.000000f, 2.200000f, 0.050000f, "NaturalVision Gamma Out"));
		Params.push_back(ShaderParam("Y", -1, 40, 4, 0.000000f, 10.000000f, 1.100000f, 0.010000f, "NaturalVision Luminance"));
		Params.push_back(ShaderParam("I", -1, 44, 4, 0.000000f, 10.000000f, 1.100000f, 0.010000f, "NaturalVision Orange-Cyan"));
		Params.push_back(ShaderParam("Q", -1, 48, 4, 0.000000f, 10.000000f, 1.100000f, 0.010000f, "NaturalVision Magenta-Green"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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