/*
ShaderGlass shader scalefx-shaders\scalefx-pass2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scalefx/shaders/scalefx-pass2.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


ScaleFX - Pass 2
by Sp00kyFox, 2017-03-01

Filter:	Nearest
Scale:	1x

ScaleFX is an edge interpolation algorithm specialized in pixel art. It was
originally intended as an improvement upon Scale3x but became a new filter in
its own right.
ScaleFX interpolates edges up to level 6 and makes smooth transitions between
different slopes. The filtered picture will only consist of colours present
in the original.

Pass 2 resolves ambiguous configurations of corner candidates at pixel junctions.



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


// corner dominance at junctions
// necessary but not sufficient junction condition for orthogonal edges
	grid		metric		pattern

A B C		x y z		x y
D E F		  o w		w z
G H I

// metric data
// strength data
// strength & dominance junctions
// majority vote for ambiguous dominance junctions
// inject strength without creating new contradictions
// single pixel & end of line detection
// output

*/

#pragma once

namespace RetroArchScalefxShadersScalefxPass2ShaderDefs
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
68,88,66,67,176,169,
151,218,252,226,172,174,
77,90,29,80,190,3,
238,118,1,0,0,0,
192,29,0,0,5,0,
0,0,52,0,0,0,
92,1,0,0,144,1,
0,0,196,1,0,0,
36,29,0,0,82,68,
69,70,32,1,0,0,
0,0,0,0,0,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
248,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
188,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,1,0,
0,0,204,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,1,0,0,0,
1,0,0,0,227,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
1,0,0,0,1,0,
0,0,13,0,0,0,
234,0,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,2,0,0,0,
1,0,0,0,13,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
95,115,99,97,108,101,
102,120,95,112,97,115,
115,48,95,115,97,109,
112,108,101,114,0,83,
111,117,114,99,101,0,
115,99,97,108,101,102,
120,95,112,97,115,115,
48,0,77,105,99,114,
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
88,27,0,0,80,0,
0,0,214,6,0,0,
106,8,0,1,90,0,
0,3,0,96,16,0,
1,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
1,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,15,0,
0,0,69,0,0,140,
1,62,0,128,194,0,
0,128,67,85,21,0,
178,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,134,119,
16,0,1,0,0,0,
0,96,16,0,1,0,
0,0,54,0,0,5,
130,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,54,0,
0,5,130,0,16,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
69,0,0,140,1,30,
0,128,194,0,0,128,
67,85,21,0,242,0,
16,0,3,0,0,0,
70,16,16,0,0,0,
0,0,150,115,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
54,0,0,5,130,0,
16,0,4,0,0,0,
10,0,16,0,3,0,
0,0,54,0,0,5,
18,0,16,0,1,0,
0,0,58,0,16,0,
4,0,0,0,69,0,
0,140,1,32,0,128,
194,0,0,128,67,85,
21,0,242,0,16,0,
5,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,54,0,
0,5,130,0,16,0,
6,0,0,0,26,0,
16,0,5,0,0,0,
54,0,0,5,66,0,
16,0,2,0,0,0,
58,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,1,0,
0,0,58,0,16,0,
5,0,0,0,54,0,
0,5,18,0,16,0,
2,0,0,0,42,0,
16,0,3,0,0,0,
69,0,0,140,1,0,
0,128,194,0,0,128,
67,85,21,0,242,0,
16,0,7,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
54,0,0,5,18,0,
16,0,6,0,0,0,
42,0,16,0,7,0,
0,0,54,0,0,5,
34,0,16,0,1,0,
0,0,10,0,16,0,
6,0,0,0,54,0,
0,5,66,0,16,0,
4,0,0,0,10,0,
16,0,7,0,0,0,
54,0,0,5,34,0,
16,0,2,0,0,0,
42,0,16,0,4,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
0,0,0,7,130,0,
16,0,5,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
8,0,0,0,26,0,
16,0,3,0,0,0,
54,0,0,5,18,0,
16,0,0,0,0,0,
58,0,16,0,8,0,
0,0,54,0,0,5,
130,0,16,0,9,0,
0,0,10,0,16,0,
5,0,0,0,54,0,
0,5,66,0,16,0,
0,0,0,0,58,0,
16,0,9,0,0,0,
54,0,0,5,66,0,
16,0,3,0,0,0,
58,0,16,0,7,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,50,0,
0,13,242,0,16,0,
1,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,64,70,14,16,128,
65,0,0,0,1,0,
0,0,0,0,0,7,
242,0,16,0,10,0,
0,0,54,3,16,0,
1,0,0,0,150,9,
16,0,1,0,0,0,
29,0,0,10,242,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
1,0,0,0,29,0,
0,7,242,0,16,0,
10,0,0,0,70,14,
16,0,10,0,0,0,
182,11,16,0,10,0,
0,0,55,0,0,15,
242,0,16,0,10,0,
0,0,70,14,16,0,
10,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,128,191,
2,64,0,0,0,0,
0,128,0,0,0,128,
0,0,0,128,0,0,
0,128,1,0,0,10,
242,0,16,0,11,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
50,0,0,9,242,0,
16,0,10,0,0,0,
150,9,16,0,11,0,
0,0,54,3,16,0,
11,0,0,0,70,14,
16,0,10,0,0,0,
0,0,0,10,242,0,
16,0,10,0,0,0,
70,14,16,0,10,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,51,0,
0,10,242,0,16,0,
10,0,0,0,70,14,
16,0,10,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,55,0,0,12,
242,0,16,0,1,0,
0,0,134,7,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
134,7,16,0,10,0,
0,0,0,0,0,7,
18,0,16,0,5,0,
0,0,26,0,16,0,
3,0,0,0,10,0,
16,0,5,0,0,0,
29,0,0,7,18,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,58,0,16,0,
5,0,0,0,55,0,
0,9,18,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
1,64,0,0,0,0,
128,191,1,64,0,0,
0,0,0,128,0,0,
0,7,18,0,16,0,
5,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,5,0,
0,0,0,0,0,7,
18,0,16,0,5,0,
0,0,10,0,16,0,
5,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,11,50,0,
16,0,10,0,0,0,
70,0,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,56,0,0,7,
130,0,16,0,5,0,
0,0,26,0,16,0,
10,0,0,0,10,0,
16,0,10,0,0,0,
56,0,0,7,18,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,58,0,16,0,
5,0,0,0,29,0,
0,10,242,0,16,0,
10,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
70,14,16,0,7,0,
0,0,55,0,0,9,
18,0,16,0,5,0,
0,0,58,0,16,0,
10,0,0,0,1,64,
0,0,0,0,0,0,
10,0,16,0,5,0,
0,0,0,0,0,7,
18,0,16,0,5,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,5,0,0,0,
51,0,0,7,130,0,
16,0,11,0,0,0,
10,0,16,0,5,0,
0,0,1,64,0,0,
0,0,128,63,54,0,
0,5,130,0,16,0,
0,0,0,0,42,0,
16,0,5,0,0,0,
54,0,0,5,66,0,
16,0,8,0,0,0,
26,0,16,0,7,0,
0,0,54,0,0,5,
130,0,16,0,12,0,
0,0,42,0,16,0,
8,0,0,0,54,0,
0,5,18,0,16,0,
9,0,0,0,58,0,
16,0,12,0,0,0,
69,0,0,140,1,34,
0,128,194,0,0,128,
67,85,21,0,210,0,
16,0,5,0,0,0,
70,16,16,0,0,0,
0,0,134,125,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
54,0,0,5,66,0,
16,0,9,0,0,0,
58,0,16,0,5,0,
0,0,54,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
5,0,0,0,69,0,
0,140,1,2,0,128,
194,0,0,128,67,85,
21,0,242,0,16,0,
13,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,54,0,
0,5,66,0,16,0,
12,0,0,0,10,0,
16,0,13,0,0,0,
54,0,0,5,18,0,
16,0,0,0,0,0,
42,0,16,0,12,0,
0,0,54,0,0,5,
34,0,16,0,9,0,
0,0,42,0,16,0,
13,0,0,0,0,0,
0,7,242,0,16,0,
0,0,0,0,22,14,
16,0,0,0,0,0,
70,14,16,0,9,0,
0,0,54,0,0,5,
66,0,16,0,6,0,
0,0,10,0,16,0,
5,0,0,0,0,0,
0,7,18,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
42,0,16,0,7,0,
0,0,54,0,0,5,
130,0,16,0,2,0,
0,0,58,0,16,0,
13,0,0,0,54,0,
0,5,34,0,16,0,
6,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,13,242,0,
16,0,0,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,64,70,14,
16,128,65,0,0,0,
0,0,0,0,0,0,
0,7,242,0,16,0,
9,0,0,0,54,3,
16,0,0,0,0,0,
150,9,16,0,0,0,
0,0,29,0,0,10,
242,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
29,0,0,7,242,0,
16,0,9,0,0,0,
70,14,16,0,9,0,
0,0,182,11,16,0,
9,0,0,0,55,0,
0,15,242,0,16,0,
9,0,0,0,70,14,
16,0,9,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,128,191,0,0,
128,191,2,64,0,0,
0,0,0,128,0,0,
0,128,0,0,0,128,
0,0,0,128,1,0,
0,10,242,0,16,0,
14,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,50,0,0,9,
242,0,16,0,9,0,
0,0,150,9,16,0,
14,0,0,0,54,3,
16,0,14,0,0,0,
70,14,16,0,9,0,
0,0,0,0,0,10,
242,0,16,0,9,0,
0,0,70,14,16,0,
9,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
51,0,0,10,242,0,
16,0,9,0,0,0,
70,14,16,0,9,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,55,0,
0,12,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
9,0,0,0,0,0,
0,7,34,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
58,0,16,0,13,0,
0,0,29,0,0,7,
18,0,16,0,5,0,
0,0,26,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
55,0,0,9,18,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,1,64,0,0,
0,0,128,191,1,64,
0,0,0,0,0,128,
0,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
5,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,11,
162,0,16,0,0,0,
0,0,246,7,16,128,
65,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,0,0,
0,0,128,63,56,0,
0,7,34,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
55,0,0,9,34,0,
16,0,0,0,0,0,
42,0,16,0,10,0,
0,0,1,64,0,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,54,0,
0,5,66,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
51,0,0,7,66,0,
16,0,11,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,54,0,
0,5,130,0,16,0,
6,0,0,0,26,0,
16,0,13,0,0,0,
69,0,0,140,1,226,
1,128,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,134,119,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
54,0,0,5,66,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,54,0,0,5,
66,0,16,0,6,0,
0,0,10,0,16,0,
0,0,0,0,69,0,
0,140,1,224,1,128,
194,0,0,128,67,85,
21,0,242,0,16,0,
5,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,54,0,
0,5,34,0,16,0,
4,0,0,0,58,0,
16,0,5,0,0,0,
54,0,0,5,34,0,
16,0,6,0,0,0,
26,0,16,0,4,0,
0,0,54,0,0,5,
18,0,16,0,2,0,
0,0,26,0,16,0,
5,0,0,0,0,0,
0,7,242,0,16,0,
2,0,0,0,150,3,
16,0,6,0,0,0,
134,7,16,0,2,0,
0,0,54,0,0,5,
34,0,16,0,12,0,
0,0,42,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,7,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,3,0,
0,0,42,0,16,0,
5,0,0,0,54,0,
0,5,18,0,16,0,
12,0,0,0,26,0,
16,0,3,0,0,0,
50,0,0,13,242,0,
16,0,2,0,0,0,
70,14,16,0,12,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,64,70,14,
16,128,65,0,0,0,
2,0,0,0,0,0,
0,7,242,0,16,0,
6,0,0,0,54,3,
16,0,2,0,0,0,
150,9,16,0,2,0,
0,0,29,0,0,10,
242,0,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,70,14,
16,0,2,0,0,0,
29,0,0,7,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,182,11,16,0,
6,0,0,0,55,0,
0,15,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,128,191,0,0,
128,191,2,64,0,0,
0,0,0,128,0,0,
0,128,0,0,0,128,
0,0,0,128,1,0,
0,10,242,0,16,0,
9,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,50,0,0,9,
242,0,16,0,6,0,
0,0,150,9,16,0,
9,0,0,0,54,3,
16,0,9,0,0,0,
70,14,16,0,6,0,
0,0,0,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
51,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,55,0,
0,12,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
6,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,10,0,
16,0,13,0,0,0,
42,0,16,0,5,0,
0,0,29,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,191,1,64,
0,0,0,0,0,128,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,11,
98,0,16,0,0,0,
0,0,166,8,16,128,
65,0,0,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
26,0,16,0,10,0,
0,0,1,64,0,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,54,0,
0,5,34,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
51,0,0,7,34,0,
16,0,11,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,3,0,0,0,
58,0,16,0,5,0,
0,0,54,0,0,5,
34,0,16,0,8,0,
0,0,10,0,16,0,
5,0,0,0,69,0,
0,140,1,254,1,128,
194,0,0,128,67,85,
21,0,226,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,54,0,
0,5,18,0,16,0,
3,0,0,0,26,0,
16,0,0,0,0,0,
54,0,0,5,18,0,
16,0,8,0,0,0,
58,0,16,0,0,0,
0,0,0,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
8,0,0,0,70,14,
16,0,3,0,0,0,
54,0,0,5,18,0,
16,0,4,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
7,0,0,0,42,0,
16,0,0,0,0,0,
29,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,191,1,64,0,0,
0,0,0,128,50,0,
0,13,242,0,16,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,64,70,14,16,128,
65,0,0,0,2,0,
0,0,0,0,0,7,
242,0,16,0,3,0,
0,0,54,3,16,0,
2,0,0,0,150,9,
16,0,2,0,0,0,
29,0,0,10,242,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
2,0,0,0,29,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
182,11,16,0,3,0,
0,0,55,0,0,15,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,128,191,
2,64,0,0,0,0,
0,128,0,0,0,128,
0,0,0,128,0,0,
0,128,1,0,0,10,
242,0,16,0,4,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
50,0,0,9,242,0,
16,0,3,0,0,0,
150,9,16,0,4,0,
0,0,54,3,16,0,
4,0,0,0,70,14,
16,0,3,0,0,0,
0,0,0,10,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,51,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,55,0,0,12,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
70,14,16,0,3,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,11,98,0,16,0,
0,0,0,0,86,7,
16,128,65,0,0,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,0,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
10,0,0,0,1,64,
0,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
54,0,0,5,18,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,51,0,0,7,
18,0,16,0,11,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
50,0,0,13,242,0,
16,0,0,0,0,0,
54,3,16,128,65,0,
0,0,11,0,0,0,
150,9,16,0,11,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,56,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,11,0,0,0,
51,0,0,10,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,69,0,
0,140,1,2,0,128,
194,0,0,128,67,85,
21,0,50,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,140,1,224,1,128,
194,0,0,128,67,85,
21,0,66,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,123,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,51,0,
0,7,130,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,69,0,0,140,
1,0,0,128,194,0,
0,128,67,85,21,0,
242,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,22,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
18,0,16,0,3,0,
0,0,10,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
52,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,10,0,16,0,
3,0,0,0,29,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,51,0,0,7,
50,0,16,0,3,0,
0,0,86,5,16,0,
1,0,0,0,54,15,
16,0,2,0,0,0,
51,0,0,7,50,0,
16,0,4,0,0,0,
166,10,16,0,1,0,
0,0,198,0,16,0,
2,0,0,0,52,0,
0,7,34,0,16,0,
1,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,29,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
1,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,0,
0,7,34,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,69,0,0,140,
1,62,0,128,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,16,16,0,
0,0,0,0,150,115,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
130,0,16,0,5,0,
0,0,10,0,16,0,
5,0,0,0,42,0,
16,0,5,0,0,0,
69,0,0,140,1,30,
0,128,194,0,0,128,
67,85,21,0,114,0,
16,0,6,0,0,0,
70,16,16,0,0,0,
0,0,150,115,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,140,1,32,
0,128,194,0,0,128,
67,85,21,0,242,0,
16,0,7,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
51,0,0,7,130,0,
16,0,6,0,0,0,
42,0,16,0,6,0,
0,0,26,0,16,0,
7,0,0,0,52,0,
0,7,130,0,16,0,
5,0,0,0,58,0,
16,0,5,0,0,0,
58,0,16,0,6,0,
0,0,29,0,0,7,
130,0,16,0,5,0,
0,0,10,0,16,0,
7,0,0,0,58,0,
16,0,5,0,0,0,
51,0,0,7,146,0,
16,0,4,0,0,0,
6,8,16,0,5,0,
0,0,166,10,16,0,
6,0,0,0,51,0,
0,7,146,0,16,0,
3,0,0,0,166,2,
16,0,5,0,0,0,
86,5,16,0,7,0,
0,0,52,0,0,7,
18,0,16,0,5,0,
0,0,10,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
29,0,0,7,18,0,
16,0,5,0,0,0,
26,0,16,0,5,0,
0,0,10,0,16,0,
5,0,0,0,1,0,
0,7,18,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
58,0,16,0,5,0,
0,0,1,0,0,7,
130,0,16,0,1,0,
0,0,10,0,16,0,
5,0,0,0,1,64,
0,0,0,0,128,63,
69,0,0,140,1,254,
1,128,194,0,0,128,
67,85,21,0,18,0,
16,0,5,0,0,0,
70,16,16,0,0,0,
0,0,54,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
51,0,0,7,98,0,
16,0,5,0,0,0,
6,2,16,0,6,0,
0,0,6,0,16,0,
5,0,0,0,51,0,
0,7,18,0,16,0,
5,0,0,0,10,0,
16,0,2,0,0,0,
10,0,16,0,5,0,
0,0,51,0,0,7,
50,0,16,0,8,0,
0,0,6,0,16,0,
2,0,0,0,38,10,
16,0,6,0,0,0,
52,0,0,7,34,0,
16,0,5,0,0,0,
26,0,16,0,5,0,
0,0,10,0,16,0,
8,0,0,0,54,0,
0,5,18,0,16,0,
4,0,0,0,42,0,
16,0,5,0,0,0,
54,0,0,5,18,0,
16,0,3,0,0,0,
26,0,16,0,8,0,
0,0,29,0,0,7,
34,0,16,0,5,0,
0,0,26,0,16,0,
6,0,0,0,26,0,
16,0,5,0,0,0,
51,0,0,7,66,0,
16,0,5,0,0,0,
10,0,16,0,6,0,
0,0,42,0,16,0,
6,0,0,0,54,0,
0,5,146,0,16,0,
6,0,0,0,166,10,
16,0,6,0,0,0,
52,0,0,7,18,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,42,0,16,0,
5,0,0,0,29,0,
0,7,34,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,5,0,
0,0,1,0,0,7,
34,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,26,0,
16,0,5,0,0,0,
1,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
0,0,128,63,51,0,
0,7,50,0,16,0,
5,0,0,0,246,15,
16,0,2,0,0,0,
214,5,16,0,7,0,
0,0,69,0,0,140,
1,34,0,128,194,0,
0,128,67,85,21,0,
194,0,16,0,5,0,
0,0,70,16,16,0,
0,0,0,0,230,116,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,51,0,0,7,
50,0,16,0,8,0,
0,0,246,15,16,0,
5,0,0,0,118,15,
16,0,7,0,0,0,
52,0,0,7,34,0,
16,0,2,0,0,0,
10,0,16,0,5,0,
0,0,10,0,16,0,
8,0,0,0,54,0,
0,5,66,0,16,0,
4,0,0,0,26,0,
16,0,5,0,0,0,
54,0,0,5,66,0,
16,0,3,0,0,0,
26,0,16,0,8,0,
0,0,29,0,0,7,
34,0,16,0,2,0,
0,0,42,0,16,0,
7,0,0,0,26,0,
16,0,2,0,0,0,
51,0,0,7,18,0,
16,0,5,0,0,0,
26,0,16,0,7,0,
0,0,58,0,16,0,
7,0,0,0,54,0,
0,5,66,0,16,0,
2,0,0,0,26,0,
16,0,7,0,0,0,
51,0,0,7,34,0,
16,0,5,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
5,0,0,0,52,0,
0,7,18,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
26,0,16,0,5,0,
0,0,29,0,0,7,
18,0,16,0,5,0,
0,0,42,0,16,0,
5,0,0,0,10,0,
16,0,5,0,0,0,
1,0,0,7,34,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,10,0,16,0,
5,0,0,0,1,0,
0,7,66,0,16,0,
1,0,0,0,26,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
128,63,29,0,0,7,
242,0,16,0,5,0,
0,0,70,14,16,0,
4,0,0,0,70,14,
16,0,3,0,0,0,
55,0,0,12,242,0,
16,0,5,0,0,0,
70,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,128,64,50,0,
0,12,242,0,16,0,
0,0,0,0,70,14,
16,0,5,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,64,70,14,16,0,
0,0,0,0,29,0,
0,7,242,0,16,0,
5,0,0,0,70,14,
16,0,3,0,0,0,
70,14,16,0,4,0,
0,0,55,0,0,12,
242,0,16,0,1,0,
0,0,70,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
70,14,16,0,1,0,
0,0,0,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
54,0,0,5,98,0,
16,0,6,0,0,0,
246,15,16,0,2,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,6,10,16,0,
2,0,0,0,70,14,
16,0,3,0,0,0,
0,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,4,0,
0,0,70,14,16,0,
6,0,0,0,29,0,
0,7,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,55,0,0,15,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,65,0,0,0,65,
0,0,0,65,0,0,
0,65,0,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
137,136,136,61,137,136,
136,61,137,136,136,61,
137,136,136,61,62,0,
0,1,83,84,65,84,
148,0,0,0,221,0,
0,0,15,0,0,0,
0,0,0,0,2,0,
0,0,119,0,0,0,
0,0,0,0,12,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
17,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,53,0,0,0,
19,0,0,0,0,0,
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
class ScalefxShadersScalefxPass2ShaderDef : public ShaderDef
{
public:
	ScalefxShadersScalefxPass2ShaderDef() : ShaderDef{}
	{
		Name = "scalefx-pass2";
		VertexByteCode = RetroArchScalefxShadersScalefxPass2ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScalefxShadersScalefxPass2ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScalefxShadersScalefxPass2ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScalefxShadersScalefxPass2ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("scalefx_pass0", 2));
		Samplers.push_back(ShaderSampler("Source", 1));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
