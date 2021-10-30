/*
ShaderGlass shader scanlines-shaders\scanlines-sine-abs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scanlines/shaders/scanlines-sine-abs.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Scanlines Sine Absolute Value
An ultra light scanline shader
by RiskyJumps
license: public domain


*/

#pragma once

namespace RetroArchScanlinesShadersScanlinesSineAbsShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,33,0,
246,178,67,164,162,243,
3,109,238,157,88,24,
97,213,1,0,0,0,
152,6,0,0,5,0,
0,0,52,0,0,0,
204,3,0,0,24,4,
0,0,136,4,0,0,
252,5,0,0,82,68,
69,70,144,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
103,3,0,0,82,68,
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
0,0,8,0,0,0,
24,1,0,0,80,0,
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
235,0,0,0,88,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,116,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
116,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
172,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,116,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,190,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,216,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,252,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
16,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
52,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,16,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,65,3,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,16,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,84,3,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
16,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
106,2,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,208,2,
0,0,112,97,114,97,
109,115,95,97,109,112,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
7,3,0,0,112,97,
114,97,109,115,95,112,
104,97,115,101,0,112,
97,114,97,109,115,95,
108,105,110,101,115,95,
98,108,97,99,107,0,
112,97,114,97,109,115,
95,108,105,110,101,115,
95,119,104,105,116,101,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,15,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,104,0,0,0,
3,0,0,0,8,0,
0,0,80,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,80,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,4,11,
0,0,89,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
108,1,0,0,80,0,
1,0,91,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,66,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
56,0,0,8,18,0,
16,0,0,0,0,0,
26,16,16,0,1,0,
0,0,26,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,10,
66,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,219,15,73,64,
42,128,32,0,1,0,
0,0,3,0,0,0,
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
148,0,0,0,8,0,
0,0,1,0,0,0,
0,0,0,0,5,0,
0,0,6,0,0,0,
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
68,88,66,67,195,218,
232,136,56,41,172,59,
141,47,145,145,115,217,
180,197,1,0,0,0,
248,5,0,0,5,0,
0,0,52,0,0,0,
132,3,0,0,208,3,
0,0,4,4,0,0,
92,5,0,0,82,68,
69,70,72,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
31,3,0,0,82,68,
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
0,0,8,0,0,0,
208,0,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,16,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,44,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,80,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
44,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
100,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,44,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,118,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,144,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,180,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
200,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
236,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,200,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,249,2,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,200,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,12,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
200,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
34,2,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,136,2,
0,0,112,97,114,97,
109,115,95,97,109,112,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
191,2,0,0,112,97,
114,97,109,115,95,112,
104,97,115,101,0,112,
97,114,97,109,115,95,
108,105,110,101,115,95,
98,108,97,99,107,0,
112,97,114,97,109,115,
95,108,105,110,101,115,
95,119,104,105,116,101,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
4,4,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,0,
0,0,83,86,95,84,
97,114,103,101,116,0,
171,171,83,72,69,88,
80,1,0,0,80,0,
0,0,84,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,5,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
98,16,0,3,66,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,1,0,
0,0,77,0,0,6,
18,0,16,0,0,0,
0,0,0,208,0,0,
42,16,16,0,0,0,
0,0,56,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,0,0,
0,10,34,0,16,0,
0,0,0,0,58,128,
32,128,65,0,0,0,
1,0,0,0,3,0,
0,0,10,128,32,0,
1,0,0,0,4,0,
0,0,50,0,0,11,
18,0,16,0,0,0,
0,0,10,0,16,128,
129,0,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,226,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,54,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,7,114,32,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
8,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0
};

}

namespace RetroArch
{
class ScanlinesShadersScanlinesSineAbsShaderDef : public ShaderDef
{
public:
	ScanlinesShadersScanlinesSineAbsShaderDef() : ShaderDef{}
	{
		Name = "scanlines-sine-abs";
		VertexByteCode = RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("amp", -1, 52, 4, 0.000000f, 2.000000f, 1.250000f, 0.050000f, "Amplitude"));
		Params.push_back(ShaderParam("phase", -1, 56, 4, 0.000000f, 2.000000f, 0.500000f, 0.050000f, "Phase"));
		Params.push_back(ShaderParam("lines_black", -1, 60, 4, 0.000000f, 1.000000f, 0.000000f, 0.050000f, "Lines Blacks"));
		Params.push_back(ShaderParam("lines_white", -1, 64, 4, 0.000000f, 2.000000f, 1.000000f, 0.050000f, "Lines Whites"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
