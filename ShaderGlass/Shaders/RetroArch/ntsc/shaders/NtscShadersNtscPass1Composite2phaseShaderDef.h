/*
ShaderGlass shader ntsc-shaders\ntsc-pass1-composite-2phase imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/ntsc/shaders/ntsc-pass1-composite-2phase.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

*/

#pragma once

namespace RetroArchNtscShadersNtscPass1Composite2phaseShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,252,163,
158,11,132,238,116,253,
195,162,64,195,244,229,
23,99,1,0,0,0,
84,5,0,0,5,0,
0,0,52,0,0,0,
128,2,0,0,204,2,
0,0,60,3,0,0,
184,4,0,0,82,68,
69,70,68,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
28,2,0,0,82,68,
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
92,0,0,0,5,0,
0,0,120,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
64,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,84,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,120,1,
0,0,64,0,0,0,
16,0,0,0,2,0,
0,0,148,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
148,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
204,1,0,0,96,0,
0,0,16,0,0,0,
2,0,0,0,148,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,222,1,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,248,1,0,0,
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
75,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,138,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,103,108,
111,98,97,108,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,240,1,0,0,
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
104,0,0,0,3,0,
0,0,8,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
80,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,3,0,0,
89,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,116,1,
0,0,80,0,1,0,
93,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,7,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,194,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,70,128,32,0,
0,0,0,0,6,0,
0,0,14,0,0,9,
194,0,16,0,0,0,
0,0,6,132,32,0,
0,0,0,0,4,0,
0,0,6,132,32,0,
0,0,0,0,6,0,
0,0,56,0,0,7,
194,32,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,4,
16,0,0,0,0,0,
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
148,0,0,0,9,0,
0,0,1,0,0,0,
0,0,0,0,5,0,
0,0,7,0,0,0,
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
68,88,66,67,97,104,
95,152,137,233,71,166,
137,188,138,40,164,64,
65,133,1,0,0,0,
204,6,0,0,5,0,
0,0,52,0,0,0,
216,2,0,0,36,3,
0,0,88,3,0,0,
48,6,0,0,82,68,
69,70,156,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
116,2,0,0,82,68,
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
0,0,0,0,1,0,
0,0,1,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,5,0,0,0,
208,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,152,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,172,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,208,1,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
236,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
16,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,236,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,36,2,
0,0,96,0,0,0,
16,0,0,0,0,0,
0,0,236,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,54,2,0,0,
112,0,0,0,4,0,
0,0,2,0,0,0,
80,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,163,1,
0,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,226,1,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
72,2,0,0,77,105,
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
0,0,3,3,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,12,0,0,
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
69,88,208,2,0,0,
80,0,0,0,180,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
8,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,98,16,0,3,
194,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
3,0,0,0,56,0,
0,10,50,0,16,0,
0,0,0,0,182,31,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,80,119,86,63,
0,0,0,0,0,0,
0,0,65,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,50,0,
0,10,18,0,16,0,
0,0,0,0,10,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
58,16,16,0,0,0,
0,0,86,0,0,6,
66,0,16,0,0,0,
0,0,10,128,32,0,
0,0,0,0,7,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
50,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
219,15,73,64,26,0,
16,0,0,0,0,0,
77,0,0,7,18,0,
16,0,0,0,0,0,
18,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,54,0,
0,5,34,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,2,64,
0,0,231,140,24,63,
40,126,140,190,193,168,
164,190,0,0,0,0,
70,2,16,0,1,0,
0,0,16,0,0,10,
66,0,16,0,2,0,
0,0,2,64,0,0,
117,147,88,62,198,220,
5,191,210,111,159,62,
0,0,0,0,70,2,
16,0,1,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,108,9,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,70,2,16,0,
1,0,0,0,56,0,
0,7,98,0,16,0,
1,0,0,0,86,6,
16,0,0,0,0,0,
86,6,16,0,2,0,
0,0,15,0,0,10,
34,0,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,0,0,
0,0,0,0,70,0,
16,0,1,0,0,0,
15,0,0,10,66,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,64,
0,0,0,0,0,0,
0,0,134,0,16,0,
1,0,0,0,16,0,
0,10,18,32,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,7,
98,32,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,86,6,
16,0,2,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,20,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
13,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
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
class NtscShadersNtscPass1Composite2phaseShaderDef : public ShaderDef
{
public:
	NtscShadersNtscPass1Composite2phaseShaderDef() : ShaderDef{}
	{
		Name = "ntsc-pass1-composite-2phase";
		VertexByteCode = RetroArchNtscShadersNtscPass1Composite2phaseShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNtscShadersNtscPass1Composite2phaseShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNtscShadersNtscPass1Composite2phaseShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNtscShadersNtscPass1Composite2phaseShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
