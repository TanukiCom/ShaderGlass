/*
ShaderGlass shader nnedi3-shaders\jinc2-cshift-rgb imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/nnedi3/shaders/jinc2-cshift-rgb.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's jinc windowed-jinc 2-lobe with anti-ringing Shader

Copyright (C) 2011-2014 Hyllian/Jararaca - sergiogdb@gmail.com

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.



This is an approximation of Jinc(x)*Jinc(x*r1/r2) for x < 2.5,
where r1 and r2 are the first two zeros of jinc function.
For a jinc 2-lobe best approximation, use A=0.5 and B=0.825.

// A=0.5, B=0.825 is the best jinc approximation for x<2.5. if B=1.0, it's a lanczos filter.
// Increase A to get more blur. Decrease it to get a sharper picture.
// B = 0.825 to get rid of dithering. Increase B to get a fine sharpness, though dithering returns.
// Calculates the distance between two points
//Correct NNEDI3's center shift
// reading the texels
//  Get min/max samples
// Anti-ringing
// final sum and weight normalization

*/

#pragma once

namespace RetroArchNnedi3ShadersJinc2CshiftRgbShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,7,90,
244,202,208,136,239,143,
61,205,42,234,171,96,
146,251,1,0,0,0,
160,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
4,3,0,0,82,68,
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
83,72,69,88,28,1,
0,0,80,0,1,0,
71,0,0,0,106,8,
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
56,0,0,10,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,0,0,0,0,
0,0,0,0,56,0,
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
242,32,16,0,1,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
6,0,0,0,1,0,
0,0,0,0,0,0,
4,0,0,0,5,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,252,131,
142,244,10,46,80,255,
244,78,75,34,177,39,
188,191,1,0,0,0,
52,31,0,0,5,0,
0,0,52,0,0,0,
96,3,0,0,148,3,
0,0,200,3,0,0,
152,30,0,0,82,68,
69,70,36,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
251,2,0,0,82,68,
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
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,232,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,40,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
4,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
60,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,4,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,78,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,104,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,140,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
172,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
208,2,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,172,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,226,2,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,172,2,0,0,
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
0,0,250,1,0,0,
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
96,2,0,0,112,97,
114,97,109,115,95,74,
73,78,67,50,95,87,
73,78,68,79,87,95,
83,73,78,67,0,102,
108,111,97,116,0,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,165,2,0,0,
112,97,114,97,109,115,
95,74,73,78,67,50,
95,83,73,78,67,0,
112,97,114,97,109,115,
95,74,73,78,67,50,
95,65,82,95,83,84,
82,69,78,71,84,72,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
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
200,26,0,0,80,0,
0,0,178,6,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,4,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,17,0,
0,0,56,0,0,11,
242,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
0,0,128,63,230,142,
32,0,1,0,0,0,
0,0,0,0,14,0,
0,8,242,0,16,0,
1,0,0,0,70,20,
16,0,0,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
0,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
0,191,0,0,128,191,
0,0,128,191,65,0,
0,5,242,0,16,0,
2,0,0,0,230,14,
16,0,1,0,0,0,
0,0,0,10,242,0,
16,0,3,0,0,0,
230,14,16,0,2,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
0,63,0,0,0,63,
0,0,0,63,50,0,
0,11,242,0,16,0,
4,0,0,0,230,14,
16,0,3,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
70,14,16,128,65,0,
0,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
230,14,16,0,3,0,
0,0,230,142,32,0,
1,0,0,0,0,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,14,194,0,16,0,
1,0,0,0,166,142,
32,128,65,0,0,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,6,4,
16,0,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,230,10,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,10,242,0,16,0,
7,0,0,0,230,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,63,0,0,
0,191,0,0,0,8,
242,0,16,0,7,0,
0,0,70,4,16,128,
65,0,0,0,1,0,
0,0,70,14,16,0,
7,0,0,0,15,0,
0,7,66,0,16,0,
1,0,0,0,230,10,
16,0,7,0,0,0,
230,10,16,0,7,0,
0,0,15,0,0,7,
130,0,16,0,1,0,
0,0,70,0,16,0,
7,0,0,0,70,0,
16,0,7,0,0,0,
75,0,0,5,66,0,
16,0,4,0,0,0,
42,0,16,0,1,0,
0,0,24,0,0,7,
130,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,11,50,0,
16,0,7,0,0,0,
2,64,0,0,219,15,
73,64,219,15,73,64,
0,0,0,0,0,0,
0,0,150,133,32,0,
1,0,0,0,3,0,
0,0,56,0,0,7,
194,0,16,0,7,0,
0,0,166,10,16,0,
4,0,0,0,6,4,
16,0,7,0,0,0,
77,0,0,6,194,0,
16,0,7,0,0,0,
0,208,0,0,166,14,
16,0,7,0,0,0,
56,0,0,7,66,0,
16,0,4,0,0,0,
58,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,14,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,4,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
66,0,16,0,4,0,
0,0,26,0,16,0,
7,0,0,0,10,0,
16,0,7,0,0,0,
55,0,0,9,18,0,
16,0,8,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,42,0,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,6,0,0,0,
70,2,16,0,6,0,
0,0,6,0,16,0,
8,0,0,0,75,0,
0,5,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
24,0,0,7,130,0,
16,0,4,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,7,0,0,0,
166,10,16,0,1,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,55,0,
0,9,18,0,16,0,
9,0,0,0,58,0,
16,0,4,0,0,0,
42,0,16,0,4,0,
0,0,42,0,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
5,0,0,0,6,0,
16,0,9,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
6,0,0,0,50,0,
0,14,194,0,16,0,
1,0,0,0,166,142,
32,128,65,0,0,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,6,4,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
242,0,16,0,10,0,
0,0,230,14,16,0,
2,0,0,0,2,64,
0,0,0,0,192,63,
0,0,0,191,0,0,
192,63,0,0,0,63,
0,0,0,8,242,0,
16,0,10,0,0,0,
70,4,16,128,65,0,
0,0,1,0,0,0,
70,14,16,0,10,0,
0,0,15,0,0,7,
66,0,16,0,1,0,
0,0,70,0,16,0,
10,0,0,0,70,0,
16,0,10,0,0,0,
15,0,0,7,130,0,
16,0,1,0,0,0,
230,10,16,0,10,0,
0,0,230,10,16,0,
10,0,0,0,75,0,
0,5,130,0,16,0,
4,0,0,0,42,0,
16,0,1,0,0,0,
24,0,0,7,130,0,
16,0,5,0,0,0,
58,0,16,0,4,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,7,0,0,0,
246,15,16,0,4,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,4,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,66,0,
16,0,1,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
1,0,0,0,55,0,
0,9,18,0,16,0,
10,0,0,0,58,0,
16,0,5,0,0,0,
42,0,16,0,4,0,
0,0,42,0,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
5,0,0,0,6,0,
16,0,10,0,0,0,
70,2,16,0,6,0,
0,0,70,2,16,0,
5,0,0,0,56,0,
0,11,242,0,16,0,
6,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
0,0,0,0,0,64,
230,142,32,0,1,0,
0,0,0,0,0,0,
50,0,0,10,242,0,
16,0,6,0,0,0,
230,14,16,0,3,0,
0,0,230,142,32,0,
1,0,0,0,0,0,
0,0,70,14,16,0,
6,0,0,0,50,0,
0,14,194,0,16,0,
7,0,0,0,166,142,
32,128,65,0,0,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,6,4,
16,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,11,0,
0,0,230,10,16,0,
7,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
242,0,16,0,12,0,
0,0,230,14,16,0,
2,0,0,0,2,64,
0,0,0,0,32,64,
0,0,0,191,0,0,
32,64,0,0,0,63,
0,0,0,8,242,0,
16,0,2,0,0,0,
70,4,16,128,65,0,
0,0,1,0,0,0,
70,14,16,0,2,0,
0,0,0,0,0,8,
242,0,16,0,12,0,
0,0,70,4,16,128,
65,0,0,0,1,0,
0,0,70,14,16,0,
12,0,0,0,0,0,
0,8,242,0,16,0,
13,0,0,0,70,4,
16,128,65,0,0,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
56,0,0,8,50,0,
16,0,1,0,0,0,
230,10,16,0,3,0,
0,0,230,138,32,0,
1,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,15,0,
0,7,18,0,16,0,
3,0,0,0,70,0,
16,0,12,0,0,0,
70,0,16,0,12,0,
0,0,15,0,0,7,
34,0,16,0,3,0,
0,0,230,10,16,0,
12,0,0,0,230,10,
16,0,12,0,0,0,
75,0,0,5,66,0,
16,0,3,0,0,0,
10,0,16,0,3,0,
0,0,24,0,0,7,
130,0,16,0,3,0,
0,0,42,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,166,10,16,0,
3,0,0,0,77,0,
0,6,194,0,16,0,
7,0,0,0,0,208,
0,0,166,14,16,0,
7,0,0,0,56,0,
0,7,66,0,16,0,
3,0,0,0,58,0,
16,0,7,0,0,0,
42,0,16,0,7,0,
0,0,14,0,0,7,
18,0,16,0,3,0,
0,0,42,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
55,0,0,9,18,0,
16,0,12,0,0,0,
58,0,16,0,3,0,
0,0,42,0,16,0,
4,0,0,0,10,0,
16,0,3,0,0,0,
50,0,0,9,210,0,
16,0,3,0,0,0,
6,0,16,0,12,0,
0,0,6,9,16,0,
11,0,0,0,6,9,
16,0,5,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,0,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
11,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,15,0,
0,7,130,0,16,0,
4,0,0,0,230,10,
16,0,13,0,0,0,
230,10,16,0,13,0,
0,0,15,0,0,7,
130,0,16,0,5,0,
0,0,70,0,16,0,
13,0,0,0,70,0,
16,0,13,0,0,0,
75,0,0,5,66,0,
16,0,7,0,0,0,
58,0,16,0,4,0,
0,0,24,0,0,7,
130,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,50,0,
16,0,13,0,0,0,
70,0,16,0,7,0,
0,0,166,10,16,0,
7,0,0,0,77,0,
0,6,50,0,16,0,
13,0,0,0,0,208,
0,0,70,0,16,0,
13,0,0,0,56,0,
0,7,66,0,16,0,
7,0,0,0,26,0,
16,0,13,0,0,0,
10,0,16,0,13,0,
0,0,14,0,0,7,
130,0,16,0,4,0,
0,0,42,0,16,0,
7,0,0,0,58,0,
16,0,4,0,0,0,
55,0,0,9,34,0,
16,0,8,0,0,0,
58,0,16,0,7,0,
0,0,42,0,16,0,
4,0,0,0,58,0,
16,0,4,0,0,0,
56,0,0,7,114,0,
16,0,13,0,0,0,
70,2,16,0,1,0,
0,0,86,5,16,0,
8,0,0,0,75,0,
0,5,130,0,16,0,
4,0,0,0,58,0,
16,0,5,0,0,0,
24,0,0,7,66,0,
16,0,7,0,0,0,
58,0,16,0,4,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,50,0,16,0,
14,0,0,0,70,0,
16,0,7,0,0,0,
246,15,16,0,4,0,
0,0,77,0,0,6,
50,0,16,0,14,0,
0,0,0,208,0,0,
70,0,16,0,14,0,
0,0,56,0,0,7,
130,0,16,0,4,0,
0,0,26,0,16,0,
14,0,0,0,10,0,
16,0,14,0,0,0,
14,0,0,7,130,0,
16,0,4,0,0,0,
58,0,16,0,4,0,
0,0,58,0,16,0,
5,0,0,0,55,0,
0,9,34,0,16,0,
9,0,0,0,42,0,
16,0,7,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,50,0,
0,9,114,0,16,0,
11,0,0,0,86,5,
16,0,9,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
13,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,13,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
75,0,0,5,130,0,
16,0,4,0,0,0,
58,0,16,0,1,0,
0,0,24,0,0,7,
130,0,16,0,5,0,
0,0,58,0,16,0,
4,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,246,15,16,0,
4,0,0,0,77,0,
0,6,194,0,16,0,
7,0,0,0,0,208,
0,0,166,14,16,0,
7,0,0,0,56,0,
0,7,130,0,16,0,
4,0,0,0,58,0,
16,0,7,0,0,0,
42,0,16,0,7,0,
0,0,14,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
4,0,0,0,58,0,
16,0,1,0,0,0,
55,0,0,9,34,0,
16,0,10,0,0,0,
58,0,16,0,5,0,
0,0,42,0,16,0,
4,0,0,0,58,0,
16,0,1,0,0,0,
50,0,0,9,114,0,
16,0,11,0,0,0,
86,5,16,0,10,0,
0,0,70,2,16,0,
13,0,0,0,70,2,
16,0,11,0,0,0,
75,0,0,5,130,0,
16,0,1,0,0,0,
26,0,16,0,3,0,
0,0,24,0,0,7,
130,0,16,0,4,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,246,15,16,0,
1,0,0,0,77,0,
0,6,194,0,16,0,
7,0,0,0,0,208,
0,0,166,14,16,0,
7,0,0,0,56,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,7,0,0,0,
42,0,16,0,7,0,
0,0,14,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,26,0,
16,0,3,0,0,0,
55,0,0,9,34,0,
16,0,12,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,58,0,
16,0,1,0,0,0,
50,0,0,9,114,0,
16,0,5,0,0,0,
86,5,16,0,12,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,0,11,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
134,3,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,50,0,
0,13,50,0,16,0,
5,0,0,0,230,138,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
70,0,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,13,194,0,16,0,
7,0,0,0,166,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
6,4,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
11,0,0,0,230,10,
16,0,7,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,13,194,0,16,0,
7,0,0,0,166,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
6,4,16,0,4,0,
0,0,50,0,0,13,
50,0,16,0,4,0,
0,0,230,138,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,64,0,0,0,0,
0,0,0,0,70,0,
16,0,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
178,0,16,0,4,0,
0,0,70,0,16,0,
4,0,0,0,70,123,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
14,0,0,0,230,10,
16,0,7,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,15,0,0,0,
230,10,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,13,50,0,
16,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,64,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,10,242,0,
16,0,16,0,0,0,
230,14,16,0,2,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
192,63,0,0,0,63,
0,0,192,63,15,0,
0,7,130,0,16,0,
0,0,0,0,230,10,
16,0,16,0,0,0,
230,10,16,0,16,0,
0,0,15,0,0,7,
130,0,16,0,1,0,
0,0,70,0,16,0,
16,0,0,0,70,0,
16,0,16,0,0,0,
75,0,0,5,130,0,
16,0,3,0,0,0,
58,0,16,0,0,0,
0,0,24,0,0,7,
130,0,16,0,5,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,246,15,16,0,
3,0,0,0,77,0,
0,6,194,0,16,0,
7,0,0,0,0,208,
0,0,166,14,16,0,
7,0,0,0,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,7,0,0,0,
42,0,16,0,7,0,
0,0,14,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,9,66,0,
16,0,8,0,0,0,
58,0,16,0,5,0,
0,0,42,0,16,0,
4,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,16,0,0,0,
70,2,16,0,15,0,
0,0,166,10,16,0,
8,0,0,0,75,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
24,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,7,0,0,0,
246,15,16,0,0,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,55,0,
0,9,66,0,16,0,
9,0,0,0,58,0,
16,0,3,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
14,0,0,0,166,10,
16,0,9,0,0,0,
70,2,16,0,14,0,
0,0,70,2,16,0,
16,0,0,0,0,0,
0,10,242,0,16,0,
16,0,0,0,230,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
192,63,0,0,192,63,
0,0,32,64,0,0,
192,63,15,0,0,7,
130,0,16,0,0,0,
0,0,70,0,16,0,
16,0,0,0,70,0,
16,0,16,0,0,0,
15,0,0,7,130,0,
16,0,1,0,0,0,
230,10,16,0,16,0,
0,0,230,10,16,0,
16,0,0,0,75,0,
0,5,130,0,16,0,
3,0,0,0,58,0,
16,0,0,0,0,0,
24,0,0,7,130,0,
16,0,5,0,0,0,
58,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,7,0,0,0,
246,15,16,0,3,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,66,0,16,0,
10,0,0,0,58,0,
16,0,5,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
14,0,0,0,166,10,
16,0,10,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
14,0,0,0,75,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,246,15,16,0,
0,0,0,0,24,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
1,0,0,0,55,0,
0,9,66,0,16,0,
12,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
5,0,0,0,166,10,
16,0,12,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
14,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,5,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,13,50,0,16,0,
6,0,0,0,230,138,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,64,0,0,
0,0,0,0,0,0,
70,0,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,10,242,0,16,0,
14,0,0,0,230,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,191,0,0,32,64,
0,0,0,63,0,0,
32,64,0,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,192,63,
0,0,32,64,0,0,
32,64,0,0,32,64,
15,0,0,7,130,0,
16,0,0,0,0,0,
230,10,16,0,14,0,
0,0,230,10,16,0,
14,0,0,0,15,0,
0,7,130,0,16,0,
1,0,0,0,70,0,
16,0,14,0,0,0,
70,0,16,0,14,0,
0,0,75,0,0,5,
130,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,7,0,0,0,
246,15,16,0,3,0,
0,0,24,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,0,
77,0,0,6,194,0,
16,0,7,0,0,0,
0,208,0,0,166,14,
16,0,7,0,0,0,
56,0,0,7,130,0,
16,0,5,0,0,0,
58,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,14,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,5,0,0,0,
58,0,16,0,0,0,
0,0,55,0,0,9,
130,0,16,0,8,0,
0,0,58,0,16,0,
3,0,0,0,42,0,
16,0,4,0,0,0,
58,0,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,246,15,
16,0,8,0,0,0,
17,0,0,10,34,0,
16,0,8,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,70,14,16,0,
8,0,0,0,75,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
56,0,0,7,194,0,
16,0,7,0,0,0,
6,4,16,0,7,0,
0,0,246,15,16,0,
0,0,0,0,24,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,77,0,0,6,
194,0,16,0,7,0,
0,0,0,208,0,0,
166,14,16,0,7,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
14,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
1,0,0,0,55,0,
0,9,130,0,16,0,
9,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,178,0,16,0,
4,0,0,0,246,15,
16,0,9,0,0,0,
70,12,16,0,4,0,
0,0,70,8,16,0,
5,0,0,0,17,0,
0,10,18,0,16,0,
8,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
70,14,16,0,9,0,
0,0,15,0,0,7,
130,0,16,0,0,0,
0,0,70,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
15,0,0,7,130,0,
16,0,1,0,0,0,
230,10,16,0,2,0,
0,0,230,10,16,0,
2,0,0,0,75,0,
0,5,18,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,98,0,
16,0,2,0,0,0,
6,1,16,0,7,0,
0,0,6,0,16,0,
2,0,0,0,24,0,
0,7,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,77,0,0,6,
98,0,16,0,2,0,
0,0,0,208,0,0,
86,6,16,0,2,0,
0,0,56,0,0,7,
34,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
14,0,0,7,130,0,
16,0,0,0,0,0,
26,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,130,0,16,0,
10,0,0,0,10,0,
16,0,2,0,0,0,
42,0,16,0,4,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,246,15,
16,0,10,0,0,0,
70,2,16,0,0,0,
0,0,70,3,16,0,
4,0,0,0,17,0,
0,10,66,0,16,0,
8,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
70,14,16,0,10,0,
0,0,75,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,56,0,
0,7,50,0,16,0,
2,0,0,0,70,0,
16,0,7,0,0,0,
246,15,16,0,0,0,
0,0,24,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
77,0,0,6,50,0,
16,0,2,0,0,0,
0,208,0,0,70,0,
16,0,2,0,0,0,
56,0,0,7,18,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,10,0,16,0,
2,0,0,0,14,0,
0,7,130,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,1,0,
0,0,55,0,0,9,
130,0,16,0,12,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,4,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,246,15,16,0,
12,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,0,0,
0,0,17,0,0,10,
130,0,16,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,70,14,
16,0,12,0,0,0,
17,0,0,10,130,0,
16,0,0,0,0,0,
70,14,16,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,14,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
51,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
15,0,0,0,52,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,11,0,0,0,
70,2,16,0,15,0,
0,0,52,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,13,0,0,0,
51,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
13,0,0,0,51,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,52,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
52,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,51,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
1,0,0,0,50,0,
0,10,114,32,16,0,
0,0,0,0,246,143,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,214,0,
0,0,17,0,0,0,
0,0,0,0,2,0,
0,0,180,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
16,0,0,0,1,0,
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
class Nnedi3ShadersJinc2CshiftRgbShaderDef : public ShaderDef
{
public:
	Nnedi3ShadersJinc2CshiftRgbShaderDef() : ShaderDef{}
	{
		Name = "jinc2-cshift-rgb";
		VertexByteCode = RetroArchNnedi3ShadersJinc2CshiftRgbShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNnedi3ShadersJinc2CshiftRgbShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNnedi3ShadersJinc2CshiftRgbShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNnedi3ShadersJinc2CshiftRgbShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("JINC2_WINDOW_SINC", -1, 52, 4, 0.000000f, 1.000000f, 0.440000f));
		Params.push_back(ShaderParam("JINC2_SINC", -1, 56, 4, 0.000000f, 1.000000f, 0.820000f));
		Params.push_back(ShaderParam("JINC2_AR_STRENGTH", -1, 60, 4, 0.000000f, 1.000000f, 0.500000f));
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
