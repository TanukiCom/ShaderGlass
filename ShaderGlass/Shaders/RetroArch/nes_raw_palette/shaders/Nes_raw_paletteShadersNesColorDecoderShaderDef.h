/*
ShaderGlass shader nes_raw_palette-shaders\nes-color-decoder imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/nes_raw_palette/shaders/nes-color-decoder.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


NES NTSC Color Decoder shader
Ported from Bisqwit's C++ NES Palette Generator
https://forums.nesdev.com/viewtopic.php?p=85060#p85060

Hue Preserve Clip functions ported from Drag's Palette Generator
http://drag.wootest.net/misc/palgen.html

Use with Nestopia or FCEUmm libretro cores with the palette set to 'raw'.

comment the define out to use the "common" conversion matrix instead of the FCC sanctioned one
 Color 0xE and 0xF are black
 Voltage levels, relative to synch voltage
 Calculate the luma and chroma by emulating the relevant circuits:
 NES NTSC modulator (square wave between two voltage levels):
 De-emphasis bits attenuate a part of the signal:
 Normalize:
 Ideal TV NTSC demodulator:
 Apply contrast/brightness
 Sony CXA2025AS US conversion matrix
 FCC sanctioned conversion matrix
 commonly used conversion matrix
 Convert YIQ into RGB according to selected conversion matrix
 Apply desired clipping method to out-of-gamut colors.
If a channel is out of range (> 1.0), it's simply clamped to 1.0. This may change hue, saturation, and/or lightness.
If any channels are out of range, the color is darkened until it is completely in range.
If any channels are out of range, the color is desaturated towards the luminance it would've had.
 Extract the chroma, level, and emphasis from the normalized RGB triplet

*/

#pragma once

namespace RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,29,148,
77,60,16,150,158,22,
233,205,70,203,43,204,
133,6,1,0,0,0,
208,4,0,0,5,0,
0,0,52,0,0,0,
128,2,0,0,204,2,
0,0,36,3,0,0,
52,4,0,0,82,68,
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
16,0,0,0,0,0,
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
0,0,0,0,148,1,
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
68,88,66,67,87,184,
122,127,21,141,231,228,
119,72,11,227,68,244,
139,165,1,0,0,0,
96,17,0,0,5,0,
0,0,52,0,0,0,
4,3,0,0,56,3,
0,0,108,3,0,0,
196,16,0,0,82,68,
69,70,200,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
160,2,0,0,82,68,
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
0,0,7,0,0,0,
208,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,232,1,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,40,2,0,0,
4,0,0,0,4,0,
0,0,2,0,0,0,
4,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
55,2,0,0,8,0,
0,0,4,0,0,0,
2,0,0,0,4,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,75,2,
0,0,12,0,0,0,
4,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,97,2,0,0,
16,0,0,0,4,0,
0,0,2,0,0,0,
4,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
114,2,0,0,20,0,
0,0,4,0,0,0,
2,0,0,0,4,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,137,2,
0,0,24,0,0,0,
4,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,110,101,115,
95,115,97,116,117,114,
97,116,105,111,110,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,254,1,0,0,
112,97,114,97,109,115,
95,110,101,115,95,104,
117,101,0,112,97,114,
97,109,115,95,110,101,
115,95,99,111,110,116,
114,97,115,116,0,112,
97,114,97,109,115,95,
110,101,115,95,98,114,
105,103,104,116,110,101,
115,115,0,112,97,114,
97,109,115,95,110,101,
115,95,103,97,109,109,
97,0,112,97,114,97,
109,115,95,110,101,115,
95,115,111,110,121,95,
109,97,116,114,105,120,
0,112,97,114,97,109,
115,95,110,101,115,95,
99,108,105,112,95,109,
101,116,104,111,100,0,
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
83,72,69,88,80,13,
0,0,80,0,0,0,
84,3,0,0,106,8,
0,1,53,24,0,0,
34,0,0,0,51,51,
179,62,0,0,0,0,
0,0,0,0,0,0,
0,0,166,155,4,63,
0,0,0,0,0,0,
0,0,0,0,0,0,
162,69,118,63,0,0,
0,0,0,0,0,0,
0,0,0,0,102,102,
198,63,0,0,0,0,
0,0,0,0,0,0,
0,0,49,8,140,63,
0,0,0,0,0,0,
0,0,0,0,0,0,
156,196,192,63,0,0,
0,0,0,0,0,0,
0,0,0,0,209,34,
251,63,0,0,0,0,
0,0,0,0,0,0,
0,0,209,34,251,63,
0,0,0,0,0,0,
0,0,0,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
6,0,0,0,69,0,
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
0,0,0,0,34,0,
0,10,50,0,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,14,0,
0,0,13,0,0,0,
0,0,0,0,0,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,1,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
1,64,0,0,4,0,
0,0,30,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
140,0,0,11,18,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,1,64,0,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,30,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
1,0,0,10,114,0,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,2,64,0,0,
1,0,0,0,2,0,
0,0,4,0,0,0,
0,0,0,0,56,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,171,170,170,61,
58,128,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,8,
114,0,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,48,0,
0,1,33,0,0,7,
130,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,1,64,
0,0,12,0,0,0,
3,0,4,3,58,0,
16,0,2,0,0,0,
30,0,0,7,130,0,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,30,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,8,0,
0,0,1,0,0,7,
18,0,16,0,3,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,128,
36,0,0,8,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,128,
65,0,0,0,2,0,
0,0,78,0,0,8,
0,208,0,0,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
12,0,0,0,40,0,
0,5,34,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
55,0,0,9,130,0,
16,0,2,0,0,0,
10,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
34,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
6,0,0,0,55,0,
0,11,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
10,144,144,0,26,0,
16,0,0,0,0,0,
10,144,144,0,58,0,
16,0,0,0,0,0,
30,0,0,10,114,0,
16,0,3,0,0,0,
166,10,16,0,2,0,
0,0,2,64,0,0,
20,0,0,0,12,0,
0,0,1,0,0,0,
0,0,0,0,78,0,
0,11,0,208,0,0,
50,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,2,64,
0,0,12,0,0,0,
12,0,0,0,0,0,
0,0,0,0,0,0,
34,0,0,10,50,0,
16,0,3,0,0,0,
70,0,16,0,3,0,
0,0,2,64,0,0,
6,0,0,0,6,0,
0,0,0,0,0,0,
0,0,0,0,55,0,
0,12,50,0,16,0,
3,0,0,0,70,0,
16,0,1,0,0,0,
70,0,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,60,0,
0,7,18,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
10,0,16,0,3,0,
0,0,30,0,0,7,
34,0,16,0,3,0,
0,0,42,0,16,0,
2,0,0,0,1,64,
0,0,16,0,0,0,
78,0,0,8,0,208,
0,0,34,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
1,64,0,0,12,0,
0,0,34,0,0,7,
34,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,1,64,
0,0,6,0,0,0,
55,0,0,9,34,0,
16,0,3,0,0,0,
42,0,16,0,1,0,
0,0,26,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,0,
60,0,0,7,18,0,
16,0,3,0,0,0,
26,0,16,0,3,0,
0,0,10,0,16,0,
3,0,0,0,56,0,
0,7,34,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,219,249,
62,63,55,0,0,9,
130,0,16,0,2,0,
0,0,10,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
58,0,16,0,2,0,
0,0,0,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,166,155,4,191,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
11,73,49,63,1,64,
0,0,0,0,0,191,
50,0,0,10,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,42,128,32,0,
1,0,0,0,0,0,
0,0,1,64,0,0,
0,0,0,63,56,0,
0,7,18,0,16,0,
3,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,43,0,0,5,
130,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,50,0,
0,10,130,0,16,0,
2,0,0,0,26,128,
32,0,1,0,0,0,
0,0,0,0,1,64,
0,0,137,136,8,61,
58,0,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,146,10,6,63,
77,0,0,7,18,0,
16,0,4,0,0,0,
18,0,16,0,5,0,
0,0,58,0,16,0,
2,0,0,0,50,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,5,0,
0,0,10,0,16,0,
2,0,0,0,50,0,
0,9,34,0,16,0,
2,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,26,0,16,0,
2,0,0,0,54,0,
0,5,66,0,16,0,
2,0,0,0,42,0,
16,0,3,0,0,0,
22,0,0,1,56,0,
0,8,50,0,16,0,
0,0,0,0,70,0,
16,0,2,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
29,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,26,128,32,0,
1,0,0,0,1,0,
0,0,55,0,0,15,
242,0,16,0,2,0,
0,0,166,10,16,0,
0,0,0,0,2,64,
0,0,220,102,114,63,
110,161,31,63,3,177,
140,190,165,188,34,191,
2,64,0,0,215,163,
208,63,211,77,162,62,
55,137,193,190,141,151,
238,190,55,0,0,15,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,205,228,
141,191,190,192,218,63,
2,64,0,0,0,0,
0,0,0,0,0,0,
90,100,139,191,240,167,
214,63,50,0,0,9,
50,0,16,0,1,0,
0,0,134,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,50,0,0,9,
50,0,16,0,1,0,
0,0,214,5,16,0,
2,0,0,0,86,5,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,49,0,0,10,
50,0,16,0,2,0,
0,0,70,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
14,0,0,8,66,0,
16,0,1,0,0,0,
1,64,0,0,205,204,
12,64,10,128,32,0,
1,0,0,0,1,0,
0,0,47,0,0,5,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,56,0,
0,7,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
166,10,16,0,1,0,
0,0,25,0,0,5,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,55,0,
0,12,50,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,0,16,0,
1,0,0,0,50,0,
0,9,18,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,18,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,49,0,
0,7,34,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,47,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,25,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,55,0,
0,9,66,0,16,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,10,0,16,0,
0,0,0,0,49,0,
0,8,18,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
31,0,4,3,10,0,
16,0,0,0,0,0,
51,0,0,10,114,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,18,0,
0,1,24,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,42,128,
32,0,1,0,0,0,
1,0,0,0,31,0,
4,3,58,0,16,0,
0,0,0,0,49,0,
0,10,114,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,2,0,
0,0,60,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
60,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,49,0,0,7,
34,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
55,0,0,9,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
14,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,10,0,16,0,
1,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,56,32,
0,7,114,0,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,18,0,0,1,
49,0,0,10,114,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
2,0,0,0,60,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,60,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
49,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,2,0,
0,0,10,0,16,0,
2,0,0,0,49,0,
0,7,34,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
10,0,16,0,1,0,
0,0,14,0,0,10,
18,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,10,0,
16,0,1,0,0,0,
55,0,0,9,18,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,10,226,0,
16,0,1,0,0,0,
6,9,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,191,0,0,128,191,
0,0,128,191,50,0,
0,12,114,0,16,0,
1,0,0,0,150,7,
16,0,1,0,0,0,
6,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,55,32,
0,9,114,0,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,21,0,
0,1,21,0,0,1,
54,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,104,0,
0,0,6,0,0,0,
8,0,0,0,2,0,
0,0,42,0,0,0,
13,0,0,0,11,0,
0,0,3,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
18,0,0,0,3,0,
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
class Nes_raw_paletteShadersNesColorDecoderShaderDef : public ShaderDef
{
public:
	Nes_raw_paletteShadersNesColorDecoderShaderDef() : ShaderDef{}
	{
		Name = "nes-color-decoder";
		VertexByteCode = RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("nes_saturation", -1, 0, 4, 0.000000f, 5.000000f, 1.000000f));
		Params.push_back(ShaderParam("nes_hue", -1, 4, 4, -360.000000f, 360.000000f, 0.000000f));
		Params.push_back(ShaderParam("nes_contrast", -1, 8, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("nes_brightness", -1, 12, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("nes_gamma", -1, 16, 4, 1.000000f, 2.500000f, 1.800000f));
		Params.push_back(ShaderParam("nes_sony_matrix", -1, 20, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("nes_clip_method", -1, 24, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f));
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
