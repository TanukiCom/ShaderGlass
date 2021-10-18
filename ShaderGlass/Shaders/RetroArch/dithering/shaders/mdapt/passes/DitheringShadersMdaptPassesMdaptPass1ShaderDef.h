/*
ShaderGlass shader dithering-shaders-mdapt-passes\mdapt-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/dithering/shaders/mdapt/passes/mdapt-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Merge Dithering and Pseudo Transparency Shader v2.8 - Pass 1
by Sp00kyFox, 2014

Preparing checkerboard patterns.



UL U UR
L  C R
DL D DR

 Checkerboard Pattern Completion

*/

#pragma once

namespace RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs
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
68,88,66,67,203,245,
124,209,197,62,103,88,
46,87,255,147,238,81,
12,46,1,0,0,0,
64,8,0,0,5,0,
0,0,52,0,0,0,
120,2,0,0,172,2,
0,0,224,2,0,0,
164,7,0,0,82,68,
69,70,60,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
20,2,0,0,82,68,
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
0,0,4,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,112,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,140,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
140,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,1,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,140,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,214,1,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,240,1,0,0,
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
0,0,130,1,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
232,1,0,0,77,105,
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
69,88,188,4,0,0,
80,0,0,0,47,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
3,0,0,0,0,0,
0,9,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
230,138,32,128,65,0,
0,0,1,0,0,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,18,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,38,125,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,13,242,0,
16,0,1,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,128,191,0,0,
128,63,70,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,34,0,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,134,125,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
66,0,16,0,0,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
51,0,0,7,18,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,8,50,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
18,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,38,125,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
52,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,52,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,51,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
22,5,16,0,1,0,
0,0,52,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
50,0,0,13,242,0,
16,0,2,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
0,0,70,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,98,0,
16,0,0,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
162,0,16,0,1,0,
0,0,230,10,16,0,
2,0,0,0,70,123,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,52,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
50,0,0,13,242,0,
16,0,2,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,0,0,0,0,
128,191,70,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,50,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,134,125,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
194,0,16,0,2,0,
0,0,230,10,16,0,
2,0,0,0,214,120,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
52,0,0,7,130,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,51,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,52,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
51,0,0,7,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,51,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,52,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
52,0,0,7,34,32,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,54,0,
0,5,18,32,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
54,0,0,8,194,32,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,33,0,0,0,
3,0,0,0,0,0,
0,0,2,0,0,0,
21,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,9,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
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

}

namespace RetroArch
{
class DitheringShadersMdaptPassesMdaptPass1ShaderDef : public ShaderDef
{
public:
	DitheringShadersMdaptPassesMdaptPass1ShaderDef() : ShaderDef{}
	{
		Name = "mdapt-pass1";
		VertexByteCode = RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
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
