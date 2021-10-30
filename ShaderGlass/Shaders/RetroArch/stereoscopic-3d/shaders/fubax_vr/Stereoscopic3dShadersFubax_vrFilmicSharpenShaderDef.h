/*
ShaderGlass shader stereoscopic-3d-shaders-fubax_vr\FilmicSharpen imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/stereoscopic-3d/shaders/fubax_vr/FilmicSharpen.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


/// VR shader ///

Make any game VR and any screen with lenses a VR headset.
Thanks to this shader you'll be able to correct distortions of any lens types
(DIY, experimental) and chromatic aberration.
Also if a game outputs depth pass you can have a stereo-3D vision thanks to
the parallax mapping (which needs some further improvement).

Copyright (c) 2019 Jacob Max Fober

This work is licensed under the Creative Commons
Attribution-NonCommercial-ShareAlike 4.0 International License.
To view a copy of this license, visit
http://creativecommons.org/licenses/by-nc-sa/4.0/

If you want to use it commercially, contact me at jakub.m.fober@pm.me
If you have questions, visit https://reshade.me/forum/shader-discussion/

I'm author of most of equations present here,
beside Brown-Conrady distortion correction model and
Parallax Steep and Occlusion mapping which
I changed and adopted from various sources.

Version 0.4.2 alpha

ParallaxOffset, ParallaxCenter, ParallaxSteps, ParallaxMaskScalar,
ParallaxSwitch 
// Grid settings
//#pragma parameter ParallaxSwitch "Toggle Parallax Effect" 1.0 0.0 1.0 1.0
//#pragma parameter ParallaxOffset "Parallax Horizontal Offset" 0.355 0.0 1.0 0.001
//#pragma parameter ParallaxCenter "Parallax Rotation Center (ZPD)" 1.0 0.0 1.0 0.001
//#pragma parameter ParallaxSteps "Parallax Sampling Steps" 16.0 1.0 128.0 0.2
//#pragma parameter ParallaxMaskScalar "Parallax Gap Compensation" 10.0 0.0 32.0 0.2
//float ParallaxOffset = global.ParallaxOffset;
//float ParallaxCenter = global.ParallaxCenter;
//int ParallaxSteps = int(global.ParallaxSteps);
//int ParallaxMaskScalar = int(global.ParallaxMaskScalar);
//bool ParallaxSwitch = bool(global.ParallaxSwitch);
// Adjust to limited RGB
// Generate test grid
// Grid settings
// Generate grid pattern
// Anti-aliased grid
// Combine/solo vertical and horizontal lines
// Generate center cross
// Anti-aliased cross
// Combine vertical and horizontal line
// Blend grid and center cross
// Solo colors
// Reduce grid brightness
// Divide screen into two halfs
// Mirror left half
// Convert stereo coordinates to mono
// Generate border mask with anti-aliasing from UV coordinates
// Get pixel size in transformed coordinates (for anti-aliasing)
// Create borders mask (with anti-aliasing)
// Combine side and top borders

// Can't really use this one as RetroArch can't access the depth buffer
float GetDepth(vec2 texcoord)
{
return ReShade::GetLinearizedDepth(texcoord);
}


// Horizontal parallax offset effect
vec2 Parallax(vec2 Coordinates, float Offset, float Center, int GapOffset, int Steps)
{
// Limit amount of loop steps to make it finite
#ifndef MaximumParallaxSteps
#def MaximumParallaxSteps 64
#endif

// Offset per step progress
float LayerDepth = 1.0 / min(MaximumParallaxSteps, Steps);

// Netto layer offset change
float deltaCoordinates = Offset * LayerDepth;

vec2 ParallaxCoord = Coordinates;
// Offset image horizontally so that parallax is in the depth appointed center
ParallaxCoord.x += Offset * Center;
float CurrentDepthMapValue = GetDepth(ParallaxCoord); // Replace function

// Steep parallax mapping
float CurrentLayerDepth = 0.0;
[loop]
while(CurrentLayerDepth < CurrentDepthMapValue)
{
// Shift coordinates horizontally in linear fasion
ParallaxCoord.x -= deltaCoordinates;
// Get depth value at current coordinates
CurrentDepthMapValue = GetDepth(ParallaxCoord); // Replace function
// Get depth of next layer
CurrentLayerDepth += LayerDepth;
continue;
}

// Parallax Occlusion Mapping
vec2 PrevParallaxCoord = ParallaxCoord;
PrevParallaxCoord.x += deltaCoordinates;
float afterDepthValue = CurrentDepthMapValue - CurrentLayerDepth;
float beforeDepthValue = GetDepth(PrevParallaxCoord); // Replace function
// Store depth read difference for masking
float DepthDifference = beforeDepthValue - CurrentDepthMapValue;

beforeDepthValue += LayerDepth - CurrentLayerDepth;
// Interpolate coordinates
float weight = afterDepthValue / (afterDepthValue - beforeDepthValue);
ParallaxCoord = PrevParallaxCoord * weight + ParallaxCoord * (1.0 - weight);

// Apply gap masking (by JMF)
DepthDifference *= GapOffset * Offset * 100.0;
DepthDifference *= ReShade::PixelSize.x; // Replace function
ParallaxCoord.x += DepthDifference;

return ParallaxCoord;
};

// Lens projection model (algorithm by JMF)
// Brown-Conrady radial distortion model (multiply by coordinates)
// Brown-Conrady tangental distortion model (add to coordinates)
// RGB to YUV709.luma
// Overlay blending mode
// Bypass sharpening
// Sample display image
// Luma high-pass
// Sharpen strength
// Clamping sharpen

*/

#pragma once

namespace RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,201,39,
207,27,151,102,197,255,
45,68,238,190,230,137,
127,3,1,0,0,0,
228,13,0,0,5,0,
0,0,52,0,0,0,
148,11,0,0,224,11,
0,0,56,12,0,0,
72,13,0,0,82,68,
69,70,88,11,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
46,11,0,0,82,68,
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
92,0,0,0,47,0,
0,0,120,0,0,0,
0,1,0,0,0,0,
0,0,0,0,0,0,
208,7,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,228,7,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,8,8,
0,0,64,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,68,8,0,0,
68,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
84,8,0,0,72,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,95,8,
0,0,76,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,115,8,0,0,
80,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
126,8,0,0,84,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,142,8,
0,0,88,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,8,0,0,
92,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
162,8,0,0,96,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,172,8,
0,0,100,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,182,8,0,0,
104,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
192,8,0,0,108,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,202,8,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,212,8,0,0,
116,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
230,8,0,0,120,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,255,8,
0,0,124,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,16,9,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
33,9,0,0,132,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,50,9,
0,0,136,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,67,9,0,0,
140,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
84,9,0,0,144,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,100,9,
0,0,148,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,116,9,0,0,
152,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
132,9,0,0,156,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,148,9,
0,0,160,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,164,9,0,0,
164,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
190,9,0,0,168,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,214,9,
0,0,172,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,238,9,0,0,
176,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
5,10,0,0,180,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,28,10,
0,0,184,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,52,10,0,0,
188,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
76,10,0,0,192,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,99,10,
0,0,196,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,122,10,0,0,
200,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
138,10,0,0,204,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,151,10,
0,0,208,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,165,10,0,0,
212,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
180,10,0,0,216,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,195,10,
0,0,220,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,207,10,0,0,
224,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
225,10,0,0,228,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,240,10,
0,0,232,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,255,10,0,0,
236,0,0,0,4,0,
0,0,0,0,0,0,
32,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
14,11,0,0,240,0,
0,0,4,0,0,0,
0,0,0,0,32,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,11,
0,0,244,0,0,0,
4,0,0,0,0,0,
0,0,32,8,0,0,
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
219,7,0,0,103,108,
111,98,97,108,95,83,
111,108,111,76,105,110,
101,115,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
25,8,0,0,103,108,
111,98,97,108,95,84,
101,115,116,71,114,105,
100,0,103,108,111,98,
97,108,95,73,80,68,
0,103,108,111,98,97,
108,95,83,116,101,114,
101,111,83,119,105,116,
99,104,0,103,108,111,
98,97,108,95,70,79,
86,0,103,108,111,98,
97,108,95,76,101,110,
115,84,121,112,101,0,
103,108,111,98,97,108,
95,75,49,0,103,108,
111,98,97,108,95,75,
50,0,103,108,111,98,
97,108,95,75,51,0,
103,108,111,98,97,108,
95,75,52,0,103,108,
111,98,97,108,95,80,
49,0,103,108,111,98,
97,108,95,80,50,0,
103,108,111,98,97,108,
95,80,51,0,103,108,
111,98,97,108,95,73,
109,97,103,101,83,99,
97,108,101,0,103,108,
111,98,97,108,95,80,
101,114,115,112,101,99,
116,105,118,101,83,119,
105,116,99,104,0,103,
108,111,98,97,108,95,
67,104,71,114,101,101,
110,75,49,0,103,108,
111,98,97,108,95,67,
104,71,114,101,101,110,
75,50,0,103,108,111,
98,97,108,95,67,104,
71,114,101,101,110,75,
51,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,75,52,
0,103,108,111,98,97,
108,95,83,111,108,111,
71,114,101,101,110,0,
103,108,111,98,97,108,
95,67,104,66,108,117,
101,75,49,0,103,108,
111,98,97,108,95,67,
104,66,108,117,101,75,
50,0,103,108,111,98,
97,108,95,67,104,66,
108,117,101,75,51,0,
103,108,111,98,97,108,
95,67,104,66,108,117,
101,75,52,0,103,108,
111,98,97,108,95,83,
111,108,111,66,108,117,
101,0,103,108,111,98,
97,108,95,67,104,114,
111,109,97,116,105,99,
65,98,114,83,119,105,
116,99,104,0,103,108,
111,98,97,108,95,67,
104,71,114,101,101,110,
79,102,102,115,101,116,
76,95,120,0,103,108,
111,98,97,108,95,67,
104,71,114,101,101,110,
79,102,102,115,101,116,
76,95,121,0,103,108,
111,98,97,108,95,67,
104,66,108,117,101,79,
102,102,115,101,116,76,
95,120,0,103,108,111,
98,97,108,95,67,104,
66,108,117,101,79,102,
102,115,101,116,76,95,
121,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,79,102,
102,115,101,116,82,95,
120,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,79,102,
102,115,101,116,82,95,
121,0,103,108,111,98,
97,108,95,67,104,66,
108,117,101,79,102,102,
115,101,116,82,95,120,
0,103,108,111,98,97,
108,95,67,104,66,108,
117,101,79,102,102,115,
101,116,82,95,121,0,
103,108,111,98,97,108,
95,83,116,114,101,110,
103,116,104,0,103,108,
111,98,97,108,95,67,
108,97,109,112,0,103,
108,111,98,97,108,95,
79,102,102,115,101,116,
0,103,108,111,98,97,
108,95,80,114,101,118,
105,101,119,0,103,108,
111,98,97,108,95,83,
104,97,114,112,101,110,
0,103,108,111,98,97,
108,95,78,111,115,101,
0,103,108,111,98,97,
108,95,66,114,105,103,
104,116,110,101,115,115,
0,103,108,111,98,97,
108,95,83,99,97,108,
101,95,120,0,103,108,
111,98,97,108,95,83,
99,97,108,101,95,121,
0,103,108,111,98,97,
108,95,105,109,103,122,
111,111,109,0,103,108,
111,98,97,108,95,97,
115,112,101,99,116,95,
120,0,103,108,111,98,
97,108,95,97,115,112,
101,99,116,95,121,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,15,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,80,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,65,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
8,1,0,0,80,0,
1,0,66,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,103,0,0,4,
242,32,16,0,1,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
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
4,0,0,0,4,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,16,250,
33,247,213,254,195,212,
98,177,159,85,83,29,
6,247,1,0,0,0,
228,20,0,0,5,0,
0,0,52,0,0,0,
108,13,0,0,160,13,
0,0,212,13,0,0,
72,20,0,0,82,68,
69,70,48,13,0,0,
2,0,0,0,220,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
8,13,0,0,82,68,
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
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,211,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
215,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
83,111,117,114,99,101,
0,85,66,79,0,80,
117,115,104,0,211,0,
0,0,47,0,0,0,
12,1,0,0,0,1,
0,0,0,0,0,0,
0,0,0,0,215,0,
0,0,4,0,0,0,
196,11,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,100,8,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,120,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,156,8,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
216,8,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,232,8,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,243,8,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
7,9,0,0,80,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,18,9,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,34,9,0,0,
88,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
44,9,0,0,92,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,54,9,
0,0,96,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,64,9,0,0,
100,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
74,9,0,0,104,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,84,9,
0,0,108,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,94,9,0,0,
112,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
104,9,0,0,116,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,122,9,
0,0,120,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,147,9,0,0,
124,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
164,9,0,0,128,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,181,9,
0,0,132,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,198,9,0,0,
136,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
215,9,0,0,140,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,232,9,
0,0,144,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,248,9,0,0,
148,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
8,10,0,0,152,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,24,10,
0,0,156,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,40,10,0,0,
160,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
56,10,0,0,164,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,82,10,
0,0,168,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,106,10,0,0,
172,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
130,10,0,0,176,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,153,10,
0,0,180,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,10,0,0,
184,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
200,10,0,0,188,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,224,10,
0,0,192,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,247,10,0,0,
196,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
14,11,0,0,200,0,
0,0,4,0,0,0,
2,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,11,
0,0,204,0,0,0,
4,0,0,0,2,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,43,11,0,0,
208,0,0,0,4,0,
0,0,2,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
57,11,0,0,212,0,
0,0,4,0,0,0,
2,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,72,11,
0,0,216,0,0,0,
4,0,0,0,2,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,87,11,0,0,
220,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
99,11,0,0,224,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,117,11,
0,0,228,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,132,11,0,0,
232,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
147,11,0,0,236,0,
0,0,4,0,0,0,
0,0,0,0,180,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,162,11,
0,0,240,0,0,0,
4,0,0,0,0,0,
0,0,180,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,178,11,0,0,
244,0,0,0,4,0,
0,0,0,0,0,0,
180,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,111,8,
0,0,103,108,111,98,
97,108,95,83,111,108,
111,76,105,110,101,115,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,173,8,
0,0,103,108,111,98,
97,108,95,84,101,115,
116,71,114,105,100,0,
103,108,111,98,97,108,
95,73,80,68,0,103,
108,111,98,97,108,95,
83,116,101,114,101,111,
83,119,105,116,99,104,
0,103,108,111,98,97,
108,95,70,79,86,0,
103,108,111,98,97,108,
95,76,101,110,115,84,
121,112,101,0,103,108,
111,98,97,108,95,75,
49,0,103,108,111,98,
97,108,95,75,50,0,
103,108,111,98,97,108,
95,75,51,0,103,108,
111,98,97,108,95,75,
52,0,103,108,111,98,
97,108,95,80,49,0,
103,108,111,98,97,108,
95,80,50,0,103,108,
111,98,97,108,95,80,
51,0,103,108,111,98,
97,108,95,73,109,97,
103,101,83,99,97,108,
101,0,103,108,111,98,
97,108,95,80,101,114,
115,112,101,99,116,105,
118,101,83,119,105,116,
99,104,0,103,108,111,
98,97,108,95,67,104,
71,114,101,101,110,75,
49,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,75,50,
0,103,108,111,98,97,
108,95,67,104,71,114,
101,101,110,75,51,0,
103,108,111,98,97,108,
95,67,104,71,114,101,
101,110,75,52,0,103,
108,111,98,97,108,95,
83,111,108,111,71,114,
101,101,110,0,103,108,
111,98,97,108,95,67,
104,66,108,117,101,75,
49,0,103,108,111,98,
97,108,95,67,104,66,
108,117,101,75,50,0,
103,108,111,98,97,108,
95,67,104,66,108,117,
101,75,51,0,103,108,
111,98,97,108,95,67,
104,66,108,117,101,75,
52,0,103,108,111,98,
97,108,95,83,111,108,
111,66,108,117,101,0,
103,108,111,98,97,108,
95,67,104,114,111,109,
97,116,105,99,65,98,
114,83,119,105,116,99,
104,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,79,102,
102,115,101,116,76,95,
120,0,103,108,111,98,
97,108,95,67,104,71,
114,101,101,110,79,102,
102,115,101,116,76,95,
121,0,103,108,111,98,
97,108,95,67,104,66,
108,117,101,79,102,102,
115,101,116,76,95,120,
0,103,108,111,98,97,
108,95,67,104,66,108,
117,101,79,102,102,115,
101,116,76,95,121,0,
103,108,111,98,97,108,
95,67,104,71,114,101,
101,110,79,102,102,115,
101,116,82,95,120,0,
103,108,111,98,97,108,
95,67,104,71,114,101,
101,110,79,102,102,115,
101,116,82,95,121,0,
103,108,111,98,97,108,
95,67,104,66,108,117,
101,79,102,102,115,101,
116,82,95,120,0,103,
108,111,98,97,108,95,
67,104,66,108,117,101,
79,102,102,115,101,116,
82,95,121,0,103,108,
111,98,97,108,95,83,
116,114,101,110,103,116,
104,0,103,108,111,98,
97,108,95,67,108,97,
109,112,0,103,108,111,
98,97,108,95,79,102,
102,115,101,116,0,103,
108,111,98,97,108,95,
80,114,101,118,105,101,
119,0,103,108,111,98,
97,108,95,83,104,97,
114,112,101,110,0,103,
108,111,98,97,108,95,
78,111,115,101,0,103,
108,111,98,97,108,95,
66,114,105,103,104,116,
110,101,115,115,0,103,
108,111,98,97,108,95,
83,99,97,108,101,95,
120,0,103,108,111,98,
97,108,95,83,99,97,
108,101,95,121,0,103,
108,111,98,97,108,95,
105,109,103,122,111,111,
109,0,103,108,111,98,
97,108,95,97,115,112,
101,99,116,95,120,0,
103,108,111,98,97,108,
95,97,115,112,101,99,
116,95,121,0,171,171,
100,12,0,0,0,0,
0,0,16,0,0,0,
0,0,0,0,128,12,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,164,12,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,128,12,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,12,0,0,
32,0,0,0,16,0,
0,0,2,0,0,0,
128,12,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
202,12,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,228,12,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,118,12,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,220,12,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
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
83,72,69,88,108,6,
0,0,80,0,0,0,
155,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,14,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
3,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,24,0,
0,8,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
42,128,32,0,0,0,
0,0,13,0,0,0,
31,0,4,3,10,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,0,0,5,
114,32,16,0,0,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
18,0,0,1,54,0,
0,8,242,32,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
21,0,0,1,31,0,
0,3,10,0,16,0,
0,0,0,0,57,0,
0,8,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
26,128,32,0,0,0,
0,0,13,0,0,0,
56,0,0,8,98,0,
16,0,0,0,0,0,
86,20,16,0,0,0,
0,0,86,132,32,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,10,50,0,16,0,
2,0,0,0,150,5,
16,0,0,0,0,0,
6,128,32,0,0,0,
0,0,13,0,0,0,
22,21,16,0,0,0,
0,0,50,0,0,11,
50,0,16,0,3,0,
0,0,150,5,16,128,
65,0,0,0,0,0,
0,0,6,128,32,0,
0,0,0,0,13,0,
0,0,22,21,16,0,
0,0,0,0,54,0,
0,5,194,0,16,0,
2,0,0,0,6,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,0,0,
0,0,38,10,16,0,
2,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
34,0,16,0,0,0,
0,0,150,7,16,0,
0,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
54,0,0,5,194,0,
16,0,3,0,0,0,
6,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,38,10,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
0,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,214,5,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
214,5,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
208,179,89,62,89,23,
55,63,152,221,147,61,
0,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
50,0,0,10,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,62,42,0,
16,128,65,0,0,0,
0,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,56,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,0,0,
0,0,42,128,32,0,
0,0,0,0,12,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,10,215,35,60,
1,64,0,0,0,0,
0,63,57,0,0,8,
66,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,58,128,
32,0,0,0,0,0,
12,0,0,0,51,0,
0,8,130,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,128,32,0,0,0,
0,0,12,0,0,0,
0,0,0,9,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,58,128,32,128,
65,0,0,0,0,0,
0,0,12,0,0,0,
52,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,51,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,51,0,0,7,
66,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
52,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,52,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,50,0,0,9,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
114,0,16,0,2,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,15,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,64,0,0,
0,0,2,64,0,0,
0,0,192,191,0,0,
192,191,0,0,192,191,
0,0,0,0,55,0,
0,9,114,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
21,0,0,1,62,0,
0,1,83,84,65,84,
148,0,0,0,49,0,
0,0,5,0,0,0,
0,0,0,0,2,0,
0,0,29,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
2,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
6,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,6,0,0,0,
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
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class Stereoscopic3dShadersFubax_vrFilmicSharpenShaderDef : public ShaderDef
{
public:
	Stereoscopic3dShadersFubax_vrFilmicSharpenShaderDef() : ShaderDef{}
	{
		Name = "FilmicSharpen";
		VertexByteCode = RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("TestGrid", 0, 68, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Calibration Grid"));
		Params.push_back(ShaderParam("StereoSwitch", 0, 76, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Stereo Vision"));
		Params.push_back(ShaderParam("PerspectiveSwitch", 0, 120, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Lens Correction"));
		Params.push_back(ShaderParam("ChromaticAbrSwitch", 0, 164, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Chromatic Correction"));
		Params.push_back(ShaderParam("Nose", 0, 220, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Virtual Nose (helps nausea)"));
		Params.push_back(ShaderParam("Sharpen", 0, 216, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Sharpening"));
		Params.push_back(ShaderParam("SoloLines", 0, 64, 4, 0.000000f, 3.000000f, 0.000000f, 1.000000f, "Lines (All, Horz, Vert, Rad)"));
		Params.push_back(ShaderParam("IPD", 0, 72, 4, 0.000000f, 0.750000f, 0.500000f, 0.001000f, "IPD (Interpupillary Distance)"));
		Params.push_back(ShaderParam("imgzoom", 0, 236, 4, 0.100000f, 5.000000f, 1.600000f, 0.010000f, "Image Zoom"));
		Params.push_back(ShaderParam("aspect_x", 0, 240, 4, 1.000000f, 256.000000f, 64.000000f, 1.000000f, "Image Aspect Ratio Numerator"));
		Params.push_back(ShaderParam("aspect_y", 0, 244, 4, 1.000000f, 256.000000f, 49.000000f, 1.000000f, "Image Aspect Ratio Denominator"));
		Params.push_back(ShaderParam("FOV", 0, 80, 4, 0.000000f, 170.000000f, 96.000000f, 0.100000f, "Lens Distortion Power"));
		Params.push_back(ShaderParam("LensType", 0, 84, 4, 0.000000f, 3.000000f, 0.000000f, 1.000000f, "Lens Dist Type (Ortho, Equisolid, Equidist, Stereo)"));
		Params.push_back(ShaderParam("K1", 0, 88, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Radial Correction #1 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("K2", 0, 92, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Radial Correction #2 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("K3", 0, 96, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Radial Correction #3 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("K4", 0, 100, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Radial Correction #4 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("P1", 0, 104, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Tangential Correction #1 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("P2", 0, 108, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Tangential Correction #2 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("P3", 0, 112, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Tangential Correction #3 (Brown-Conrady Model)"));
		Params.push_back(ShaderParam("ImageScale", 0, 116, 4, 0.250000f, 1.000000f, 1.000000f, 0.010000f, "Image Scale"));
		Params.push_back(ShaderParam("ChGreenK1", 0, 124, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Green Correction (Zoom)"));
		Params.push_back(ShaderParam("ChGreenK2", 0, 128, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Green Correction (K1)"));
		Params.push_back(ShaderParam("ChGreenK3", 0, 132, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Green Correction (K2)"));
		Params.push_back(ShaderParam("ChGreenK4", 0, 136, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Green Correction (K3)"));
		Params.push_back(ShaderParam("SoloGreen", 0, 140, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Green Channel Adj Solo"));
		Params.push_back(ShaderParam("ChBlueK1", 0, 144, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Blue Correction (Zoom)"));
		Params.push_back(ShaderParam("ChBlueK2", 0, 148, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Blue Correction (K1)"));
		Params.push_back(ShaderParam("ChBlueK3", 0, 152, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Blue Correction (K2)"));
		Params.push_back(ShaderParam("ChBlueK4", 0, 156, 4, 0.000000f, 1.000000f, 0.000000f, 0.001000f, "Chromatic Blue Correction (K3)"));
		Params.push_back(ShaderParam("SoloBlue", 0, 160, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Blue Channel Adj Solo"));
		Params.push_back(ShaderParam("ChGreenOffsetL_x", 0, 168, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Left Green Center Offset X"));
		Params.push_back(ShaderParam("ChGreenOffsetL_y", 0, 172, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Left Green Center Offset Y"));
		Params.push_back(ShaderParam("ChBlueOffsetL_x", 0, 176, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Left Blue Center Offset X"));
		Params.push_back(ShaderParam("ChBlueOffsetL_y", 0, 180, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Left Blue Center Offset Y"));
		Params.push_back(ShaderParam("ChGreenOffsetR_x", 0, 184, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Right Green Center Offset X"));
		Params.push_back(ShaderParam("ChGreenOffsetR_y", 0, 188, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Right Green Center Offset Y"));
		Params.push_back(ShaderParam("ChBlueOffsetR_x", 0, 192, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Right Blue Center Offset X"));
		Params.push_back(ShaderParam("ChBlueOffsetR_y", 0, 196, 4, -0.200000f, 0.200000f, 0.000000f, 0.001000f, "Right Blue Center Offset Y"));
		Params.push_back(ShaderParam("Strength", 0, 200, 4, 0.000000f, 100.000000f, 25.000000f, 0.500000f, "Sharpen Strength"));
		Params.push_back(ShaderParam("Clamp", 0, 204, 4, 0.500000f, 1.000000f, 0.650000f, 0.001000f, "Sharpen Clamping"));
		Params.push_back(ShaderParam("Offset", 0, 208, 4, 0.010000f, 2.000000f, 0.100000f, 0.002000f, "High-pass Offset"));
		Params.push_back(ShaderParam("Preview", 0, 212, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Preview Sharpen Layer"));
		Params.push_back(ShaderParam("Brightness", 0, 224, 4, 0.000000f, 1.000000f, 1.000000f, 0.010000f, "Virtual Nose Brightness"));
		Params.push_back(ShaderParam("Scale_x", 0, 228, 4, 0.100000f, 1.000000f, 0.382000f, 0.010000f, "Virtual Nose Scale X"));
		Params.push_back(ShaderParam("Scale_y", 0, 232, 4, 0.100000f, 1.000000f, 0.618000f, 0.010000f, "Virtual Nose Scale Y"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
