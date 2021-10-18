/*
ShaderGlass shader handheld-shaders-color\nds-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/shaders/color/nds-color.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Shader Modified: Pokefan531
Color Mangler
Author: hunterk
License: Public domain

// Shader that replicates the LCD dynamics from a Nintendo DS Phat --

We'll define our color weights in this pattern:
r,   rg,  rb,  0.0,  //red channel
gr,  g,   gb,  0.0,  //green channel
br,  bg,  b,   0.0,  //blue channel
blr, blg, blb, lum   //alpha channel; we'll hide luma at the end, too

// bring out our stored luminance value
// our adjustments need to happen in linear gamma

*/

#pragma once

namespace RetroArchHandheldShadersColorNdsColorShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,199,123,
37,214,65,119,227,76,
190,195,31,97,8,240,
85,39,1,0,0,0,
40,9,0,0,5,0,
0,0,52,0,0,0,
180,2,0,0,0,3,
0,0,184,3,0,0,
140,8,0,0,82,68,
69,70,120,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
80,2,0,0,82,68,
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
92,0,0,0,6,0,
0,0,120,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
104,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,124,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,160,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,188,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,224,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
188,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
244,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,188,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,6,2,
0,0,112,0,0,0,
4,0,0,0,2,0,
0,0,24,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,60,2,0,0,
116,0,0,0,4,0,
0,0,2,0,0,0,
24,2,0,0,0,0,
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
0,0,0,0,115,1,
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
0,0,178,1,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,109,111,100,
101,0,102,108,111,97,
116,0,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,18,2,
0,0,103,108,111,98,
97,108,95,119,104,105,
116,101,95,116,111,103,
103,108,101,0,77,105,
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
79,83,71,78,176,0,
0,0,6,0,0,0,
8,0,0,0,152,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,152,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,152,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,152,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,0,0,0,152,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,0,0,0,161,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,5,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,204,4,0,0,
80,0,1,0,51,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
8,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
2,0,0,0,101,0,
0,3,242,32,16,0,
3,0,0,0,101,0,
0,3,242,32,16,0,
4,0,0,0,103,0,
0,4,242,32,16,0,
5,0,0,0,1,0,
0,0,104,0,0,2,
4,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
57,0,0,8,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,26,128,32,0,
0,0,0,0,7,0,
0,0,55,0,0,15,
242,0,16,0,1,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,195,245,8,63,
215,163,176,62,10,215,
35,61,0,0,0,0,
2,64,0,0,225,122,
20,63,92,143,194,62,
10,215,35,61,0,0,
0,0,55,0,0,15,
242,0,16,0,2,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,41,92,47,63,
225,122,148,62,143,194,
117,189,0,0,0,0,
2,64,0,0,82,184,
62,63,174,71,161,62,
143,194,117,189,0,0,
0,0,27,0,0,6,
34,0,16,0,0,0,
0,0,10,128,32,0,
0,0,0,0,7,0,
0,0,32,0,0,10,
226,0,16,0,0,0,
0,0,86,5,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,1,0,0,0,
1,0,0,10,242,0,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
215,163,80,63,246,40,
92,62,143,194,245,189,
0,0,0,0,55,0,
0,9,242,0,16,0,
2,0,0,0,166,10,
16,0,0,0,0,0,
70,14,16,0,2,0,
0,0,70,14,16,0,
3,0,0,0,55,0,
0,9,242,32,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,70,14,16,0,
2,0,0,0,55,0,
0,15,242,0,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,143,194,
245,61,143,194,21,63,
246,40,92,62,0,0,
0,0,2,64,0,0,
184,30,5,62,184,30,
37,63,102,102,102,62,
0,0,0,0,55,0,
0,15,242,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,92,143,
194,61,72,225,26,63,
246,40,92,62,0,0,
0,0,2,64,0,0,
205,204,204,61,113,61,
42,63,215,163,112,62,
0,0,0,0,1,0,
0,10,242,0,16,0,
3,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,41,92,
143,61,82,184,30,63,
174,71,97,62,0,0,
0,0,55,0,0,9,
242,0,16,0,2,0,
0,0,166,10,16,0,
0,0,0,0,70,14,
16,0,2,0,0,0,
70,14,16,0,3,0,
0,0,55,0,0,9,
242,32,16,0,2,0,
0,0,86,5,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,55,0,0,15,
242,0,16,0,1,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,236,81,184,61,
92,143,66,62,61,10,
55,63,0,0,0,0,
2,64,0,0,236,81,
184,61,20,174,71,62,
61,10,55,63,0,0,
0,0,55,0,0,15,
242,0,16,0,2,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,0,236,81,120,63,
2,64,0,0,0,0,
0,0,51,51,115,63,
0,0,0,0,10,215,
99,63,1,0,0,10,
242,0,16,0,3,0,
0,0,246,15,16,0,
0,0,0,0,2,64,
0,0,154,153,153,61,
82,184,30,62,184,30,
69,63,0,0,0,0,
55,0,0,9,242,0,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
55,0,0,12,242,32,
16,0,3,0,0,0,
86,5,16,0,0,0,
0,0,2,64,0,0,
236,81,184,61,205,204,
76,62,143,194,53,63,
0,0,0,0,70,14,
16,0,1,0,0,0,
1,0,0,7,242,0,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,166,14,16,0,
2,0,0,0,55,0,
0,9,242,0,16,0,
1,0,0,0,166,10,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,70,14,16,0,
1,0,0,0,55,0,
0,12,242,32,16,0,
4,0,0,0,86,5,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,70,14,16,0,
1,0,0,0,56,0,
0,8,242,0,16,0,
0,0,0,0,86,21,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,1,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
6,16,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,166,26,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,2,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,32,16,0,5,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
27,0,0,0,4,0,
0,0,0,0,0,0,
8,0,0,0,5,0,
0,0,1,0,0,0,
4,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,14,0,0,0,
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
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,117,141,
51,171,104,191,238,148,
168,31,31,54,84,74,
57,245,1,0,0,0,
116,4,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,140,1,
0,0,192,1,0,0,
216,3,0,0,82,68,
69,70,188,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
147,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,140,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,83,111,117,114,
99,101,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
140,0,0,0,5,0,
0,0,8,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
128,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
128,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,15,0,0,
128,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,15,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,15,15,0,0,
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
69,88,16,2,0,0,
80,0,0,0,132,0,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,242,16,16,0,
1,0,0,0,98,16,
0,3,242,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,98,16,
0,3,242,16,16,0,
4,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,56,0,
0,10,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,205,204,
12,64,25,0,0,5,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,56,32,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
246,31,16,0,4,0,
0,0,17,0,0,7,
18,0,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,70,30,
16,0,1,0,0,0,
47,0,0,5,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,17,0,0,7,
18,0,16,0,2,0,
0,0,70,14,16,0,
0,0,0,0,70,30,
16,0,2,0,0,0,
47,0,0,5,34,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,17,0,0,7,
18,0,16,0,2,0,
0,0,70,14,16,0,
0,0,0,0,70,30,
16,0,3,0,0,0,
17,0,0,7,18,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,30,16,0,
4,0,0,0,47,0,
0,5,130,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
47,0,0,5,66,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,56,0,0,10,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,47,186,232,62,
47,186,232,62,47,186,
232,62,47,186,232,62,
25,0,0,5,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,16,0,0,0,
3,0,0,0,0,0,
0,0,6,0,0,0,
14,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};

}

namespace RetroArch
{
class HandheldShadersColorNdsColorShaderDef : public ShaderDef
{
public:
	HandheldShadersColorNdsColorShaderDef() : ShaderDef{}
	{
		Name = "nds-color";
		VertexByteCode = RetroArchHandheldShadersColorNdsColorShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHandheldShadersColorNdsColorShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHandheldShadersColorNdsColorShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHandheldShadersColorNdsColorShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("mode", 0, 112, 4, 1.000000f, 3.000000f, 1.000000f));
		Params.push_back(ShaderParam("white_toggle", 0, 116, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
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
