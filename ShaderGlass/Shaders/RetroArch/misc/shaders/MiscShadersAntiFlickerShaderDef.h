/*
ShaderGlass shader misc-shaders\anti-flicker imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/misc/shaders/anti-flicker.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Anti-Flicker shader
by hunterk
License: public domain

This shader detects large variations in luminance from frame to frame
and then blends frames to smooth the transition. In flicker-based
shadow effects, this should result in true transparency.

// sample the textures
// get luma for comparison
// Test whether the luma difference between the pixel in the current frame and that of
// the previous frame exceeds the threshold while the difference between the current frame
// and 2 frames previous is below the threshold.
// Repeat the process for the previous frame's pixel to reduce false-positives
// Average the current frame with the previous frame in linear color space to avoid over-darkening
// delinearize the averaged result

*/

#pragma once

namespace RetroArchMiscShadersAntiFlickerShaderDefs
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
68,88,66,67,208,84,
1,74,77,239,11,57,
0,83,26,190,229,159,
145,254,1,0,0,0,
196,9,0,0,5,0,
0,0,52,0,0,0,
28,4,0,0,80,4,
0,0,132,4,0,0,
40,9,0,0,82,68,
69,70,224,3,0,0,
1,0,0,0,252,1,
0,0,9,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
184,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,1,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,108,1,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,134,1,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
4,0,0,0,1,0,
0,0,1,0,0,0,
160,1,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
1,0,0,0,1,0,
0,0,186,1,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,193,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
3,0,0,0,1,0,
0,0,13,0,0,0,
210,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,4,0,0,0,
1,0,0,0,13,0,
0,0,227,1,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,5,0,
0,0,1,0,0,0,
13,0,0,0,244,1,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,95,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,49,95,115,97,
109,112,108,101,114,0,
95,79,114,105,103,105,
110,97,108,72,105,115,
116,111,114,121,50,95,
115,97,109,112,108,101,
114,0,95,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
51,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,49,0,79,114,
105,103,105,110,97,108,
72,105,115,116,111,114,
121,50,0,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
51,0,80,117,115,104,
0,171,171,171,244,1,
0,0,5,0,0,0,
20,2,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,220,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,248,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,28,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
248,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
48,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,248,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,66,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,92,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,128,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
148,3,0,0,0,0,
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
238,2,0,0,112,97,
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
0,0,0,0,84,3,
0,0,112,97,114,97,
109,115,95,84,72,82,
69,83,72,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
142,3,0,0,77,105,
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
69,88,156,4,0,0,
80,0,0,0,39,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
3,0,0,0,90,0,
0,3,0,96,16,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
5,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,3,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,4,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
5,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
5,0,0,0,0,96,
16,0,5,0,0,0,
16,0,0,10,18,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
154,153,89,62,116,36,
55,63,42,169,147,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
16,0,0,10,34,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
154,153,89,62,116,36,
55,63,42,169,147,61,
0,0,0,0,47,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
205,204,12,64,25,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
0,0,0,8,18,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
26,0,16,0,0,0,
0,0,49,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,128,
129,0,0,0,0,0,
0,0,26,128,32,0,
1,0,0,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,4,0,
0,0,0,96,16,0,
4,0,0,0,16,0,
0,10,66,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,154,153,
89,62,116,36,55,63,
42,169,147,61,0,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,42,0,16,128,
65,0,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,49,0,
0,9,130,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,58,0,
16,128,129,0,0,0,
0,0,0,0,1,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,154,153,
89,62,116,36,55,63,
42,169,147,61,0,0,
0,0,0,0,0,8,
98,0,16,0,0,0,
0,0,86,6,16,128,
65,0,0,0,0,0,
0,0,246,15,16,0,
0,0,0,0,49,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,128,129,0,0,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,49,0,
0,9,34,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,26,0,
16,128,129,0,0,0,
0,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
47,0,0,5,242,0,
16,0,3,0,0,0,
70,14,16,0,2,0,
0,0,56,0,0,10,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,205,204,12,64,
25,0,0,5,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,47,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
47,186,232,62,47,186,
232,62,47,186,232,62,
47,186,232,62,25,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
55,0,0,9,242,32,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
31,0,0,0,4,0,
0,0,0,0,0,0,
2,0,0,0,22,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,4,0,0,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class MiscShadersAntiFlickerShaderDef : public ShaderDef
{
public:
	MiscShadersAntiFlickerShaderDef() : ShaderDef{}
	{
		Name = "anti-flicker";
		VertexByteCode = RetroArchMiscShadersAntiFlickerShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchMiscShadersAntiFlickerShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchMiscShadersAntiFlickerShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchMiscShadersAntiFlickerShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("THRESH", -1, 52, 4, 0.000000f, 1.000000f, 0.250000f, 0.050000f, "Luma Diff Threshold"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("OriginalHistory1", 3));
		Samplers.push_back(ShaderSampler("OriginalHistory2", 4));
		Samplers.push_back(ShaderSampler("OriginalHistory3", 5));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}