/*
ShaderGlass shader xbr-shaders-xbr-mlv4-multipass\xbr-mlv4-pass2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/xbr/shaders/xbr-mlv4-multipass/xbr-mlv4-pass2.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.



Hyllian's xBR MultiLevel4 Shader - Pass2

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


 compatibility macros
    A1 B1 C1
 A0  A  B  C C4
 D0  D  E  F F4
 G0  G  H  I I4
    G5 H5 I5
	bool4 nbrs = ((pe.yzwx > 1.0) || (pe.wxyz > 1.0)) ? bool4(true) : bool4(false);
	bool4 jag1 = ((f2   > 1.0) || (h2   > 1.0)) ? bool4(true) : bool4(false);
	bool4 jag2 = ((f2   > 2.0) || (h2   > 2.0)) ? bool4(true) : bool4(false);
	bool4 jag3 = ((f2   > 4.0) || (h2   > 4.0)) ? bool4(true) : bool4(false);
	pe =   (pe   == 7.0 || pe   == 8.0) ? ((jag3  ) ? pe   : (pe   - float(2.0))) : pe;
	pe =   (pe   == 5.0 || pe   == 6.0) ? ((jag2  ) ? pe   : (pe   - float(2.0))) : pe;
	bool4 jag91 = ((id(h,i,e,h)   || id(i4,i,f4,i4)  ) && (f2   > 1.0) && (f1   > 1.0));
	bool4 jag92 = ((id(f,i,e,f)   || id(i5,i,h5,i5)  ) && (h2   > 1.0) && (h3   > 1.0));
	bool4 jag9  = (!(jag91   && jag93   || jag92   && jag94  ));
	pe   = ((pe   == 0.0) || (!nbrs   || jag1  ) && jag9  ) ? pe   : float4(1.0);

*/

#pragma once

namespace RetroArchXbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDefs
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
68,88,66,67,254,3,
216,159,236,235,28,119,
13,21,238,216,50,174,
187,69,1,0,0,0,
152,32,0,0,5,0,
0,0,52,0,0,0,
72,1,0,0,36,2,
0,0,88,2,0,0,
252,31,0,0,82,68,
69,70,12,1,0,0,
0,0,0,0,0,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
228,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
188,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,204,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,217,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
224,0,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
95,82,69,70,95,115,
97,109,112,108,101,114,
0,83,111,117,114,99,
101,0,82,69,70,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,212,0,0,0,
8,0,0,0,8,0,
0,0,200,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,200,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,15,
0,0,200,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,15,
0,0,200,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,15,
0,0,200,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,15,
0,0,200,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
5,0,0,0,15,15,
0,0,200,0,0,0,
6,0,0,0,0,0,
0,0,3,0,0,0,
6,0,0,0,15,15,
0,0,200,0,0,0,
7,0,0,0,0,0,
0,0,3,0,0,0,
7,0,0,0,15,15,
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
83,72,69,88,156,29,
0,0,80,0,0,0,
103,7,0,0,106,8,
0,1,90,0,0,3,
0,96,16,0,2,0,
0,0,90,0,0,3,
0,96,16,0,3,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,3,0,0,0,
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
0,2,20,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,214,21,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,198,16,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,2,0,0,0,
214,21,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,3,0,
0,0,230,26,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
4,0,0,0,214,21,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
214,21,16,0,1,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,198,16,16,0,
2,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,214,21,
16,0,2,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
230,26,16,0,2,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,9,0,
0,0,198,16,16,0,
3,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,214,21,
16,0,3,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,11,0,0,0,
230,26,16,0,3,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,198,16,16,0,
4,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
13,0,0,0,214,21,
16,0,4,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,14,0,0,0,
230,26,16,0,4,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,15,0,
0,0,214,21,16,0,
5,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,134,16,
16,0,6,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,17,0,0,0,
134,16,16,0,7,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
16,0,0,10,34,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,66,0,16,0,
7,0,0,0,70,2,
16,0,9,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
130,0,16,0,7,0,
0,0,70,2,16,0,
13,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,18,0,
16,0,7,0,0,0,
70,2,16,0,11,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,18,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
34,0,16,0,8,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,66,0,
16,0,8,0,0,0,
70,2,16,0,12,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,130,0,16,0,
8,0,0,0,70,2,
16,0,14,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
130,0,16,0,5,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,18,0,
16,0,6,0,0,0,
70,2,16,0,15,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,16,0,
0,10,34,0,16,0,
6,0,0,0,70,2,
16,0,17,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,16,0,0,10,
18,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
16,0,0,10,34,0,
16,0,5,0,0,0,
70,2,16,0,16,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,50,0,
0,15,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
127,67,0,0,127,67,
0,0,127,67,0,0,
127,67,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,65,0,
0,5,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
50,0,0,15,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
0,0,127,67,0,0,
127,67,0,0,127,67,
0,0,127,67,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
65,0,0,5,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,50,0,0,15,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,2,64,
0,0,0,0,127,67,
0,0,127,67,0,0,
127,67,0,0,127,67,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,65,0,0,5,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,50,0,
0,15,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
127,67,0,0,127,67,
0,0,127,67,0,0,
127,67,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,65,0,
0,5,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,15,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,127,67,0,0,
127,67,0,0,127,67,
0,0,127,67,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
65,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,29,0,0,10,
242,0,16,0,9,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,150,3,
16,0,2,0,0,0,
29,0,0,10,114,0,
16,0,10,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,64,
0,0,128,64,0,0,
0,0,166,10,16,0,
3,0,0,0,49,0,
0,10,242,0,16,0,
11,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,64,0,0,
128,64,0,0,128,63,
166,6,16,0,4,0,
0,0,29,0,0,10,
114,0,16,0,12,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,128,64,
0,0,0,0,246,15,
16,0,0,0,0,0,
49,0,0,10,242,0,
16,0,13,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,64,
0,0,128,64,0,0,
128,63,246,11,16,0,
3,0,0,0,29,0,
0,10,114,0,16,0,
14,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,64,0,0,
128,64,0,0,0,0,
6,0,16,0,1,0,
0,0,49,0,0,10,
242,0,16,0,15,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,64,0,0,128,64,
0,0,128,63,6,12,
16,0,0,0,0,0,
29,0,0,10,114,0,
16,0,16,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,64,
0,0,128,64,0,0,
0,0,86,5,16,0,
4,0,0,0,49,0,
0,10,242,0,16,0,
17,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,64,0,0,
128,64,0,0,128,63,
86,1,16,0,1,0,
0,0,55,0,0,12,
114,0,16,0,10,0,
0,0,70,2,16,0,
10,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,0,55,0,0,12,
114,0,16,0,12,0,
0,0,70,2,16,0,
12,0,0,0,70,2,
16,0,13,0,0,0,
2,64,0,0,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,0,55,0,0,12,
114,0,16,0,14,0,
0,0,70,2,16,0,
14,0,0,0,70,2,
16,0,15,0,0,0,
2,64,0,0,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,0,55,0,0,12,
114,0,16,0,16,0,
0,0,70,2,16,0,
16,0,0,0,70,2,
16,0,17,0,0,0,
2,64,0,0,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,0,57,0,0,10,
242,0,16,0,18,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,224,64,
0,0,224,64,0,0,
224,64,0,0,224,64,
24,0,0,10,242,0,
16,0,19,0,0,0,
70,14,16,0,2,0,
0,0,2,64,0,0,
0,0,0,65,0,0,
0,65,0,0,0,65,
0,0,0,65,55,0,
0,12,242,0,16,0,
18,0,0,0,70,14,
16,0,18,0,0,0,
70,14,16,0,19,0,
0,0,2,64,0,0,
255,255,255,255,255,255,
255,255,255,255,255,255,
255,255,255,255,0,0,
0,10,242,0,16,0,
19,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,192,0,0,0,192,
0,0,0,192,0,0,
0,192,55,0,0,9,
18,0,16,0,0,0,
0,0,42,0,16,0,
10,0,0,0,10,0,
16,0,2,0,0,0,
10,0,16,0,19,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,42,0,16,0,
12,0,0,0,26,0,
16,0,2,0,0,0,
26,0,16,0,19,0,
0,0,55,0,0,9,
146,0,16,0,0,0,
0,0,6,4,16,0,
18,0,0,0,6,12,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,1,0,
0,0,42,0,16,0,
14,0,0,0,42,0,
16,0,2,0,0,0,
42,0,16,0,19,0,
0,0,55,0,0,9,
34,0,16,0,1,0,
0,0,42,0,16,0,
16,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,19,0,
0,0,55,0,0,9,
50,0,16,0,1,0,
0,0,230,10,16,0,
18,0,0,0,70,0,
16,0,1,0,0,0,
230,10,16,0,2,0,
0,0,57,0,0,7,
18,0,16,0,2,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,160,64,
24,0,0,7,34,0,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,192,64,55,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
255,255,255,255,0,0,
0,7,34,0,16,0,
2,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,192,55,0,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
10,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,57,0,0,7,
18,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,160,64,
24,0,0,7,34,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,192,64,55,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
255,255,255,255,0,0,
0,7,34,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,192,55,0,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
12,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,2,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,57,0,0,7,
18,0,16,0,2,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,0,0,160,64,
24,0,0,7,34,0,
16,0,2,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,192,64,55,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
255,255,255,255,0,0,
0,7,34,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,192,55,0,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
14,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,1,0,
0,0,10,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,1,0,
0,0,57,0,0,7,
18,0,16,0,2,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,160,64,
24,0,0,7,34,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,192,64,55,0,
0,9,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,1,64,0,0,
255,255,255,255,0,0,
0,7,34,0,16,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,192,55,0,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
16,0,0,0,26,0,
16,0,1,0,0,0,
26,0,16,0,2,0,
0,0,55,0,0,9,
34,0,16,0,1,0,
0,0,10,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,0,0,0,8,
242,0,16,0,2,0,
0,0,54,9,16,128,
65,0,0,0,7,0,
0,0,246,15,16,0,
5,0,0,0,0,0,
0,8,242,0,16,0,
18,0,0,0,54,9,
16,0,7,0,0,0,
54,9,16,128,65,0,
0,0,8,0,0,0,
29,0,0,9,242,0,
16,0,18,0,0,0,
70,14,16,128,129,0,
0,0,18,0,0,0,
70,14,16,128,129,0,
0,0,2,0,0,0,
31,0,4,3,10,0,
16,0,18,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,10,0,
0,0,198,16,16,0,
7,0,0,0,54,121,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,16,0,0,10,
66,0,16,0,3,0,
0,0,150,7,16,0,
10,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
0,0,0,8,130,0,
16,0,3,0,0,0,
42,0,16,128,65,0,
0,0,3,0,0,0,
26,0,16,0,6,0,
0,0,0,0,0,8,
66,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,8,0,
0,0,42,0,16,0,
3,0,0,0,49,0,
0,9,66,0,16,0,
3,0,0,0,42,0,
16,128,129,0,0,0,
3,0,0,0,58,0,
16,128,129,0,0,0,
3,0,0,0,18,0,
0,1,54,0,0,5,
66,0,16,0,3,0,
0,0,1,64,0,0,
255,255,255,255,21,0,
0,1,1,0,0,7,
66,0,16,0,3,0,
0,0,58,0,16,0,
13,0,0,0,42,0,
16,0,3,0,0,0,
49,0,0,10,50,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,22,5,16,0,
3,0,0,0,1,0,
0,7,18,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,31,0,4,3,
26,0,16,0,18,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,226,0,16,0,
10,0,0,0,230,26,
16,0,1,0,0,0,
54,121,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,16,0,
0,10,66,0,16,0,
3,0,0,0,150,7,
16,0,10,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,0,0,0,8,
130,0,16,0,3,0,
0,0,42,0,16,128,
65,0,0,0,3,0,
0,0,10,0,16,0,
5,0,0,0,0,0,
0,8,66,0,16,0,
3,0,0,0,10,0,
16,128,65,0,0,0,
8,0,0,0,42,0,
16,0,3,0,0,0,
49,0,0,9,66,0,
16,0,3,0,0,0,
42,0,16,128,129,0,
0,0,3,0,0,0,
58,0,16,128,129,0,
0,0,3,0,0,0,
18,0,0,1,54,0,
0,5,66,0,16,0,
3,0,0,0,1,64,
0,0,255,255,255,255,
21,0,0,1,1,0,
0,7,66,0,16,0,
3,0,0,0,58,0,
16,0,15,0,0,0,
42,0,16,0,3,0,
0,0,49,0,0,10,
98,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,166,9,
16,0,0,0,0,0,
1,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,31,0,
4,3,42,0,16,0,
18,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,226,0,
16,0,10,0,0,0,
70,16,16,0,6,0,
0,0,54,121,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
16,0,0,10,66,0,
16,0,3,0,0,0,
150,7,16,0,10,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,0,0,
0,8,130,0,16,0,
3,0,0,0,42,0,
16,128,65,0,0,0,
3,0,0,0,26,0,
16,0,5,0,0,0,
0,0,0,8,66,0,
16,0,3,0,0,0,
26,0,16,128,65,0,
0,0,8,0,0,0,
42,0,16,0,3,0,
0,0,49,0,0,9,
66,0,16,0,3,0,
0,0,42,0,16,128,
129,0,0,0,3,0,
0,0,58,0,16,128,
129,0,0,0,3,0,
0,0,18,0,0,1,
54,0,0,5,66,0,
16,0,3,0,0,0,
1,64,0,0,255,255,
255,255,21,0,0,1,
1,0,0,7,66,0,
16,0,3,0,0,0,
58,0,16,0,17,0,
0,0,42,0,16,0,
3,0,0,0,49,0,
0,10,194,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
246,11,16,0,1,0,
0,0,1,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,42,0,
16,0,3,0,0,0,
31,0,4,3,58,0,
16,0,18,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,10,0,
0,0,198,16,16,0,
5,0,0,0,54,121,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,16,0,0,10,
66,0,16,0,3,0,
0,0,150,7,16,0,
10,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
0,0,0,8,130,0,
16,0,3,0,0,0,
42,0,16,128,65,0,
0,0,3,0,0,0,
10,0,16,0,6,0,
0,0,0,0,0,8,
66,0,16,0,3,0,
0,0,42,0,16,128,
65,0,0,0,8,0,
0,0,42,0,16,0,
3,0,0,0,49,0,
0,9,66,0,16,0,
3,0,0,0,42,0,
16,128,129,0,0,0,
3,0,0,0,58,0,
16,128,129,0,0,0,
3,0,0,0,18,0,
0,1,54,0,0,5,
66,0,16,0,3,0,
0,0,1,64,0,0,
255,255,255,255,21,0,
0,1,1,0,0,7,
66,0,16,0,3,0,
0,0,58,0,16,0,
11,0,0,0,42,0,
16,0,3,0,0,0,
49,0,0,10,50,0,
16,0,4,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,198,0,16,0,
4,0,0,0,1,0,
0,7,66,0,16,0,
3,0,0,0,42,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,0,0,0,8,
242,0,16,0,18,0,
0,0,70,14,16,0,
7,0,0,0,54,9,
16,128,65,0,0,0,
8,0,0,0,29,0,
0,9,242,0,16,0,
2,0,0,0,70,14,
16,128,129,0,0,0,
18,0,0,0,150,3,
16,128,129,0,0,0,
2,0,0,0,31,0,
4,3,10,0,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,210,0,
16,0,4,0,0,0,
230,26,16,0,5,0,
0,0,198,121,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
16,0,0,10,18,0,
16,0,2,0,0,0,
134,3,16,0,4,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,0,0,
0,8,130,0,16,0,
3,0,0,0,10,0,
16,128,65,0,0,0,
2,0,0,0,10,0,
16,0,6,0,0,0,
0,0,0,8,18,0,
16,0,2,0,0,0,
58,0,16,128,65,0,
0,0,8,0,0,0,
10,0,16,0,2,0,
0,0,49,0,0,9,
18,0,16,0,2,0,
0,0,10,0,16,128,
129,0,0,0,2,0,
0,0,58,0,16,128,
129,0,0,0,3,0,
0,0,18,0,0,1,
54,0,0,5,18,0,
16,0,2,0,0,0,
1,64,0,0,255,255,
255,255,21,0,0,1,
1,0,0,7,18,0,
16,0,2,0,0,0,
10,0,16,0,11,0,
0,0,10,0,16,0,
2,0,0,0,1,0,
0,7,18,0,16,0,
2,0,0,0,26,0,
16,0,4,0,0,0,
10,0,16,0,2,0,
0,0,31,0,4,3,
26,0,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,70,16,
16,0,7,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,203,161,
101,65,115,104,225,65,
160,26,175,64,0,0,
0,0,0,0,0,8,
130,0,16,0,3,0,
0,0,26,0,16,128,
65,0,0,0,2,0,
0,0,26,0,16,0,
6,0,0,0,0,0,
0,8,34,0,16,0,
2,0,0,0,10,0,
16,128,65,0,0,0,
8,0,0,0,26,0,
16,0,2,0,0,0,
49,0,0,9,34,0,
16,0,2,0,0,0,
26,0,16,128,129,0,
0,0,2,0,0,0,
58,0,16,128,129,0,
0,0,3,0,0,0,
18,0,0,1,54,0,
0,5,34,0,16,0,
2,0,0,0,1,64,
0,0,255,255,255,255,
21,0,0,1,1,0,
0,7,34,0,16,0,
2,0,0,0,10,0,
16,0,13,0,0,0,
26,0,16,0,2,0,
0,0,1,0,0,7,
34,0,16,0,2,0,
0,0,26,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
31,0,4,3,42,0,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,198,16,16,0,
1,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,16,0,0,10,
66,0,16,0,2,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,203,161,101,65,
115,104,225,65,160,26,
175,64,0,0,0,0,
0,0,0,8,34,0,
16,0,3,0,0,0,
42,0,16,128,65,0,
0,0,2,0,0,0,
10,0,16,0,5,0,
0,0,0,0,0,8,
66,0,16,0,2,0,
0,0,26,0,16,128,
65,0,0,0,8,0,
0,0,42,0,16,0,
2,0,0,0,49,0,
0,9,66,0,16,0,
2,0,0,0,42,0,
16,128,129,0,0,0,
2,0,0,0,26,0,
16,128,129,0,0,0,
3,0,0,0,18,0,
0,1,54,0,0,5,
66,0,16,0,2,0,
0,0,1,64,0,0,
255,255,255,255,21,0,
0,1,1,0,0,7,
66,0,16,0,2,0,
0,0,10,0,16,0,
15,0,0,0,42,0,
16,0,2,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,31,0,
4,3,58,0,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
198,16,16,0,6,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
16,0,0,10,66,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
203,161,101,65,115,104,
225,65,160,26,175,64,
0,0,0,0,0,0,
0,8,130,0,16,0,
2,0,0,0,42,0,
16,128,65,0,0,0,
2,0,0,0,26,0,
16,0,5,0,0,0,
0,0,0,8,66,0,
16,0,2,0,0,0,
42,0,16,128,65,0,
0,0,8,0,0,0,
42,0,16,0,2,0,
0,0,49,0,0,9,
66,0,16,0,2,0,
0,0,42,0,16,128,
129,0,0,0,2,0,
0,0,58,0,16,128,
129,0,0,0,2,0,
0,0,18,0,0,1,
54,0,0,5,66,0,
16,0,2,0,0,0,
1,64,0,0,255,255,
255,255,21,0,0,1,
1,0,0,7,66,0,
16,0,2,0,0,0,
10,0,16,0,17,0,
0,0,42,0,16,0,
2,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,0,0,0,8,
242,0,16,0,4,0,
0,0,70,14,16,128,
65,0,0,0,8,0,
0,0,246,15,16,0,
5,0,0,0,0,0,
0,8,242,0,16,0,
5,0,0,0,54,9,
16,0,7,0,0,0,
230,4,16,128,65,0,
0,0,8,0,0,0,
0,0,0,11,242,0,
16,0,5,0,0,0,
70,14,16,128,129,0,
0,0,5,0,0,0,
2,64,0,0,95,112,
137,48,95,112,137,48,
95,112,137,48,95,112,
137,48,14,0,0,8,
242,0,16,0,5,0,
0,0,230,4,16,128,
129,0,0,0,4,0,
0,0,70,14,16,0,
5,0,0,0,49,0,
0,10,242,0,16,0,
5,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,64,
70,14,16,0,5,0,
0,0,0,0,0,8,
242,0,16,0,6,0,
0,0,70,14,16,0,
7,0,0,0,70,14,
16,128,65,0,0,0,
8,0,0,0,0,0,
0,11,242,0,16,0,
6,0,0,0,70,14,
16,128,129,0,0,0,
6,0,0,0,2,64,
0,0,95,112,137,48,
95,112,137,48,95,112,
137,48,95,112,137,48,
14,0,0,8,242,0,
16,0,4,0,0,0,
70,14,16,128,129,0,
0,0,4,0,0,0,
70,14,16,0,6,0,
0,0,49,0,0,10,
242,0,16,0,4,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,64,70,14,
16,0,4,0,0,0,
1,0,0,7,66,0,
16,0,2,0,0,0,
10,0,16,0,3,0,
0,0,10,0,16,0,
5,0,0,0,1,0,
0,7,50,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
70,0,16,0,4,0,
0,0,55,0,0,9,
18,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,42,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,59,0,0,5,
18,0,16,0,2,0,
0,0,10,0,16,0,
2,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
26,0,16,0,5,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
26,0,16,0,2,0,
0,0,1,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,42,0,
16,0,5,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
4,0,0,0,55,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,59,0,
0,5,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,0,
5,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,4,0,
0,0,55,0,0,9,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,59,0,0,5,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,57,0,
0,7,130,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,1,0,0,7,
98,0,16,0,2,0,
0,0,166,11,16,0,
9,0,0,0,6,1,
16,0,9,0,0,0,
60,0,0,7,130,0,
16,0,2,0,0,0,
10,0,16,0,10,0,
0,0,26,0,16,0,
2,0,0,0,1,0,
0,7,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,55,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
18,0,16,0,3,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,57,0,0,7,
18,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
60,0,0,7,130,0,
16,0,1,0,0,0,
10,0,16,0,12,0,
0,0,42,0,16,0,
2,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
34,0,16,0,3,0,
0,0,10,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,57,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
60,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,14,0,
0,0,26,0,16,0,
2,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
66,0,16,0,3,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,57,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
60,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,16,0,
0,0,42,0,16,0,
2,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
130,0,16,0,3,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,56,0,0,10,
242,32,16,0,0,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,129,128,128,59,
129,128,128,59,129,128,
128,59,129,128,128,59,
62,0,0,1,83,84,
65,84,148,0,0,0,
231,0,0,0,20,0,
0,0,0,0,0,0,
8,0,0,0,102,0,
0,0,0,0,0,0,
35,0,0,0,9,0,
0,0,8,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,26,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,8,0,
0,0,35,0,0,0,
5,0,0,0,0,0,
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
class XbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDef : public ShaderDef
{
public:
	XbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDef() : ShaderDef{}
	{
		Name = "xbr-mlv4-pass2";
		VertexByteCode = RetroArchXbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrShadersXbrMlv4MultipassXbrMlv4Pass2ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("REF", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
