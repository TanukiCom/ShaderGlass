/*
ShaderGlass shader handheld-shaders\lcd1x_psp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/shaders/lcd1x_psp.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


lcd1x_psp shader

A slightly tweaked version of lcd3x:

- Original lcd3x code written by Gigaherz and released into the public domain

- Original 'psp_color' code written by hunterk, modified by Pokefan531 and
released into the public domain

Notes:

> Omits LCD 'colour seperation' effect

> Has 'properly' aligned scanlines

> Includes PSP colour correction

> Supports any PSP internal resolution setting

Edited by jdgleaver

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your option)
any later version.


VERTEX_SHADER

// Magic Numbers

FRAGMENT SHADER

// Generate LCD grid effect
// > Note the 0.25 pixel offset -> required to ensure that
//   scanlines occur *between* pixels
// > Divide pixel coordinate by current scale factor
//   (input_video_height / psp_screen_height)
// Get colour sample
// Apply colour correction
// Apply LCD grid effect

*/

#pragma once

namespace RetroArchHandheldShadersLcd1x_pspShaderDefs
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
68,88,66,67,176,100,
25,204,174,224,108,162,
3,70,197,23,92,146,
93,204,1,0,0,0,
52,7,0,0,5,0,
0,0,52,0,0,0,
200,2,0,0,252,2,
0,0,48,3,0,0,
152,6,0,0,82,68,
69,70,140,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
100,2,0,0,82,68,
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
0,0,5,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,152,1,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,188,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,224,1,0,0,
4,0,0,0,4,0,
0,0,2,0,0,0,
188,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
247,1,0,0,16,0,
0,0,16,0,0,0,
0,0,0,0,20,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,56,2,
0,0,32,0,0,0,
16,0,0,0,0,0,
0,0,20,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,79,2,0,0,
48,0,0,0,16,0,
0,0,2,0,0,0,
20,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
114,101,103,105,115,116,
101,114,115,95,66,82,
73,71,72,84,69,78,
95,83,67,65,78,76,
73,78,69,83,0,102,
108,111,97,116,0,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,181,1,0,0,
114,101,103,105,115,116,
101,114,115,95,66,82,
73,71,72,84,69,78,
95,76,67,68,0,114,
101,103,105,115,116,101,
114,115,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
12,2,0,0,114,101,
103,105,115,116,101,114,
115,95,79,114,105,103,
105,110,97,108,83,105,
122,101,0,114,101,103,
105,115,116,101,114,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
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
83,72,69,88,96,3,
0,0,80,0,0,0,
216,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,3,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
70,20,16,0,0,0,
0,0,70,132,32,0,
1,0,0,0,3,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,246,142,
32,0,1,0,0,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
230,10,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,15,50,0,
16,0,0,0,0,0,
22,5,16,0,0,0,
0,0,2,64,0,0,
0,0,136,67,0,0,
136,67,0,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,190,
0,0,128,190,0,0,
0,0,0,0,0,0,
56,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
219,15,201,64,219,15,
201,64,0,0,0,0,
0,0,0,0,77,0,
0,6,50,0,16,0,
0,0,0,0,0,208,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,8,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,0,0,0,0,
47,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,164,112,13,64,
164,112,13,64,164,112,
13,64,0,0,0,0,
25,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,72,225,122,63,
205,204,76,62,236,81,
56,190,0,0,0,0,
47,0,0,5,18,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,10,215,35,61,
31,133,75,63,195,245,
40,62,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
10,215,35,60,10,215,
35,60,72,225,122,63,
0,0,0,0,47,0,
0,5,66,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
47,0,0,5,34,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,47,186,232,62,
47,186,232,62,47,186,
232,62,0,0,0,0,
25,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,51,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,11,194,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,6,132,32,0,
1,0,0,0,0,0,
0,0,14,0,0,7,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,7,114,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,25,0,
0,0,3,0,0,0,
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
class HandheldShadersLcd1x_pspShaderDef : public ShaderDef
{
public:
	HandheldShadersLcd1x_pspShaderDef() : ShaderDef{}
	{
		Name = "lcd1x_psp";
		VertexByteCode = RetroArchHandheldShadersLcd1x_pspShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHandheldShadersLcd1x_pspShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHandheldShadersLcd1x_pspShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHandheldShadersLcd1x_pspShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("BRIGHTEN_SCANLINES", -1, 0, 4, 1.000000f, 32.000000f, 16.000000f));
		Params.push_back(ShaderParam("BRIGHTEN_LCD", -1, 4, 4, 1.000000f, 12.000000f, 4.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 48, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
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
