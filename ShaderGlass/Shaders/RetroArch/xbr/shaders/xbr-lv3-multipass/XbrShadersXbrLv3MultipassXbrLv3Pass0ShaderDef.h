/*
ShaderGlass shader xbr-shaders-xbr-lv3-multipass\xbr-lv3-pass0 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/xbr/shaders/xbr-lv3-multipass/xbr-lv3-pass0.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's xBR level 3 pass0 Shader

Copyright (C) 2011-2015 Hyllian - sergiogdb@gmail.com

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


Incorporates some of the ideas from SABR shader. Thanks to Joshua Street.

//    A1 B1 C1
// A0  A  B  C C4
// D0  D  E  F F4
// G0  G  H  I I4
//    G5 H5 I5

*/

#pragma once

namespace RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,81,18,
63,196,248,189,201,193,
234,8,145,248,76,160,
48,205,1,0,0,0,
188,8,0,0,5,0,
0,0,52,0,0,0,
192,2,0,0,12,3,
0,0,12,4,0,0,
32,8,0,0,82,68,
69,70,132,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
92,2,0,0,82,68,
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
0,0,4,0,0,0,
24,1,0,0,64,0,
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
235,0,0,0,184,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,212,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,248,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
212,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
12,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,212,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,56,2,0,0,
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
0,0,202,1,0,0,
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
48,2,0,0,77,105,
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
79,83,71,78,248,0,
0,0,9,0,0,0,
8,0,0,0,224,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,224,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,224,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,224,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,0,0,0,224,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,0,0,0,224,0,
0,0,5,0,0,0,
0,0,0,0,3,0,
0,0,5,0,0,0,
15,0,0,0,224,0,
0,0,6,0,0,0,
0,0,0,0,3,0,
0,0,6,0,0,0,
15,0,0,0,224,0,
0,0,7,0,0,0,
0,0,0,0,3,0,
0,0,7,0,0,0,
15,0,0,0,233,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,8,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,12,4,0,0,
80,0,1,0,3,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,1,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,3,0,
0,0,101,0,0,3,
242,32,16,0,4,0,
0,0,101,0,0,3,
242,32,16,0,5,0,
0,0,101,0,0,3,
242,32,16,0,6,0,
0,0,101,0,0,3,
242,32,16,0,7,0,
0,0,103,0,0,4,
242,32,16,0,8,0,
0,0,1,0,0,0,
104,0,0,2,2,0,
0,0,56,0,0,10,
50,0,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,2,64,
0,0,27,13,128,63,
27,13,128,63,0,0,
0,0,0,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,14,0,
0,11,114,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
70,129,32,0,1,0,
0,0,0,0,0,0,
56,0,0,10,210,0,
16,0,0,0,0,0,
6,8,16,0,1,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
0,0,0,0,128,63,
0,0,0,192,50,0,
0,12,242,32,16,0,
1,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,27,13,
128,63,27,13,128,63,
27,13,128,63,27,13,
128,63,70,14,16,0,
0,0,0,0,54,0,
0,6,130,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,50,0,
0,12,242,32,16,0,
2,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,27,13,
128,63,27,13,128,63,
27,13,128,63,27,13,
128,63,70,14,16,0,
0,0,0,0,50,0,
0,12,242,32,16,0,
3,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,27,13,
128,63,27,13,128,63,
27,13,128,63,27,13,
128,63,70,6,16,0,
0,0,0,0,54,0,
0,5,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
50,0,0,12,242,32,
16,0,4,0,0,0,
6,20,16,0,1,0,
0,0,2,64,0,0,
27,13,128,63,27,13,
128,63,27,13,128,63,
27,13,128,63,70,14,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,12,242,32,16,0,
5,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,27,13,
128,63,27,13,128,63,
27,13,128,63,27,13,
128,63,70,14,16,0,
0,0,0,0,56,0,
0,10,178,0,16,0,
0,0,0,0,134,8,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,192,0,0,128,191,
0,0,0,0,0,0,
128,63,56,0,0,10,
178,0,16,0,1,0,
0,0,70,8,16,0,
1,0,0,0,2,64,
0,0,0,0,0,64,
0,0,128,191,0,0,
0,0,0,0,128,63,
54,0,0,5,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,12,
242,32,16,0,6,0,
0,0,70,21,16,0,
1,0,0,0,2,64,
0,0,27,13,128,63,
27,13,128,63,27,13,
128,63,27,13,128,63,
70,14,16,0,0,0,
0,0,54,0,0,5,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,12,242,32,16,0,
7,0,0,0,70,21,
16,0,1,0,0,0,
2,64,0,0,27,13,
128,63,27,13,128,63,
27,13,128,63,27,13,
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
242,32,16,0,8,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
24,0,0,0,2,0,
0,0,0,0,0,0,
11,0,0,0,18,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,5,0,
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
68,88,66,67,52,30,
1,155,2,219,250,144,
235,22,129,244,147,190,
71,68,1,0,0,0,
232,34,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,212,1,
0,0,8,2,0,0,
76,34,0,0,82,68,
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
212,0,0,0,8,0,
0,0,8,0,0,0,
200,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
200,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
200,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,15,0,0,
200,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,15,0,0,
200,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,15,15,0,0,
200,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
0,0,15,15,0,0,
200,0,0,0,6,0,
0,0,0,0,0,0,
3,0,0,0,6,0,
0,0,15,15,0,0,
200,0,0,0,7,0,
0,0,0,0,0,0,
3,0,0,0,7,0,
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
69,88,60,32,0,0,
80,0,0,0,15,8,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,242,16,16,0,
1,0,0,0,98,16,
0,3,242,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,98,16,
0,3,242,16,16,0,
4,0,0,0,98,16,
0,3,242,16,16,0,
5,0,0,0,98,16,
0,3,242,16,16,0,
6,0,0,0,98,16,
0,3,242,16,16,0,
7,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,21,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,198,16,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,214,21,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,26,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,198,16,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,214,21,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
230,26,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,198,16,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,214,21,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
230,26,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,9,0,
0,0,198,16,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,214,21,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,11,0,0,0,
230,26,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,198,16,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
13,0,0,0,214,21,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,14,0,0,0,
230,26,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,15,0,
0,0,70,16,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,134,16,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,17,0,0,0,
198,16,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,18,0,
0,0,70,16,16,0,
7,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
19,0,0,0,134,16,
16,0,7,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,20,0,0,0,
198,16,16,0,7,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,66,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,130,0,16,0,
4,0,0,0,70,2,
16,0,6,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
18,0,16,0,4,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,34,0,
16,0,4,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,34,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
66,0,16,0,5,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,130,0,
16,0,5,0,0,0,
70,2,16,0,9,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,18,0,16,0,
5,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,20,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,18,0,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
34,0,16,0,3,0,
0,0,70,2,16,0,
15,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,66,0,
16,0,3,0,0,0,
70,2,16,0,12,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,14,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
66,0,16,0,2,0,
0,0,70,2,16,0,
18,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,130,0,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,18,0,16,0,
2,0,0,0,70,2,
16,0,17,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
130,0,16,0,6,0,
0,0,70,2,16,0,
13,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,18,0,
16,0,6,0,0,0,
70,2,16,0,19,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,34,0,16,0,
6,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
66,0,16,0,6,0,
0,0,70,2,16,0,
16,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
57,0,0,7,242,0,
16,0,1,0,0,0,
150,3,16,0,4,0,
0,0,246,15,16,0,
0,0,0,0,1,0,
0,7,242,0,16,0,
1,0,0,0,54,9,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,0,0,0,8,
242,0,16,0,7,0,
0,0,150,3,16,0,
4,0,0,0,70,14,
16,128,65,0,0,0,
6,0,0,0,0,0,
0,8,242,0,16,0,
8,0,0,0,150,3,
16,128,65,0,0,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
29,0,0,11,242,0,
16,0,7,0,0,0,
70,14,16,128,129,0,
0,0,7,0,0,0,
2,64,0,0,0,0,
112,65,0,0,112,65,
0,0,112,65,0,0,
112,65,29,0,0,11,
242,0,16,0,9,0,
0,0,70,14,16,128,
129,0,0,0,8,0,
0,0,2,64,0,0,
0,0,112,65,0,0,
112,65,0,0,112,65,
0,0,112,65,1,0,
0,7,242,0,16,0,
9,0,0,0,54,9,
16,0,7,0,0,0,
70,14,16,0,9,0,
0,0,0,0,0,8,
242,0,16,0,10,0,
0,0,54,9,16,128,
65,0,0,0,4,0,
0,0,70,14,16,0,
4,0,0,0,0,0,
0,8,242,0,16,0,
11,0,0,0,70,14,
16,0,4,0,0,0,
54,9,16,128,65,0,
0,0,5,0,0,0,
29,0,0,11,242,0,
16,0,12,0,0,0,
70,14,16,128,129,0,
0,0,10,0,0,0,
2,64,0,0,0,0,
112,65,0,0,112,65,
0,0,112,65,0,0,
112,65,29,0,0,11,
242,0,16,0,11,0,
0,0,70,14,16,128,
129,0,0,0,11,0,
0,0,2,64,0,0,
0,0,112,65,0,0,
112,65,0,0,112,65,
0,0,112,65,1,0,
0,7,242,0,16,0,
11,0,0,0,70,14,
16,0,11,0,0,0,
70,14,16,0,12,0,
0,0,0,0,0,8,
242,0,16,0,12,0,
0,0,54,9,16,128,
65,0,0,0,3,0,
0,0,150,3,16,0,
4,0,0,0,29,0,
0,11,242,0,16,0,
13,0,0,0,70,14,
16,128,129,0,0,0,
12,0,0,0,2,64,
0,0,0,0,112,65,
0,0,112,65,0,0,
112,65,0,0,112,65,
1,0,0,7,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,70,14,16,0,
13,0,0,0,0,0,
0,8,242,0,16,0,
13,0,0,0,230,4,
16,128,65,0,0,0,
4,0,0,0,150,3,
16,0,4,0,0,0,
0,0,0,8,242,0,
16,0,14,0,0,0,
150,3,16,0,4,0,
0,0,150,3,16,128,
65,0,0,0,5,0,
0,0,29,0,0,11,
242,0,16,0,15,0,
0,0,70,14,16,128,
129,0,0,0,13,0,
0,0,2,64,0,0,
0,0,112,65,0,0,
112,65,0,0,112,65,
0,0,112,65,29,0,
0,11,242,0,16,0,
14,0,0,0,70,14,
16,128,129,0,0,0,
14,0,0,0,2,64,
0,0,0,0,112,65,
0,0,112,65,0,0,
112,65,0,0,112,65,
1,0,0,7,242,0,
16,0,14,0,0,0,
70,14,16,0,14,0,
0,0,70,14,16,0,
15,0,0,0,0,0,
0,8,242,0,16,0,
15,0,0,0,70,14,
16,128,65,0,0,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
49,0,0,11,242,0,
16,0,16,0,0,0,
70,14,16,128,129,0,
0,0,15,0,0,0,
2,64,0,0,0,0,
112,65,0,0,112,65,
0,0,112,65,0,0,
112,65,60,0,0,7,
242,0,16,0,7,0,
0,0,70,14,16,0,
9,0,0,0,70,14,
16,0,7,0,0,0,
1,0,0,7,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,70,14,16,0,
16,0,0,0,60,0,
0,7,242,0,16,0,
9,0,0,0,182,11,
16,0,16,0,0,0,
22,1,16,0,16,0,
0,0,60,0,0,7,
242,0,16,0,7,0,
0,0,70,14,16,0,
7,0,0,0,70,14,
16,0,9,0,0,0,
60,0,0,7,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,70,14,16,0,
11,0,0,0,60,0,
0,7,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
70,14,16,0,14,0,
0,0,57,0,0,7,
242,0,16,0,9,0,
0,0,54,9,16,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
57,0,0,7,242,0,
16,0,11,0,0,0,
54,9,16,0,4,0,
0,0,54,9,16,0,
5,0,0,0,1,0,
0,7,242,0,16,0,
11,0,0,0,70,14,
16,0,9,0,0,0,
70,14,16,0,11,0,
0,0,57,0,0,7,
242,0,16,0,14,0,
0,0,230,4,16,0,
4,0,0,0,150,3,
16,0,5,0,0,0,
1,0,0,7,242,0,
16,0,9,0,0,0,
230,4,16,0,9,0,
0,0,70,14,16,0,
14,0,0,0,57,0,
0,7,242,0,16,0,
14,0,0,0,246,15,
16,0,0,0,0,0,
70,14,16,0,2,0,
0,0,57,0,0,7,
242,0,16,0,16,0,
0,0,70,14,16,0,
2,0,0,0,230,4,
16,0,6,0,0,0,
1,0,0,7,242,0,
16,0,14,0,0,0,
70,14,16,0,14,0,
0,0,70,14,16,0,
16,0,0,0,57,0,
0,7,242,0,16,0,
16,0,0,0,246,15,
16,0,0,0,0,0,
70,14,16,0,3,0,
0,0,57,0,0,7,
242,0,16,0,17,0,
0,0,70,14,16,0,
3,0,0,0,150,3,
16,0,6,0,0,0,
1,0,0,7,242,0,
16,0,16,0,0,0,
70,14,16,0,16,0,
0,0,70,14,16,0,
17,0,0,0,0,0,
0,9,242,0,16,0,
17,0,0,0,54,3,
16,128,129,0,0,0,
15,0,0,0,150,9,
16,128,129,0,0,0,
15,0,0,0,0,0,
0,8,242,0,16,0,
18,0,0,0,70,14,
16,0,5,0,0,0,
54,9,16,128,65,0,
0,0,6,0,0,0,
0,0,0,8,242,0,
16,0,17,0,0,0,
70,14,16,0,17,0,
0,0,70,14,16,128,
129,0,0,0,18,0,
0,0,0,0,0,8,
242,0,16,0,6,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,128,65,0,0,0,
6,0,0,0,0,0,
0,8,242,0,16,0,
6,0,0,0,70,14,
16,128,129,0,0,0,
6,0,0,0,70,14,
16,0,17,0,0,0,
50,0,0,13,242,0,
16,0,6,0,0,0,
54,9,16,128,129,0,
0,0,13,0,0,0,
2,64,0,0,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
128,64,70,14,16,0,
6,0,0,0,0,0,
0,9,242,0,16,0,
8,0,0,0,70,14,
16,128,129,0,0,0,
8,0,0,0,70,14,
16,128,129,0,0,0,
10,0,0,0,0,0,
0,8,242,0,16,0,
8,0,0,0,70,14,
16,128,129,0,0,0,
12,0,0,0,70,14,
16,0,8,0,0,0,
0,0,0,8,242,0,
16,0,8,0,0,0,
70,14,16,128,129,0,
0,0,13,0,0,0,
70,14,16,0,8,0,
0,0,50,0,0,13,
242,0,16,0,8,0,
0,0,70,14,16,128,
129,0,0,0,15,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,128,64,70,14,
16,0,8,0,0,0,
49,0,0,7,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,70,14,16,0,
8,0,0,0,1,0,
0,7,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
70,14,16,0,6,0,
0,0,1,0,0,7,
242,0,16,0,6,0,
0,0,70,14,16,0,
7,0,0,0,70,14,
16,0,1,0,0,0,
0,0,0,8,242,0,
16,0,7,0,0,0,
150,3,16,0,4,0,
0,0,54,9,16,128,
65,0,0,0,5,0,
0,0,0,0,0,9,
242,0,16,0,8,0,
0,0,70,14,16,128,
129,0,0,0,7,0,
0,0,70,14,16,128,
129,0,0,0,7,0,
0,0,0,0,0,8,
242,0,16,0,5,0,
0,0,70,14,16,0,
4,0,0,0,150,3,
16,128,65,0,0,0,
5,0,0,0,29,0,
0,8,242,0,16,0,
8,0,0,0,70,14,
16,128,129,0,0,0,
5,0,0,0,70,14,
16,0,8,0,0,0,
1,0,0,7,242,0,
16,0,10,0,0,0,
70,14,16,0,6,0,
0,0,70,14,16,0,
11,0,0,0,1,0,
0,7,242,0,16,0,
8,0,0,0,70,14,
16,0,8,0,0,0,
70,14,16,0,10,0,
0,0,0,0,0,9,
242,0,16,0,5,0,
0,0,70,14,16,128,
129,0,0,0,5,0,
0,0,70,14,16,128,
129,0,0,0,5,0,
0,0,29,0,0,8,
242,0,16,0,5,0,
0,0,70,14,16,128,
129,0,0,0,7,0,
0,0,70,14,16,0,
5,0,0,0,1,0,
0,7,242,0,16,0,
7,0,0,0,70,14,
16,0,6,0,0,0,
70,14,16,0,9,0,
0,0,1,0,0,7,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,0,7,0,0,0,
0,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,128,65,0,
0,0,2,0,0,0,
150,3,16,0,4,0,
0,0,56,0,0,11,
242,0,16,0,7,0,
0,0,70,14,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
0,8,242,0,16,0,
3,0,0,0,70,14,
16,128,65,0,0,0,
3,0,0,0,70,14,
16,0,4,0,0,0,
29,0,0,8,242,0,
16,0,7,0,0,0,
70,14,16,128,129,0,
0,0,3,0,0,0,
70,14,16,0,7,0,
0,0,1,0,0,7,
242,0,16,0,9,0,
0,0,70,14,16,0,
8,0,0,0,70,14,
16,0,14,0,0,0,
1,0,0,7,18,0,
16,0,10,0,0,0,
10,0,16,0,7,0,
0,0,10,0,16,0,
9,0,0,0,1,0,
0,7,18,0,16,0,
11,0,0,0,26,0,
16,0,7,0,0,0,
26,0,16,0,9,0,
0,0,1,0,0,7,
18,0,16,0,12,0,
0,0,42,0,16,0,
7,0,0,0,42,0,
16,0,9,0,0,0,
1,0,0,7,18,0,
16,0,7,0,0,0,
58,0,16,0,7,0,
0,0,58,0,16,0,
9,0,0,0,56,0,
0,11,242,0,16,0,
3,0,0,0,70,14,
16,128,129,0,0,0,
3,0,0,0,2,64,
0,0,0,0,128,64,
0,0,128,64,0,0,
128,64,0,0,128,64,
29,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,128,129,0,
0,0,2,0,0,0,
70,14,16,0,3,0,
0,0,1,0,0,7,
242,0,16,0,3,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,0,16,0,0,0,
1,0,0,7,34,0,
16,0,10,0,0,0,
10,0,16,0,2,0,
0,0,10,0,16,0,
3,0,0,0,1,0,
0,7,34,0,16,0,
11,0,0,0,26,0,
16,0,2,0,0,0,
26,0,16,0,3,0,
0,0,1,0,0,7,
34,0,16,0,12,0,
0,0,42,0,16,0,
2,0,0,0,42,0,
16,0,3,0,0,0,
1,0,0,7,34,0,
16,0,7,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
3,0,0,0,0,0,
0,8,242,0,16,0,
0,0,0,0,70,14,
16,128,65,0,0,0,
4,0,0,0,246,15,
16,0,0,0,0,0,
29,0,0,9,242,0,
16,0,0,0,0,0,
70,11,16,128,129,0,
0,0,0,0,0,0,
150,12,16,128,129,0,
0,0,0,0,0,0,
59,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,5,0,
0,0,1,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,70,14,
16,0,8,0,0,0,
59,0,0,5,130,0,
16,0,3,0,0,0,
10,0,16,0,2,0,
0,0,31,0,4,3,
10,0,16,0,2,0,
0,0,59,0,0,5,
66,0,16,0,10,0,
0,0,10,0,16,0,
10,0,0,0,54,0,
0,5,130,0,16,0,
10,0,0,0,1,64,
0,0,0,0,0,0,
54,0,0,5,242,0,
16,0,4,0,0,0,
54,14,16,0,10,0,
0,0,54,0,0,5,
114,0,16,0,3,0,
0,0,134,2,16,0,
10,0,0,0,54,0,
0,8,114,0,16,0,
9,0,0,0,2,64,
0,0,255,255,255,255,
255,255,255,255,255,255,
255,255,0,0,0,0,
54,0,0,5,18,0,
16,0,13,0,0,0,
10,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,13,0,
0,0,1,64,0,0,
255,255,255,255,18,0,
0,1,59,0,0,5,
18,0,16,0,2,0,
0,0,10,0,16,0,
8,0,0,0,1,0,
0,7,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
10,0,16,0,5,0,
0,0,59,0,0,5,
66,0,16,0,11,0,
0,0,10,0,16,0,
0,0,0,0,59,0,
0,5,66,0,16,0,
14,0,0,0,26,0,
16,0,10,0,0,0,
59,0,0,5,18,0,
16,0,5,0,0,0,
10,0,16,0,1,0,
0,0,55,0,0,12,
242,0,16,0,15,0,
0,0,6,0,16,0,
6,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,255,255,255,255,
6,0,16,0,5,0,
0,0,60,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,10,0,
16,0,6,0,0,0,
55,0,0,12,194,0,
16,0,10,0,0,0,
6,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,6,4,
16,0,10,0,0,0,
54,0,0,8,146,0,
16,0,14,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,255,255,
255,255,54,0,0,5,
34,0,16,0,14,0,
0,0,26,0,16,0,
10,0,0,0,55,0,
0,9,242,0,16,0,
4,0,0,0,6,0,
16,0,2,0,0,0,
70,14,16,0,14,0,
0,0,70,14,16,0,
15,0,0,0,55,0,
0,12,114,0,16,0,
9,0,0,0,6,0,
16,0,2,0,0,0,
150,6,16,0,14,0,
0,0,2,64,0,0,
255,255,255,255,255,255,
255,255,255,255,255,255,
0,0,0,0,55,0,
0,9,50,0,16,0,
10,0,0,0,6,0,
16,0,2,0,0,0,
70,0,16,0,10,0,
0,0,230,10,16,0,
10,0,0,0,54,0,
0,8,114,0,16,0,
3,0,0,0,2,64,
0,0,255,255,255,255,
255,255,255,255,255,255,
255,255,0,0,0,0,
54,0,0,5,130,0,
16,0,11,0,0,0,
1,64,0,0,0,0,
0,0,21,0,0,1,
31,0,4,3,26,0,
16,0,2,0,0,0,
59,0,0,5,98,0,
16,0,4,0,0,0,
6,0,16,0,11,0,
0,0,54,0,0,5,
130,0,16,0,4,0,
0,0,1,64,0,0,
0,0,0,0,54,0,
0,5,18,0,16,0,
4,0,0,0,10,0,
16,0,11,0,0,0,
54,0,0,5,242,0,
16,0,14,0,0,0,
54,14,16,0,4,0,
0,0,54,0,0,8,
114,0,16,0,15,0,
0,0,2,64,0,0,
255,255,255,255,255,255,
255,255,255,255,255,255,
0,0,0,0,54,0,
0,5,18,0,16,0,
16,0,0,0,26,0,
16,0,0,0,0,0,
54,0,0,8,98,0,
16,0,16,0,0,0,
2,64,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,0,0,
0,0,54,0,0,5,
194,0,16,0,11,0,
0,0,166,2,16,0,
16,0,0,0,18,0,
0,1,59,0,0,5,
18,0,16,0,1,0,
0,0,26,0,16,0,
8,0,0,0,1,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,5,0,
0,0,59,0,0,5,
66,0,16,0,16,0,
0,0,26,0,16,0,
0,0,0,0,59,0,
0,5,66,0,16,0,
17,0,0,0,26,0,
16,0,11,0,0,0,
59,0,0,5,130,0,
16,0,18,0,0,0,
26,0,16,0,1,0,
0,0,55,0,0,12,
114,0,16,0,18,0,
0,0,86,5,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
70,2,16,0,9,0,
0,0,60,0,0,7,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,26,0,
16,0,6,0,0,0,
54,0,0,5,66,0,
16,0,9,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,5,
130,0,16,0,9,0,
0,0,26,0,16,0,
0,0,0,0,55,0,
0,9,242,0,16,0,
19,0,0,0,86,5,
16,0,1,0,0,0,
166,14,16,0,9,0,
0,0,70,14,16,0,
11,0,0,0,55,0,
0,12,242,0,16,0,
18,0,0,0,86,5,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,255,255,
255,255,70,14,16,0,
18,0,0,0,54,0,
0,8,146,0,16,0,
17,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,255,255,255,255,
54,0,0,5,34,0,
16,0,17,0,0,0,
26,0,16,0,11,0,
0,0,55,0,0,9,
242,0,16,0,14,0,
0,0,6,0,16,0,
1,0,0,0,70,14,
16,0,17,0,0,0,
70,14,16,0,18,0,
0,0,55,0,0,12,
114,0,16,0,15,0,
0,0,6,0,16,0,
1,0,0,0,150,6,
16,0,17,0,0,0,
2,64,0,0,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,0,54,0,0,5,
50,0,16,0,9,0,
0,0,70,0,16,0,
11,0,0,0,55,0,
0,9,242,0,16,0,
11,0,0,0,6,0,
16,0,1,0,0,0,
70,14,16,0,9,0,
0,0,70,14,16,0,
19,0,0,0,54,0,
0,8,146,0,16,0,
16,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,5,34,0,
16,0,16,0,0,0,
10,0,16,0,0,0,
0,0,54,0,0,5,
194,0,16,0,12,0,
0,0,166,14,16,0,
16,0,0,0,21,0,
0,1,31,0,4,3,
42,0,16,0,2,0,
0,0,59,0,0,5,
98,0,16,0,14,0,
0,0,6,0,16,0,
12,0,0,0,54,0,
0,5,130,0,16,0,
14,0,0,0,1,64,
0,0,0,0,0,0,
54,0,0,5,18,0,
16,0,14,0,0,0,
10,0,16,0,12,0,
0,0,54,0,0,5,
242,0,16,0,9,0,
0,0,54,14,16,0,
14,0,0,0,54,0,
0,5,194,0,16,0,
7,0,0,0,6,4,
16,0,13,0,0,0,
54,0,0,5,34,0,
16,0,17,0,0,0,
58,0,16,0,0,0,
0,0,54,0,0,8,
82,0,16,0,17,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,54,0,
0,5,194,0,16,0,
11,0,0,0,86,9,
16,0,17,0,0,0,
18,0,0,1,59,0,
0,5,34,0,16,0,
0,0,0,0,42,0,
16,0,8,0,0,0,
1,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
5,0,0,0,59,0,
0,5,18,0,16,0,
18,0,0,0,58,0,
16,0,0,0,0,0,
59,0,0,5,82,0,
16,0,19,0,0,0,
86,5,16,0,12,0,
0,0,59,0,0,5,
130,0,16,0,20,0,
0,0,42,0,16,0,
1,0,0,0,55,0,
0,12,114,0,16,0,
20,0,0,0,166,10,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,2,16,0,
15,0,0,0,55,0,
0,12,242,0,16,0,
15,0,0,0,166,10,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,255,255,
255,255,70,14,16,0,
20,0,0,0,60,0,
0,7,18,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,6,0,
0,0,54,0,0,5,
18,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,9,242,0,16,0,
20,0,0,0,6,0,
16,0,1,0,0,0,
6,12,16,0,0,0,
0,0,70,14,16,0,
12,0,0,0,54,0,
0,5,34,0,16,0,
19,0,0,0,26,0,
16,0,12,0,0,0,
54,0,0,5,130,0,
16,0,19,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
242,0,16,0,3,0,
0,0,86,5,16,0,
0,0,0,0,22,14,
16,0,19,0,0,0,
70,14,16,0,3,0,
0,0,54,0,0,8,
146,0,16,0,19,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
255,255,255,255,55,0,
0,9,242,0,16,0,
9,0,0,0,86,5,
16,0,0,0,0,0,
70,14,16,0,19,0,
0,0,70,14,16,0,
15,0,0,0,55,0,
0,9,50,0,16,0,
12,0,0,0,86,5,
16,0,0,0,0,0,
70,0,16,0,12,0,
0,0,70,0,16,0,
20,0,0,0,54,0,
0,5,226,0,16,0,
18,0,0,0,6,12,
16,0,0,0,0,0,
54,0,0,5,194,0,
16,0,13,0,0,0,
166,14,16,0,20,0,
0,0,55,0,0,9,
242,0,16,0,17,0,
0,0,86,5,16,0,
0,0,0,0,230,4,
16,0,18,0,0,0,
230,4,16,0,13,0,
0,0,54,0,0,5,
194,0,16,0,7,0,
0,0,166,14,16,0,
17,0,0,0,21,0,
0,1,31,0,4,3,
58,0,16,0,2,0,
0,0,59,0,0,5,
98,0,16,0,9,0,
0,0,6,0,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
9,0,0,0,1,64,
0,0,0,0,0,0,
54,0,0,5,18,0,
16,0,9,0,0,0,
10,0,16,0,7,0,
0,0,54,0,0,5,
242,0,16,0,2,0,
0,0,54,14,16,0,
9,0,0,0,54,0,
0,5,98,0,16,0,
17,0,0,0,6,1,
16,0,16,0,0,0,
54,0,0,5,130,0,
16,0,17,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,5,
18,0,16,0,17,0,
0,0,42,0,16,0,
0,0,0,0,54,0,
0,5,242,0,16,0,
13,0,0,0,150,3,
16,0,17,0,0,0,
54,0,0,5,34,0,
16,0,17,0,0,0,
1,64,0,0,255,255,
255,255,18,0,0,1,
59,0,0,5,34,0,
16,0,0,0,0,0,
58,0,16,0,8,0,
0,0,1,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,5,0,0,0,
59,0,0,5,18,0,
16,0,5,0,0,0,
42,0,16,0,0,0,
0,0,59,0,0,5,
66,0,16,0,8,0,
0,0,26,0,16,0,
7,0,0,0,55,0,
0,12,242,0,16,0,
3,0,0,0,246,15,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
3,0,0,0,55,0,
0,12,242,0,16,0,
3,0,0,0,246,15,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,255,255,
255,255,70,14,16,0,
3,0,0,0,60,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,6,0,
0,0,54,0,0,5,
18,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,9,242,0,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
6,8,16,0,0,0,
0,0,70,14,16,0,
7,0,0,0,54,0,
0,8,146,0,16,0,
8,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,255,255,255,255,
54,0,0,5,34,0,
16,0,8,0,0,0,
26,0,16,0,7,0,
0,0,55,0,0,9,
242,0,16,0,2,0,
0,0,86,5,16,0,
0,0,0,0,70,14,
16,0,8,0,0,0,
70,14,16,0,3,0,
0,0,55,0,0,9,
242,0,16,0,4,0,
0,0,86,5,16,0,
0,0,0,0,150,14,
16,0,8,0,0,0,
70,14,16,0,4,0,
0,0,54,0,0,5,
226,0,16,0,5,0,
0,0,6,8,16,0,
0,0,0,0,54,0,
0,5,194,0,16,0,
16,0,0,0,166,14,
16,0,1,0,0,0,
55,0,0,9,242,0,
16,0,13,0,0,0,
86,5,16,0,0,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,0,16,0,0,0,
55,0,0,9,50,0,
16,0,7,0,0,0,
86,5,16,0,0,0,
0,0,70,0,16,0,
7,0,0,0,70,0,
16,0,1,0,0,0,
21,0,0,1,1,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,10,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,1,0,0,10,
50,0,16,0,3,0,
0,0,70,0,16,0,
12,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,0,
1,0,0,10,50,0,
16,0,5,0,0,0,
70,0,16,0,7,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,0,1,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,11,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,1,0,0,10,
194,0,16,0,3,0,
0,0,6,4,16,0,
17,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
1,0,0,10,242,0,
16,0,6,0,0,0,
134,13,16,0,13,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,54,0,
0,5,194,0,16,0,
0,0,0,0,6,8,
16,0,6,0,0,0,
17,0,0,10,18,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,64,
0,0,128,64,0,0,
0,65,70,14,16,0,
0,0,0,0,17,0,
0,10,34,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,64,0,0,
128,64,0,0,0,65,
70,14,16,0,1,0,
0,0,17,0,0,10,
66,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,128,64,
0,0,0,65,70,14,
16,0,3,0,0,0,
54,0,0,5,194,0,
16,0,5,0,0,0,
86,13,16,0,6,0,
0,0,17,0,0,10,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,128,64,
0,0,0,65,70,14,
16,0,5,0,0,0,
1,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,4,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,1,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,14,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,1,0,0,10,
242,0,16,0,4,0,
0,0,70,14,16,0,
9,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
1,0,0,10,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,17,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,65,
0,0,0,66,0,0,
128,66,0,0,0,67,
70,14,16,0,1,0,
0,0,17,0,0,10,
34,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,65,0,0,
0,66,0,0,128,66,
0,0,0,67,70,14,
16,0,3,0,0,0,
17,0,0,10,66,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,65,0,0,0,66,
0,0,128,66,0,0,
0,67,70,14,16,0,
4,0,0,0,17,0,
0,10,130,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,65,
0,0,0,66,0,0,
128,66,0,0,0,67,
70,14,16,0,2,0,
0,0,0,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
129,128,128,59,129,128,
128,59,129,128,128,59,
129,128,128,59,62,0,
0,1,83,84,65,84,
148,0,0,0,8,1,
0,0,21,0,0,0,
0,0,0,0,8,0,
0,0,80,0,0,0,
0,0,0,0,71,0,
0,0,5,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
21,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,54,0,0,0,
25,0,0,0,0,0,
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
class XbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDef : public ShaderDef
{
public:
	XbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDef() : ShaderDef{}
	{
		Name = "xbr-lv3-pass0";
		VertexByteCode = RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sFragmentByteCode);
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
