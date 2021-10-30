/*
ShaderGlass shader nes_raw_palette-shaders-cgwg-famicom-geom\composite-encode imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/nes_raw_palette/shaders/cgwg-famicom-geom/composite-encode.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

 original palette decode for historical purposes:
uint n = uint(texture(Source, vTexCoord).r);
uint color = n & 0xfu;
uint level = color < 0xeu ? (n>>4u)&3u : 1u;
uint emphasis = n >> 6u;

// Extract the chroma, level, and emphasis from the normalized RGB triplet

*/

#pragma once

namespace RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs
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
68,88,66,67,227,253,
28,206,208,169,143,205,
9,222,55,144,253,86,
108,133,1,0,0,0,
68,9,0,0,5,0,
0,0,52,0,0,0,
0,2,0,0,52,2,
0,0,104,2,0,0,
168,8,0,0,82,68,
69,70,196,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
156,1,0,0,82,68,
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
0,0,2,0,0,0,
208,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,32,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,60,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,96,1,0,0,
16,0,0,0,4,0,
0,0,2,0,0,0,
120,1,0,0,0,0,
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
50,1,0,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
114,1,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
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
69,88,56,6,0,0,
80,0,0,0,142,1,
0,0,106,8,0,1,
53,24,0,0,34,0,
0,0,51,51,179,62,
0,0,0,0,0,0,
0,0,0,0,0,0,
166,155,4,63,0,0,
0,0,0,0,0,0,
0,0,0,0,162,69,
118,63,0,0,0,0,
0,0,0,0,0,0,
0,0,102,102,198,63,
0,0,0,0,0,0,
0,0,0,0,0,0,
49,8,140,63,0,0,
0,0,0,0,0,0,
0,0,0,0,156,196,
192,63,0,0,0,0,
0,0,0,0,0,0,
0,0,209,34,251,63,
0,0,0,0,0,0,
0,0,0,0,0,0,
209,34,251,63,0,0,
0,0,0,0,0,0,
0,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,2,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,3,0,
0,0,105,0,0,4,
0,0,0,0,2,0,
0,0,4,0,0,0,
105,0,0,4,1,0,
0,0,4,0,0,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,15,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
0,0,112,65,0,0,
64,64,0,0,224,64,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
65,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,27,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,1,64,0,0,
4,0,0,0,30,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,79,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,13,0,0,0,
140,0,0,11,18,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,1,64,0,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,30,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
54,0,0,7,18,48,
32,0,0,0,0,0,
0,0,0,0,10,144,
144,0,58,0,16,0,
0,0,0,0,54,0,
0,7,18,48,32,0,
0,0,0,0,1,0,
0,0,10,144,144,0,
26,0,16,0,0,0,
0,0,15,0,0,8,
34,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,65,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
26,16,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,0,0,
0,0,65,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,28,0,
0,5,162,0,16,0,
0,0,0,0,86,13,
16,0,0,0,0,0,
41,0,0,10,162,0,
16,0,0,0,0,0,
86,13,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
2,0,0,0,41,0,
0,8,18,0,16,0,
1,0,0,0,10,128,
32,0,1,0,0,0,
1,0,0,0,1,64,
0,0,2,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
1,0,0,0,32,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,1,0,
0,0,54,0,0,5,
34,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,48,0,
0,1,80,0,0,7,
66,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,4,0,0,0,
3,0,4,3,42,0,
16,0,1,0,0,0,
30,0,0,7,66,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,30,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,30,0,0,7,
66,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
78,0,0,8,0,208,
0,0,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,12,0,
0,0,30,0,0,7,
130,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
30,0,0,10,194,0,
16,0,1,0,0,0,
166,14,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,20,0,0,0,
8,0,0,0,78,0,
0,11,0,208,0,0,
194,0,16,0,1,0,
0,0,166,14,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,12,0,
0,0,12,0,0,0,
79,0,0,10,194,0,
16,0,1,0,0,0,
166,14,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,6,0,0,0,
6,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,54,0,0,7,
130,0,16,0,1,0,
0,0,10,48,32,4,
0,0,0,0,58,0,
16,0,1,0,0,0,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,219,249,
62,63,55,0,0,9,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,1,0,
0,0,54,0,0,7,
18,48,32,4,1,0,
0,0,26,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
30,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
1,0,0,0,22,0,
0,1,54,0,0,6,
18,0,16,0,0,0,
0,0,10,48,32,0,
1,0,0,0,0,0,
0,0,54,0,0,6,
34,0,16,0,0,0,
0,0,10,48,32,0,
1,0,0,0,1,0,
0,0,54,0,0,6,
66,0,16,0,0,0,
0,0,10,48,32,0,
1,0,0,0,2,0,
0,0,54,0,0,6,
130,0,16,0,0,0,
0,0,10,48,32,0,
1,0,0,0,3,0,
0,0,0,0,0,10,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,230,174,133,190,
230,174,133,190,230,174,
133,190,230,174,133,190,
56,0,0,10,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
49,130,22,63,49,130,
22,63,49,130,22,63,
49,130,22,63,62,0,
0,1,83,84,65,84,
148,0,0,0,47,0,
0,0,3,0,0,0,
8,0,0,0,2,0,
0,0,9,0,0,0,
11,0,0,0,8,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,6,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
2,0,0,0,5,0,
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
class Nes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDef : public ShaderDef
{
public:
	Nes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDef() : ShaderDef{}
	{
		Name = "composite-encode";
		VertexByteCode = RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 16, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
