/*
ShaderGlass shader crt-shaders-crt-interlaced-halation\crt-interlaced-halation-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-interlaced-halation/crt-interlaced-halation-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


CRT-interlaced-halation shader - pass1

Like the CRT-interlaced shader, but adds a subtle glow around bright areas
of the screen.

Copyright (C) 2010-2012 cgwg, Themaister and DOLLS

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your option)
any later version.

(cgwg gave their consent to have the original version of this shader
distributed under the GPL in this message:

http://board.byuu.org/viewtopic.php?p=26075#p26075

Feel free to distribute my shaders under the GPL. After all, the
barrel distortion code was taken from the Curvature shader, which is
under the GPL.
)


*/

#pragma once

namespace RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,96,30,
165,149,49,48,102,213,
105,170,7,127,105,212,
131,142,1,0,0,0,
172,6,0,0,5,0,
0,0,52,0,0,0,
192,2,0,0,12,3,
0,0,172,3,0,0,
16,6,0,0,82,68,
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
79,83,71,78,152,0,
0,0,5,0,0,0,
8,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,128,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,128,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,128,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,0,0,0,137,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,4,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,92,2,0,0,
80,0,1,0,151,0,
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
0,0,103,0,0,4,
242,32,16,0,4,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,56,0,
0,11,114,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,192,
0,0,64,192,0,0,
0,192,0,0,0,0,
166,138,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
242,32,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,6,20,
16,0,1,0,0,0,
56,0,0,11,82,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
0,0,166,138,32,0,
1,0,0,0,0,0,
0,0,54,0,0,8,
162,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,7,242,32,16,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
6,20,16,0,1,0,
0,0,56,0,0,11,
114,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
64,64,0,0,128,64,
0,0,0,0,166,138,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,5,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
0,0,0,7,242,32,
16,0,3,0,0,0,
70,14,16,0,0,0,
0,0,6,20,16,0,
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
242,32,16,0,4,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
15,0,0,0,1,0,
0,0,0,0,0,0,
7,0,0,0,10,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
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
68,88,66,67,250,239,
225,144,139,158,110,252,
183,13,163,172,109,235,
18,7,1,0,0,0,
36,9,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,116,1,
0,0,168,1,0,0,
136,8,0,0,82,68,
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
116,0,0,0,4,0,
0,0,8,0,0,0,
104,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
104,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
104,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,13,0,0,
104,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
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
69,88,216,6,0,0,
80,0,0,0,182,1,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,242,16,16,0,
1,0,0,0,98,16,
0,3,210,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,214,21,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,56,0,
0,10,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,205,204,
12,64,25,0,0,5,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,56,0,
0,10,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,139,219,
215,61,139,219,215,61,
139,219,215,61,139,219,
215,61,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,198,16,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
205,204,12,64,25,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
50,0,0,12,242,0,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
174,10,150,60,174,10,
150,60,174,10,150,60,
174,10,150,60,70,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,1,0,
0,0,230,26,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,56,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,205,204,
12,64,25,0,0,5,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,50,0,
0,12,242,0,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,178,90,
188,62,178,90,188,62,
178,90,188,62,178,90,
188,62,70,14,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
198,16,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,56,0,0,10,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,205,204,12,64,
25,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,50,0,0,12,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,125,95,71,63,
125,95,71,63,125,95,
71,63,125,95,71,63,
70,14,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
205,204,12,64,25,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
0,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
230,26,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,56,0,0,10,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,205,204,12,64,
25,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,50,0,0,12,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,125,95,71,63,
125,95,71,63,125,95,
71,63,125,95,71,63,
70,14,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,198,16,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
205,204,12,64,25,0,
0,5,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
50,0,0,12,242,0,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
178,90,188,62,178,90,
188,62,178,90,188,62,
178,90,188,62,70,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,1,0,
0,0,214,21,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,56,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,205,204,
12,64,25,0,0,5,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,50,0,
0,12,242,0,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,139,219,
215,61,139,219,215,61,
139,219,215,61,139,219,
215,61,70,14,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
230,26,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,56,0,0,10,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,205,204,12,64,
25,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,50,0,0,12,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,174,10,150,60,
174,10,150,60,174,10,
150,60,174,10,150,60,
70,14,16,0,0,0,
0,0,56,0,0,10,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,185,153,144,62,
185,153,144,62,185,153,
144,62,185,153,144,62,
47,0,0,5,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,56,0,0,10,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,47,186,232,62,
47,186,232,62,47,186,
232,62,47,186,232,62,
25,0,0,5,242,32,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,50,0,0,0,
2,0,0,0,0,0,
0,0,5,0,0,0,
40,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,9,0,
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
0,0,0,0,0,0
};

}

namespace RetroArch
{
class CrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDef : public ShaderDef
{
public:
	CrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDef() : ShaderDef{}
	{
		Name = "crt-interlaced-halation-pass1";
		VertexByteCode = RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sFragmentByteCode);
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
