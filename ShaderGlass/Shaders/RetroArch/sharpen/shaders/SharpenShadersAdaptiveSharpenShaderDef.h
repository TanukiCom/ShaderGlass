/*
ShaderGlass shader sharpen-shaders\adaptive-sharpen imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/sharpen/shaders/adaptive-sharpen.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

 Copyright (c) 2015, bacondither
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer
    in this position and unchanged.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 Adaptive sharpen - version 2015-05-15 - (requires ps >= 3.0)
 Tuned for use post resize, EXPECTS FULL RANGE GAMMA LIGHT
 0.3 <-> 1.5 is a reasonable range of values
 Normally it should be set to false
 Defined values under this row are "optimal" DO NOT CHANGE IF YOU DO NOT KNOW WHAT YOU ARE DOING!
 Colour to greyscale, fast approx gamma
 Get points and saturate out of range values (BTB & WTW)
 [                c22               ]
 [           c24, c9,  c23          ]
 [      c21, c1,  c2,  c3, c18      ]
 [ c19, c10, c4,  c0,  c5, c11, c16 ]
 [      c20, c6,  c7,  c8, c17      ]
 [           c15, c12, c14          ]
 [                c13               ]
 Blur, gauss 3x3
 Edge detection
 Matrix, relative weights
 [           1          ]
 [       4,  4,  4      ]
 [   1,  4,  4,  4,  1  ]
 [       4,  4,  4      ]
 [           1          ]
 Edge detect contrast compression, center = 0.5
 RGB to greyscale
 Partial laplacian outer pixel weighting scheme
 Negative laplace matrix
 Matrix, relative weights, *Varying 0<->8
 [          8*         ]
 [      4,  1,  4      ]
 [  8*, 1,      1,  8* ]
 [      4,  1,  4      ]
 [          8*         ]
 Compute sharpening magnitude function, x = edge mag, y = laplace operator mag
 Calculate sharpening diff and scale
 Calculate local near min & max, partial cocktail sort (No branching!)
 Calculate tanh scale factor, pos/neg
 Soft limit sharpening with tanh, mix to control maximum compression
	if	(video_level_out	==	1.0) { texture(Source, vTexCoord) + sharpdiff; }

*/

#pragma once

namespace RetroArchSharpenShadersAdaptiveSharpenShaderDefs
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
68,88,66,67,240,68,
92,79,151,100,176,251,
178,207,35,97,220,222,
74,189,1,0,0,0,
228,49,0,0,5,0,
0,0,52,0,0,0,
224,2,0,0,20,3,
0,0,72,3,0,0,
72,49,0,0,82,68,
69,70,164,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
124,2,0,0,82,68,
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
16,0,0,0,2,0,
0,0,180,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,216,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
180,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
236,1,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,180,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,254,1,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,24,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,60,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
88,2,0,0,0,0,
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
170,1,0,0,112,97,
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
0,0,0,0,16,2,
0,0,112,97,114,97,
109,115,95,67,85,82,
86,69,95,72,69,73,
71,72,84,0,102,108,
111,97,116,0,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,80,2,0,0,
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
83,72,69,88,248,45,
0,0,80,0,0,0,
126,11,0,0,106,8,
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
0,2,29,0,0,0,
105,0,0,4,0,0,
0,0,25,0,0,0,
4,0,0,0,56,0,
0,11,210,0,16,0,
0,0,0,0,2,64,
0,0,0,0,64,192,
0,0,0,0,0,0,
0,192,0,0,128,191,
166,142,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,54,0,
0,7,114,0,16,0,
2,0,0,0,230,138,
32,128,65,0,0,0,
1,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,11,210,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
0,192,0,0,0,0,
0,0,0,192,0,0,
128,63,166,142,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
34,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,70,0,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,230,10,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,13,242,0,16,0,
5,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,192,0,0,
128,191,0,0,128,63,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,70,0,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
6,0,0,0,70,2,
16,0,6,0,0,0,
0,0,0,7,50,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,54,0,0,5,
130,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
2,0,0,0,230,10,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,56,0,
0,8,130,0,16,0,
8,0,0,0,1,64,
0,0,0,0,64,192,
58,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,13,50,0,
16,0,8,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,64,
0,0,0,0,0,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,9,0,0,0,
70,0,16,0,8,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,9,0,0,0,
70,2,16,0,9,0,
0,0,54,0,0,5,
66,0,16,0,8,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
8,0,0,0,230,10,
16,0,8,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,70,0,
16,0,8,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
54,0,0,8,82,0,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,56,0,0,8,
34,0,16,0,10,0,
0,0,1,64,0,0,
0,0,0,192,58,128,
32,0,1,0,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
10,0,0,0,70,0,
16,0,10,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
11,0,0,0,70,0,
16,0,10,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
11,0,0,0,70,2,
16,0,11,0,0,0,
54,0,0,7,130,0,
16,0,10,0,0,0,
58,128,32,128,65,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
10,0,0,0,230,10,
16,0,10,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,70,0,
16,0,10,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
10,0,0,0,70,2,
16,0,10,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
242,0,16,0,12,0,
0,0,70,10,16,0,
12,0,0,0,54,0,
0,8,82,0,16,0,
13,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,6,34,0,
16,0,13,0,0,0,
58,128,32,0,1,0,
0,0,0,0,0,0,
0,0,0,7,50,0,
16,0,13,0,0,0,
70,0,16,0,13,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,14,0,0,0,
70,0,16,0,13,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,14,0,0,0,
70,2,16,0,14,0,
0,0,56,0,0,8,
130,0,16,0,13,0,
0,0,1,64,0,0,
0,0,0,64,58,128,
32,0,1,0,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
13,0,0,0,230,10,
16,0,13,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
13,0,0,0,70,0,
16,0,13,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
13,0,0,0,70,2,
16,0,13,0,0,0,
54,0,0,5,18,0,
16,0,15,0,0,0,
1,64,0,0,0,0,
0,0,56,0,0,11,
226,0,16,0,15,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
64,64,0,0,128,63,
0,0,0,192,246,142,
32,0,1,0,0,0,
0,0,0,0,0,0,
0,7,242,0,16,0,
15,0,0,0,70,14,
16,0,15,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,70,0,
16,0,15,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
16,0,0,0,70,2,
16,0,16,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,15,0,
0,0,230,10,16,0,
15,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,15,0,
0,0,70,2,16,0,
15,0,0,0,50,0,
0,13,242,0,16,0,
17,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,191,0,0,
128,63,0,0,0,64,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
18,0,0,0,70,0,
16,0,17,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
18,0,0,0,70,2,
16,0,18,0,0,0,
54,0,0,6,18,0,
16,0,17,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,34,0,
16,0,17,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
50,0,16,0,17,0,
0,0,70,0,16,0,
17,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,19,0,
0,0,70,0,16,0,
17,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,19,0,
0,0,70,2,16,0,
19,0,0,0,0,0,
0,8,50,0,16,0,
17,0,0,0,70,16,
16,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,20,0,
0,0,70,0,16,0,
17,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,20,0,
0,0,70,2,16,0,
20,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,17,0,0,0,
230,10,16,0,17,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,17,0,0,0,
70,2,16,0,17,0,
0,0,56,0,0,8,
66,0,16,0,21,0,
0,0,1,64,0,0,
0,0,0,64,42,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,13,50,0,16,0,
21,0,0,0,230,138,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,128,191,0,0,
0,0,0,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
22,0,0,0,70,0,
16,0,21,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
22,0,0,0,70,2,
16,0,22,0,0,0,
54,0,0,5,130,0,
16,0,21,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
50,0,16,0,21,0,
0,0,230,10,16,0,
21,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,21,0,
0,0,70,0,16,0,
21,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,32,0,5,
114,0,16,0,21,0,
0,0,70,2,16,0,
21,0,0,0,56,0,
0,8,66,0,16,0,
23,0,0,0,1,64,
0,0,0,0,64,64,
42,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,13,50,0,
16,0,23,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,64,0,0,128,63,
0,0,0,0,0,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,24,0,0,0,
70,0,16,0,23,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,24,0,0,0,
70,2,16,0,24,0,
0,0,54,0,0,5,
130,0,16,0,23,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
23,0,0,0,230,10,
16,0,23,0,0,0,
70,16,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
23,0,0,0,70,0,
16,0,23,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,32,
0,5,114,0,16,0,
23,0,0,0,70,2,
16,0,23,0,0,0,
0,0,0,7,114,0,
16,0,25,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
10,0,0,0,0,0,
0,7,114,0,16,0,
25,0,0,0,70,2,
16,0,19,0,0,0,
70,2,16,0,25,0,
0,0,0,0,0,7,
114,0,16,0,25,0,
0,0,70,2,16,0,
14,0,0,0,70,2,
16,0,25,0,0,0,
0,0,0,7,114,0,
16,0,26,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
18,0,0,0,0,0,
0,7,114,0,16,0,
26,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,26,0,
0,0,0,0,0,7,
114,0,16,0,26,0,
0,0,70,2,16,0,
20,0,0,0,70,2,
16,0,26,0,0,0,
50,0,0,12,114,0,
16,0,25,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,0,70,2,
16,0,26,0,0,0,
50,0,0,12,114,0,
16,0,25,0,0,0,
70,3,16,0,12,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,0,0,70,2,
16,0,25,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
171,170,170,60,171,170,
170,60,171,170,170,60,
0,0,0,0,50,0,
0,13,114,0,16,0,
26,0,0,0,70,2,
16,0,25,0,0,0,
2,64,0,0,0,0,
128,61,0,0,128,61,
0,0,128,61,0,0,
0,0,70,3,16,128,
65,0,0,0,12,0,
0,0,50,0,0,13,
114,0,16,0,27,0,
0,0,70,2,16,0,
25,0,0,0,2,64,
0,0,0,0,128,61,
0,0,128,61,0,0,
128,61,0,0,0,0,
70,2,16,128,65,0,
0,0,7,0,0,0,
0,0,0,9,114,0,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
10,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
18,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
19,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
5,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
14,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
20,0,0,0,0,0,
0,8,114,0,16,0,
26,0,0,0,70,2,
16,0,26,0,0,0,
70,2,16,128,129,0,
0,0,27,0,0,0,
50,0,0,13,114,0,
16,0,27,0,0,0,
70,2,16,0,25,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,0,0,70,2,
16,128,65,0,0,0,
11,0,0,0,50,0,
0,13,114,0,16,0,
28,0,0,0,70,2,
16,0,25,0,0,0,
2,64,0,0,0,0,
128,61,0,0,128,61,
0,0,128,61,0,0,
0,0,70,2,16,128,
65,0,0,0,4,0,
0,0,0,0,0,9,
114,0,16,0,27,0,
0,0,70,2,16,128,
129,0,0,0,27,0,
0,0,70,2,16,128,
129,0,0,0,28,0,
0,0,50,0,0,13,
114,0,16,0,28,0,
0,0,70,2,16,0,
25,0,0,0,2,64,
0,0,0,0,128,61,
0,0,128,61,0,0,
128,61,0,0,0,0,
70,2,16,128,65,0,
0,0,21,0,0,0,
0,0,0,8,114,0,
16,0,27,0,0,0,
70,2,16,0,27,0,
0,0,70,2,16,128,
129,0,0,0,28,0,
0,0,50,0,0,13,
114,0,16,0,25,0,
0,0,70,2,16,0,
25,0,0,0,2,64,
0,0,0,0,128,61,
0,0,128,61,0,0,
128,61,0,0,0,0,
70,2,16,128,65,0,
0,0,13,0,0,0,
0,0,0,8,114,0,
16,0,25,0,0,0,
70,2,16,128,129,0,
0,0,25,0,0,0,
70,2,16,0,27,0,
0,0,50,0,0,12,
114,0,16,0,25,0,
0,0,70,2,16,0,
25,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,0,0,
70,2,16,0,26,0,
0,0,16,0,0,7,
130,0,16,0,1,0,
0,0,70,2,16,0,
25,0,0,0,70,2,
16,0,25,0,0,0,
75,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,171,170,170,62,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
205,204,236,192,25,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
205,204,44,64,1,64,
0,0,205,204,76,63,
51,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
205,204,76,64,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,16,0,0,7,
130,0,16,0,1,0,
0,0,70,3,16,0,
12,0,0,0,70,3,
16,0,12,0,0,0,
56,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,130,0,16,0,
2,0,0,0,70,2,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,130,0,
16,0,3,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
10,0,0,0,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,171,170,
170,62,75,0,0,5,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,16,0,
0,7,130,0,16,0,
4,0,0,0,70,2,
16,0,18,0,0,0,
70,2,16,0,18,0,
0,0,56,0,0,7,
130,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,18,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,7,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,171,170,
170,62,16,0,0,7,
34,0,16,0,2,0,
0,0,70,2,16,0,
19,0,0,0,70,2,
16,0,19,0,0,0,
56,0,0,7,34,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,66,0,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,56,0,0,7,
66,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,1,64,
0,0,171,170,170,62,
75,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,16,0,0,7,
18,0,16,0,5,0,
0,0,70,2,16,0,
14,0,0,0,70,2,
16,0,14,0,0,0,
56,0,0,7,18,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,34,0,16,0,
5,0,0,0,70,2,
16,0,20,0,0,0,
70,2,16,0,20,0,
0,0,56,0,0,7,
34,0,16,0,5,0,
0,0,26,0,16,0,
5,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,66,0,
16,0,5,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
11,0,0,0,56,0,
0,7,66,0,16,0,
5,0,0,0,42,0,
16,0,5,0,0,0,
1,64,0,0,171,170,
170,62,16,0,0,7,
18,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
56,0,0,7,18,0,
16,0,4,0,0,0,
10,0,16,0,4,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,34,0,16,0,
4,0,0,0,70,2,
16,0,21,0,0,0,
70,2,16,0,21,0,
0,0,56,0,0,7,
34,0,16,0,4,0,
0,0,26,0,16,0,
4,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,66,0,
16,0,4,0,0,0,
70,2,16,0,13,0,
0,0,70,2,16,0,
13,0,0,0,56,0,
0,7,66,0,16,0,
4,0,0,0,42,0,
16,0,4,0,0,0,
1,64,0,0,171,170,
170,62,75,0,0,5,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,16,0,
0,7,130,0,16,0,
5,0,0,0,70,2,
16,0,16,0,0,0,
70,2,16,0,16,0,
0,0,56,0,0,7,
130,0,16,0,5,0,
0,0,58,0,16,0,
5,0,0,0,1,64,
0,0,171,170,170,62,
75,0,0,5,242,0,
16,0,5,0,0,0,
70,14,16,0,5,0,
0,0,16,0,0,7,
130,0,16,0,6,0,
0,0,70,2,16,0,
17,0,0,0,70,2,
16,0,17,0,0,0,
56,0,0,7,130,0,
16,0,6,0,0,0,
58,0,16,0,6,0,
0,0,1,64,0,0,
171,170,170,62,75,0,
0,5,130,0,16,0,
6,0,0,0,58,0,
16,0,6,0,0,0,
16,0,0,7,18,0,
16,0,7,0,0,0,
70,2,16,0,9,0,
0,0,70,2,16,0,
9,0,0,0,56,0,
0,7,18,0,16,0,
7,0,0,0,10,0,
16,0,7,0,0,0,
1,64,0,0,171,170,
170,62,16,0,0,7,
34,0,16,0,7,0,
0,0,70,2,16,0,
23,0,0,0,70,2,
16,0,23,0,0,0,
56,0,0,7,34,0,
16,0,7,0,0,0,
26,0,16,0,7,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,66,0,16,0,
7,0,0,0,70,2,
16,0,24,0,0,0,
70,2,16,0,24,0,
0,0,56,0,0,7,
66,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,130,0,
16,0,7,0,0,0,
70,2,16,0,22,0,
0,0,70,2,16,0,
22,0,0,0,56,0,
0,7,130,0,16,0,
7,0,0,0,58,0,
16,0,7,0,0,0,
1,64,0,0,171,170,
170,62,75,0,0,5,
242,0,16,0,7,0,
0,0,70,14,16,0,
7,0,0,0,16,0,
0,7,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,34,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,171,170,
170,62,16,0,0,7,
18,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
171,170,170,62,16,0,
0,7,34,0,16,0,
0,0,0,0,70,2,
16,0,8,0,0,0,
70,2,16,0,8,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,171,170,170,62,
16,0,0,7,66,0,
16,0,0,0,0,0,
70,2,16,0,15,0,
0,0,70,2,16,0,
15,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,171,170,
170,62,75,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,16,0,
0,7,66,0,16,0,
1,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,6,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,171,170,170,62,
75,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,0,0,0,0,
58,0,16,0,1,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,1,0,0,0,
58,0,16,0,2,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,2,0,0,0,
58,0,16,0,3,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,3,0,0,0,
58,0,16,0,4,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,4,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,5,0,0,0,
26,0,16,0,2,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,6,0,0,0,
42,0,16,0,2,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,7,0,0,0,
10,0,16,0,5,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,8,0,0,0,
26,0,16,0,5,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,9,0,0,0,
42,0,16,0,5,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,10,0,0,0,
10,0,16,0,4,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,11,0,0,0,
26,0,16,0,4,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,12,0,0,0,
42,0,16,0,4,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,13,0,0,0,
58,0,16,0,5,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,14,0,0,0,
58,0,16,0,6,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,15,0,0,0,
10,0,16,0,7,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,16,0,0,0,
26,0,16,0,7,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,17,0,0,0,
42,0,16,0,7,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,18,0,0,0,
58,0,16,0,7,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,19,0,0,0,
10,0,16,0,1,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,20,0,0,0,
26,0,16,0,1,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,21,0,0,0,
10,0,16,0,0,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,22,0,0,0,
26,0,16,0,0,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,23,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,6,
18,48,32,0,0,0,
0,0,24,0,0,0,
42,0,16,0,1,0,
0,0,0,0,0,8,
18,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,3,0,
0,0,58,0,16,0,
1,0,0,0,0,0,
0,8,34,0,16,0,
3,0,0,0,10,0,
16,128,65,0,0,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,9,18,0,
16,0,3,0,0,0,
26,0,16,128,129,0,
0,0,3,0,0,0,
10,0,16,128,129,0,
0,0,3,0,0,0,
0,0,0,8,34,0,
16,0,3,0,0,0,
26,0,16,128,65,0,
0,0,2,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,8,
18,0,16,0,3,0,
0,0,26,0,16,128,
129,0,0,0,3,0,
0,0,10,0,16,0,
3,0,0,0,0,0,
0,8,34,0,16,0,
3,0,0,0,10,0,
16,128,65,0,0,0,
5,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,8,18,0,
16,0,3,0,0,0,
26,0,16,128,129,0,
0,0,3,0,0,0,
10,0,16,0,3,0,
0,0,0,0,0,8,
34,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,2,0,
0,0,58,0,16,0,
1,0,0,0,0,0,
0,8,66,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
4,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,9,34,0,
16,0,3,0,0,0,
42,0,16,128,129,0,
0,0,3,0,0,0,
26,0,16,128,129,0,
0,0,3,0,0,0,
0,0,0,8,66,0,
16,0,3,0,0,0,
42,0,16,128,65,0,
0,0,2,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,8,
34,0,16,0,3,0,
0,0,42,0,16,128,
129,0,0,0,3,0,
0,0,26,0,16,0,
3,0,0,0,0,0,
0,8,66,0,16,0,
3,0,0,0,26,0,
16,128,65,0,0,0,
5,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,8,34,0,
16,0,3,0,0,0,
42,0,16,128,129,0,
0,0,3,0,0,0,
26,0,16,0,3,0,
0,0,50,0,0,9,
18,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,1,64,
0,0,0,0,128,62,
10,0,16,0,3,0,
0,0,50,0,0,9,
18,0,16,0,3,0,
0,0,10,0,16,0,
3,0,0,0,1,64,
0,0,0,0,128,64,
1,64,0,0,143,194,
245,60,0,0,0,8,
34,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,3,0,
0,0,42,0,16,0,
5,0,0,0,0,0,
0,8,66,0,16,0,
1,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,42,0,
16,0,5,0,0,0,
0,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,128,129,0,
0,0,1,0,0,0,
26,0,16,128,129,0,
0,0,3,0,0,0,
0,0,0,8,98,0,
16,0,0,0,0,0,
86,6,16,128,65,0,
0,0,0,0,0,0,
166,10,16,0,5,0,
0,0,0,0,0,8,
66,0,16,0,0,0,
0,0,42,0,16,128,
129,0,0,0,0,0,
0,0,42,0,16,0,
1,0,0,0,0,0,
0,8,34,0,16,0,
0,0,0,0,26,0,
16,128,129,0,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,8,66,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,2,0,0,0,
42,0,16,0,5,0,
0,0,0,0,0,8,
66,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,42,0,16,0,
5,0,0,0,0,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,128,129,0,0,0,
0,0,0,0,42,0,
16,128,129,0,0,0,
1,0,0,0,50,0,
0,9,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,26,0,16,0,
0,0,0,0,0,0,
0,8,66,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
1,0,0,0,10,0,
16,0,4,0,0,0,
0,0,0,8,18,0,
16,0,1,0,0,0,
10,0,16,128,65,0,
0,0,1,0,0,0,
10,0,16,0,4,0,
0,0,0,0,0,9,
66,0,16,0,0,0,
0,0,42,0,16,128,
129,0,0,0,0,0,
0,0,10,0,16,128,
129,0,0,0,1,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,10,0,16,0,
4,0,0,0,0,0,
0,8,18,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,8,66,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,2,0,0,0,
10,0,16,0,4,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,42,0,16,128,
129,0,0,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,8,66,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
2,0,0,0,10,0,
16,0,4,0,0,0,
0,0,0,8,18,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,2,0,0,0,
10,0,16,0,4,0,
0,0,0,0,0,9,
66,0,16,0,0,0,
0,0,42,0,16,128,
129,0,0,0,0,0,
0,0,10,0,16,128,
129,0,0,0,1,0,
0,0,50,0,0,9,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
10,0,16,0,0,0,
0,0,0,0,0,8,
66,0,16,0,0,0,
0,0,26,0,16,0,
4,0,0,0,42,0,
16,128,65,0,0,0,
7,0,0,0,0,0,
0,8,18,0,16,0,
1,0,0,0,26,0,
16,128,65,0,0,0,
2,0,0,0,26,0,
16,0,4,0,0,0,
0,0,0,9,66,0,
16,0,0,0,0,0,
42,0,16,128,129,0,
0,0,0,0,0,0,
10,0,16,128,129,0,
0,0,1,0,0,0,
0,0,0,8,18,0,
16,0,1,0,0,0,
26,0,16,0,4,0,
0,0,58,0,16,128,
65,0,0,0,7,0,
0,0,0,0,0,8,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
1,0,0,0,0,0,
0,8,18,0,16,0,
1,0,0,0,26,0,
16,0,4,0,0,0,
26,0,16,128,65,0,
0,0,7,0,0,0,
0,0,0,8,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,128,
129,0,0,0,1,0,
0,0,0,0,0,8,
18,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,26,0,16,0,
4,0,0,0,0,0,
0,8,98,0,16,0,
1,0,0,0,86,6,
16,0,4,0,0,0,
86,5,16,128,65,0,
0,0,5,0,0,0,
0,0,0,9,18,0,
16,0,1,0,0,0,
26,0,16,128,129,0,
0,0,1,0,0,0,
10,0,16,128,129,0,
0,0,1,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,63,42,0,
16,0,0,0,0,0,
0,0,0,8,18,0,
16,0,1,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,128,
65,0,0,0,5,0,
0,0,0,0,0,8,
34,0,16,0,1,0,
0,0,42,0,16,0,
4,0,0,0,10,0,
16,128,65,0,0,0,
7,0,0,0,0,0,
0,9,18,0,16,0,
1,0,0,0,26,0,
16,128,129,0,0,0,
1,0,0,0,10,0,
16,128,129,0,0,0,
1,0,0,0,0,0,
0,8,34,0,16,0,
1,0,0,0,42,0,
16,0,4,0,0,0,
10,0,16,128,65,0,
0,0,5,0,0,0,
0,0,0,8,18,0,
16,0,1,0,0,0,
26,0,16,128,129,0,
0,0,1,0,0,0,
10,0,16,0,1,0,
0,0,0,0,0,8,
34,0,16,0,1,0,
0,0,42,0,16,0,
4,0,0,0,58,0,
16,128,65,0,0,0,
6,0,0,0,0,0,
0,8,18,0,16,0,
1,0,0,0,26,0,
16,128,129,0,0,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
0,0,0,8,34,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,2,0,0,0,
42,0,16,0,4,0,
0,0,0,0,0,9,
34,0,16,0,1,0,
0,0,42,0,16,128,
129,0,0,0,1,0,
0,0,26,0,16,128,
129,0,0,0,1,0,
0,0,50,0,0,9,
18,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
10,0,16,0,1,0,
0,0,14,0,0,7,
114,0,16,0,0,0,
0,0,6,0,16,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
51,0,0,10,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,0,14,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,1,0,
0,0,51,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,64,
0,0,0,7,34,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,58,0,16,0,
3,0,0,0,0,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,0,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,4,0,0,0,
0,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,42,0,16,0,
1,0,0,0,0,0,
0,7,98,0,16,0,
1,0,0,0,6,1,
16,0,5,0,0,0,
86,6,16,0,1,0,
0,0,50,0,0,9,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,62,
42,0,16,0,1,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,4,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,5,0,
0,0,26,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
26,0,16,0,4,0,
0,0,42,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,4,0,
0,0,10,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
0,0,0,7,34,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
160,64,14,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,8,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
192,63,26,128,32,0,
1,0,0,0,3,0,
0,0,47,0,0,5,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
96,64,25,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,9,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,14,0,
0,8,34,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,26,0,
16,0,0,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
10,215,35,60,56,0,
0,7,66,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,205,204,
12,64,47,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
144,64,25,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,70,1,64,0,0,
0,0,0,63,14,0,
0,8,66,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
42,0,16,128,65,0,
0,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,58,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,48,0,
0,1,33,0,0,7,
66,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,2,0,0,0,
3,0,4,3,42,0,
16,0,0,0,0,0,
30,0,0,7,66,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
1,0,0,0,30,0,
0,11,50,0,16,0,
1,0,0,0,86,5,
16,128,65,0,0,0,
0,0,0,0,2,64,
0,0,25,0,0,0,
23,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,5,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,48,0,0,1,
33,0,0,7,66,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,3,0,
4,3,42,0,16,0,
1,0,0,0,30,0,
0,10,50,0,16,0,
2,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,255,255,
255,255,1,0,0,0,
0,0,0,0,0,0,
0,0,54,0,0,7,
66,0,16,0,1,0,
0,0,10,48,32,4,
0,0,0,0,10,0,
16,0,2,0,0,0,
54,0,0,7,66,0,
16,0,2,0,0,0,
10,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,51,0,
0,7,66,0,16,0,
2,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,54,0,0,7,
18,48,32,4,0,0,
0,0,10,0,16,0,
2,0,0,0,42,0,
16,0,2,0,0,0,
54,0,0,7,18,0,
16,0,2,0,0,0,
10,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,52,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,7,
18,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
54,0,0,5,130,0,
16,0,0,0,0,0,
26,0,16,0,2,0,
0,0,22,0,0,1,
54,0,0,5,130,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,48,0,0,1,
33,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,3,0,
4,3,10,0,16,0,
1,0,0,0,30,0,
0,7,18,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,54,0,0,7,
66,0,16,0,1,0,
0,0,10,48,32,4,
0,0,0,0,10,0,
16,0,1,0,0,0,
54,0,0,7,18,0,
16,0,2,0,0,0,
10,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,51,0,
0,7,18,0,16,0,
2,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,7,
18,48,32,4,0,0,
0,0,10,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
54,0,0,7,18,0,
16,0,2,0,0,0,
10,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,52,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,7,
18,48,32,4,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
54,0,0,5,130,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,22,0,0,1,
54,0,0,5,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,22,0,0,1,
54,0,0,6,34,0,
16,0,0,0,0,0,
10,48,32,0,0,0,
0,0,23,0,0,0,
54,0,0,6,66,0,
16,0,0,0,0,0,
10,48,32,0,0,0,
0,0,24,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,56,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,205,204,
76,63,0,0,0,63,
0,0,0,0,0,0,
0,0,52,0,0,7,
34,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
54,0,0,6,66,0,
16,0,0,0,0,0,
10,48,32,0,0,0,
0,0,0,0,0,0,
54,0,0,6,130,0,
16,0,0,0,0,0,
10,48,32,0,0,0,
0,0,1,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,51,0,0,7,
66,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,1,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,111,18,131,59,
14,0,0,10,34,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,26,0,16,0,
0,0,0,0,0,0,
0,8,66,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
111,18,131,60,14,0,
0,10,66,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
42,0,16,0,0,0,
0,0,52,0,0,10,
226,0,16,0,0,0,
0,0,86,2,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,32,65,0,0,
32,65,0,0,0,0,
56,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,59,170,
184,63,25,0,0,5,
34,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,25,0,
0,6,18,0,16,0,
1,0,0,0,10,0,
16,128,65,0,0,0,
1,0,0,0,0,0,
0,8,66,0,16,0,
1,0,0,0,10,0,
16,128,65,0,0,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,14,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,0,16,0,1,0,
0,0,56,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
14,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
50,0,0,9,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
12,2,43,62,26,0,
16,0,0,0,0,0,
51,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,59,170,184,63,
25,0,0,5,18,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,25,0,0,6,
130,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,0,0,0,8,
34,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,14,0,0,10,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,14,0,
0,7,66,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,42,0,16,128,
65,0,0,0,0,0,
0,0,10,0,16,0,
0,0,0,0,50,0,
0,9,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,62,42,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,7,
242,32,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,70,14,
16,0,12,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
133,1,0,0,29,0,
0,0,0,0,0,0,
2,0,0,0,9,1,
0,0,7,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
0,0,0,0,25,0,
0,0,39,0,0,0,
0,0,0,0,0,0,
0,0,25,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,43,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class SharpenShadersAdaptiveSharpenShaderDef : public ShaderDef
{
public:
	SharpenShadersAdaptiveSharpenShaderDef() : ShaderDef{}
	{
		Name = "adaptive-sharpen";
		VertexByteCode = RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("CURVE_HEIGHT", -1, 52, 4, 0.100000f, 2.000000f, 0.800000f));
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
