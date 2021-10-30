/*
ShaderGlass shader crt-shaders-crt-slangtest\scanline imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-slangtest/scanline.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

*/

#pragma once

namespace RetroArchCrtShadersCrtSlangtestScanlineShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,132,156,
6,27,194,9,2,215,
223,16,183,206,247,52,
83,121,1,0,0,0,
144,3,0,0,5,0,
0,0,52,0,0,0,
64,1,0,0,140,1,
0,0,228,1,0,0,
244,2,0,0,82,68,
69,70,4,1,0,0,
1,0,0,0,100,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
220,0,0,0,82,68,
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
0,0,85,66,79,49,
0,171,171,171,92,0,
0,0,1,0,0,0,
124,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,164,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,184,0,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,95,49,57,95,
77,86,80,0,102,108,
111,97,116,52,120,52,
0,171,171,171,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
172,0,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,80,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,65,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,8,1,0,0,
80,0,1,0,66,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,103,0,
0,4,242,32,16,0,
1,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
86,21,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
166,26,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,2,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,32,16,0,
1,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,6,0,0,0,
1,0,0,0,0,0,
0,0,4,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,88,65,
187,1,251,70,103,40,
74,109,252,4,175,140,
98,92,1,0,0,0,
240,6,0,0,5,0,
0,0,52,0,0,0,
56,2,0,0,108,2,
0,0,160,2,0,0,
84,6,0,0,82,68,
69,70,252,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
209,1,0,0,82,68,
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
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,3,0,0,0,
208,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,100,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,1,0,0,
16,0,0,0,4,0,
0,0,2,0,0,0,
160,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,1,0,0,20,0,
0,0,4,0,0,0,
2,0,0,0,160,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,90,1,
0,0,103,108,111,98,
97,108,95,79,85,84,
95,71,65,77,77,65,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,153,1,
0,0,103,108,111,98,
97,108,95,66,79,79,
83,84,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,171,171,73,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
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
83,72,69,88,172,3,
0,0,80,0,0,0,
235,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,2,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,5,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,65,0,0,5,
130,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,56,0,0,8,
82,0,16,0,0,0,
0,0,6,2,16,0,
0,0,0,0,166,139,
32,0,1,0,0,0,
0,0,0,0,26,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
0,0,0,10,114,0,
16,0,1,0,0,0,
86,5,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,191,0,0,192,191,
0,0,0,0,72,0,
0,142,1,224,1,128,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,134,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,1,64,
0,0,0,0,0,0,
16,0,0,10,18,0,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
225,122,148,62,154,153,
25,63,174,71,225,61,
0,0,0,0,72,0,
0,142,1,0,0,128,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,134,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,1,64,
0,0,0,0,0,0,
72,0,0,142,1,32,
0,128,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
134,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,16,0,0,10,
34,0,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,225,122,148,62,
154,153,25,63,174,71,
225,61,0,0,0,0,
16,0,0,10,66,0,
16,0,3,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
225,122,148,62,154,153,
25,63,174,71,225,61,
0,0,0,0,0,0,
0,11,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,2,64,
0,0,0,0,96,64,
0,0,96,64,0,0,
96,64,0,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
25,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,7,
114,0,16,0,3,0,
0,0,86,5,16,0,
1,0,0,0,70,2,
16,0,4,0,0,0,
50,0,0,9,178,0,
16,0,1,0,0,0,
70,8,16,0,2,0,
0,0,6,0,16,0,
1,0,0,0,70,8,
16,0,3,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,166,10,16,0,
1,0,0,0,70,3,
16,0,1,0,0,0,
56,32,0,8,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,86,133,32,0,
1,0,0,0,1,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,14,0,
0,11,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,128,32,0,1,0,
0,0,1,0,0,0,
56,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,25,0,
0,5,114,32,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,26,0,0,0,
5,0,0,0,0,0,
0,0,2,0,0,0,
21,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};

}

namespace RetroArch
{
class CrtShadersCrtSlangtestScanlineShaderDef : public ShaderDef
{
public:
	CrtShadersCrtSlangtestScanlineShaderDef() : ShaderDef{}
	{
		Name = "scanline";
		VertexByteCode = RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("OUT_GAMMA", -1, 16, 4, 1.800000f, 2.400000f, 2.200000f, 0.000000f, "Monitor Output Gamma"));
		Params.push_back(ShaderParam("BOOST", -1, 20, 4, 0.200000f, 2.000000f, 1.000000f, 0.020000f, "Color Boost"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
