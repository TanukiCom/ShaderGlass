/*
ShaderGlass shader reshade-shaders\blur-haze-sh1nra358 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/reshade/shaders/blur-haze-sh1nra358.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// Implementation based on the article "Efficient Gaussian blur with linear sampling
// http://rastergrid.com/blog/2010/09/efficient-gaussian-blur-with-linear-sampling/
 A version for MasterEffect Reborn, a standalone version, and a custom shader version for SweetFX can be
found at http://reshade.me/forum/shader-presentation/27-gaussian-blur-bloom-unsharpmask 
-----------------------------------------------------------.
/                  Gaussian Blur settings                     /
'-----------------------------------------------------------
//GaussEffect
//0 = off, 1 = Blur, 2 = Unsharpmask (expensive), 3 = Bloom, 4 = Sketchy, 5 = effects image only.
//GaussStrength
//[0.00 to 1.00]   Amount of effect blended into the final image.
//#define GaussStrength 0.45
//addBloom
//Set to 1 to add bloom to Blur or Unsharpmask. 0 = off. Set GaussEffect to 0 for bloom only.
//Bloom Strength
//[0.00 to 1.00] Amount of addBloom added to the final image.
//#define BloomStrength 0.33
//Bloom Intensity *also affects blur and unsharpmask*
//Makes bright spots brighter. Only works when BrightPass is set to 1.
//#define BloomIntensity 3.00
//GaussBloomWarmth
//0 = neutral, 1 = warm, 2 = hazy/foggy
//SW is Slant. Higher numbers = wider bloom.
//#define SW 2.00
// Blur...
// Sharpening
// Bloom
// Neutral
// Sketchy
// orig = vec4(1.0, 1.0, 1.0, 0.0) - min(blur, orig);      // Negative
//orig = blur2;

*/

#pragma once

namespace RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs
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
68,88,66,67,243,122,
123,49,2,231,73,173,
229,183,140,171,35,215,
59,151,1,0,0,0,
100,10,0,0,5,0,
0,0,52,0,0,0,
228,3,0,0,24,4,
0,0,76,4,0,0,
200,9,0,0,82,68,
69,70,168,3,0,0,
1,0,0,0,20,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
125,3,0,0,82,68,
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
1,0,0,0,254,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
5,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,14,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,115,99,97,
110,112,97,115,115,95,
115,97,109,112,108,101,
114,0,83,111,117,114,
99,101,0,115,99,97,
110,112,97,115,115,0,
80,117,115,104,0,171,
14,1,0,0,8,0,
0,0,44,1,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
108,2,0,0,0,0,
0,0,16,0,0,0,
2,0,0,0,136,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,172,2,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,136,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,192,2,0,0,
32,0,0,0,16,0,
0,0,0,0,0,0,
136,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
210,2,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,236,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,16,3,
0,0,52,0,0,0,
4,0,0,0,2,0,
0,0,44,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,80,3,0,0,
56,0,0,0,4,0,
0,0,2,0,0,0,
44,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
101,3,0,0,60,0,
0,0,4,0,0,0,
2,0,0,0,44,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,111,3,
0,0,64,0,0,0,
4,0,0,0,2,0,
0,0,44,3,0,0,
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
0,0,126,2,0,0,
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
228,2,0,0,112,97,
114,97,109,115,95,71,
97,117,115,115,83,116,
114,101,110,103,116,104,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,37,3,
0,0,112,97,114,97,
109,115,95,66,108,111,
111,109,83,116,114,101,
110,103,116,104,0,112,
97,114,97,109,115,95,
83,87,0,112,97,114,
97,109,115,95,66,82,
73,71,72,84,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,171,171,
73,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,84,69,
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
116,5,0,0,80,0,
0,0,93,1,0,0,
106,8,0,1,53,24,
0,0,22,0,0,0,
0,0,0,0,252,57,
44,62,0,0,0,0,
0,0,0,0,245,166,
183,63,116,168,139,62,
0,0,0,0,0,0,
0,0,200,66,86,64,
236,105,239,61,0,0,
0,0,0,0,0,0,
11,89,168,64,14,42,
197,60,0,0,0,0,
0,0,0,0,178,144,
229,64,99,92,10,59,
0,0,0,0,0,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,5,0,0,0,
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
6,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,10,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
252,57,44,62,252,57,
44,62,252,57,44,62,
252,57,44,62,54,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,0,0,0,0,
54,0,0,5,18,0,
16,0,2,0,0,0,
1,64,0,0,1,0,
0,0,48,0,0,1,
33,0,0,7,34,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,1,64,0,0,
5,0,0,0,3,0,
4,3,26,0,16,0,
2,0,0,0,56,0,
0,9,34,0,16,0,
2,0,0,0,58,128,
32,0,1,0,0,0,
3,0,0,0,10,144,
144,0,10,0,16,0,
2,0,0,0,56,0,
0,8,34,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,9,66,0,
16,0,3,0,0,0,
58,128,32,0,1,0,
0,0,0,0,0,0,
10,144,144,0,10,0,
16,0,2,0,0,0,
0,0,0,7,98,0,
16,0,2,0,0,0,
86,6,16,0,3,0,
0,0,6,17,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,4,0,0,0,
150,5,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,10,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,86,149,144,0,
10,0,16,0,2,0,
0,0,70,14,16,0,
1,0,0,0,0,0,
0,8,98,0,16,0,
2,0,0,0,86,6,
16,128,65,0,0,0,
3,0,0,0,6,17,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,5,0,
0,0,150,5,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,10,
242,0,16,0,4,0,
0,0,70,14,16,0,
5,0,0,0,86,149,
144,0,10,0,16,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
56,0,0,10,34,0,
16,0,2,0,0,0,
58,128,32,0,1,0,
0,0,3,0,0,0,
10,144,144,128,65,0,
0,0,10,0,16,0,
2,0,0,0,56,0,
0,8,18,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
0,0,0,7,98,0,
16,0,2,0,0,0,
6,2,16,0,3,0,
0,0,6,17,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,5,0,0,0,
150,5,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,10,242,0,
16,0,4,0,0,0,
70,14,16,0,5,0,
0,0,86,149,144,0,
10,0,16,0,2,0,
0,0,70,14,16,0,
4,0,0,0,56,0,
0,10,130,0,16,0,
3,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,10,144,
144,128,65,0,0,0,
10,0,16,0,2,0,
0,0,0,0,0,7,
98,0,16,0,2,0,
0,0,86,7,16,0,
3,0,0,0,6,17,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,3,0,
0,0,150,5,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,10,
242,0,16,0,1,0,
0,0,70,14,16,0,
3,0,0,0,86,149,
144,0,10,0,16,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
30,0,0,7,18,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,1,64,0,0,
1,0,0,0,22,0,
0,1,56,0,0,8,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,6,128,
32,0,1,0,0,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
50,0,0,11,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,6,128,32,0,
1,0,0,0,4,0,
0,0,70,14,16,128,
65,0,0,0,2,0,
0,0,50,0,0,10,
242,0,16,0,1,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
50,0,0,13,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,128,64,70,14,
16,128,65,0,0,0,
1,0,0,0,0,0,
0,7,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,62,0,
0,1,83,84,65,84,
148,0,0,0,36,0,
0,0,6,0,0,0,
5,0,0,0,2,0,
0,0,22,0,0,0,
2,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
6,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class ReshadeShadersBlurHazeSh1nra358ShaderDef : public ShaderDef
{
public:
	ReshadeShadersBlurHazeSh1nra358ShaderDef() : ShaderDef{}
	{
		Name = "blur-haze-sh1nra358";
		VertexByteCode = RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("GaussStrength", -1, 52, 4, 0.000000f, 1.000000f, 0.300000f, 0.010000f, "Gauss Strength"));
		Params.push_back(ShaderParam("BloomStrength", -1, 56, 4, 0.000000f, 1.000000f, 0.330000f, 0.005000f, "Bloom Strength"));
		Params.push_back(ShaderParam("SW", -1, 60, 4, 1.000000f, 4.000000f, 2.000000f, 0.250000f, "Haze Width"));
		Params.push_back(ShaderParam("BRIGHT", -1, 64, 4, 0.300000f, 0.600000f, 0.500000f, 0.010000f, "Brightness adjust"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("scanpass", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
