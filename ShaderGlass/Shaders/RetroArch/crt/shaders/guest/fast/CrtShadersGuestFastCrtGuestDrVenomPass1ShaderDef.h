/*
ShaderGlass shader crt-shaders-guest-fast\crt-guest-dr-venom-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/guest/fast/crt-guest-dr-venom-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


CRT - Guest - Dr. Venom - Pass1

Copyright (C) 2018-2019 guest(r) - guest.r@gmail.com

Incorporates many good ideas and suggestions from Dr. Venom.

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


 Reading the texels
 reading differences for smoothing

*/

#pragma once

namespace RetroArchCrtShadersGuestFastCrtGuestDrVenomPass1ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,14,47,
213,78,221,130,191,191,
97,225,117,245,226,84,
11,43,1,0,0,0,
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
84,0,128,63,84,0,
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
68,88,66,67,60,123,
186,212,201,130,133,208,
200,253,32,214,28,102,
215,221,1,0,0,0,
204,14,0,0,5,0,
0,0,52,0,0,0,
172,3,0,0,224,3,
0,0,20,4,0,0,
48,14,0,0,82,68,
69,70,112,3,0,0,
1,0,0,0,24,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
70,3,0,0,82,68,
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
1,0,0,0,0,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
7,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,18,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,83,109,111,
111,116,104,80,97,115,
115,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,83,
109,111,111,116,104,80,
97,115,115,0,80,117,
115,104,0,171,18,1,
0,0,7,0,0,0,
48,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,72,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,100,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
100,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,100,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,174,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,200,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,236,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
4,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
40,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,4,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,55,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,4,3,0,0,
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
0,0,90,2,0,0,
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
192,2,0,0,112,97,
114,97,109,115,95,104,
95,115,104,97,114,112,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
251,2,0,0,112,97,
114,97,109,115,95,115,
95,115,104,97,114,112,
0,112,97,114,97,109,
115,95,104,95,115,109,
97,114,116,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
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
83,72,69,88,20,10,
0,0,80,0,0,0,
133,2,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
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
8,0,0,0,56,0,
0,8,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,0,0,0,0,
26,0,0,5,66,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,65,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,56,0,
0,11,50,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
50,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,230,138,32,0,
1,0,0,0,0,0,
0,0,70,0,16,0,
1,0,0,0,54,0,
0,6,18,0,16,0,
1,0,0,0,42,128,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,5,34,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
49,0,0,8,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,42,128,32,0,
1,0,0,0,3,0,
0,0,24,0,0,8,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
3,0,0,0,31,0,
4,3,42,0,16,0,
1,0,0,0,54,0,
0,6,194,0,16,0,
1,0,0,0,166,138,
32,0,1,0,0,0,
3,0,0,0,54,0,
0,6,50,0,16,0,
3,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,54,0,
0,6,82,0,16,0,
2,0,0,0,166,137,
32,0,1,0,0,0,
3,0,0,0,18,0,
0,1,69,0,0,139,
194,0,0,128,67,85,
21,0,50,0,16,0,
4,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,50,0,
0,10,130,0,16,0,
2,0,0,0,58,128,
32,0,1,0,0,0,
3,0,0,0,1,64,
0,0,0,0,0,192,
1,64,0,0,0,0,
136,64,0,0,0,9,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,26,128,
32,128,65,0,0,0,
1,0,0,0,3,0,
0,0,50,0,0,10,
50,0,16,0,3,0,
0,0,70,0,16,0,
4,0,0,0,246,15,
16,0,2,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
50,0,0,12,194,0,
16,0,1,0,0,0,
6,4,16,0,4,0,
0,0,166,138,32,128,
65,0,0,0,1,0,
0,0,3,0,0,0,
166,138,32,0,1,0,
0,0,3,0,0,0,
24,0,0,7,130,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,7,130,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
10,0,16,0,3,0,
0,0,56,0,0,7,
34,0,16,0,4,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,63,
0,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
4,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,63,54,0,0,6,
66,0,16,0,3,0,
0,0,42,128,32,0,
1,0,0,0,3,0,
0,0,55,0,0,9,
50,0,16,0,2,0,
0,0,246,15,16,0,
2,0,0,0,70,0,
16,0,4,0,0,0,
38,10,16,0,3,0,
0,0,49,0,0,7,
130,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,63,42,0,
16,0,0,0,0,0,
55,0,0,9,66,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,26,0,16,0,
3,0,0,0,26,0,
16,0,2,0,0,0,
21,0,0,1,0,0,
0,10,162,0,16,0,
2,0,0,0,166,10,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,192,63,
0,0,0,0,0,0,
0,63,56,0,0,7,
162,0,16,0,2,0,
0,0,86,13,16,0,
2,0,0,0,86,13,
16,0,2,0,0,0,
56,0,0,8,162,0,
16,0,2,0,0,0,
86,13,16,0,2,0,
0,0,6,0,16,128,
65,0,0,0,3,0,
0,0,25,0,0,5,
162,0,16,0,2,0,
0,0,86,13,16,0,
2,0,0,0,0,0,
0,8,82,0,16,0,
3,0,0,0,166,10,
16,128,65,0,0,0,
1,0,0,0,86,7,
16,0,2,0,0,0,
52,0,0,8,34,0,
16,0,2,0,0,0,
26,0,16,128,65,0,
0,0,2,0,0,0,
10,0,16,0,3,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,205,204,204,190,
52,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
3,0,0,0,0,0,
0,11,210,0,16,0,
3,0,0,0,166,10,
16,128,65,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,0,0,0,
192,63,0,0,32,64,
56,0,0,7,210,0,
16,0,3,0,0,0,
6,14,16,0,3,0,
0,0,6,14,16,0,
3,0,0,0,56,0,
0,8,66,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
2,0,0,0,10,0,
16,0,3,0,0,0,
25,0,0,5,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,8,
66,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,2,0,
0,0,42,0,16,0,
0,0,0,0,52,0,
0,7,66,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,8,
82,0,16,0,2,0,
0,0,166,11,16,0,
3,0,0,0,86,5,
16,128,65,0,0,0,
3,0,0,0,25,0,
0,5,82,0,16,0,
2,0,0,0,6,2,
16,0,2,0,0,0,
0,0,0,8,146,0,
16,0,2,0,0,0,
246,15,16,128,65,0,
0,0,1,0,0,0,
6,8,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,205,204,204,190,
52,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,10,0,16,0,
2,0,0,0,52,0,
0,8,18,0,16,0,
2,0,0,0,42,0,
16,128,65,0,0,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
0,0,0,7,66,0,
16,0,2,0,0,0,
42,0,16,0,1,0,
0,0,26,0,16,0,
2,0,0,0,0,0,
0,7,66,0,16,0,
2,0,0,0,42,0,
16,0,0,0,0,0,
42,0,16,0,2,0,
0,0,0,0,0,7,
66,0,16,0,2,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
0,0,0,7,66,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,14,0,
0,10,66,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
42,0,16,0,2,0,
0,0,50,0,0,13,
50,0,16,0,3,0,
0,0,70,0,16,128,
65,0,0,0,1,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
50,0,16,0,4,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,128,65,0,0,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
70,0,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
50,0,16,0,6,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,70,0,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,70,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
1,0,0,0,166,10,
16,0,1,0,0,0,
70,2,16,0,4,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,86,5,
16,0,2,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
5,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
6,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,6,0,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,166,10,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
51,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
6,0,0,0,51,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,205,204,76,63,
205,204,76,63,205,204,
76,63,0,0,0,0,
52,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
6,0,0,0,52,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,10,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,154,153,153,63,
154,153,153,63,154,153,
153,63,0,0,0,0,
52,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,51,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,1,0,
0,0,55,0,0,9,
114,32,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,80,0,
0,0,8,0,0,0,
0,0,0,0,2,0,
0,0,60,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
6,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,7,0,0,0,
3,0,0,0,2,0,
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
class CrtShadersGuestFastCrtGuestDrVenomPass1ShaderDef : public ShaderDef
{
public:
	CrtShadersGuestFastCrtGuestDrVenomPass1ShaderDef() : ShaderDef{}
	{
		Name = "crt-guest-dr-venom-pass1";
		VertexByteCode = RetroArchCrtShadersGuestFastCrtGuestDrVenomPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGuestFastCrtGuestDrVenomPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGuestFastCrtGuestDrVenomPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGuestFastCrtGuestDrVenomPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("h_sharp", -1, 52, 4, 1.500000f, 20.000000f, 5.000000f));
		Params.push_back(ShaderParam("s_sharp", -1, 56, 4, 0.000000f, 0.200000f, 0.050000f));
		Params.push_back(ShaderParam("h_smart", -1, 60, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("SmoothPass", 3));
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
