/*
ShaderGlass shader vhs-shaders-VHSPro\VHSPro_Clear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/vhs/shaders/VHSPro/VHSPro_Clear.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// "Screen Resolution (in lines).\nChange screenLinesRes in Preprocessor Definitions to have the same value as this.
// "Enables beam screen bleeding (makes the image blurry).
// "Toggles between different bleeding modes.
// "Length of the bleeding." // default value of 1.0 was too much
// "Enables a CRT Curvature." // defaulting to off
// "Changes the curvature to look like some sort of hyperspace warping.
// "Curvature of the CRT." // default value of 2.0 was way too high
// "Cutoff of the Horizontal Borders.
// "Cutoff of the Vertical Borders.
// "Size of the Horizontal gradient cutoff.
// "Size of the Vertical gradient cutoff.
// "Enables screen vignetting" // default to 'on' to make up for lost fisheye
// "Strength of the vignette." // default value of 1.0 was way too much
// "Speed of the vignette pulsing. (Setting it to 0 makes it stop pulsing)
// "Noise Resolution (in lines).\nChange noiseLinesRes in Preprocessor Definitions to have the same value as this.
// "Makes the noise longer or shorter.
// "Enables a Film Grain on the screen.
// "Intensity of the Film Grain." // default was too low
// "Adds noise to the YIQ Signal, causing a Pink (or green) noise.
// "Signal Noise Type [VHS Pro]
// "Amount of the signal noise.
// "Power of the signal noise. Higher values will make it green, lower values will make it more pink.
// "Enables blinking line noise in the image.
// "Intensity of the line noise.
// "Speed of the line noise blinking delay.
// "Adds scrolling noise like in old VHS Tapes.
// "Intensity of Tape Noise in the image.
// "Amount of Tape Noise in the image.
// "Scrolling speed of the Tape Noise.
// "Enables TV/CRT Scanlines.
// "Width of the Scanlines.
// "Makes the lines of the screen floats up or down. Works best with low Screen Lines resolutions.
// "Speed (and direction) of the floating lines.
// "Enables a stretching noise that scrolls up and down on the Image, simulating magnetic interference of VHS tapes.
// "Enables interlacing.
// "Strength of the Interlacing." //default 0.50 was too much
// "Adds vertical jittering noise.
// "Amount of the vertical jittering noise." //default 1.0 was invisible
// "Speed of the vertical jittering noise.
// "Makes the image twitches horizontally in certain timed intervals.
// "Frequency of time in which the image twitches horizontally.
// "Makes the image twitches vertically in certain timed intervals.
// "Frequency of time in which the image twitches vertically.
// "Tweak the values of the YIQ signal.
// "Shifts/Tweaks the Luma part of the signal.
// "Shifts/Tweaks the Chroma part of the signal.
// "Shifts/Tweaks the Chroma part of the signal.
// "Adjusts the Luma part of the signal.
// "Adjusts the Chroma part of the signal.
// "Adjusts the Chroma part of the signal.
// "Gamma corrects the image.
// "Enables phosphor-trails from old CRT monitors.
// "Amount of Phosphor Trails.
// "Fade-time of the phosphor-trails.
// "Cutoff of the trail.
// "Color of the trail.
// "Enables the visualization of the phosphor-trails only.
//textures and samplers
//functions
//turns sth on and off //a - how often
//random hash
//cheap noise - is ok atm
//cheap (maybe make an option later)
// float scanLineWidth = 0.26;
// float scans = 0.5*(cos((p.y*screenLinesNum+t+.5)*2.0*PI) + 1.0);
// if(scans>scanLineWidth) scans = 1.; else scans = 0.;
//if lines aren't floating -> scanlines also shudn't
//expensive but better
//mw - maximum width
//wcs = widthChangeSpeed
//lfs = line float speed = .5
//lf phase = line float phase = .0
//width change
//float dw  = hash42( vec2(0.01, t2) ).x ; //on t and not on y
//w = clamp(w,0.,1.);
//get descreete line number
// float ln = (1.-fmod(t*lfs + lfp, 1.))*SLN;
// ln = ln - fmod(ln, 1.); //descreete line number
//ln = 10.;
//w = 4.;
//////stretching part///////
// #if VHS_LINESFLOAT_ON
//     float sh = fmod(t, 1.);
//      uv.y = floor( uv.y *SLN  +sh )/SLN - sh/SLN;
// #else
//      uv.y = floor( uv.y *SLN  )/SLN;
//  #endif
// uv.y = floor( uv.y  *SLN  )/SLN ;
//TODO finish
// #if VHS_LINESFLOAT_ON
//  if(uv.y<oy*ln && uv.y>oy*(ln-w)) ////if(uv.y>oy*ln && uv.y<oy*(ln+w))
//     uv.y = floor( uv.y*slb +sh2 +sh )/slb - (sh2-1.)/slb - sh/slb;
//   #else
// #endif
//DANG WINDOWS
//rgb distortion
// offsetX.b = uv.y + rnd_rd(vec2(cos(t*0.01),sin(uv.y)))*magnitude;
// offsetX.b = uv.y + rand_rd(vec2(cos(t*0.01),sin(uv.y)))*magnitude;
//it cud be optimized / but hm
// 3d noise function (iq's)
//so atm line noise is depending on hash for int values
//i gotta rewrite to for hash for 0..1 values
//then i can use normilized p for generating lines
//TODO custom adjustable density (Probability distribution)
// but will be expensive (atm its ok)
//atm its just contrast noise
//this generates noise mask
// *hash12( fract(p+t*vec2(0.123,0.867)) )
// *hash12( fract(p+t*vec2(0.441,0.23)) );
//nm += 0.3 ; //just bit brighter or just more to threshold?
// nl += 0.3; //Value add .3//
//all that shit is for postVHS"Pro"_First - end
//all that shit is for postVHS"Pro"_Second
//size 1.2, bend 2.
//http://paulbourke.net/miscellaneous/lenscorrection/
//adjust size
// uv -= vec2(0.5,0.5);
// uv *= size;
// uv += vec2(0.5,0.5);
//pulse vignette
// offsetX.b = uv.y + rnd_rd(vec2(cos(t*0.01),sin(uv.y)))*m;
// offsetX.b = uv.y + rand_rd(vec2(cos(t*0.01),sin(uv.y)))*m;
//it cud be optimized / but hm
// signal = yiq2rgb(col);

*/

#pragma once

namespace RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,244,103,
242,1,194,22,72,189,
189,228,247,209,36,167,
223,163,1,0,0,0,
140,18,0,0,5,0,
0,0,52,0,0,0,
60,16,0,0,136,16,
0,0,224,16,0,0,
240,17,0,0,82,68,
69,70,0,16,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
214,15,0,0,82,68,
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
92,0,0,0,61,0,
0,0,120,0,0,0,
48,1,0,0,0,0,
0,0,0,0,0,0,
0,10,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,20,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,56,10,
0,0,64,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,120,10,0,0,
68,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
144,10,0,0,72,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,172,10,
0,0,76,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,191,10,0,0,
80,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
217,10,0,0,84,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,254,10,
0,0,88,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,17,11,0,0,
92,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
32,11,0,0,96,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,47,11,
0,0,100,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,66,11,0,0,
104,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
85,11,0,0,108,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,11,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,134,11,0,0,
116,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
155,11,0,0,120,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,176,11,
0,0,124,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,198,11,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
226,11,0,0,132,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,249,11,
0,0,136,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,20,12,0,0,
140,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
50,12,0,0,144,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,75,12,
0,0,148,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,99,12,0,0,
152,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
127,12,0,0,156,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,150,12,
0,0,160,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,12,0,0,
164,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
200,12,0,0,168,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,219,12,
0,0,172,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,242,12,0,0,
176,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
8,13,0,0,180,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,36,13,
0,0,184,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,57,13,0,0,
188,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
86,13,0,0,192,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,109,13,
0,0,196,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,135,13,0,0,
200,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
162,13,0,0,204,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,183,13,
0,0,208,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,209,13,0,0,
212,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
230,13,0,0,216,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,250,13,
0,0,220,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,21,14,0,0,
224,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
40,14,0,0,228,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,67,14,
0,0,232,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,86,14,0,0,
236,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
116,14,0,0,240,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,137,14,
0,0,244,0,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,158,14,0,0,
248,0,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
179,14,0,0,252,0,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,199,14,
0,0,0,1,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,219,14,0,0,
4,1,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
239,14,0,0,8,1,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,5,15,
0,0,12,1,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,32,15,0,0,
16,1,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
54,15,0,0,20,1,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,74,15,
0,0,24,1,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,96,15,0,0,
28,1,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
119,15,0,0,32,1,
0,0,4,0,0,0,
0,0,0,0,84,10,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,142,15,
0,0,36,1,0,0,
4,0,0,0,0,0,
0,0,84,10,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,165,15,0,0,
40,1,0,0,4,0,
0,0,0,0,0,0,
84,10,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
193,15,0,0,44,1,
0,0,4,0,0,0,
0,0,0,0,84,10,
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
0,0,11,10,0,0,
103,108,111,98,97,108,
95,115,99,114,101,101,
110,76,105,110,101,115,
78,117,109,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
78,10,0,0,103,108,
111,98,97,108,95,86,
72,83,95,66,108,101,
101,100,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,86,
72,83,95,66,108,101,
101,100,77,111,100,101,
95,115,101,108,101,99,
116,0,103,108,111,98,
97,108,95,98,108,101,
101,100,65,109,111,117,
110,116,0,103,108,111,
98,97,108,95,86,72,
83,95,70,105,115,104,
69,121,101,95,116,111,
103,103,108,101,0,103,
108,111,98,97,108,95,
86,72,83,95,70,105,
115,104,69,121,101,95,
72,121,112,101,114,115,
112,97,99,101,95,116,
111,103,103,108,101,0,
103,108,111,98,97,108,
95,102,105,115,104,101,
121,101,66,101,110,100,
0,103,108,111,98,97,
108,95,99,117,116,111,
102,102,88,0,103,108,
111,98,97,108,95,99,
117,116,111,102,102,89,
0,103,108,111,98,97,
108,95,99,117,116,111,
102,102,70,97,100,101,
88,0,103,108,111,98,
97,108,95,99,117,116,
111,102,102,70,97,100,
101,89,0,103,108,111,
98,97,108,95,86,72,
83,95,86,105,103,110,
101,116,116,101,95,116,
111,103,103,108,101,0,
103,108,111,98,97,108,
95,118,105,103,110,101,
116,116,101,65,109,111,
117,110,116,0,103,108,
111,98,97,108,95,118,
105,103,110,101,116,116,
101,83,112,101,101,100,
0,103,108,111,98,97,
108,95,110,111,105,115,
101,76,105,110,101,115,
76,117,109,0,103,108,
111,98,97,108,95,110,
111,105,115,101,81,117,
97,110,116,105,122,101,
88,0,103,108,111,98,
97,108,95,86,72,83,
95,70,105,108,109,71,
114,97,105,110,95,116,
111,103,103,108,101,0,
103,108,111,98,97,108,
95,102,105,108,109,71,
114,97,105,110,65,109,
111,117,110,116,0,103,
108,111,98,97,108,95,
86,72,83,95,89,73,
81,78,111,105,115,101,
95,116,111,103,103,108,
101,0,103,108,111,98,
97,108,95,115,105,103,
110,97,108,78,111,105,
115,101,84,121,112,101,
95,115,101,108,101,99,
116,0,103,108,111,98,
97,108,95,115,105,103,
110,97,108,78,111,105,
115,101,65,109,111,117,
110,116,0,103,108,111,
98,97,108,95,115,105,
103,110,97,108,78,111,
105,115,101,80,111,119,
101,114,0,103,108,111,
98,97,108,95,86,72,
83,95,76,105,110,101,
78,111,105,115,101,95,
116,111,103,103,108,101,
0,103,108,111,98,97,
108,95,108,105,110,101,
78,111,105,115,101,65,
109,111,117,110,116,0,
103,108,111,98,97,108,
95,108,105,110,101,78,
111,105,115,101,83,112,
101,101,100,0,103,108,
111,98,97,108,95,86,
72,83,95,84,97,112,
101,78,111,105,115,101,
95,116,111,103,103,108,
101,0,103,108,111,98,
97,108,95,116,97,112,
101,78,111,105,115,101,
84,72,0,103,108,111,
98,97,108,95,116,97,
112,101,78,111,105,115,
101,65,109,111,117,110,
116,0,103,108,111,98,
97,108,95,116,97,112,
101,78,111,105,115,101,
83,112,101,101,100,0,
103,108,111,98,97,108,
95,86,72,83,95,83,
99,97,110,76,105,110,
101,115,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,115,
99,97,110,76,105,110,
101,87,105,100,116,104,
0,103,108,111,98,97,
108,95,86,72,83,95,
76,105,110,101,115,70,
108,111,97,116,95,116,
111,103,103,108,101,0,
103,108,111,98,97,108,
95,108,105,110,101,115,
70,108,111,97,116,83,
112,101,101,100,0,103,
108,111,98,97,108,95,
86,72,83,95,83,116,
114,101,116,99,104,95,
116,111,103,103,108,101,
0,103,108,111,98,97,
108,95,86,72,83,95,
74,105,116,116,101,114,
95,72,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,106,
105,116,116,101,114,72,
65,109,111,117,110,116,
0,103,108,111,98,97,
108,95,86,72,83,74,
105,116,116,101,114,95,
86,95,116,111,103,103,
108,101,0,103,108,111,
98,97,108,95,106,105,
116,116,101,114,86,65,
109,111,117,110,116,0,
103,108,111,98,97,108,
95,106,105,116,116,101,
114,86,83,112,101,101,
100,0,103,108,111,98,
97,108,95,86,72,83,
95,84,119,105,116,99,
104,95,72,95,116,111,
103,103,108,101,0,103,
108,111,98,97,108,95,
116,119,105,116,99,104,
72,70,114,101,113,0,
103,108,111,98,97,108,
95,86,72,83,95,84,
119,105,116,99,104,95,
86,95,116,111,103,103,
108,101,0,103,108,111,
98,97,108,95,116,119,
105,116,99,104,86,70,
114,101,113,0,103,108,
111,98,97,108,95,86,
72,83,95,83,105,103,
110,97,108,84,119,101,
97,107,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,115,
105,103,110,97,108,65,
100,106,117,115,116,89,
0,103,108,111,98,97,
108,95,115,105,103,110,
97,108,65,100,106,117,
115,116,73,0,103,108,
111,98,97,108,95,115,
105,103,110,97,108,65,
100,106,117,115,116,81,
0,103,108,111,98,97,
108,95,115,105,103,110,
97,108,83,104,105,102,
116,89,0,103,108,111,
98,97,108,95,115,105,
103,110,97,108,83,104,
105,102,116,73,0,103,
108,111,98,97,108,95,
115,105,103,110,97,108,
83,104,105,102,116,81,
0,103,108,111,98,97,
108,95,103,97,109,109,
97,67,111,114,101,99,
116,105,111,110,0,103,
108,111,98,97,108,95,
86,72,83,95,70,101,
101,100,98,97,99,107,
95,116,111,103,103,108,
101,0,103,108,111,98,
97,108,95,102,101,101,
100,98,97,99,107,65,
109,111,117,110,116,0,
103,108,111,98,97,108,
95,102,101,101,100,98,
97,99,107,70,97,100,
101,0,103,108,111,98,
97,108,95,102,101,101,
100,98,97,99,107,84,
104,114,101,115,104,0,
103,108,111,98,97,108,
95,102,101,101,100,98,
97,99,107,67,111,108,
111,114,95,82,0,103,
108,111,98,97,108,95,
102,101,101,100,98,97,
99,107,67,111,108,111,
114,95,71,0,103,108,
111,98,97,108,95,102,
101,101,100,98,97,99,
107,67,111,108,111,114,
95,66,0,103,108,111,
98,97,108,95,102,101,
101,100,98,97,99,107,
68,101,98,117,103,95,
116,111,103,103,108,101,
0,103,108,111,98,97,
108,95,110,111,105,115,
101,76,105,110,101,115,
78,117,109,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
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
68,88,66,67,97,81,
192,56,239,170,66,202,
243,198,88,159,214,132,
196,110,1,0,0,0,
164,2,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,44,1,
0,0,96,1,0,0,
8,2,0,0,82,68,
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
69,88,160,0,0,0,
80,0,0,0,40,0,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,54,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
4,0,0,0,1,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
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

}

namespace RetroArch
{
class VhsShadersVHSProVHSPro_ClearShaderDef : public ShaderDef
{
public:
	VhsShadersVHSProVHSPro_ClearShaderDef() : ShaderDef{}
	{
		Name = "VHSPro_Clear";
		VertexByteCode = RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("screenLinesNum", 0, 64, 4, 1.000000f, 2160.000000f, 1080.000000f, 16.000000f, "Screen Resolution [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Bleed_toggle", 0, 68, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Bleeding [VHSPro]"));
		Params.push_back(ShaderParam("VHS_BleedMode_select", 0, 72, 4, 1.000000f, 5.000000f, 1.000000f, 1.000000f, "Bleeding Mode [VHSPro]"));
		Params.push_back(ShaderParam("bleedAmount", 0, 76, 4, 0.000000f, 15.000000f, 0.500000f, 0.100000f, "Bleed Stretch [VHSPro]"));
		Params.push_back(ShaderParam("VHS_FishEye_toggle", 0, 80, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Fisheye [VHSPro]"));
		Params.push_back(ShaderParam("VHS_FishEye_Hyperspace_toggle", 0, 84, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Fisheye Hyperspace [VHSPro]"));
		Params.push_back(ShaderParam("fisheyeBend", 0, 88, 4, 0.000000f, 3.000000f, 0.500000f, 0.050000f, "Fisheye Bend [VHSPro]"));
		Params.push_back(ShaderParam("cutoffX", 0, 92, 4, 0.000000f, 50.000000f, 2.000000f, 1.000000f, "Fisheye Cutoff X [VHSPro]"));
		Params.push_back(ShaderParam("cutoffY", 0, 96, 4, 0.000000f, 50.000000f, 3.000000f, 1.000000f, "Fisheye Cutoff Y [VHSPro]"));
		Params.push_back(ShaderParam("cutoffFadeX", 0, 100, 4, 0.000000f, 50.000000f, 25.000000f, 1.000000f, "Fisheye Cutoff Fade X [VHSPro]"));
		Params.push_back(ShaderParam("cutoffFadeY", 0, 104, 4, 0.000000f, 50.000000f, 25.000000f, 1.000000f, "Fisheye Cutoff Fade Y [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Vignette_toggle", 0, 108, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Vignette [VHSPro]"));
		Params.push_back(ShaderParam("vignetteAmount", 0, 112, 4, 0.000000f, 5.000000f, 0.300000f, 0.050000f, "Vignette Amount [VHSPro]"));
		Params.push_back(ShaderParam("vignetteSpeed", 0, 116, 4, 0.000000f, 5.000000f, 1.000000f, 0.050000f, "Vignette Pulse Speed [VHSPro]"));
		Params.push_back(ShaderParam("noiseLinesNum", 0, 300, 4, 1.000000f, 1080.000000f, 240.000000f, 16.000000f, "Vertical Resolution [VHSPro]"));
		Params.push_back(ShaderParam("noiseQuantizeX", 0, 124, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Quantize Noise X [VHSPro]"));
		Params.push_back(ShaderParam("VHS_FilmGrain_toggle", 0, 128, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Film Grain [VHSPro]"));
		Params.push_back(ShaderParam("filmGrainAmount", 0, 132, 4, 0.000000f, 1.000000f, 0.500000f, 0.010000f, "Film Grain Alpha [VHSPro]"));
		Params.push_back(ShaderParam("VHS_YIQNoise_toggle", 0, 136, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Signal Noise [VHSPro]"));
		Params.push_back(ShaderParam("signalNoiseType_select", 0, 140, 4, 1.000000f, 3.000000f, 1.000000f, 1.000000f, "Signal Noise Type [VHSPro]"));
		Params.push_back(ShaderParam("signalNoiseAmount", 0, 144, 4, 0.000000f, 1.000000f, 0.100000f, 0.010000f, "Signal Noise Amount [VHSPro]"));
		Params.push_back(ShaderParam("signalNoisePower", 0, 148, 4, 0.000000f, 1.000000f, 0.750000f, 0.010000f, "Signal Noise Power [VHSPro]"));
		Params.push_back(ShaderParam("VHS_LineNoise_toggle", 0, 152, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Line Noise [VHSPro]"));
		Params.push_back(ShaderParam("lineNoiseAmount", 0, 156, 4, 0.000000f, 10.000000f, 1.000000f, 0.100000f, "Line Noise Amount [VHSPro]"));
		Params.push_back(ShaderParam("lineNoiseSpeed", 0, 160, 4, 0.000000f, 10.000000f, 5.000000f, 0.100000f, "Line Noise Speed [VHSPro]"));
		Params.push_back(ShaderParam("VHS_TapeNoise_toggle", 0, 164, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Tape Noise [VHSPro]"));
		Params.push_back(ShaderParam("tapeNoiseTH", 0, 168, 4, 0.000000f, 1.500000f, 0.630000f, 0.010000f, "Tape Noise Amount [VHSPro]"));
		Params.push_back(ShaderParam("tapeNoiseAmount", 0, 172, 4, 0.000000f, 1.500000f, 0.050000f, 0.010000f, "Tape Noise Alpha [VHSPro]"));
		Params.push_back(ShaderParam("tapeNoiseSpeed", 0, 176, 4, -1.500000f, 1.500000f, 1.000000f, 0.050000f, "Tape Noise Speed [VHSPro]"));
		Params.push_back(ShaderParam("VHS_ScanLines_toggle", 0, 180, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Scanlines [VHSPro]"));
		Params.push_back(ShaderParam("scanLineWidth", 0, 184, 4, 0.000000f, 20.000000f, 10.000000f, 0.250000f, "Scanlines Width [VHSPro]"));
		Params.push_back(ShaderParam("VHS_LinesFloat_toggle", 0, 188, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Lines Float [VHSPro]"));
		Params.push_back(ShaderParam("linesFloatSpeed", 0, 192, 4, -3.000000f, 3.000000f, 1.000000f, 0.100000f, "Lines Float Speed [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Stretch_toggle", 0, 196, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Stretch Noise"));
		Params.push_back(ShaderParam("VHS_Jitter_H_toggle", 0, 200, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Toggle Interlacing [VHSPro]"));
		Params.push_back(ShaderParam("jitterHAmount", 0, 204, 4, 0.000000f, 5.000000f, 0.150000f, 0.050000f, "Interlacing Amount [VHSPro]"));
		Params.push_back(ShaderParam("VHSJitter_V_toggle", 0, 208, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Jitter [VHSPro]"));
		Params.push_back(ShaderParam("jitterVAmount", 0, 212, 4, 0.000000f, 15.000000f, 7.500000f, 0.100000f, "Jitter Amount [VHSPro]"));
		Params.push_back(ShaderParam("jitterVSpeed", 0, 216, 4, 0.000000f, 5.000000f, 1.000000f, 0.100000f, "Jitter Speed [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Twitch_H_toggle", 0, 220, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Horizontal Twitch [VHSPro]"));
		Params.push_back(ShaderParam("twitchHFreq", 0, 224, 4, 0.000000f, 5.000000f, 1.000000f, 0.100000f, "Horizontal Twitch Frequency [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Twitch_V_toggle", 0, 228, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Vertical Twitch [VHSPro]"));
		Params.push_back(ShaderParam("twitchVFreq", 0, 232, 4, 0.000000f, 5.000000f, 1.000000f, 0.100000f, "Vertical Twitch Frequency [VHSPro]"));
		Params.push_back(ShaderParam("VHS_SignalTweak_toggle", 0, 236, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Signal Tweak [VHSPro]"));
		Params.push_back(ShaderParam("signalAdjustY", 0, 240, 4, -0.250000f, 0.250000f, 0.000000f, 0.010000f, "Signal Shift Y [VHSPro]"));
		Params.push_back(ShaderParam("signalAdjustI", 0, 244, 4, -0.250000f, 0.250000f, 0.000000f, 0.010000f, "Signal Shift I [VHSPro]"));
		Params.push_back(ShaderParam("signalAdjustQ", 0, 248, 4, -0.250000f, 0.250000f, 0.000000f, 0.010000f, "Signal Shift Q [VHSPro]"));
		Params.push_back(ShaderParam("signalShiftY", 0, 252, 4, -2.000000f, 2.000000f, 1.000000f, 0.050000f, "Signal Adjust Y [VHSPro]"));
		Params.push_back(ShaderParam("signalShiftI", 0, 256, 4, -2.000000f, 2.000000f, 1.000000f, 0.050000f, "Signal Adjust I [VHSPro]"));
		Params.push_back(ShaderParam("signalShiftQ", 0, 260, 4, -2.000000f, 2.000000f, 1.000000f, 0.050000f, "Signal Adjust Q [VHSPro]"));
		Params.push_back(ShaderParam("gammaCorection", 0, 264, 4, 0.000000f, 2.000000f, 1.000000f, 0.050000f, "Signal Gamma Correction [VHSPro]"));
		Params.push_back(ShaderParam("VHS_Feedback_toggle", 0, 268, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Phosphor Trails [VHSPro]"));
		Params.push_back(ShaderParam("feedbackAmount", 0, 272, 4, 0.000000f, 3.000000f, 2.000000f, 0.050000f, "Input Amount [VHSPro]"));
		Params.push_back(ShaderParam("feedbackFade", 0, 276, 4, 0.000000f, 1.000000f, 0.820000f, 0.010000f, "Phosphor Fade [VHSPro]"));
		Params.push_back(ShaderParam("feedbackThresh", 0, 280, 4, 0.000000f, 1.000000f, 0.100000f, 0.010000f, "Input Cutoff [VHSPro]"));
		Params.push_back(ShaderParam("feedbackColor_R", 0, 284, 4, 0.000000f, 1.000000f, 1.000000f, 0.010000f, "Red Tint of Phosphor Trail"));
		Params.push_back(ShaderParam("feedbackColor_G", 0, 288, 4, 0.000000f, 1.000000f, 0.500000f, 0.010000f, "Green Tint of Phosphor Trail"));
		Params.push_back(ShaderParam("feedbackColor_B", 0, 292, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Blue Tint of Phosphor Trail"));
		Params.push_back(ShaderParam("feedbackDebug_toggle", 0, 296, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Toggle Debug Trail [VHSPro]"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("noiseLinesLum", 0, 120, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
