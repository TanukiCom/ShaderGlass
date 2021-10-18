/*
ShaderGlass shader scalefx-shaders-old\scalefx-pass7 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scalefx/shaders/old/scalefx-pass7.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


ScaleFX - Pass 3
by Sp00kyFox, 2016-03-30

Filter:	Nearest
Scale:	3x

ScaleFX is an edge interpolation algorithm specialized in pixel art. It was
originally intended as an improvement upon Scale3x but became a new filter in
its own right.
ScaleFX interpolates edges up to level 6 and makes smooth transitions between
different slopes. The filtered picture will only consist of colours present
in the original.

Pass 3 outputs subpixels based on previously calculated tags.



Copyright (c) 2016 Sp00kyFox - ScaleFX@web.de

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


// extract corners
// extract mids
	grid		corners		mids

B		x   y	  	  x
D E F				w   y
H		w   z	  	  z

// read data
// extract data
// determine subpixel
// output coordinate - 0 = E, 1 = D, 2 = D0, 3 = F, 4 = F0, 5 = B, 6 = B0, 7 = H, 8 = H0
// ouput

*/

#pragma once

namespace RetroArchScalefxShadersOldScalefxPass7ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,126,48,
192,124,200,165,194,170,
80,70,94,236,254,163,
242,114,1,0,0,0,
240,3,0,0,5,0,
0,0,52,0,0,0,
160,1,0,0,236,1,
0,0,68,2,0,0,
84,3,0,0,82,68,
69,70,100,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
60,1,0,0,82,68,
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
92,0,0,0,2,0,
0,0,120,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
200,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,220,0,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,0,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,24,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,95,49,57,95,
77,86,80,0,102,108,
111,97,116,52,120,52,
0,171,171,171,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
208,0,0,0,95,49,
57,95,83,111,117,114,
99,101,83,105,122,101,
0,102,108,111,97,116,
52,0,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
15,1,0,0,77,105,
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
79,83,71,78,80,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,65,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,8,1,0,0,
80,0,1,0,66,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,103,0,
0,4,242,32,16,0,
1,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
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
1,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,6,0,0,0,
1,0,0,0,0,0,
0,0,4,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,246,40,
131,42,197,19,120,148,
20,2,193,46,57,52,
212,192,1,0,0,0,
220,9,0,0,5,0,
0,0,52,0,0,0,
76,2,0,0,128,2,
0,0,180,2,0,0,
64,9,0,0,82,68,
69,70,16,2,0,0,
1,0,0,0,12,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
232,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,1,0,0,0,
1,0,0,0,251,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
1,0,0,0,1,0,
0,0,13,0,0,0,
2,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,2,0,0,0,
1,0,0,0,13,0,
0,0,8,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,115,102,120,
112,51,95,115,97,109,
112,108,101,114,0,83,
111,117,114,99,101,0,
115,102,120,112,51,0,
85,66,79,0,8,1,
0,0,2,0,0,0,
36,1,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,116,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,136,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,1,0,0,
64,0,0,0,16,0,
0,0,2,0,0,0,
196,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
95,54,53,95,77,86,
80,0,102,108,111,97,
116,52,120,52,0,171,
171,171,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,124,1,
0,0,95,54,53,95,
83,111,117,114,99,101,
83,105,122,101,0,102,
108,111,97,116,52,0,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,187,1,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
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
132,6,0,0,80,0,
0,0,161,1,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,5,0,
0,0,90,0,0,3,
0,96,16,0,1,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,1,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,1,0,0,0,
0,96,16,0,1,0,
0,0,50,0,0,15,
242,0,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,0,0,160,66,
0,0,160,66,0,0,
160,66,0,0,160,66,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,56,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,57,142,227,61,
57,142,227,61,57,142,
227,61,57,142,227,61,
65,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,50,0,0,13,
242,0,16,0,1,0,
0,0,70,14,16,128,
65,0,0,0,2,0,
0,0,2,64,0,0,
0,0,16,65,0,0,
16,65,0,0,16,65,
0,0,16,65,70,14,
16,0,1,0,0,0,
65,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,50,0,0,15,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,227,56,14,65,
227,56,14,65,227,56,
14,65,227,56,14,65,
2,64,0,0,164,141,
99,61,164,141,99,61,
164,141,99,61,164,141,
99,61,56,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,57,142,227,61,
57,142,227,61,57,142,
227,61,57,142,227,61,
65,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,50,0,0,13,
242,0,16,0,0,0,
0,0,70,14,16,128,
65,0,0,0,2,0,
0,0,2,64,0,0,
0,0,16,65,0,0,
16,65,0,0,16,65,
0,0,16,65,70,14,
16,0,0,0,0,0,
65,0,0,5,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,56,0,0,8,
114,0,16,0,2,0,
0,0,22,20,16,0,
0,0,0,0,22,132,
32,0,0,0,0,0,
4,0,0,0,26,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,10,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,64,64,0,0,
64,64,0,0,64,64,
0,0,0,0,65,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
24,0,0,7,130,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,31,0,
4,3,58,0,16,0,
2,0,0,0,24,0,
0,10,50,0,16,0,
3,0,0,0,166,10,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,0,0,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,26,0,16,0,
3,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
3,0,0,0,10,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,18,0,0,1,
24,0,0,10,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,128,63,
0,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,55,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,55,0,
0,9,66,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,21,0,
0,1,24,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
31,0,4,3,26,0,
16,0,0,0,0,0,
54,0,0,8,98,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,18,0,0,1,
24,0,0,10,242,0,
16,0,1,0,0,0,
6,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,64,64,
0,0,128,64,24,0,
0,10,114,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
160,64,0,0,192,64,
0,0,224,64,0,0,
0,0,55,0,0,9,
34,0,16,0,3,0,
0,0,42,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
1,64,0,0,0,0,
0,64,54,0,0,5,
18,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,12,146,0,16,0,
0,0,0,0,86,5,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,192,6,4,16,0,
3,0,0,0,55,0,
0,12,146,0,16,0,
0,0,0,0,6,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,6,12,16,0,
0,0,0,0,55,0,
0,12,146,0,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,0,
0,0,0,0,0,0,
0,0,6,12,16,0,
0,0,0,0,55,0,
0,12,146,0,16,0,
0,0,0,0,166,10,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,0,
0,0,0,0,0,0,
0,0,6,12,16,0,
0,0,0,0,55,0,
0,12,146,0,16,0,
0,0,0,0,86,5,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,192,0,0,0,0,
0,0,0,0,0,0,
0,0,6,12,16,0,
0,0,0,0,55,0,
0,12,98,0,16,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,191,
0,0,0,0,0,0,
0,0,6,3,16,0,
0,0,0,0,21,0,
0,1,14,0,0,11,
146,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,6,132,
32,0,0,0,0,0,
4,0,0,0,50,0,
0,9,50,0,16,0,
0,0,0,0,198,0,
16,0,0,0,0,0,
150,5,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,32,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
47,0,0,0,4,0,
0,0,0,0,0,0,
2,0,0,0,22,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,14,0,0,0,
6,0,0,0,0,0,
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
class ScalefxShadersOldScalefxPass7ShaderDef : public ShaderDef
{
public:
	ScalefxShadersOldScalefxPass7ShaderDef() : ShaderDef{}
	{
		Name = "scalefx-pass7";
		VertexByteCode = RetroArchScalefxShadersOldScalefxPass7ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScalefxShadersOldScalefxPass7ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScalefxShadersOldScalefxPass7ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScalefxShadersOldScalefxPass7ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 1));
		Samplers.push_back(ShaderSampler("sfxp3", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
