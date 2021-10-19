/*
ShaderGlass shader crt-shaders-guest-advanced\gaussian_horizontal imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/guest/advanced/gaussian_horizontal.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Gaussian blur - horizontal pass, dynamic range, resizable

Copyright (C) 2020 guest(r) - guest.r@gmail.com

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



*/

#pragma once

namespace RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs
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
68,88,66,67,9,209,
58,129,61,29,106,233,
21,96,172,97,212,153,
10,80,1,0,0,0,
188,8,0,0,5,0,
0,0,52,0,0,0,
36,3,0,0,88,3,
0,0,140,3,0,0,
32,8,0,0,82,68,
69,70,232,2,0,0,
1,0,0,0,200,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
191,2,0,0,82,68,
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
0,0,179,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,193,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,76,105,110,101,97,
114,105,122,101,80,97,
115,115,95,115,97,109,
112,108,101,114,0,76,
105,110,101,97,114,105,
122,101,80,97,115,115,
0,80,117,115,104,0,
171,171,193,0,0,0,
6,0,0,0,224,0,
0,0,64,0,0,0,
0,0,0,0,0,0,
0,0,208,1,0,0,
0,0,0,0,16,0,
0,0,0,0,0,0,
240,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
20,2,0,0,16,0,
0,0,16,0,0,0,
2,0,0,0,240,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,40,2,
0,0,32,0,0,0,
16,0,0,0,0,0,
0,0,240,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,58,2,0,0,
48,0,0,0,4,0,
0,0,0,0,0,0,
84,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
120,2,0,0,52,0,
0,0,4,0,0,0,
2,0,0,0,140,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,176,2,
0,0,56,0,0,0,
4,0,0,0,2,0,
0,0,140,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,76,105,110,
101,97,114,105,122,101,
80,97,115,115,83,105,
122,101,0,102,108,111,
97,116,52,0,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
233,1,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,76,2,
0,0,112,97,114,97,
109,115,95,83,73,90,
69,72,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
133,2,0,0,112,97,
114,97,109,115,95,83,
73,71,77,65,95,72,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
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
140,4,0,0,80,0,
0,0,35,1,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,4,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,5,0,
0,0,15,0,0,9,
18,0,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,3,0,
0,0,166,138,32,0,
1,0,0,0,3,0,
0,0,14,0,0,10,
18,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,10,0,
16,0,0,0,0,0,
56,0,0,8,226,0,
16,0,0,0,0,0,
6,20,16,0,0,0,
0,0,6,132,32,0,
1,0,0,0,1,0,
0,0,26,0,0,5,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,8,34,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
65,0,0,5,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,56,0,0,11,
50,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,230,138,
32,0,1,0,0,0,
1,0,0,0,50,0,
0,10,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
166,142,32,0,1,0,
0,0,1,0,0,0,
6,4,16,0,1,0,
0,0,54,0,0,6,
18,0,16,0,1,0,
0,0,42,128,32,0,
1,0,0,0,1,0,
0,0,54,0,0,5,
34,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,11,194,0,16,0,
1,0,0,0,6,4,
16,0,1,0,0,0,
86,133,32,128,65,0,
0,0,1,0,0,0,
3,0,0,0,166,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,9,
66,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,26,128,
32,128,65,0,0,0,
1,0,0,0,3,0,
0,0,56,0,0,8,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,56,0,
0,7,66,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,59,170,184,63,
25,0,0,5,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
114,0,16,0,2,0,
0,0,166,10,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,9,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,26,128,32,128,
65,0,0,0,1,0,
0,0,3,0,0,0,
54,0,0,5,114,0,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,54,0,0,5,
130,0,16,0,2,0,
0,0,42,0,16,0,
1,0,0,0,54,0,
0,5,130,0,16,0,
3,0,0,0,58,0,
16,0,1,0,0,0,
48,0,0,1,49,0,
0,8,18,0,16,0,
4,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
3,0,4,3,10,0,
16,0,4,0,0,0,
50,0,0,9,50,0,
16,0,4,0,0,0,
70,0,16,0,1,0,
0,0,246,15,16,0,
3,0,0,0,230,10,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,0,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
130,0,16,0,4,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
56,0,0,8,130,0,
16,0,4,0,0,0,
58,0,16,0,4,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,56,0,0,7,
130,0,16,0,4,0,
0,0,10,0,16,0,
0,0,0,0,58,0,
16,0,4,0,0,0,
56,0,0,7,130,0,
16,0,4,0,0,0,
58,0,16,0,4,0,
0,0,1,64,0,0,
59,170,184,63,25,0,
0,5,130,0,16,0,
4,0,0,0,58,0,
16,0,4,0,0,0,
50,0,0,9,114,0,
16,0,3,0,0,0,
70,2,16,0,4,0,
0,0,246,15,16,0,
4,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
4,0,0,0,0,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
128,63,22,0,0,1,
14,0,0,7,114,32,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,246,15,16,0,
2,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
39,0,0,0,5,0,
0,0,0,0,0,0,
2,0,0,0,27,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,6,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
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
class CrtShadersGuestAdvancedGaussian_horizontalShaderDef : public ShaderDef
{
public:
	CrtShadersGuestAdvancedGaussian_horizontalShaderDef() : ShaderDef{}
	{
		Name = "gaussian_horizontal";
		VertexByteCode = RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SIZEH", -1, 52, 4, 1.000000f, 50.000000f, 6.000000f, 1.000000f, "          Horizontal Glow Radius"));
		Params.push_back(ShaderParam("SIGMA_H", -1, 56, 4, 0.200000f, 15.000000f, 1.200000f, 0.100000f, "          Horizontal Glow Sigma"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("LinearizePassSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("LinearizePass", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
