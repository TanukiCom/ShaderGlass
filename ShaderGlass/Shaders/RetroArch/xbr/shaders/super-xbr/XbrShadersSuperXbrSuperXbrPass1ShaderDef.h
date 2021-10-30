/*
ShaderGlass shader xbr-shaders-super-xbr\super-xbr-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/xbr/shaders/super-xbr/super-xbr-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.



*******  Super XBR Shader - pass1  *******

Copyright (c) 2015 Hyllian - sergiogdb@gmail.com

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



P1
|P0|B |C |P1|         C     F4          |a0|b1|c2|d3|
|D |E |F |F4|      B     F     I4       |b0|c1|d2|e3|   |e1|i1|i2|e2|
|G |H |I |I4|   P0    E  A  I     P3    |c0|d1|e2|f3|   |e3|i3|i4|e4|
|P2|H5|I5|P3|      D     H     I5       |d0|e1|f2|g3|
G     H5
P2

// settings //
// end settings //
//Skip pixels on wrong grid
 Calc edgeness in diagonal directions. 
 Calc edgeness in horizontal/vertical directions. 
 Filter weights. Two taps only. 
 Filter weights. Two taps only. 
 Filtering and normalization in four direction generating four colors. 
 Smoothly blends the two strongest directions (one in diagonal and the other in vert/horiz direction). 
 Anti-ringing code. 

*/

#pragma once

namespace RetroArchXbrShadersSuperXbrSuperXbrPass1ShaderDefs
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
68,88,66,67,158,57,
8,224,131,185,81,31,
113,213,199,232,241,235,
94,38,1,0,0,0,
184,33,0,0,5,0,
0,0,52,0,0,0,
240,3,0,0,36,4,
0,0,88,4,0,0,
28,33,0,0,82,68,
69,70,180,3,0,0,
1,0,0,0,20,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
138,3,0,0,82,68,
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
114,0,95,79,114,105,
103,105,110,97,108,95,
115,97,109,112,108,101,
114,0,83,111,117,114,
99,101,0,79,114,105,
103,105,110,97,108,0,
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
0,0,36,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,72,3,0,0,
56,0,0,0,4,0,
0,0,2,0,0,0,
36,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
92,3,0,0,60,0,
0,0,4,0,0,0,
2,0,0,0,36,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,115,3,
0,0,64,0,0,0,
4,0,0,0,2,0,
0,0,36,3,0,0,
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
114,97,109,115,95,77,
79,68,69,0,102,108,
111,97,116,0,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,28,3,0,0,
112,97,114,97,109,115,
95,88,66,82,95,69,
68,71,69,95,83,72,
80,0,112,97,114,97,
109,115,95,88,66,82,
95,84,69,88,84,85,
82,69,95,83,72,80,
0,112,97,114,97,109,
115,95,88,66,82,95,
69,68,71,69,95,83,
84,82,95,80,49,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
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
188,28,0,0,80,0,
0,0,47,7,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,5,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,90,0,0,3,
0,96,16,0,3,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,3,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,23,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,10,98,0,16,0,
0,0,0,0,6,1,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,191,
0,0,0,191,0,0,
0,0,56,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
49,0,0,7,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,42,0,16,0,
0,0,0,0,31,0,
4,3,42,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,29,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
1,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,242,0,16,0,
2,0,0,0,70,14,
16,128,65,0,0,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
50,0,0,9,242,32,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,70,14,16,0,
2,0,0,0,70,14,
16,0,1,0,0,0,
18,0,0,1,24,0,
0,11,98,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,64,0,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
55,0,0,9,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,1,64,
0,0,0,0,0,65,
49,0,0,7,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,10,0,16,0,
0,0,0,0,14,0,
0,11,50,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
70,128,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,66,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,142,0,0,11,
50,0,16,0,1,0,
0,0,50,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
134,0,16,0,1,0,
0,0,102,10,16,0,
1,0,0,0,50,0,
0,13,146,0,16,0,
0,0,0,0,6,4,
16,128,65,0,0,0,
2,0,0,0,2,64,
0,0,0,0,64,64,
0,0,0,0,0,0,
0,0,0,0,64,64,
6,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,198,0,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,50,0,
0,13,146,0,16,0,
0,0,0,0,6,4,
16,128,65,0,0,0,
1,0,0,0,2,64,
0,0,0,0,64,64,
0,0,0,0,0,0,
0,0,0,0,64,64,
6,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,198,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,12,146,0,16,0,
0,0,0,0,6,4,
16,0,1,0,0,0,
2,64,0,0,0,0,
64,64,0,0,0,0,
0,0,0,0,0,0,
64,64,6,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
198,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,12,146,0,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,2,64,0,0,
0,0,64,64,0,0,
0,0,0,0,0,0,
0,0,64,64,6,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,50,0,0,13,
146,0,16,0,0,0,
0,0,6,4,16,128,
65,0,0,0,2,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,0,0,0,0,0,
0,0,0,64,6,20,
16,0,0,0,0,0,
0,0,0,8,194,0,
16,0,1,0,0,0,
6,4,16,128,65,0,
0,0,1,0,0,0,
6,12,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,194,0,16,0,
1,0,0,0,6,4,
16,128,65,0,0,0,
2,0,0,0,6,20,
16,0,0,0,0,0,
50,0,0,13,194,0,
16,0,2,0,0,0,
6,4,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,64,0,0,
0,64,166,14,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,7,146,0,
16,0,0,0,0,0,
6,4,16,0,1,0,
0,0,6,12,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,9,0,0,0,
198,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,10,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,8,
146,0,16,0,0,0,
0,0,6,4,16,128,
65,0,0,0,1,0,
0,0,6,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,11,0,0,0,
198,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,12,146,0,
16,0,0,0,0,0,
6,4,16,0,1,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,0,0,0,0,0,
0,0,0,64,166,14,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,7,
146,0,16,0,0,0,
0,0,6,4,16,0,
1,0,0,0,6,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,13,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
146,0,16,0,0,0,
0,0,6,4,16,0,
2,0,0,0,6,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,14,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,50,0,0,13,
194,0,16,0,1,0,
0,0,6,4,16,128,
65,0,0,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,64,
0,0,0,64,6,12,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,15,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,50,0,0,12,
194,0,16,0,1,0,
0,0,6,4,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,64,0,0,0,64,
6,20,16,0,0,0,
0,0,0,0,0,8,
50,0,16,0,2,0,
0,0,70,0,16,128,
65,0,0,0,1,0,
0,0,230,10,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,12,146,0,
16,0,0,0,0,0,
6,4,16,0,1,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,0,0,0,0,0,
0,0,0,64,6,12,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,16,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,7,
146,0,16,0,0,0,
0,0,6,4,16,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,198,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
18,0,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
208,179,89,62,89,23,
55,63,152,221,147,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
1,0,0,0,70,2,
16,0,9,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,11,0,
0,0,2,64,0,0,
208,179,89,62,89,23,
55,63,152,221,147,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
4,0,0,0,70,2,
16,0,12,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,16,0,0,10,
130,0,16,0,5,0,
0,0,70,2,16,0,
13,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
16,0,0,10,130,0,
16,0,6,0,0,0,
70,2,16,0,14,0,
0,0,2,64,0,0,
208,179,89,62,89,23,
55,63,152,221,147,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
7,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,16,0,0,10,
130,0,16,0,8,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
16,0,0,10,130,0,
16,0,9,0,0,0,
70,2,16,0,16,0,
0,0,2,64,0,0,
208,179,89,62,89,23,
55,63,152,221,147,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
10,0,0,0,70,2,
16,0,15,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,0,0,0,8,
130,0,16,0,11,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,58,0,16,0,
2,0,0,0,0,0,
0,8,130,0,16,0,
12,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,128,65,0,
0,0,4,0,0,0,
0,0,0,9,130,0,
16,0,11,0,0,0,
58,0,16,128,129,0,
0,0,11,0,0,0,
58,0,16,128,129,0,
0,0,12,0,0,0,
0,0,0,8,130,0,
16,0,12,0,0,0,
58,0,16,0,6,0,
0,0,58,0,16,128,
65,0,0,0,9,0,
0,0,0,0,0,8,
130,0,16,0,11,0,
0,0,58,0,16,0,
11,0,0,0,58,0,
16,128,129,0,0,0,
12,0,0,0,0,0,
0,8,130,0,16,0,
12,0,0,0,58,0,
16,0,6,0,0,0,
58,0,16,128,65,0,
0,0,10,0,0,0,
0,0,0,8,130,0,
16,0,11,0,0,0,
58,0,16,0,11,0,
0,0,58,0,16,128,
129,0,0,0,12,0,
0,0,0,0,0,8,
130,0,16,0,12,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
7,0,0,0,0,0,
0,8,130,0,16,0,
13,0,0,0,10,0,
16,128,65,0,0,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
0,0,0,9,130,0,
16,0,12,0,0,0,
58,0,16,128,129,0,
0,0,12,0,0,0,
58,0,16,128,129,0,
0,0,13,0,0,0,
0,0,0,8,130,0,
16,0,13,0,0,0,
58,0,16,128,65,0,
0,0,1,0,0,0,
58,0,16,0,5,0,
0,0,0,0,0,8,
130,0,16,0,12,0,
0,0,58,0,16,0,
12,0,0,0,58,0,
16,128,129,0,0,0,
13,0,0,0,0,0,
0,8,130,0,16,0,
13,0,0,0,58,0,
16,0,5,0,0,0,
58,0,16,128,65,0,
0,0,8,0,0,0,
0,0,0,8,130,0,
16,0,12,0,0,0,
58,0,16,0,12,0,
0,0,58,0,16,128,
129,0,0,0,13,0,
0,0,56,0,0,7,
130,0,16,0,12,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,12,0,0,0,
50,0,0,10,130,0,
16,0,11,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
11,0,0,0,58,0,
16,128,65,0,0,0,
12,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
0,0,0,8,130,0,
16,0,8,0,0,0,
58,0,16,0,6,0,
0,0,58,0,16,128,
65,0,0,0,8,0,
0,0,0,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,128,
129,0,0,0,0,0,
0,0,58,0,16,128,
129,0,0,0,8,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,58,0,16,0,
2,0,0,0,0,0,
0,8,18,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
0,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,5,0,
0,0,58,0,16,128,
65,0,0,0,9,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,58,0,16,128,
129,0,0,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,10,0,
0,0,0,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,128,
129,0,0,0,0,0,
0,0,58,0,16,128,
129,0,0,0,1,0,
0,0,0,0,0,8,
130,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,58,0,16,0,
5,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,128,129,0,
0,0,1,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,0,6,0,
0,0,58,0,16,128,
65,0,0,0,7,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,128,129,0,0,0,
1,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,10,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
1,64,0,0,189,55,
134,53,10,128,32,0,
1,0,0,0,4,0,
0,0,14,0,0,10,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,26,0,
16,0,0,0,0,0,
56,32,0,8,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,128,
129,0,0,0,11,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,192,
1,64,0,0,0,0,
64,64,56,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
31,0,4,3,42,0,
16,0,0,0,0,0,
0,0,0,8,66,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,128,
65,0,0,0,3,0,
0,0,0,0,0,8,
130,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,128,65,0,0,0,
6,0,0,0,0,0,
0,8,130,0,16,0,
4,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,128,65,0,
0,0,5,0,0,0,
0,0,0,8,130,0,
16,0,7,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,5,0,
0,0,52,0,0,9,
130,0,16,0,4,0,
0,0,58,0,16,128,
129,0,0,0,4,0,
0,0,58,0,16,128,
129,0,0,0,7,0,
0,0,52,0,0,8,
130,0,16,0,1,0,
0,0,58,0,16,128,
129,0,0,0,1,0,
0,0,58,0,16,0,
4,0,0,0,52,0,
0,8,66,0,16,0,
0,0,0,0,42,0,
16,128,129,0,0,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,6,0,
0,0,0,0,0,8,
130,0,16,0,3,0,
0,0,58,0,16,0,
5,0,0,0,58,0,
16,128,65,0,0,0,
6,0,0,0,52,0,
0,9,130,0,16,0,
1,0,0,0,58,0,
16,128,129,0,0,0,
1,0,0,0,58,0,
16,128,129,0,0,0,
3,0,0,0,52,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,111,18,131,58,
14,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,56,32,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,85,85,
213,63,50,0,0,9,
130,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,192,
1,64,0,0,0,0,
64,64,56,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
56,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,11,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,3,0,0,0,
58,128,32,0,1,0,
0,0,3,0,0,0,
56,0,0,10,50,0,
16,0,17,0,0,0,
166,10,16,0,0,0,
0,0,2,64,0,0,
7,69,51,62,131,190,
132,61,0,0,0,0,
0,0,0,0,50,0,
0,15,194,0,16,0,
17,0,0,0,166,10,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
7,69,51,62,131,190,
132,61,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,63,
0,0,128,62,0,0,
0,7,114,0,16,0,
18,0,0,0,70,2,
16,0,9,0,0,0,
70,2,16,0,12,0,
0,0,50,0,0,12,
114,0,16,0,18,0,
0,0,70,2,16,0,
18,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,7,
114,0,16,0,18,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,0,18,0,0,0,
0,0,0,7,114,0,
16,0,19,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
13,0,0,0,50,0,
0,12,114,0,16,0,
19,0,0,0,70,2,
16,0,19,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,0,70,2,16,0,
7,0,0,0,0,0,
0,7,114,0,16,0,
19,0,0,0,70,2,
16,0,16,0,0,0,
70,2,16,0,19,0,
0,0,0,0,0,7,
114,0,16,0,20,0,
0,0,70,2,16,0,
11,0,0,0,70,2,
16,0,14,0,0,0,
50,0,0,12,114,0,
16,0,20,0,0,0,
70,2,16,0,20,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,7,114,0,
16,0,20,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
20,0,0,0,0,0,
0,7,114,0,16,0,
21,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,15,0,
0,0,50,0,0,12,
114,0,16,0,21,0,
0,0,70,2,16,0,
21,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,7,
114,0,16,0,21,0,
0,0,70,2,16,0,
6,0,0,0,70,2,
16,0,21,0,0,0,
56,0,0,7,114,0,
16,0,19,0,0,0,
246,15,16,0,17,0,
0,0,70,2,16,0,
19,0,0,0,50,0,
0,10,114,0,16,0,
18,0,0,0,86,5,
16,128,65,0,0,0,
17,0,0,0,70,2,
16,0,18,0,0,0,
70,2,16,0,19,0,
0,0,50,0,0,9,
114,0,16,0,18,0,
0,0,246,15,16,0,
17,0,0,0,70,2,
16,0,20,0,0,0,
70,2,16,0,18,0,
0,0,50,0,0,10,
114,0,16,0,18,0,
0,0,86,5,16,128,
65,0,0,0,17,0,
0,0,70,2,16,0,
21,0,0,0,70,2,
16,0,18,0,0,0,
56,0,0,10,114,0,
16,0,18,0,0,0,
70,2,16,0,18,0,
0,0,2,64,0,0,
171,170,170,62,171,170,
170,62,171,170,170,62,
0,0,0,0,0,0,
0,7,114,0,16,0,
19,0,0,0,70,2,
16,0,7,0,0,0,
70,2,16,0,8,0,
0,0,50,0,0,12,
114,0,16,0,19,0,
0,0,70,2,16,0,
19,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,7,
114,0,16,0,19,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,0,19,0,0,0,
0,0,0,7,114,0,
16,0,20,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
11,0,0,0,50,0,
0,12,114,0,16,0,
20,0,0,0,70,2,
16,0,20,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,0,70,2,16,0,
9,0,0,0,0,0,
0,7,114,0,16,0,
20,0,0,0,70,2,
16,0,15,0,0,0,
70,2,16,0,20,0,
0,0,0,0,0,7,
114,0,16,0,21,0,
0,0,70,2,16,0,
13,0,0,0,70,2,
16,0,14,0,0,0,
50,0,0,12,114,0,
16,0,21,0,0,0,
70,2,16,0,21,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,0,70,2,
16,0,12,0,0,0,
0,0,0,7,114,0,
16,0,21,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
21,0,0,0,0,0,
0,7,114,0,16,0,
22,0,0,0,70,2,
16,0,16,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,12,
114,0,16,0,22,0,
0,0,70,2,16,0,
22,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,7,
114,0,16,0,22,0,
0,0,70,2,16,0,
6,0,0,0,70,2,
16,0,22,0,0,0,
56,0,0,7,114,0,
16,0,20,0,0,0,
246,15,16,0,17,0,
0,0,70,2,16,0,
20,0,0,0,50,0,
0,10,114,0,16,0,
19,0,0,0,86,5,
16,128,65,0,0,0,
17,0,0,0,70,2,
16,0,19,0,0,0,
70,2,16,0,20,0,
0,0,50,0,0,9,
114,0,16,0,19,0,
0,0,246,15,16,0,
17,0,0,0,70,2,
16,0,21,0,0,0,
70,2,16,0,19,0,
0,0,50,0,0,10,
114,0,16,0,19,0,
0,0,86,5,16,128,
65,0,0,0,17,0,
0,0,70,2,16,0,
22,0,0,0,70,2,
16,0,19,0,0,0,
56,0,0,10,114,0,
16,0,19,0,0,0,
70,2,16,0,19,0,
0,0,2,64,0,0,
171,170,170,62,171,170,
170,62,171,170,170,62,
0,0,0,0,54,0,
0,6,66,0,16,0,
0,0,0,0,10,0,
16,128,65,0,0,0,
17,0,0,0,54,0,
0,5,130,0,16,0,
1,0,0,0,42,0,
16,0,17,0,0,0,
54,0,0,6,18,0,
16,0,17,0,0,0,
10,0,16,128,65,0,
0,0,17,0,0,0,
18,0,0,1,0,0,
0,7,114,0,16,0,
9,0,0,0,70,2,
16,0,9,0,0,0,
70,2,16,0,12,0,
0,0,0,0,0,7,
114,0,16,0,12,0,
0,0,70,2,16,0,
10,0,0,0,70,2,
16,0,13,0,0,0,
0,0,0,7,114,0,
16,0,20,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
14,0,0,0,0,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,15,0,
0,0,56,0,0,10,
114,0,16,0,12,0,
0,0,70,2,16,0,
12,0,0,0,2,64,
0,0,161,47,161,62,
161,47,161,62,161,47,
161,62,0,0,0,0,
50,0,0,12,114,0,
16,0,9,0,0,0,
70,2,16,0,9,0,
0,0,2,64,0,0,
131,190,132,189,131,190,
132,189,131,190,132,189,
0,0,0,0,70,2,
16,0,12,0,0,0,
50,0,0,12,114,0,
16,0,9,0,0,0,
70,2,16,0,20,0,
0,0,2,64,0,0,
161,47,161,62,161,47,
161,62,161,47,161,62,
0,0,0,0,70,2,
16,0,9,0,0,0,
50,0,0,12,114,0,
16,0,18,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
131,190,132,189,131,190,
132,189,131,190,132,189,
0,0,0,0,70,2,
16,0,9,0,0,0,
0,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
8,0,0,0,0,0,
0,7,114,0,16,0,
7,0,0,0,70,2,
16,0,10,0,0,0,
70,2,16,0,11,0,
0,0,0,0,0,7,
114,0,16,0,8,0,
0,0,70,2,16,0,
13,0,0,0,70,2,
16,0,14,0,0,0,
0,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,16,0,
0,0,70,2,16,0,
1,0,0,0,56,0,
0,10,114,0,16,0,
7,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,161,47,
161,62,161,47,161,62,
161,47,161,62,0,0,
0,0,50,0,0,12,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,131,190,132,189,
131,190,132,189,131,190,
132,189,0,0,0,0,
70,2,16,0,7,0,
0,0,50,0,0,12,
114,0,16,0,2,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,161,47,161,62,
161,47,161,62,161,47,
161,62,0,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,12,
114,0,16,0,19,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,131,190,132,189,
131,190,132,189,131,190,
132,189,0,0,0,0,
70,2,16,0,2,0,
0,0,54,0,0,5,
66,0,16,0,0,0,
0,0,1,64,0,0,
7,69,51,190,54,0,
0,5,130,0,16,0,
1,0,0,0,1,64,
0,0,66,209,44,63,
54,0,0,8,82,0,
16,0,17,0,0,0,
2,64,0,0,7,69,
51,190,0,0,0,0,
66,209,44,63,0,0,
0,0,21,0,0,1,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,13,0,
0,0,246,15,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,166,10,
16,0,17,0,0,0,
70,2,16,0,11,0,
0,0,70,2,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,6,0,
16,0,17,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
1,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,10,0,0,0,
246,15,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,166,10,16,0,
17,0,0,0,70,2,
16,0,14,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,6,0,16,0,
17,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,2,0,
0,0,29,0,0,7,
66,0,16,0,0,0,
0,0,58,0,16,0,
11,0,0,0,1,64,
0,0,0,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
29,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,1,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,18,0,
0,0,70,2,16,0,
19,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
18,0,0,0,50,0,
0,10,18,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,8,
226,0,16,0,0,0,
0,0,6,9,16,128,
65,0,0,0,1,0,
0,0,6,9,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
150,7,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,51,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,13,0,0,0,
70,2,16,0,14,0,
0,0,51,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,11,0,0,0,
51,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
10,0,0,0,52,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,13,0,0,0,
70,2,16,0,14,0,
0,0,52,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,11,0,0,0,
52,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
10,0,0,0,52,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,51,0,0,7,
114,32,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,21,0,0,1,
62,0,0,1,83,84,
65,84,148,0,0,0,
211,0,0,0,23,0,
0,0,0,0,0,0,
2,0,0,0,173,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,18,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,8,0,
0,0,1,0,0,0,
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

}

namespace RetroArch
{
class XbrShadersSuperXbrSuperXbrPass1ShaderDef : public ShaderDef
{
public:
	XbrShadersSuperXbrSuperXbrPass1ShaderDef() : ShaderDef{}
	{
		Name = "super-xbr-pass1";
		VertexByteCode = RetroArchXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("XBR_EDGE_STR_P1", -1, 64, 4, 0.000000f, 5.000000f, 0.000000f, 0.500000f, "Xbr - Edge Strength p1"));
		Params.push_back(ShaderParam("MODE", -1, 52, 4, 0.000000f, 2.000000f, 0.000000f, 1.000000f, "Mode - Normal, Details, Adaptive"));
		Params.push_back(ShaderParam("XBR_EDGE_SHP", -1, 56, 4, 0.000000f, 3.000000f, 0.400000f, 0.100000f, "Adaptive Dynamic Edge Sharp"));
		Params.push_back(ShaderParam("XBR_TEXTURE_SHP", -1, 60, 4, 0.000000f, 2.000000f, 1.000000f, 0.100000f, "Adaptive Static Edge Sharp"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Original", 3));
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
