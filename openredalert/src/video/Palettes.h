// Palettes.h
// 1.0

//    This file is part of OpenRedAlert.
//
//    OpenRedAlert is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, version 2 of the License.
//
//    OpenRedAlert is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with OpenRedAlert.  If not, see <http://www.gnu.org/licenses/>.

#ifndef PALETTES_H
#define PALETTES_H

//-----------------------------------------------------------------------------
// Palettes
//-----------------------------------------------------------------------------

/**
 * @todo These palettes only differ between 179 and 190.
 * In this range are two gradients from bright to dark of that colour.
 * Should calculate the gradients and SDL_MapRGB them to the palette.
 */

/** 
 * Colour for NOD structures and Soviet units and structures (red)
 */
const Uint8 palone[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
    0x7f, 0x7e, 0x7d, 0x7c, 0x7a, 0x2e, 0x78, 0x2f, 0x7d, 0x7c, 0x7b, 0x7a, 0x2a, 0x79, 0x78, 0x78,
    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
    0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
    0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

/** 
 * Colour used for NOD units. (bluey gray)
 */
const Uint8 paltwo[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
    0xa1, 0xc8, 0xc9, 0xca, 0xcc, 0xcd, 0xce, 0x0c, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0x73, 0xc6, 0x72,
    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
    0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
    0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

/**
 * Colour used for a multiplayer side (fluorescent orange)
 */
const Uint8 palthree[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
    0x18, 0x19, 0x1a, 0x1b, 0x1d, 0x1f, 0x2e, 0x2f, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x2b, 0x2f,
    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
    0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
    0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

/**
 * Another multiplayer colour (fluorescent green)
 */
const Uint8 palfour[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
    0x05, 0xa5, 0xa6, 0xa7, 0x9f, 0x8e, 0x8c, 0xc7, 0xa6, 0xa7, 0x9d, 0x03, 0x9f, 0x8f, 0x8e, 0x8d,
    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
    0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
    0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

/** 
 * Another multiplayer colour (turquoise)
 */
const Uint8 palfive[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
    0x02, 0x77, 0x76, 0x87, 0x88, 0x8b, 0x70, 0x0c, 0x76, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x72, 0x70,
    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
    0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
    0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
    0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};



/**
 * Define the Red Alert unit colors
 * 
 * Unit colors are determint by 16 colors witch are copied to 
 * palette pos 80 until 96
 * 
 * RedAlert color for GREECE (blue)
 */
SDL_Color col_greece[] = 
{
	{226, 230, 246, 0x0},
	{206, 210, 234, 0xff},
	{182, 190, 222, 0xff},
	{161, 170, 202, 0xff},
	{141, 149, 186, 0xff},
	{125, 133, 174, 0xff},
	{105, 117, 161, 0xff},
	{89, 105, 149, 0xff},
	{68, 85, 137, 0xff},
	{56, 72, 125, 0xff},
	{48, 64, 117, 0xff},
	{40, 56, 109, 0xff},
	{32, 44, 97, 0xff},
	{24, 44, 85, 0xff},
	{12, 32, 68, 0xff},
	{8, 20, 52, 0xff}
};

/**
 * RedAlert color for USSR (red)
 */
SDL_Color col_ussr[] =	{
				{255, 93, 0, 0x0},
				{255, 0, 0, 0xff},
				{238, 0, 0, 0xff},
				{218, 0, 0, 0xff},
				{206, 0, 0, 0xff},
				{190, 0, 0, 0xff},
				{178, 0, 0, 0xff},
				{170, 0, 0, 0xff},
				{149, 0, 0, 0xff},
				{133, 0, 0, 0xff},
				{117, 0, 0, 0xff},
				{101, 0, 0, 0xff},
				{93, 8, 0, 0xff},
				{76, 0, 0, 0xff},
				{60, 0, 0, 0xff},
				{56, 0, 0, 0xff}
				};

/**
 * RedAlert color for UK (green)
 */
SDL_Color col_uk[] = {
				{255, 230, 149, 0x0},
				{255, 230, 149, 0xff},
				{198, 230, 133, 0xff},
				{178, 210, 125, 0xff},
				{157, 190, 117, 0xff},
				{137, 174, 109, 0xff},
				{121, 153, 101, 0xff},
				{105, 137, 93, 0xff},
				{89, 117, 76, 0xff},
				{76, 101, 60, 0xff},
				{60, 85, 48, 0xff},
				{48, 68, 36, 0xff},
				{36, 52, 24, 0xff},
				{36, 52, 24, 0xff},
				{24, 36, 16, 0xff},
				{20, 20, 20, 0xff}
				};

/**
 * RedAlert color for SPAIN (yellow, gold)
 */
SDL_Color col_spain[] = {
				{246, 214, 121, 0x0},
				{230, 202, 113, 0xff},
				{214, 190, 105, 0xff},
				{198, 178, 97, 0xff},
				{182, 165, 89, 0xff},
				{170, 153, 85, 0xff},
				{145, 137, 76, 0xff},
				{145, 117, 64, 0xff},
				{133, 113, 56, 0xff},
				{109, 101, 56, 0xff},
				{89, 85, 44, 0xff},
				{85, 76, 36, 0xff},
				{72, 68, 32, 0xff},
				{56, 52, 28, 0xff},
				{52, 44, 20, 0xff},
				{40, 32, 8, 0xff}
				};

/**
 * RedAlert color for ITALY (orange)
 */
SDL_Color col_italy[] = {
				{255, 230, 149, 0x0},
				{255, 214, 125, 0xff},
				{246, 198, 113, 0xff},
				{238, 174, 85, 0xff},
				{234, 161, 64, 0xff},
				{230, 145, 40, 0xff},
				{214, 121, 16, 0xff},
				{198, 97, 0, 0xff},
				{182, 72, 0, 0xff},
				{165, 56, 0, 0xff},
				{153, 40, 0, 0xff},
				{133, 32, 0, 0xff},
				{109, 16, 0, 0xff},
				{93, 8, 0, 0xff},
				{76, 0, 0, 0xff},
				{56, 0, 0, 0xff}
				};

/** RedAlert color for GERMANY (gray)*/
SDL_Color col_germany[] = {
				{238, 238, 238, 0x0},
				{238, 226, 218, 0xff},
				{222, 206, 198, 0xff},
				{206, 186, 178, 0xff},
				{186, 165, 153, 0xff},
				{165, 145, 133, 0xff},
				{149, 125, 113, 0xff},
				{133, 113, 101, 0xff},
				{113, 89, 80, 0xff},
				{93, 72, 64, 0xff},
				{80, 60, 52, 0xff},
				{80, 60, 52, 0xff},
				{60, 44, 40, 0xff},
				{60, 44, 40, 0xff},
				{44, 28, 24, 0xff},
				{44, 28, 24, 0xff}
				};

/** RedAlert color for FRANCE (blue/green)*/
SDL_Color col_france[] = {
				{93, 194, 165, 0x0},
				{93, 194, 165, 0xff},
				{85, 178, 153, 0xff},
				{85, 178, 153, 0xff},
				{76, 161, 137, 0xff},
				{68, 145, 125, 0xff},
				{64, 133, 117, 0xff},
				{56, 117, 109, 0xff},
				{28, 109, 97, 0xff},
				{24, 89, 76, 0xff},
				{24, 89, 76, 0xff},
				{28, 64, 64, 0xff},
				{12, 52, 52, 0xff},
				{12, 52, 52, 0xff},
				{0, 32, 32, 0xff},
				{0, 32, 32, 0xff}
				};


/** RedAlert color for TURKEY (dark red)*/
SDL_Color col_turkey[] = {
				{210, 153, 125, 0x0},
				{210, 153, 125, 0xff},
				{194, 137, 105, 0xff},
				{182, 113, 85, 0xff},
				{174, 93, 68, 0xff},
				{174, 93, 68, 0xff},
				{153, 76, 56, 0xff},
				{133, 64, 48, 0xff},
				{133, 44, 36, 0xff},
				{113, 44, 36, 0xff},
				{97, 36, 28, 0xff},
				{93, 8, 0, 0xff},
				{76, 0, 0, 0xff},
				{76, 0, 0, 0xff},
				{56, 0, 0, 0xff},
				{56, 0, 0, 0xff}
				};

/** RedAlert color for making the popup window backgound red/black */
SDL_Color col_redwindow[] = 
{
	{82, 8, 0x0, 0x0},
	{255, 255, 255, 0x0}, // Not used in background
	{255, 255, 255, 0x0}, // Not used in background
	{49, 8, 0x0, 0x0}
};

#endif //PALETTES_H
