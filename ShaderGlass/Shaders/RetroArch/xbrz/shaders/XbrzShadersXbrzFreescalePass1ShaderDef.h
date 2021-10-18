/*
ShaderGlass shader xbrz-shaders\xbrz-freescale-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/xbrz/shaders/xbrz-freescale-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's xBR-vertex code and texel mapping

Copyright (C) 2011/2016 Hyllian - sergiogdb@gmail.com

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


// This shader also uses code and/or concepts from xBRZ as it appears
// in the Desmume source code. The license for which is as follows:
// ****************************************************************************
// * This file is part of the HqMAME project. It is distributed under         *
// * GNU General Public License: http://www.gnu.org/licenses/gpl-3.0          *
// * Copyright (C) Zenju (zenju AT gmx DOT de) - All Rights Reserved          *
// *                                                                          *
// * Additionally and as a special exception, the author gives permission     *
// * to link the code of this program with the MAME library (or with modified *
// * versions of MAME that use the same license as MAME), and distribute      *
// * linked combinations including the two. You must obey the GNU General     *
// * Public License in all respects for all of the code used other than MAME. *
// * If you modify this file, you may extend this exception to your version   *
// * of the file, but you are not obligated to do so. If you do not wish to   *
// * do so, delete this exception statement from your version.                *
// ****************************************************************************
//  return step(0, v);
//---------------------------------------
// Input Pixel Mapping: -|B|-
//                      D|E|F
//                      -|H|-
// info Mapping: x|y|
//               w|z|
// Pixel Tap Mapping: -|-|-
//                    -|E|F
//                    -|H|-
// Pixel Tap Mapping: -|-|-
//                    D|E|-
//                    -|H|-
// Pixel Tap Mapping: -|B|-
//                    -|E|F
//                    -|-|-
// Pixel Tap Mapping: -|B|-
//                    D|E|-
//                    -|-|-

*/

#pragma once

namespace RetroArchXbrzShadersXbrzFreescalePass1ShaderDefs
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
68,88,66,67,214,78,
41,45,223,127,234,143,
235,12,70,0,62,171,
2,217,1,0,0,0,
32,32,0,0,5,0,
0,0,52,0,0,0,
52,2,0,0,104,2,
0,0,156,2,0,0,
132,31,0,0,82,68,
69,70,248,1,0,0,
1,0,0,0,20,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
206,1,0,0,82,68,
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
14,1,0,0,2,0,
0,0,44,1,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
124,1,0,0,0,0,
0,0,16,0,0,0,
2,0,0,0,152,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,188,1,
0,0,16,0,0,0,
16,0,0,0,2,0,
0,0,152,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,144,1,0,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
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
224,28,0,0,80,0,
0,0,56,7,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,2,0,
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
0,2,13,0,0,0,
56,0,0,9,50,0,
16,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
70,128,32,0,1,0,
0,0,1,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
6,20,16,0,0,0,
0,0,6,132,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,0,0,
0,10,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,191,0,0,
0,191,50,0,0,11,
50,0,16,0,1,0,
0,0,230,10,16,128,
65,0,0,0,0,0,
0,0,230,138,32,0,
1,0,0,0,0,0,
0,0,70,16,16,0,
0,0,0,0,50,0,
0,13,242,0,16,0,
2,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,191,0,0,
128,191,0,0,0,0,
70,4,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,0,16,0,
1,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,50,0,0,13,
242,0,16,0,5,0,
0,0,230,142,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
0,0,128,63,70,4,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,70,0,16,0,
5,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
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
0,0,56,0,0,10,
242,0,16,0,7,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,128,62,
65,0,0,5,242,0,
16,0,8,0,0,0,
230,1,16,0,7,0,
0,0,50,0,0,13,
242,0,16,0,8,0,
0,0,70,14,16,128,
65,0,0,0,8,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
128,64,0,0,128,64,
0,0,128,64,230,1,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,9,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,128,61,0,0,
128,61,0,0,128,61,
0,0,128,61,65,0,
0,5,242,0,16,0,
10,0,0,0,70,14,
16,0,9,0,0,0,
50,0,0,13,242,0,
16,0,7,0,0,0,
70,14,16,128,65,0,
0,0,10,0,0,0,
2,64,0,0,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
128,64,70,14,16,0,
7,0,0,0,65,0,
0,5,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
56,0,0,10,242,0,
16,0,10,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,128,60,0,0,
128,60,0,0,128,60,
0,0,128,60,65,0,
0,5,242,0,16,0,
11,0,0,0,70,14,
16,0,10,0,0,0,
50,0,0,13,242,0,
16,0,9,0,0,0,
70,14,16,128,65,0,
0,0,11,0,0,0,
2,64,0,0,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
128,64,70,14,16,0,
9,0,0,0,65,0,
0,5,242,0,16,0,
9,0,0,0,70,14,
16,0,9,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
0,0,128,59,0,0,
128,59,0,0,128,59,
0,0,128,59,65,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
50,0,0,13,242,0,
16,0,1,0,0,0,
70,14,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
128,64,70,14,16,0,
10,0,0,0,65,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
49,0,0,10,242,0,
16,0,8,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
8,0,0,0,31,0,
4,3,10,0,16,0,
8,0,0,0,49,0,
0,7,130,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,0,
42,0,16,0,7,0,
0,0,49,0,0,7,
130,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,42,0,
16,0,9,0,0,0,
55,0,0,9,34,0,
16,0,10,0,0,0,
58,0,16,0,3,0,
0,0,1,64,0,0,
0,0,128,62,1,64,
0,0,0,0,0,63,
0,0,0,7,66,0,
16,0,10,0,0,0,
42,0,16,0,9,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,130,0,16,0,
10,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,1,64,
0,0,0,0,128,191,
54,0,0,5,18,0,
16,0,10,0,0,0,
1,64,0,0,0,0,
0,0,55,0,0,12,
242,0,16,0,10,0,
0,0,246,15,16,0,
2,0,0,0,70,14,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,0,243,4,53,63,
0,0,128,63,0,0,
128,191,0,0,0,8,
114,0,16,0,11,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,16,0,
0,10,66,0,16,0,
1,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
50,0,16,0,11,0,
0,0,166,10,16,128,
65,0,0,0,1,0,
0,0,38,10,16,0,
11,0,0,0,56,0,
0,10,50,0,16,0,
11,0,0,0,70,0,
16,0,11,0,0,0,
2,64,0,0,162,17,
8,63,61,155,45,63,
0,0,0,0,0,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,10,0,16,0,
11,0,0,0,10,0,
16,0,11,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
26,0,16,0,11,0,
0,0,26,0,16,0,
11,0,0,0,42,0,
16,0,1,0,0,0,
75,0,0,5,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,11,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,128,65,0,0,0,
5,0,0,0,16,0,
0,10,130,0,16,0,
2,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
50,0,16,0,11,0,
0,0,246,15,16,128,
65,0,0,0,2,0,
0,0,38,10,16,0,
11,0,0,0,56,0,
0,10,50,0,16,0,
11,0,0,0,70,0,
16,0,11,0,0,0,
2,64,0,0,162,17,
8,63,61,155,45,63,
0,0,0,0,0,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,10,0,16,0,
11,0,0,0,10,0,
16,0,11,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,3,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
26,0,16,0,11,0,
0,0,26,0,16,0,
11,0,0,0,58,0,
16,0,2,0,0,0,
75,0,0,5,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,29,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,42,0,
16,0,1,0,0,0,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,114,0,16,0,
11,0,0,0,70,2,
16,128,65,0,0,0,
5,0,0,0,70,2,
16,0,6,0,0,0,
50,0,0,9,114,0,
16,0,11,0,0,0,
166,10,16,0,1,0,
0,0,70,2,16,0,
11,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,8,50,0,
16,0,10,0,0,0,
230,10,16,0,0,0,
0,0,70,0,16,128,
65,0,0,0,10,0,
0,0,15,0,0,7,
66,0,16,0,1,0,
0,0,70,0,16,0,
10,0,0,0,230,10,
16,0,10,0,0,0,
15,0,0,7,130,0,
16,0,2,0,0,0,
230,10,16,0,10,0,
0,0,230,10,16,0,
10,0,0,0,14,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,10,
50,0,16,0,12,0,
0,0,230,10,16,128,
65,0,0,0,10,0,
0,0,166,10,16,0,
1,0,0,0,70,0,
16,0,10,0,0,0,
56,0,0,10,194,0,
16,0,10,0,0,0,
246,11,16,0,10,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,191,
0,0,128,63,15,0,
0,7,66,0,16,0,
1,0,0,0,70,0,
16,0,10,0,0,0,
230,10,16,0,10,0,
0,0,49,0,0,7,
130,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
49,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,30,0,
0,8,66,0,16,0,
1,0,0,0,58,0,
16,128,65,0,0,0,
2,0,0,0,42,0,
16,0,1,0,0,0,
43,0,0,5,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
50,0,16,0,10,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,12,0,0,0,
15,0,0,7,130,0,
16,0,2,0,0,0,
70,0,16,0,10,0,
0,0,70,0,16,0,
10,0,0,0,75,0,
0,5,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,243,4,53,63,
56,32,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
243,4,53,63,50,0,
0,9,130,0,16,0,
2,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,192,1,64,0,0,
0,0,64,64,56,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,10,0,0,0,
70,2,16,128,65,0,
0,0,4,0,0,0,
70,2,16,0,11,0,
0,0,50,0,0,9,
114,0,16,0,10,0,
0,0,166,10,16,0,
1,0,0,0,70,2,
16,0,10,0,0,0,
70,2,16,0,4,0,
0,0,18,0,0,1,
54,0,0,5,114,0,
16,0,10,0,0,0,
70,2,16,0,4,0,
0,0,21,0,0,1,
31,0,4,3,26,0,
16,0,8,0,0,0,
49,0,0,7,66,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,58,0,16,0,
7,0,0,0,49,0,
0,7,130,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,0,
58,0,16,0,9,0,
0,0,55,0,0,9,
18,0,16,0,11,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,190,
1,64,0,0,0,0,
0,191,0,0,0,7,
130,0,16,0,11,0,
0,0,58,0,16,0,
9,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,7,66,0,
16,0,11,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,54,0,
0,5,34,0,16,0,
11,0,0,0,1,64,
0,0,0,0,0,0,
55,0,0,12,242,0,
16,0,11,0,0,0,
166,10,16,0,1,0,
0,0,70,14,16,0,
11,0,0,0,2,64,
0,0,243,4,53,191,
0,0,0,0,0,0,
128,63,0,0,128,63,
0,0,0,8,114,0,
16,0,12,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
70,2,16,0,4,0,
0,0,16,0,0,10,
66,0,16,0,1,0,
0,0,70,2,16,0,
12,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,194,0,
16,0,7,0,0,0,
166,10,16,128,65,0,
0,0,1,0,0,0,
166,2,16,0,12,0,
0,0,56,0,0,10,
194,0,16,0,7,0,
0,0,166,14,16,0,
7,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,162,17,
8,63,61,155,45,63,
56,0,0,7,130,0,
16,0,1,0,0,0,
42,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,50,0,
0,9,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,66,0,16,0,
1,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,7,0,
0,0,42,0,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
12,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,128,65,0,
0,0,5,0,0,0,
16,0,0,10,130,0,
16,0,1,0,0,0,
70,2,16,0,12,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,194,0,16,0,
7,0,0,0,246,15,
16,128,65,0,0,0,
1,0,0,0,166,2,
16,0,12,0,0,0,
56,0,0,10,194,0,
16,0,7,0,0,0,
166,14,16,0,7,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,162,17,8,63,
61,155,45,63,56,0,
0,7,130,0,16,0,
2,0,0,0,42,0,
16,0,7,0,0,0,
42,0,16,0,7,0,
0,0,50,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,0,
7,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,1,0,
0,0,75,0,0,5,
194,0,16,0,1,0,
0,0,166,14,16,0,
1,0,0,0,29,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,8,114,0,
16,0,12,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,5,0,
0,0,50,0,0,9,
114,0,16,0,5,0,
0,0,166,10,16,0,
1,0,0,0,70,2,
16,0,12,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,8,
194,0,16,0,1,0,
0,0,166,14,16,0,
0,0,0,0,6,4,
16,128,65,0,0,0,
11,0,0,0,15,0,
0,7,130,0,16,0,
2,0,0,0,230,10,
16,0,1,0,0,0,
230,10,16,0,11,0,
0,0,15,0,0,7,
130,0,16,0,3,0,
0,0,230,10,16,0,
11,0,0,0,230,10,
16,0,11,0,0,0,
14,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
3,0,0,0,50,0,
0,10,194,0,16,0,
7,0,0,0,166,14,
16,128,65,0,0,0,
11,0,0,0,246,15,
16,0,2,0,0,0,
166,14,16,0,1,0,
0,0,56,0,0,10,
50,0,16,0,8,0,
0,0,182,15,16,0,
11,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,63,0,0,
0,0,0,0,0,0,
15,0,0,7,66,0,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,70,0,16,0,
8,0,0,0,49,0,
0,7,130,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
42,0,16,0,1,0,
0,0,49,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
30,0,0,8,66,0,
16,0,1,0,0,0,
58,0,16,128,65,0,
0,0,1,0,0,0,
42,0,16,0,1,0,
0,0,43,0,0,5,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,56,0,
0,7,194,0,16,0,
7,0,0,0,6,4,
16,0,0,0,0,0,
166,14,16,0,7,0,
0,0,15,0,0,7,
130,0,16,0,1,0,
0,0,230,10,16,0,
7,0,0,0,230,10,
16,0,7,0,0,0,
75,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,9,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,243,4,
53,63,56,32,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,243,4,53,63,
50,0,0,9,130,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,192,1,64,
0,0,0,0,64,64,
56,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,56,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,10,0,
0,0,70,2,16,0,
5,0,0,0,50,0,
0,9,114,0,16,0,
10,0,0,0,166,10,
16,0,1,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
10,0,0,0,21,0,
0,1,31,0,4,3,
42,0,16,0,8,0,
0,0,49,0,0,7,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,26,0,
16,0,7,0,0,0,
49,0,0,7,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,26,0,16,0,
9,0,0,0,55,0,
0,9,18,0,16,0,
5,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,62,1,64,0,0,
0,0,0,63,0,0,
0,8,130,0,16,0,
5,0,0,0,26,0,
16,128,65,0,0,0,
9,0,0,0,1,64,
0,0,0,0,128,191,
0,0,0,8,66,0,
16,0,5,0,0,0,
26,0,16,128,65,0,
0,0,1,0,0,0,
1,64,0,0,0,0,
128,191,54,0,0,5,
34,0,16,0,5,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,12,242,0,16,0,
5,0,0,0,166,10,
16,0,1,0,0,0,
70,14,16,0,5,0,
0,0,2,64,0,0,
243,4,53,63,0,0,
0,0,0,0,128,191,
0,0,128,191,0,0,
0,8,226,0,16,0,
1,0,0,0,6,9,
16,128,65,0,0,0,
3,0,0,0,6,9,
16,0,4,0,0,0,
16,0,0,10,66,0,
16,0,1,0,0,0,
150,7,16,0,1,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,162,0,16,0,
1,0,0,0,166,10,
16,128,65,0,0,0,
1,0,0,0,246,7,
16,0,1,0,0,0,
56,0,0,10,162,0,
16,0,1,0,0,0,
86,13,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,162,17,
8,63,0,0,0,0,
61,155,45,63,56,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,50,0,0,9,
34,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,50,0,0,9,
34,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,0,0,0,8,
226,0,16,0,7,0,
0,0,6,9,16,0,
4,0,0,0,6,9,
16,128,65,0,0,0,
6,0,0,0,16,0,
0,10,66,0,16,0,
1,0,0,0,150,7,
16,0,7,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
98,0,16,0,7,0,
0,0,166,10,16,128,
65,0,0,0,1,0,
0,0,246,13,16,0,
7,0,0,0,56,0,
0,10,98,0,16,0,
7,0,0,0,86,6,
16,0,7,0,0,0,
2,64,0,0,0,0,
0,0,162,17,8,63,
61,155,45,63,0,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,26,0,16,0,
7,0,0,0,26,0,
16,0,7,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
42,0,16,0,7,0,
0,0,42,0,16,0,
7,0,0,0,42,0,
16,0,1,0,0,0,
75,0,0,5,98,0,
16,0,1,0,0,0,
86,6,16,0,1,0,
0,0,29,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,226,0,16,0,
7,0,0,0,6,9,
16,0,3,0,0,0,
6,9,16,128,65,0,
0,0,6,0,0,0,
50,0,0,9,226,0,
16,0,1,0,0,0,
86,5,16,0,1,0,
0,0,86,14,16,0,
7,0,0,0,6,9,
16,0,6,0,0,0,
0,0,0,8,50,0,
16,0,5,0,0,0,
230,10,16,0,0,0,
0,0,70,0,16,128,
65,0,0,0,5,0,
0,0,15,0,0,7,
130,0,16,0,2,0,
0,0,70,0,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
15,0,0,7,130,0,
16,0,3,0,0,0,
230,10,16,0,5,0,
0,0,230,10,16,0,
5,0,0,0,14,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,3,0,
0,0,50,0,0,10,
50,0,16,0,6,0,
0,0,230,10,16,128,
65,0,0,0,5,0,
0,0,246,15,16,0,
2,0,0,0,70,0,
16,0,5,0,0,0,
56,0,0,10,194,0,
16,0,5,0,0,0,
246,11,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,191,
0,0,128,63,15,0,
0,7,130,0,16,0,
2,0,0,0,70,0,
16,0,5,0,0,0,
230,10,16,0,5,0,
0,0,49,0,0,7,
130,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
49,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,30,0,
0,8,130,0,16,0,
2,0,0,0,58,0,
16,128,65,0,0,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
43,0,0,5,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,56,0,0,7,
50,0,16,0,5,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,6,0,0,0,
15,0,0,7,130,0,
16,0,3,0,0,0,
70,0,16,0,5,0,
0,0,70,0,16,0,
5,0,0,0,75,0,
0,5,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,243,4,53,63,
56,32,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
243,4,53,63,50,0,
0,9,130,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,192,1,64,0,0,
0,0,64,64,56,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,3,0,0,0,
0,0,0,8,226,0,
16,0,1,0,0,0,
6,9,16,128,65,0,
0,0,10,0,0,0,
86,14,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,10,0,
0,0,246,15,16,0,
2,0,0,0,150,7,
16,0,1,0,0,0,
70,2,16,0,10,0,
0,0,21,0,0,1,
31,0,4,3,58,0,
16,0,8,0,0,0,
49,0,0,7,34,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,10,0,16,0,
7,0,0,0,49,0,
0,7,66,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
10,0,16,0,9,0,
0,0,55,0,0,9,
34,0,16,0,5,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,190,
1,64,0,0,0,0,
0,191,0,0,0,8,
66,0,16,0,5,0,
0,0,10,0,16,128,
65,0,0,0,9,0,
0,0,1,64,0,0,
0,0,128,191,0,0,
0,7,130,0,16,0,
5,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,54,0,0,5,
18,0,16,0,5,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,12,242,0,16,0,
1,0,0,0,86,5,
16,0,1,0,0,0,
70,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,243,4,
53,191,0,0,128,191,
0,0,128,63,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
16,0,0,10,130,0,
16,0,2,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,50,0,16,0,
5,0,0,0,246,15,
16,128,65,0,0,0,
2,0,0,0,38,10,
16,0,5,0,0,0,
56,0,0,10,50,0,
16,0,5,0,0,0,
70,0,16,0,5,0,
0,0,2,64,0,0,
162,17,8,63,61,155,
45,63,0,0,0,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
3,0,0,0,10,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,50,0,0,9,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,3,0,
0,0,50,0,0,9,
130,0,16,0,2,0,
0,0,26,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
58,0,16,0,2,0,
0,0,75,0,0,5,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
4,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,50,0,16,0,
4,0,0,0,246,15,
16,128,65,0,0,0,
3,0,0,0,38,10,
16,0,4,0,0,0,
56,0,0,10,50,0,
16,0,4,0,0,0,
70,0,16,0,4,0,
0,0,2,64,0,0,
162,17,8,63,61,155,
45,63,0,0,0,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
4,0,0,0,10,0,
16,0,4,0,0,0,
10,0,16,0,4,0,
0,0,50,0,0,9,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,50,0,0,9,
130,0,16,0,3,0,
0,0,26,0,16,0,
4,0,0,0,26,0,
16,0,4,0,0,0,
58,0,16,0,3,0,
0,0,75,0,0,5,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,29,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,2,0,
0,0,1,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,246,15,16,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,4,
16,128,65,0,0,0,
1,0,0,0,15,0,
0,7,18,0,16,0,
1,0,0,0,230,10,
16,0,0,0,0,0,
230,10,16,0,1,0,
0,0,15,0,0,7,
34,0,16,0,1,0,
0,0,230,10,16,0,
1,0,0,0,230,10,
16,0,1,0,0,0,
14,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,50,0,
0,10,50,0,16,0,
1,0,0,0,230,10,
16,128,65,0,0,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
230,10,16,0,0,0,
0,0,56,0,0,10,
194,0,16,0,1,0,
0,0,246,11,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,0,0,128,63,
15,0,0,7,66,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,230,10,16,0,
1,0,0,0,49,0,
0,7,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
42,0,16,0,0,0,
0,0,49,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
30,0,0,8,66,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
42,0,16,0,0,0,
0,0,43,0,0,5,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,56,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,15,0,0,7,
18,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
75,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,50,0,0,9,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,243,4,
53,63,56,32,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,243,4,53,63,
50,0,0,9,34,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,192,1,64,
0,0,0,0,64,64,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,8,
226,0,16,0,0,0,
0,0,6,9,16,128,
65,0,0,0,10,0,
0,0,6,9,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
10,0,0,0,6,0,
16,0,0,0,0,0,
150,7,16,0,0,0,
0,0,70,2,16,0,
10,0,0,0,21,0,
0,1,54,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
10,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
234,0,0,0,13,0,
0,0,0,0,0,0,
2,0,0,0,191,0,
0,0,4,0,0,0,
4,0,0,0,2,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,6,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,7,0,
0,0,8,0,0,0,
13,0,0,0,0,0,
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
class XbrzShadersXbrzFreescalePass1ShaderDef : public ShaderDef
{
public:
	XbrzShadersXbrzFreescalePass1ShaderDef() : ShaderDef{}
	{
		Name = "xbrz-freescale-pass1";
		VertexByteCode = RetroArchXbrzShadersXbrzFreescalePass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrzShadersXbrzFreescalePass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrzShadersXbrzFreescalePass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrzShadersXbrzFreescalePass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
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
