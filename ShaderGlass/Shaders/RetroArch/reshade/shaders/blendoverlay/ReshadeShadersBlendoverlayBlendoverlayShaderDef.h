/*
ShaderGlass shader reshade-shaders-blendoverlay\blendoverlay imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/reshade/shaders/blendoverlay/blendoverlay.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// blendoverlay
// based on:
// https://github.com/jamieowen/glsl-blend for blendOverlay

*/

#pragma once

namespace RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs
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
68,88,66,67,237,183,
234,128,187,39,85,15,
229,3,120,74,176,104,
124,202,1,0,0,0,
164,7,0,0,5,0,
0,0,52,0,0,0,
172,3,0,0,224,3,
0,0,20,4,0,0,
8,7,0,0,82,68,
69,70,112,3,0,0,
1,0,0,0,20,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
69,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,253,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
4,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,12,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,111,118,101,
114,108,97,121,95,115,
97,109,112,108,101,114,
0,83,111,117,114,99,
101,0,111,118,101,114,
108,97,121,0,80,117,
115,104,0,171,171,171,
12,1,0,0,7,0,
0,0,44,1,0,0,
64,0,0,0,0,0,
0,0,0,0,0,0,
68,2,0,0,0,0,
0,0,16,0,0,0,
0,0,0,0,96,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,132,2,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,96,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,2,0,0,
32,0,0,0,16,0,
0,0,2,0,0,0,
96,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
170,2,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,196,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,232,2,
0,0,52,0,0,0,
4,0,0,0,2,0,
0,0,0,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,36,3,0,0,
56,0,0,0,4,0,
0,0,2,0,0,0,
0,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
52,3,0,0,60,0,
0,0,4,0,0,0,
2,0,0,0,0,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,86,2,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,188,2,0,0,
112,97,114,97,109,115,
95,79,118,101,114,108,
97,121,77,105,120,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,250,2,0,0,
112,97,114,97,109,115,
95,76,85,84,87,105,
100,116,104,0,112,97,
114,97,109,115,95,76,
85,84,72,101,105,103,
104,116,0,77,105,99,
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
83,72,69,88,236,2,
0,0,80,0,0,0,
187,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
3,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,56,0,
0,8,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,2,0,0,0,
14,0,0,8,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,230,138,32,0,
1,0,0,0,3,0,
0,0,26,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,11,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,11,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,13,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,15,0,0,7,
18,0,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,6,0,
16,0,2,0,0,0,
49,0,0,10,114,0,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,55,32,
0,9,18,0,16,0,
4,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,15,0,
0,7,18,0,16,0,
0,0,0,0,86,5,
16,0,0,0,0,0,
86,5,16,0,2,0,
0,0,15,0,0,7,
34,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,166,10,
16,0,2,0,0,0,
55,32,0,9,98,0,
16,0,4,0,0,0,
86,6,16,0,3,0,
0,0,6,1,16,0,
0,0,0,0,86,6,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
70,2,16,0,4,0,
0,0,50,0,0,10,
114,32,16,0,0,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,19,0,0,0,
5,0,0,0,0,0,
0,0,2,0,0,0,
13,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,2,0,
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
0,0,0,0,0,0
};

}

namespace RetroArch
{
class ReshadeShadersBlendoverlayBlendoverlayShaderDef : public ShaderDef
{
public:
	ReshadeShadersBlendoverlayBlendoverlayShaderDef() : ShaderDef{}
	{
		Name = "blendoverlay";
		VertexByteCode = RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("OverlayMix", -1, 52, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Overlay Mix"));
		Params.push_back(ShaderParam("LUTWidth", -1, 56, 4, 1.000000f, 1920.000000f, 6.000000f, 1.000000f, "LUT Width"));
		Params.push_back(ShaderParam("LUTHeight", -1, 60, 4, 1.000000f, 1920.000000f, 4.000000f, 1.000000f, "LUT Height"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("overlay", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
