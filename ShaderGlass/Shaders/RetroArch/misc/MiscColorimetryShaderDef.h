/*
ShaderGlass shader misc\colorimetry imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/misc/colorimetry.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Colorimetry shader
Ported from Drag's NES Palette Generator
http://drag.wootest.net/misc/palgen.html

//http://www.brucelindbloom.com/Eqn_RGB_XYZ_Matrix.html
//http://www.dr-lex.be/random/matrix_inv.html
// Convert the (x,y) values to X Y Z.
// FCC 1953
// Original FCC standard for the color of the phosphors
// SMPTE C (1987)
// A newer standard for the color of the phospors. (Not used in Japan)
//sRGB (PC Monitors)
//The colorimetry used in PC monitors, like the one you're (probably) looking at right now.
// Get ready for a bunch of painful math. I need to invert a matrix, then multiply it by a vector.
// Determinant for inverse matrix
// This should be the completed RGB -> XYZ matrix.
// Multiply each of the first three members by R, then add them together to get X
// Convert RGB to XYZ using the matrix generated with the specified RGB and W points.
// This is the conversion matrix for CIEXYZ -> sRGB. I nicked this from:
// http://www.brucelindbloom.com/Eqn_RGB_XYZ_Matrix.html
// and I know it's right because when you use the sRGB colorimetry, this matrix produces identical results to
// just using the raw R, G, and B above.
// Convert back to RGB using the XYZ->sRGB matrix.
// Apply desired clipping method to out-of-gamut colors.
//If a channel is out of range (> 1.0), it's simply clamped to 1.0. This may change hue, saturation, and/or lightness.
//If any channels are out of range, the color is darkened until it is completely in range.
//If any channels are out of range, the color is desaturated towards the luminance it would've had.

*/

#pragma once

namespace RetroArchMiscColorimetryShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,29,148,
77,60,16,150,158,22,
233,205,70,203,43,204,
133,6,1,0,0,0,
208,4,0,0,5,0,
0,0,52,0,0,0,
128,2,0,0,204,2,
0,0,36,3,0,0,
52,4,0,0,82,68,
69,70,68,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
28,2,0,0,82,68,
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
92,0,0,0,5,0,
0,0,120,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
64,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,84,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,120,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,148,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
148,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
204,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,148,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,222,1,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,248,1,0,0,
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
75,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,138,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,103,108,
111,98,97,108,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,240,1,0,0,
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
68,88,66,67,100,238,
10,180,231,65,205,213,
158,13,151,182,113,182,
163,97,1,0,0,0,
132,15,0,0,5,0,
0,0,52,0,0,0,
24,2,0,0,76,2,
0,0,128,2,0,0,
232,14,0,0,82,68,
69,70,220,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
178,1,0,0,82,68,
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
0,0,3,0,0,0,
208,0,0,0,16,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,96,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,132,1,0,0,
4,0,0,0,4,0,
0,0,2,0,0,0,
96,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
155,1,0,0,8,0,
0,0,4,0,0,0,
2,0,0,0,96,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,99,
111,108,111,114,95,109,
111,100,101,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
90,1,0,0,112,97,
114,97,109,115,95,119,
104,105,116,101,95,112,
111,105,110,116,95,100,
57,51,0,112,97,114,
97,109,115,95,99,108,
105,112,112,105,110,103,
95,109,101,116,104,111,
100,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
171,171,73,83,71,78,
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
69,88,96,12,0,0,
80,0,0,0,24,3,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
49,0,0,8,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,26,128,32,0,
1,0,0,0,0,0,
0,0,55,0,0,15,
242,0,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,2,64,
0,0,82,184,158,62,
193,202,161,62,215,163,
48,63,193,202,161,190,
2,64,0,0,55,26,
160,62,176,114,168,62,
228,242,47,63,176,114,
168,190,49,0,0,11,
50,0,16,0,2,0,
0,0,134,128,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,24,0,
0,8,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
10,128,32,0,1,0,
0,0,0,0,0,0,
55,0,0,15,242,0,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
174,71,33,63,123,20,
174,62,82,184,158,62,
236,81,24,63,2,64,
0,0,10,215,35,63,
195,245,168,62,154,153,
153,62,154,153,25,63,
55,0,0,15,194,0,
16,0,2,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,82,184,30,62,
41,92,143,61,2,64,
0,0,0,0,0,0,
0,0,0,0,154,153,
25,62,143,194,117,61,
55,0,0,12,242,0,
16,0,3,0,0,0,
6,0,16,0,2,0,
0,0,2,64,0,0,
31,133,43,63,195,245,
168,62,61,10,87,62,
143,194,53,63,70,14,
16,0,3,0,0,0,
55,0,0,12,82,0,
16,0,2,0,0,0,
6,0,16,0,2,0,
0,0,2,64,0,0,
41,92,15,62,0,0,
0,0,10,215,163,61,
0,0,0,0,166,11,
16,0,2,0,0,0,
14,0,0,7,50,0,
16,0,4,0,0,0,
134,0,16,0,3,0,
0,0,214,5,16,0,
3,0,0,0,14,0,
0,7,130,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
42,0,16,0,2,0,
0,0,14,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
0,0,0,11,82,0,
16,0,3,0,0,0,
166,8,16,128,65,0,
0,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,0,
0,0,128,63,0,0,
0,0,0,0,0,8,
82,0,16,0,3,0,
0,0,246,13,16,128,
65,0,0,0,3,0,
0,0,6,2,16,0,
3,0,0,0,14,0,
0,7,50,0,16,0,
3,0,0,0,134,0,
16,0,3,0,0,0,
118,15,16,0,3,0,
0,0,0,0,0,8,
18,0,16,0,2,0,
0,0,10,0,16,128,
65,0,0,0,2,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,18,0,16,0,
2,0,0,0,42,0,
16,128,65,0,0,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
14,0,0,7,18,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,0,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,14,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
0,0,0,8,194,0,
16,0,1,0,0,0,
6,4,16,128,65,0,
0,0,3,0,0,0,
6,0,16,0,2,0,
0,0,56,0,0,7,
194,0,16,0,2,0,
0,0,246,15,16,0,
0,0,0,0,6,4,
16,0,3,0,0,0,
50,0,0,10,194,0,
16,0,2,0,0,0,
6,0,16,0,2,0,
0,0,86,1,16,0,
4,0,0,0,166,14,
16,128,65,0,0,0,
2,0,0,0,50,0,
0,10,66,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,128,
65,0,0,0,2,0,
0,0,0,0,0,8,
194,0,16,0,4,0,
0,0,246,15,16,128,
65,0,0,0,0,0,
0,0,86,1,16,0,
4,0,0,0,50,0,
0,9,66,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
42,0,16,0,4,0,
0,0,42,0,16,0,
3,0,0,0,14,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,3,0,
0,0,14,0,0,8,
66,0,16,0,2,0,
0,0,42,0,16,128,
65,0,0,0,2,0,
0,0,42,0,16,0,
3,0,0,0,50,0,
0,9,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,14,0,
0,7,66,0,16,0,
2,0,0,0,42,0,
16,0,4,0,0,0,
42,0,16,0,3,0,
0,0,50,0,0,9,
66,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,14,0,0,8,
130,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,1,0,
0,0,42,0,16,0,
3,0,0,0,14,0,
0,7,66,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
42,0,16,0,3,0,
0,0,50,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
42,0,16,0,2,0,
0,0,14,0,0,8,
66,0,16,0,2,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,42,0,16,0,
3,0,0,0,50,0,
0,9,130,0,16,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,0,0,
0,8,66,0,16,0,
2,0,0,0,26,0,
16,128,65,0,0,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
14,0,0,7,66,0,
16,0,2,0,0,0,
42,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,56,0,
0,7,130,0,16,0,
2,0,0,0,26,0,
16,0,4,0,0,0,
26,0,16,0,3,0,
0,0,50,0,0,10,
130,0,16,0,2,0,
0,0,10,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
58,0,16,128,65,0,
0,0,2,0,0,0,
14,0,0,8,130,0,
16,0,2,0,0,0,
58,0,16,128,65,0,
0,0,2,0,0,0,
42,0,16,0,3,0,
0,0,50,0,0,9,
18,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,0,0,0,8,
66,0,16,0,2,0,
0,0,26,0,16,128,
65,0,0,0,4,0,
0,0,10,0,16,0,
4,0,0,0,14,0,
0,7,66,0,16,0,
2,0,0,0,42,0,
16,0,2,0,0,0,
42,0,16,0,3,0,
0,0,50,0,0,9,
18,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
34,0,16,0,1,0,
0,0,10,0,16,0,
4,0,0,0,42,0,
16,0,1,0,0,0,
56,0,0,7,66,0,
16,0,2,0,0,0,
26,0,16,0,4,0,
0,0,58,0,16,0,
1,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,26,0,16,0,
3,0,0,0,42,0,
16,0,1,0,0,0,
56,0,0,7,18,0,
16,0,3,0,0,0,
10,0,16,0,3,0,
0,0,58,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
66,0,16,0,2,0,
0,0,26,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
50,0,0,9,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
56,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,34,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,50,0,
0,9,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,3,0,
0,0,50,0,0,9,
18,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,10,
114,0,16,0,1,0,
0,0,6,0,16,0,
1,0,0,0,2,64,
0,0,177,191,196,191,
197,32,240,63,96,229,
80,190,0,0,0,0,
50,0,0,12,226,0,
16,0,0,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,183,98,
79,64,11,36,120,191,
211,188,99,61,6,9,
16,0,1,0,0,0,
50,0,0,12,114,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,2,64,0,0,
100,59,255,190,195,100,
42,61,84,82,135,63,
0,0,0,0,150,7,
16,0,0,0,0,0,
31,0,4,3,26,0,
16,0,2,0,0,0,
54,32,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,18,0,0,1,
24,0,0,8,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,42,128,32,0,
1,0,0,0,0,0,
0,0,31,0,4,3,
58,0,16,0,0,0,
0,0,49,0,0,10,
114,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,0,0,0,0,
60,0,0,7,130,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,60,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,49,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
49,0,0,7,34,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,14,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,0,16,0,1,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,56,32,0,7,
114,0,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
18,0,0,1,49,0,
0,10,114,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,0,0,
0,0,60,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
60,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,55,0,0,9,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,49,0,0,7,
34,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
14,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,10,0,16,0,
1,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,10,226,0,16,0,
1,0,0,0,6,9,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,50,0,0,12,
114,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,55,32,0,9,
114,0,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,21,0,0,1,
21,0,0,1,54,0,
0,5,114,32,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,96,0,0,0,
5,0,0,0,0,0,
0,0,2,0,0,0,
69,0,0,0,0,0,
0,0,4,0,0,0,
3,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,12,0,
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
class MiscColorimetryShaderDef : public ShaderDef
{
public:
	MiscColorimetryShaderDef() : ShaderDef{}
	{
		Name = "colorimetry";
		VertexByteCode = RetroArchMiscColorimetryShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchMiscColorimetryShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchMiscColorimetryShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchMiscColorimetryShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("color_mode", -1, 0, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("white_point_d93", -1, 4, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("clipping_method", -1, 8, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f));
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
