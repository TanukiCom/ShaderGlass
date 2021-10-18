/*
ShaderGlass shader cel-shaders-MMJ_Cel\MMJ_Cel_Shader imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/cel/shaders/MMJ_Cel/MMJ_Cel_Shader.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


MMJ's Cel Shader - v1.03
----------------------------------------------------------------
-- 180403 --
This is a port of my old shader from around 2006 for Pete's OGL2
plugin for ePSXe. It started out as a shader based on the
CComic" shader by Maruke. I liked his concept, but I was
looking for something a little different in the output.

Since the last release, I've seen some test screenshots from MAME
using a port of my original shader and have also seen another
port to get it working with the PCSX2 emulator. Having recently
seen some Kingdom Hearts II and Soul Calibur 3 YouTube videos with
my ported shader inspired me to revisit it and get it working in
RetroArch.

As for this version (1.03), I've made a few small modifications
(such as to remove the OGL2Param references, which were specific
to Pete's plugin) and I added some RetroArch Parameter support,
so some values can now be changed in real time.

Keep in mind, that this was originally developed for PS1, using
various 3D games as a test. In general, it will look better in
games with less detailed textures, as "busy" textures will lead
to more outlining / messy appearance. Increasing "Outline
Brightness" can help mitigate this some by lessening the
strength" of the outlines.

Also (in regards to PS1 - I haven't really tested other systems
too much yet), 1x internal resolution will look terrible. 2x
will also probably be fairly blurry/messy-looking. For best
results, you should probably stick to 4x or higher internal
resolution with this shader.

Parameters:
-----------
White Level Cutoff = Anything above this luminance value will be
forced to pure white.

Black Level Cutoff = Anything below this luminance value will be
forced to pure black.

Shading Levels = Determines how many color "slices" there should
be (not counting black/white cutoffs, which are always
applied).

Saturation Modifier = Increase or decrease color saturation.
Default value boosts saturation a little for a more
cartoonish look. Set to 0.00 for grayscale.

Outline Brightness = Adjusts darkness of the outlines. At a
setting of 1, outlines should be disabled.

Shader Strength = Adjusts the weight of the color banding
portion of the shader from 0% (0.00) to 100% (1.00). At a
setting of 0.00, you can turn off the color banding effect
altogether, but still keep outlines enabled.
-----------
MMJuno

// gray, no chroma
// chromatic data
// brightness modifier

*/

#pragma once

namespace RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,180,21,
228,56,88,10,135,168,
240,240,129,208,37,85,
169,46,1,0,0,0,
76,8,0,0,5,0,
0,0,52,0,0,0,
68,4,0,0,144,4,
0,0,72,5,0,0,
176,7,0,0,82,68,
69,70,8,4,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
221,3,0,0,82,68,
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
0,0,10,0,0,0,
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
235,0,0,0,168,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,196,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,232,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
196,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
252,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,196,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,14,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,40,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,76,3,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
100,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
136,3,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,100,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,153,3,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,100,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,170,3,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
100,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
187,3,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,100,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,204,3,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,100,3,0,0,
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
0,0,186,2,0,0,
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
32,3,0,0,112,97,
114,97,109,115,95,87,
104,116,67,117,116,111,
102,102,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
93,3,0,0,112,97,
114,97,109,115,95,66,
108,107,67,117,116,111,
102,102,0,112,97,114,
97,109,115,95,83,104,
100,76,101,118,101,108,
115,0,112,97,114,97,
109,115,95,83,97,116,
77,111,100,105,102,121,
0,112,97,114,97,109,
115,95,79,116,108,77,
111,100,105,102,121,0,
112,97,114,97,109,115,
95,83,104,100,87,101,
105,103,104,116,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,171,171,
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
71,78,176,0,0,0,
6,0,0,0,8,0,
0,0,152,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,152,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,152,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,152,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,152,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,0,
0,0,161,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
5,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
96,2,0,0,80,0,
1,0,152,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,1,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,1,0,0,0,
101,0,0,3,242,32,
16,0,2,0,0,0,
101,0,0,3,242,32,
16,0,3,0,0,0,
101,0,0,3,242,32,
16,0,4,0,0,0,
103,0,0,4,242,32,
16,0,5,0,0,0,
1,0,0,0,104,0,
0,2,2,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,5,
242,32,16,0,1,0,
0,0,70,20,16,0,
1,0,0,0,54,0,
0,6,66,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,5,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
54,0,0,6,50,0,
16,0,0,0,0,0,
230,10,16,128,65,0,
0,0,0,0,0,0,
0,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,20,16,0,
1,0,0,0,54,0,
0,5,242,32,16,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
54,0,0,5,66,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,6,
130,0,16,0,1,0,
0,0,58,128,32,0,
1,0,0,0,0,0,
0,0,54,0,0,6,
50,0,16,0,1,0,
0,0,230,10,16,128,
65,0,0,0,1,0,
0,0,0,0,0,7,
242,32,16,0,3,0,
0,0,70,14,16,0,
1,0,0,0,70,20,
16,0,1,0,0,0,
50,0,0,12,242,32,
16,0,4,0,0,0,
102,14,16,0,1,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,63,0,0,128,63,
0,0,128,63,70,14,
16,0,0,0,0,0,
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
5,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,17,0,0,0,
2,0,0,0,0,0,
0,0,8,0,0,0,
9,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
7,0,0,0,0,0,
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
68,88,66,67,238,139,
130,227,151,245,144,26,
144,240,191,133,89,128,
161,121,1,0,0,0,
116,31,0,0,5,0,
0,0,52,0,0,0,
252,3,0,0,144,4,
0,0,196,4,0,0,
216,30,0,0,82,68,
69,70,192,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
149,3,0,0,82,68,
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
0,0,10,0,0,0,
208,0,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,96,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,124,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,160,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
124,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
180,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,124,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,198,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,224,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,4,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
28,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
64,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,28,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,81,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,28,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,98,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
28,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
115,3,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,28,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,132,3,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,28,3,0,0,
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
0,0,114,2,0,0,
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
216,2,0,0,112,97,
114,97,109,115,95,87,
104,116,67,117,116,111,
102,102,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
21,3,0,0,112,97,
114,97,109,115,95,66,
108,107,67,117,116,111,
102,102,0,112,97,114,
97,109,115,95,83,104,
100,76,101,118,101,108,
115,0,112,97,114,97,
109,115,95,83,97,116,
77,111,100,105,102,121,
0,112,97,114,97,109,
115,95,79,116,108,77,
111,100,105,102,121,0,
112,97,114,97,109,115,
95,83,104,100,87,101,
105,103,104,116,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,171,171,
73,83,71,78,140,0,
0,0,5,0,0,0,
8,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,128,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,3,0,0,128,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,15,0,0,128,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,15,0,0,128,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,15,0,0,84,69,
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
12,26,0,0,80,0,
0,0,131,6,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,5,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,1,0,0,0,
98,16,0,3,242,16,
16,0,2,0,0,0,
98,16,0,3,242,16,
16,0,3,0,0,0,
98,16,0,3,242,16,
16,0,4,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,13,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,70,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,16,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,102,26,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,16,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
70,16,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,26,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,198,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
230,26,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,230,26,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,9,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,9,0,0,0,
70,2,16,0,6,0,
0,0,70,2,16,0,
9,0,0,0,0,0,
0,7,114,0,16,0,
9,0,0,0,70,2,
16,0,8,0,0,0,
70,2,16,0,9,0,
0,0,0,0,0,7,
114,0,16,0,10,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,7,114,0,
16,0,10,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
10,0,0,0,0,0,
0,7,114,0,16,0,
10,0,0,0,70,2,
16,0,7,0,0,0,
70,2,16,0,10,0,
0,0,56,0,0,10,
114,0,16,0,10,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,0,0,
50,0,0,12,114,0,
16,0,9,0,0,0,
70,2,16,0,9,0,
0,0,2,64,0,0,
154,153,25,62,154,153,
25,62,154,153,25,62,
0,0,0,0,70,2,
16,0,10,0,0,0,
0,0,0,7,114,0,
16,0,9,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
9,0,0,0,56,0,
0,10,114,0,16,0,
10,0,0,0,70,2,
16,0,9,0,0,0,
2,64,0,0,79,236,
196,62,79,236,196,62,
79,236,196,62,0,0,
0,0,50,0,0,15,
114,0,16,0,11,0,
0,0,70,2,16,0,
9,0,0,0,2,64,
0,0,79,236,196,62,
79,236,196,62,79,236,
196,62,0,0,0,0,
2,64,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,10,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
11,0,0,0,70,2,
16,0,11,0,0,0,
246,15,16,0,1,0,
0,0,0,0,0,10,
114,0,16,0,12,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,0,
16,0,0,10,18,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
12,0,0,0,6,0,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,11,0,
0,0,16,0,0,7,
18,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,0,0,
0,10,114,0,16,0,
12,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,0,16,0,0,10,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,12,0,0,0,
86,5,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
11,0,0,0,16,0,
0,7,34,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,10,50,0,
16,0,0,0,0,0,
2,64,0,0,66,96,
229,59,66,96,229,59,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,0,
16,0,0,10,34,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
2,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,11,0,
0,0,16,0,0,7,
34,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,34,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
26,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,0,16,0,
0,10,34,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,86,5,16,0,
0,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,70,2,
16,0,11,0,0,0,
16,0,0,7,34,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
34,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,26,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,10,114,0,16,0,
1,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,0,16,0,0,10,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
86,5,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
11,0,0,0,16,0,
0,7,34,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,7,34,0,
16,0,0,0,0,0,
1,64,0,0,66,96,
229,59,26,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,0,
16,0,0,10,34,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
6,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,11,0,
0,0,16,0,0,7,
34,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,34,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
26,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,0,16,0,
0,10,34,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,7,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,86,5,16,0,
0,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,70,2,
16,0,11,0,0,0,
16,0,0,7,34,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
34,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,26,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,10,114,0,16,0,
1,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,0,16,0,0,10,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
86,5,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
11,0,0,0,16,0,
0,7,34,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,7,34,0,
16,0,0,0,0,0,
1,64,0,0,66,96,
229,59,26,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,62,
47,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,64,63,
25,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,49,0,0,8,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
4,0,0,0,55,0,
0,10,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
26,128,32,0,1,0,
0,0,4,0,0,0,
10,0,16,0,0,0,
0,0,50,0,0,12,
226,0,16,0,0,0,
0,0,6,9,16,0,
9,0,0,0,2,64,
0,0,0,0,0,0,
79,236,196,62,79,236,
196,62,79,236,196,62,
246,15,16,0,0,0,
0,0,51,0,0,7,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,6,9,
16,0,10,0,0,0,
51,0,0,10,226,0,
16,0,0,0,0,0,
86,14,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,56,0,
0,7,114,0,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
150,7,16,0,0,0,
0,0,51,0,0,7,
130,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
51,0,0,7,130,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,52,0,
0,7,18,0,16,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,52,0,0,7,
18,0,16,0,2,0,
0,0,42,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
0,0,0,8,34,0,
16,0,2,0,0,0,
58,0,16,128,65,0,
0,0,1,0,0,0,
10,0,16,0,2,0,
0,0,0,0,0,7,
66,0,16,0,2,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
56,0,0,7,130,0,
16,0,2,0,0,0,
42,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,63,24,0,
0,7,18,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,31,0,4,3,
10,0,16,0,3,0,
0,0,54,0,0,8,
50,0,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,18,0,
0,1,49,0,0,7,
66,0,16,0,3,0,
0,0,42,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
14,0,0,7,130,0,
16,0,3,0,0,0,
26,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,0,0,
0,9,130,0,16,0,
1,0,0,0,58,0,
16,128,65,0,0,0,
1,0,0,0,10,0,
16,128,65,0,0,0,
2,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,64,14,0,0,7,
130,0,16,0,1,0,
0,0,26,0,16,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
55,0,0,9,18,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,0,1,0,0,0,
50,0,0,10,226,0,
16,0,0,0,0,0,
166,7,16,128,65,0,
0,0,0,0,0,0,
6,0,16,0,0,0,
0,0,6,0,16,0,
2,0,0,0,56,0,
0,7,130,0,16,0,
1,0,0,0,26,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,63,50,0,0,12,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
104,179,42,62,104,179,
42,62,104,179,42,62,
246,15,16,0,1,0,
0,0,14,0,0,7,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,86,5,
16,0,2,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
26,0,16,128,65,0,
0,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,10,
194,0,16,0,3,0,
0,0,246,7,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,76,166,
170,62,218,172,42,63,
29,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,6,0,16,0,
2,0,0,0,0,0,
0,8,98,0,16,0,
0,0,0,0,166,11,
16,128,65,0,0,0,
0,0,0,0,166,11,
16,0,3,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,49,0,
0,7,66,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,49,0,0,7,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,26,0,
16,0,0,0,0,0,
0,0,0,10,50,0,
16,0,1,0,0,0,
86,5,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,191,0,0,0,0,
0,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,55,0,
0,9,34,0,16,0,
3,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,21,0,
0,1,14,0,0,11,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,128,
32,0,1,0,0,0,
3,0,0,0,14,0,
0,7,66,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,65,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,10,66,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,49,0,0,8,
50,0,16,0,1,0,
0,0,150,133,32,0,
1,0,0,0,3,0,
0,0,246,15,16,0,
2,0,0,0,56,0,
0,8,18,0,16,0,
2,0,0,0,10,0,
16,0,3,0,0,0,
10,128,32,0,1,0,
0,0,4,0,0,0,
50,0,0,10,34,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,26,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
0,0,0,0,50,0,
0,9,34,0,16,0,
2,0,0,0,42,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,63,26,0,16,0,
0,0,0,0,1,0,
0,7,98,0,16,0,
0,0,0,0,86,5,
16,0,1,0,0,0,
6,1,16,0,2,0,
0,0,55,0,0,12,
98,0,16,0,0,0,
0,0,6,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,0,0,0,0,
86,6,16,0,0,0,
0,0,24,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
31,0,4,3,58,0,
16,0,0,0,0,0,
54,0,0,5,114,0,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,18,0,0,1,
49,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,7,130,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,56,0,0,7,
130,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,10,34,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,10,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
26,0,16,128,65,0,
0,0,0,0,0,0,
0,0,0,10,242,0,
16,0,2,0,0,0,
86,5,16,0,3,0,
0,0,2,64,0,0,
76,166,170,62,147,169,
170,63,218,172,42,191,
0,0,128,63,49,0,
0,7,130,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,49,0,0,7,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,10,0,
16,0,2,0,0,0,
55,0,0,9,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
55,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,0,0,0,0,
26,0,16,0,0,0,
0,0,56,0,0,7,
18,0,16,0,2,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,192,64,
50,0,0,9,34,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
49,0,0,10,210,0,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
171,170,42,62,0,0,
0,0,0,0,0,63,
171,170,42,63,0,0,
0,8,130,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,218,172,42,63,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
192,64,42,0,16,0,
0,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,42,0,
16,0,3,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,10,0,
16,0,3,0,0,0,
26,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,0,49,0,0,7,
34,0,16,0,2,0,
0,0,1,64,0,0,
0,0,128,63,26,0,
16,0,3,0,0,0,
0,0,0,10,242,0,
16,0,5,0,0,0,
86,5,16,0,3,0,
0,0,2,64,0,0,
0,0,128,191,76,166,
170,190,218,172,42,63,
147,169,170,191,55,0,
0,9,34,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,5,0,
0,0,26,0,16,0,
3,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,50,0,
0,9,34,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,49,0,
0,10,114,0,16,0,
3,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,171,170,
42,62,0,0,0,63,
171,170,42,63,0,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
218,172,42,63,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,192,64,
42,0,16,0,0,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,26,0,16,0,
3,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,55,0,0,9,
34,0,16,0,1,0,
0,0,10,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,49,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
5,0,0,0,1,64,
0,0,0,0,0,0,
49,0,0,7,34,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
128,63,26,0,16,0,
5,0,0,0,55,0,
0,9,34,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,5,0,
0,0,26,0,16,0,
5,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,5,0,
0,0,26,0,16,0,
2,0,0,0,50,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,49,0,
0,10,226,0,16,0,
2,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,171,170,42,62,
0,0,0,63,171,170,
42,63,0,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
218,172,42,63,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,192,64,
42,0,16,0,0,0,
0,0,55,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,55,0,0,9,
66,0,16,0,1,0,
0,0,26,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,21,0,0,1,
56,0,0,7,114,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,70,2,16,0,
4,0,0,0,50,0,
0,13,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,154,153,
153,63,154,153,153,63,
154,153,153,63,0,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,50,0,0,10,
114,32,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,4,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,204,0,0,0,
13,0,0,0,0,0,
0,0,5,0,0,0,
160,0,0,0,0,0,
0,0,2,0,0,0,
3,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,9,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,23,0,
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
class CelShadersMMJ_CelMMJ_Cel_ShaderShaderDef : public ShaderDef
{
public:
	CelShadersMMJ_CelMMJ_Cel_ShaderShaderDef() : ShaderDef{}
	{
		Name = "MMJ_Cel_Shader";
		VertexByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("WhtCutoff", -1, 52, 4, 0.500000f, 1.000000f, 0.970000f));
		Params.push_back(ShaderParam("BlkCutoff", -1, 56, 4, 0.000000f, 0.500000f, 0.030000f));
		Params.push_back(ShaderParam("ShdLevels", -1, 60, 4, 1.000000f, 16.000000f, 9.000000f));
		Params.push_back(ShaderParam("SatModify", -1, 64, 4, 0.000000f, 2.000000f, 1.150000f));
		Params.push_back(ShaderParam("OtlModify", -1, 68, 4, 0.000000f, 1.000000f, 0.200000f));
		Params.push_back(ShaderParam("ShdWeight", -1, 72, 4, 0.000000f, 1.000000f, 0.500000f));
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
