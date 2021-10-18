/*
ShaderGlass shader crt-shaders-guest-advanced\avg-lum-ntsc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/guest/advanced/avg-lum-ntsc.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Average Luminance Shader, Smart Edge Interpolation Coefficients Calculation

Copyright (C) 2018-2020 guest(r) - guest.r@gmail.com

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

Thanks to HunterK for the mipmap hint. :D

// Reference: http://www.compuphase.com/cmetric.htm
// Reference: ScaleFX, author Sp00kyFox

*/

#pragma once

namespace RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs
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
68,88,66,67,73,213,
246,118,210,237,215,183,
253,155,255,125,222,37,
118,117,1,0,0,0,
64,12,0,0,5,0,
0,0,52,0,0,0,
8,3,0,0,60,3,
0,0,112,3,0,0,
164,11,0,0,82,68,
69,70,204,2,0,0,
1,0,0,0,40,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
163,2,0,0,82,68,
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
1,0,0,0,8,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
15,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,34,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,65,118,103,
76,117,109,80,97,115,
115,70,101,101,100,98,
97,99,107,95,115,97,
109,112,108,101,114,0,
83,111,117,114,99,101,
0,65,118,103,76,117,
109,80,97,115,115,70,
101,101,100,98,97,99,
107,0,80,117,115,104,
0,171,34,1,0,0,
4,0,0,0,64,1,
0,0,48,0,0,0,
0,0,0,0,0,0,
0,0,224,1,0,0,
0,0,0,0,4,0,
0,0,0,0,0,0,
248,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
28,2,0,0,16,0,
0,0,16,0,0,0,
2,0,0,0,56,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,92,2,
0,0,32,0,0,0,
4,0,0,0,2,0,
0,0,116,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,2,0,0,
36,0,0,0,4,0,
0,0,0,0,0,0,
116,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,242,1,0,0,
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
46,2,0,0,112,97,
114,97,109,115,95,108,
115,109,111,111,116,104,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
107,2,0,0,112,97,
114,97,109,115,95,115,
116,104,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
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
69,88,44,8,0,0,
80,0,0,0,11,2,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
3,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
3,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,3,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,4,0,
0,0,47,0,0,6,
50,0,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,1,0,
0,0,52,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
52,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,65,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
72,0,0,144,194,0,
0,128,67,85,21,0,
226,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,62,0,0,
128,62,0,0,0,0,
0,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,10,0,16,0,
0,0,0,0,16,0,
0,7,34,0,16,0,
0,0,0,0,150,7,
16,0,0,0,0,0,
150,7,16,0,0,0,
0,0,72,0,0,144,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,62,
0,0,64,63,0,0,
0,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,10,0,
16,0,0,0,0,0,
16,0,0,7,66,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,75,0,
0,5,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,72,0,
0,144,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
64,63,0,0,128,62,
0,0,0,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,72,0,0,144,
194,0,0,128,67,85,
21,0,210,0,16,0,
0,0,0,0,2,64,
0,0,0,0,64,63,
0,0,64,63,0,0,
0,0,0,0,0,0,
198,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,10,0,
16,0,0,0,0,0,
16,0,0,7,18,0,
16,0,0,0,0,0,
134,3,16,0,0,0,
0,0,134,3,16,0,
0,0,0,0,16,0,
0,7,66,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,75,0,0,5,
82,0,16,0,0,0,
0,0,6,2,16,0,
0,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
58,205,19,62,47,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
102,102,38,63,25,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
69,0,0,142,194,0,
0,128,67,85,21,0,
34,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,198,121,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,8,
34,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,10,130,32,16,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,64,14,0,
0,11,66,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,128,32,0,1,0,
0,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,54,0,
0,8,162,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,7,242,0,
16,0,2,0,0,0,
230,4,16,0,1,0,
0,0,70,20,16,0,
0,0,0,0,0,0,
0,8,50,0,16,0,
1,0,0,0,230,10,
16,128,65,0,0,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,230,10,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,10,0,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,50,0,
0,15,98,0,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,191,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,64,0,0,64,64,
0,0,0,0,56,0,
0,7,114,0,16,0,
0,0,0,0,214,6,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,16,0,0,7,
18,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
75,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,7,
66,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,171,170,170,62,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
50,0,0,15,98,0,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,128,191,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,64,0,0,
64,64,0,0,0,0,
54,0,0,5,130,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
128,64,56,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
1,0,0,0,214,6,
16,0,3,0,0,0,
16,0,0,7,130,0,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
1,0,0,0,75,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,18,32,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
171,170,170,62,0,0,
0,7,130,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,50,0,0,15,
98,0,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,191,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,64,
0,0,64,64,0,0,
0,0,54,0,0,5,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,64,56,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
214,6,16,0,1,0,
0,0,16,0,0,7,
18,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
75,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,7,
34,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,171,170,170,62,
62,0,0,1,83,84,
65,84,148,0,0,0,
61,0,0,0,4,0,
0,0,0,0,0,0,
2,0,0,0,47,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class CrtShadersGuestAdvancedAvgLumNtscShaderDef : public ShaderDef
{
public:
	CrtShadersGuestAdvancedAvgLumNtscShaderDef() : ShaderDef{}
	{
		Name = "avg-lum-ntsc";
		VertexByteCode = RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("lsmooth", -1, 32, 4, 0.500000f, 0.990000f, 0.700000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 0, 4, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("sth", -1, 36, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("AvgLumPassFeedback", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
