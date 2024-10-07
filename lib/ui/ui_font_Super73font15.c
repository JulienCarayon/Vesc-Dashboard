/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font /Users/juliencarayon/Documents/GitHub/Vesc_Dashboard/assets/TTLakesNeueExt-BlackIt.ttf -o /Users/juliencarayon/Documents/GitHub/Vesc_Dashboard/assets/ui_font_Super73font15.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_SUPER73FONT15
#define UI_FONT_SUPER73FONT15 1
#endif

#if UI_FONT_SUPER73FONT15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x1c, 0x73, 0x8e, 0x38, 0xe7, 0x0, 0x71, 0xc7,
    0x0,

    /* U+0022 "\"" */
    0x6e, 0xdf, 0xbf, 0x60,

    /* U+0023 "#" */
    0x6, 0x30, 0x33, 0x83, 0x98, 0x7f, 0xf7, 0xff,
    0x8e, 0x60, 0x63, 0x1f, 0xfe, 0xff, 0xf1, 0x8c,
    0x1c, 0xc0,

    /* U+0024 "$" */
    0x1, 0x80, 0x1c, 0xf, 0xfc, 0x7f, 0xe7, 0x87,
    0x3c, 0x1, 0xc0, 0xf, 0xfc, 0x3f, 0xf0, 0x7,
    0xb8, 0x39, 0xff, 0xcf, 0xfc, 0xe, 0x0, 0x70,
    0x0,

    /* U+0025 "%" */
    0x7c, 0x63, 0xe6, 0x33, 0x71, 0x9f, 0xf, 0xb0,
    0x7f, 0x0, 0x3f, 0xc1, 0xbe, 0x19, 0xb1, 0xcf,
    0x8c, 0x7c,

    /* U+0026 "&" */
    0x3f, 0xf1, 0xff, 0x87, 0x0, 0x1c, 0x7, 0xf6,
    0x3f, 0xf1, 0x87, 0x9c, 0x3c, 0xe0, 0xe7, 0xff,
    0x9f, 0xee,

    /* U+0027 "'" */
    0x6f, 0xf0,

    /* U+0028 "(" */
    0x1f, 0x3e, 0x30, 0x30, 0x70, 0x70, 0x70, 0x60,
    0xe0, 0xe0, 0xe0, 0xf8, 0x78,

    /* U+0029 ")" */
    0x1e, 0x1f, 0x7, 0x7, 0x7, 0x6, 0xe, 0xe,
    0xe, 0xc, 0xc, 0x7c, 0xf8,

    /* U+002A "*" */
    0x33, 0xff, 0xde, 0xfc, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x77, 0xf2, 0x62,

    /* U+002D "-" */
    0x7f, 0xfe,

    /* U+002E "." */
    0x77, 0xf0,

    /* U+002F "/" */
    0x0, 0xc0, 0x70, 0x18, 0xe, 0x3, 0x1, 0xc0,
    0xe0, 0x30, 0x1c, 0x6, 0x3, 0x80, 0xc0, 0x70,
    0x38, 0x0,

    /* U+0030 "0" */
    0x3f, 0xf8, 0xff, 0xe7, 0x3, 0x9c, 0xe, 0x70,
    0x39, 0x8c, 0xee, 0x77, 0xb8, 0x1c, 0xe0, 0x73,
    0xff, 0xc7, 0xfe, 0x0,

    /* U+0031 "1" */
    0x1f, 0x83, 0xf0, 0x1e, 0x3, 0xc0, 0x70, 0xe,
    0x1, 0xc0, 0x38, 0xf, 0xf, 0xfd, 0xff, 0x0,

    /* U+0032 "2" */
    0x1f, 0xf0, 0xff, 0xcf, 0xe, 0x70, 0xf0, 0x7,
    0x9f, 0xf9, 0xff, 0xce, 0x0, 0x70, 0x7, 0xff,
    0xbf, 0xf8,

    /* U+0033 "3" */
    0x3f, 0xf9, 0xff, 0x80, 0x7c, 0x7, 0x80, 0xfc,
    0x7, 0xf0, 0x3, 0x8c, 0x1c, 0xf0, 0xe7, 0xff,
    0x1f, 0xf0,

    /* U+0034 "4" */
    0x7, 0x0, 0x78, 0x7, 0x80, 0x39, 0xe3, 0xce,
    0x3c, 0x71, 0xe3, 0x9f, 0xff, 0xff, 0xf0, 0xe,
    0x0, 0x70,

    /* U+0035 "5" */
    0x3f, 0xf3, 0xff, 0x38, 0x7, 0x0, 0x7f, 0xe7,
    0xfe, 0x70, 0xe0, 0xe, 0xf0, 0xef, 0xfe, 0xff,
    0xc0,

    /* U+0036 "6" */
    0x3f, 0xf1, 0xff, 0x9e, 0x1c, 0xe0, 0x7, 0x0,
    0x3f, 0xf3, 0xff, 0xdc, 0x1e, 0xe0, 0xf7, 0xff,
    0x1f, 0xf8,

    /* U+0037 "7" */
    0x7f, 0xff, 0xff, 0xe1, 0xee, 0x3e, 0x3, 0xc0,
    0x78, 0xf, 0x0, 0xf0, 0x1e, 0x3, 0xc0, 0x38,
    0x0,

    /* U+0038 "8" */
    0x1f, 0xf0, 0xff, 0xce, 0xe, 0x70, 0x73, 0x83,
    0x1f, 0xf1, 0xff, 0xde, 0x6, 0xf0, 0x77, 0xff,
    0x9f, 0xf8,

    /* U+0039 "9" */
    0x3f, 0xf1, 0xff, 0x9e, 0x1c, 0xe0, 0xe7, 0x7,
    0x3f, 0xf8, 0xff, 0xc0, 0x1c, 0xf0, 0xe7, 0xff,
    0x3f, 0xf0,

    /* U+003A ":" */
    0x7b, 0x9c, 0x0, 0x73, 0x9c,

    /* U+003B ";" */
    0x7b, 0x9c, 0x0, 0x73, 0x9c, 0x62, 0x10,

    /* U+003C "<" */
    0x6, 0x3f, 0xf7, 0xf, 0xc3, 0xc1, 0x80,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0xc1, 0xf1, 0xf8, 0x77, 0xff, 0x30, 0x0,

    /* U+003F "?" */
    0x7f, 0xdf, 0xff, 0x83, 0x80, 0x70, 0x1c, 0x3f,
    0x87, 0x0, 0x0, 0x3c, 0x7, 0x0, 0xe0, 0x0,

    /* U+0040 "@" */
    0x1f, 0xfe, 0x3f, 0xfe, 0x30, 0x6, 0x77, 0xf6,
    0x67, 0xf6, 0x6c, 0x66, 0x6c, 0x64, 0x6f, 0xfc,
    0xcf, 0xbc, 0xc0, 0x0, 0xff, 0x80, 0xff, 0x0,

    /* U+0041 "A" */
    0x1, 0xc0, 0x1f, 0x1, 0xf8, 0xf, 0xc0, 0xee,
    0xf, 0x38, 0x71, 0xc7, 0xfe, 0x7f, 0xf3, 0x83,
    0xfc, 0xe,

    /* U+0042 "B" */
    0x1f, 0xf1, 0xff, 0xce, 0xe, 0x70, 0x73, 0x87,
    0x1f, 0xf9, 0xff, 0xee, 0x7, 0x70, 0x3b, 0xff,
    0xbf, 0xfc,

    /* U+0043 "C" */
    0x3f, 0xf1, 0xff, 0xdc, 0x1e, 0xe0, 0xf7, 0x0,
    0x38, 0x3, 0xc0, 0x1c, 0xe, 0xe0, 0xf7, 0xff,
    0x1f, 0xf8,

    /* U+0044 "D" */
    0x3f, 0xf8, 0xff, 0xf3, 0x81, 0xce, 0xf, 0x38,
    0x3d, 0xe0, 0xe7, 0x3, 0x9c, 0xe, 0x7f, 0xfb,
    0xff, 0xcf, 0xff, 0x0,

    /* U+0045 "E" */
    0x1f, 0xf9, 0xff, 0xce, 0x0, 0x70, 0x3, 0x80,
    0x3f, 0xe1, 0xff, 0xe, 0x0, 0x70, 0x3, 0xff,
    0x3f, 0xf8,

    /* U+0046 "F" */
    0x1f, 0xf9, 0xff, 0x8e, 0x0, 0x70, 0x3, 0x80,
    0x3f, 0xe1, 0xfe, 0xe, 0x0, 0x70, 0x3, 0x80,
    0x3c, 0x0,

    /* U+0047 "G" */
    0x3f, 0xf8, 0xff, 0xe7, 0x83, 0x9c, 0xe, 0x70,
    0x1, 0xcf, 0xef, 0x3f, 0xbc, 0x1c, 0xf0, 0x73,
    0xff, 0xc7, 0xfe, 0x0,

    /* U+0048 "H" */
    0x1c, 0x1e, 0x78, 0x38, 0xe0, 0x71, 0xc0, 0xe3,
    0xff, 0xcf, 0xff, 0x1f, 0xfe, 0x38, 0x1c, 0x70,
    0x38, 0xe0, 0xf3, 0xc1, 0xc0,

    /* U+0049 "I" */
    0x3f, 0xe7, 0xfc, 0x3c, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0xf0, 0x1e, 0x1f, 0xf3, 0xfe, 0x0,

    /* U+004A "J" */
    0x3f, 0xf9, 0xff, 0x9f, 0xfc, 0x0, 0xe0, 0xf,
    0x0, 0x71, 0xc3, 0x9e, 0x1c, 0xf0, 0xe7, 0xfe,
    0x1f, 0xf0,

    /* U+004B "K" */
    0x1c, 0x3c, 0xf1, 0xe3, 0xc7, 0xe, 0x3c, 0x39,
    0xe1, 0xff, 0x7, 0xfc, 0x1c, 0x70, 0x71, 0xe1,
    0xc3, 0x8f, 0xf, 0x0,

    /* U+004C "L" */
    0x1c, 0xf, 0x3, 0x80, 0xe0, 0x38, 0x1e, 0x7,
    0x81, 0xc0, 0x7f, 0xdf, 0xff, 0xfc,

    /* U+004D "M" */
    0x1e, 0x7, 0x9f, 0x7, 0xcf, 0x87, 0xe7, 0xe3,
    0xf3, 0xf3, 0xfb, 0xfb, 0xb9, 0xcd, 0xdc, 0xe7,
    0xce, 0x73, 0xef, 0x39, 0xe7, 0x3c, 0xe3, 0x80,

    /* U+004E "N" */
    0x1e, 0x1e, 0x7c, 0x38, 0xfc, 0x71, 0xf8, 0xe3,
    0xb1, 0xcf, 0x77, 0x9c, 0x6e, 0x38, 0xfc, 0x71,
    0xf8, 0xe1, 0xf3, 0xc3, 0xc0,

    /* U+004F "O" */
    0x3f, 0xf8, 0xff, 0xf7, 0x3, 0xdc, 0xf, 0x70,
    0x3d, 0xc0, 0xef, 0x7, 0xb8, 0x1e, 0xe0, 0x7b,
    0xff, 0xc7, 0xff, 0x0,

    /* U+0050 "P" */
    0x3f, 0xf1, 0xff, 0xce, 0xe, 0x70, 0xf7, 0x87,
    0xb8, 0x39, 0xff, 0xcf, 0xfc, 0xf0, 0x7, 0x0,
    0x38, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xf8, 0xff, 0xf7, 0x3, 0xdc, 0xf, 0x70,
    0x3d, 0xc0, 0xef, 0x7, 0xb8, 0x1e, 0xe0, 0x7b,
    0xff, 0xc7, 0xff, 0x3, 0x80, 0xe, 0x0, 0x38,
    0x0,

    /* U+0052 "R" */
    0x3f, 0xf1, 0xff, 0xce, 0xe, 0x70, 0xf7, 0x87,
    0xbc, 0x39, 0xff, 0xcf, 0xfc, 0x73, 0xc7, 0x8e,
    0x38, 0x78,

    /* U+0053 "S" */
    0x3f, 0xf1, 0xff, 0x9e, 0x1c, 0xf0, 0x7, 0x0,
    0x3f, 0xf0, 0xff, 0xc0, 0x1e, 0xe0, 0xe7, 0xff,
    0x3f, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0xe, 0x1,
    0xe0, 0x1c, 0x1, 0xc0, 0x1c, 0x1, 0xc0, 0x3c,
    0x0,

    /* U+0055 "U" */
    0x38, 0x38, 0xe0, 0xe7, 0x83, 0x9c, 0xe, 0x70,
    0x79, 0xc1, 0xcf, 0x7, 0x3c, 0x1c, 0xff, 0xf3,
    0xff, 0x87, 0xfe, 0x0,

    /* U+0056 "V" */
    0xf0, 0x7f, 0x83, 0xdc, 0x3c, 0xe1, 0xc7, 0x1e,
    0x38, 0xe0, 0xee, 0x7, 0xe0, 0x3f, 0x1, 0xf0,
    0x7, 0x0,

    /* U+0057 "W" */
    0xf1, 0xc3, 0xf8, 0xe3, 0xfc, 0xf1, 0xde, 0x79,
    0xef, 0x6c, 0xe3, 0xb6, 0xf1, 0xfb, 0x70, 0xf9,
    0xf8, 0x7c, 0xf8, 0x3c, 0x78, 0x1e, 0x3c, 0x0,

    /* U+0058 "X" */
    0x3c, 0x3c, 0x71, 0xe1, 0xef, 0x3, 0xf8, 0xf,
    0xc0, 0x1e, 0x0, 0xfc, 0x7, 0xf0, 0x3d, 0xe1,
    0xe3, 0x8f, 0xf, 0x0,

    /* U+0059 "Y" */
    0xe0, 0x7f, 0xf, 0x71, 0xe7, 0xbc, 0x3b, 0x83,
    0xf0, 0x1e, 0x1, 0xc0, 0x1c, 0x1, 0xc0, 0x3c,
    0x0,

    /* U+005A "Z" */
    0x3f, 0xf9, 0xff, 0xc0, 0x7c, 0x7, 0xc0, 0x7c,
    0xf, 0xc0, 0xfc, 0xf, 0xc0, 0xf8, 0x7, 0xff,
    0x3f, 0xf8,

    /* U+005B "[" */
    0x1f, 0x3e, 0x38, 0x30, 0x30, 0x30, 0x70, 0x70,
    0x60, 0x60, 0xe0, 0xf8, 0xf8,

    /* U+005C "\\" */
    0xe6, 0x66, 0x66, 0x67, 0x77, 0x33, 0x30,

    /* U+005D "]" */
    0x1f, 0x1f, 0x7, 0x6, 0x6, 0xe, 0xe, 0xc,
    0xc, 0xc, 0x1c, 0x7c, 0xf8,

    /* U+005E "^" */
    0x38, 0xf9, 0xb6, 0x7c, 0x60,

    /* U+005F "_" */
    0x7f, 0xff,

    /* U+0060 "`" */
    0xe6, 0x70,

    /* U+0061 "a" */
    0x3f, 0xcf, 0xf9, 0xc7, 0x3f, 0xef, 0xfd, 0xc3,
    0xbf, 0xf7, 0xfc,

    /* U+0062 "b" */
    0x38, 0x7, 0x0, 0xe0, 0x3f, 0xe7, 0xfe, 0xe1,
    0xdc, 0x3b, 0x8e, 0xf1, 0xdf, 0xfb, 0xfe, 0x0,

    /* U+0063 "c" */
    0x3f, 0xcf, 0xf9, 0xc7, 0x38, 0xe, 0x1, 0xc7,
    0xbf, 0xf7, 0xfc,

    /* U+0064 "d" */
    0x0, 0xf0, 0xe, 0x0, 0xe3, 0xfe, 0x7f, 0xe7,
    0x1e, 0x71, 0xce, 0x1c, 0xe1, 0xcf, 0xfc, 0xff,
    0x80,

    /* U+0065 "e" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xbf, 0xff, 0xff, 0xc3,
    0xbf, 0xf3, 0xfc,

    /* U+0066 "f" */
    0xf, 0xc7, 0xf1, 0xc0, 0x70, 0x7f, 0xbf, 0xe3,
    0x80, 0xe0, 0x78, 0x1c, 0x7, 0x0,

    /* U+0067 "g" */
    0x3f, 0xef, 0xfd, 0xc3, 0xb8, 0xf7, 0x1c, 0xff,
    0x9f, 0x70, 0xe, 0xe3, 0xdf, 0xf3, 0xfe, 0x0,

    /* U+0068 "h" */
    0x38, 0x7, 0x0, 0xe0, 0x1f, 0xe7, 0xfe, 0xe1,
    0xdc, 0x7b, 0x8e, 0x71, 0xdc, 0x3b, 0x87, 0x0,

    /* U+0069 "i" */
    0x3c, 0xf0, 0xe, 0x39, 0xe7, 0x1c, 0x73, 0xce,
    0x0,

    /* U+006A "j" */
    0x3, 0x83, 0xc0, 0x0, 0xe0, 0x70, 0x78, 0x38,
    0x1c, 0xe, 0x7, 0x7, 0x83, 0x87, 0xc7, 0xc0,

    /* U+006B "k" */
    0x3c, 0x7, 0x0, 0xe0, 0x1c, 0x77, 0x9c, 0xf7,
    0x9f, 0xe3, 0xfc, 0x73, 0x9e, 0x73, 0x8f, 0x0,

    /* U+006C "l" */
    0x3c, 0xe3, 0x8e, 0x79, 0xc7, 0x1c, 0x73, 0xce,
    0x0,

    /* U+006D "m" */
    0x3f, 0xde, 0x3f, 0xff, 0x71, 0xc7, 0x71, 0xcf,
    0x73, 0xce, 0x73, 0x8e, 0xf3, 0x8e, 0xe3, 0x8e,

    /* U+006E "n" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xb8, 0xf7, 0x1c, 0xe3,
    0xb8, 0x77, 0xe,

    /* U+006F "o" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xb8, 0x7f, 0xd, 0xe3,
    0xbf, 0xf3, 0xfc,

    /* U+0070 "p" */
    0x1f, 0xe3, 0xff, 0x38, 0x73, 0x87, 0x38, 0xe7,
    0x8e, 0x7f, 0xe7, 0xfc, 0x70, 0xf, 0x0, 0xe0,
    0x0,

    /* U+0071 "q" */
    0x3f, 0xef, 0xfd, 0xc7, 0xb8, 0xee, 0x1d, 0xc3,
    0xbf, 0xf7, 0xfc, 0x3, 0x80, 0x70, 0xe, 0x0,

    /* U+0072 "r" */
    0x3b, 0x9f, 0xdf, 0xee, 0x7, 0x3, 0x83, 0xc1,
    0xc0,

    /* U+0073 "s" */
    0x3f, 0xcf, 0xfd, 0xc7, 0x3f, 0xe7, 0xfd, 0xe3,
    0xbf, 0xf7, 0xfc,

    /* U+0074 "t" */
    0x18, 0x1e, 0x3f, 0xdf, 0xe3, 0x83, 0xc1, 0xc0,
    0xe0, 0x7e, 0x1f, 0x0,

    /* U+0075 "u" */
    0x70, 0xee, 0x1d, 0xc7, 0x38, 0xef, 0x1d, 0xc3,
    0xbf, 0xf7, 0xfc,

    /* U+0076 "v" */
    0xe1, 0xf8, 0xee, 0x7b, 0x9c, 0x7e, 0x1f, 0x87,
    0xc1, 0xe0,

    /* U+0077 "w" */
    0xe7, 0x1f, 0x9c, 0xfe, 0xf3, 0xbb, 0xdc, 0xff,
    0x73, 0xef, 0x87, 0xbc, 0x1c, 0xf0,

    /* U+0078 "x" */
    0x38, 0xe7, 0xb8, 0x7e, 0x7, 0x81, 0xf0, 0x7f,
    0x1e, 0xe7, 0x8e,

    /* U+0079 "y" */
    0x38, 0x73, 0x8e, 0x39, 0xe1, 0xdc, 0x1f, 0x81,
    0xf0, 0x1f, 0x0, 0xe0, 0x1c, 0x7, 0xc0, 0x78,
    0x0,

    /* U+007A "z" */
    0x3f, 0xe7, 0xfc, 0x1f, 0x7, 0xc1, 0xe0, 0xf8,
    0x1f, 0xf7, 0xfc,

    /* U+007B "{" */
    0xf, 0x1f, 0x18, 0x18, 0x38, 0x78, 0x70, 0x30,
    0x70, 0x70, 0x70, 0x7c, 0x38,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+007D "}" */
    0x1e, 0x3e, 0xe, 0xe, 0xc, 0xe, 0x1e, 0x1c,
    0x18, 0x18, 0x38, 0xf8, 0xf0,

    /* U+007E "~" */
    0xfb, 0xfb, 0xdf, 0xdf
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 93, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 115, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 14, .adv_w = 203, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 208, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 57, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 58, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 95, .adv_w = 98, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 108, .adv_w = 98, .box_w = 8, .box_h = 13, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 121, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 126, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 133, .adv_w = 58, .box_w = 4, .box_h = 6, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 136, .adv_w = 122, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 138, .adv_w = 58, .box_w = 4, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 97, .box_w = 10, .box_h = 14, .ofs_x = -2, .ofs_y = -1},
    {.bitmap_index = 158, .adv_w = 232, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 161, .box_w = 11, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 210, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 200, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 205, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 186, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 220, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 68, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 68, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 348, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 134, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 360, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 189, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 244, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 407, .adv_w = 195, .box_w = 13, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 222, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 225, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 229, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 195, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 184, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 231, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 230, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 165, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 206, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 210, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 175, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 276, .box_w = 17, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 231, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 236, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 209, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 236, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 734, .adv_w = 210, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 208, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 184, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 226, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 202, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 279, .box_w = 17, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 182, .box_w = 14, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 189, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 190, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 94, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 917, .adv_w = 96, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 924, .adv_w = 94, .box_w = 8, .box_h = 13, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 937, .adv_w = 125, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 942, .adv_w = 107, .box_w = 8, .box_h = 2, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 944, .adv_w = 81, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 946, .adv_w = 181, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 183, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 984, .adv_w = 187, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 186, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 134, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1042, .adv_w = 185, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 84, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 85, .box_w = 9, .box_h = 14, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1083, .adv_w = 173, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 82, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1108, .adv_w = 264, .box_w = 16, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 185, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 188, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 187, .box_w = 12, .box_h = 11, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1163, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1179, .adv_w = 143, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 180, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 137, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 186, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 164, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 236, .box_w = 14, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1246, .adv_w = 156, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 161, .box_w = 12, .box_h = 11, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1274, .adv_w = 150, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1285, .adv_w = 96, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1298, .adv_w = 91, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1303, .adv_w = 96, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1316, .adv_w = 126, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 18,
    1, 20,
    1, 21,
    1, 24,
    1, 25,
    1, 34,
    1, 42,
    1, 53,
    1, 55,
    1, 57,
    1, 58,
    1, 87,
    1, 89,
    1, 90,
    3, 18,
    3, 21,
    3, 24,
    8, 18,
    8, 21,
    8, 24,
    13, 18,
    13, 24,
    14, 18,
    14, 20,
    14, 24,
    15, 18,
    15, 24,
    16, 16,
    17, 18,
    17, 21,
    18, 1,
    18, 3,
    18, 8,
    18, 13,
    18, 14,
    18, 15,
    18, 18,
    18, 21,
    18, 24,
    19, 3,
    19, 8,
    19, 21,
    20, 21,
    21, 1,
    21, 3,
    21, 8,
    21, 13,
    21, 15,
    21, 24,
    22, 24,
    22, 26,
    23, 21,
    23, 24,
    23, 26,
    24, 1,
    24, 3,
    24, 8,
    24, 13,
    24, 14,
    24, 15,
    24, 17,
    24, 19,
    24, 20,
    24, 21,
    24, 22,
    24, 23,
    24, 24,
    24, 25,
    24, 26,
    25, 1,
    25, 20,
    25, 24,
    26, 20,
    26, 21,
    34, 1,
    34, 3,
    34, 8,
    34, 13,
    34, 15,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 87,
    34, 88,
    34, 90,
    35, 1,
    35, 42,
    35, 52,
    35, 53,
    35, 58,
    36, 66,
    36, 68,
    36, 69,
    36, 70,
    36, 72,
    36, 80,
    36, 82,
    36, 84,
    36, 85,
    36, 87,
    36, 88,
    36, 90,
    38, 36,
    38, 40,
    38, 48,
    38, 50,
    38, 52,
    38, 66,
    38, 68,
    38, 69,
    38, 70,
    38, 72,
    38, 80,
    38, 82,
    38, 84,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 1,
    39, 13,
    39, 15,
    39, 34,
    39, 36,
    39, 40,
    39, 43,
    39, 48,
    39, 50,
    39, 52,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 78,
    39, 79,
    39, 80,
    39, 81,
    39, 82,
    39, 83,
    39, 84,
    39, 86,
    39, 87,
    39, 88,
    39, 89,
    39, 90,
    39, 91,
    40, 42,
    40, 43,
    42, 1,
    42, 3,
    42, 8,
    42, 13,
    42, 14,
    42, 15,
    42, 36,
    42, 40,
    42, 43,
    42, 48,
    42, 50,
    42, 52,
    42, 55,
    42, 56,
    42, 57,
    42, 58,
    42, 66,
    42, 68,
    42, 69,
    42, 70,
    42, 71,
    42, 72,
    42, 80,
    42, 82,
    42, 84,
    42, 85,
    42, 86,
    42, 87,
    42, 88,
    42, 90,
    43, 34,
    44, 1,
    44, 13,
    44, 14,
    44, 15,
    44, 36,
    44, 40,
    44, 43,
    44, 48,
    44, 50,
    44, 52,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 84,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 1,
    45, 3,
    45, 8,
    45, 13,
    45, 14,
    45, 15,
    45, 36,
    45, 40,
    45, 43,
    45, 48,
    45, 50,
    45, 52,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 71,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    48, 42,
    48, 43,
    49, 1,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 71,
    49, 72,
    49, 80,
    49, 82,
    49, 84,
    49, 85,
    50, 42,
    50, 43,
    51, 43,
    51, 66,
    51, 68,
    51, 69,
    51, 70,
    51, 71,
    51, 72,
    51, 80,
    51, 82,
    51, 84,
    51, 85,
    51, 86,
    52, 43,
    52, 58,
    53, 1,
    53, 3,
    53, 8,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 53,
    53, 55,
    53, 56,
    53, 57,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 43,
    55, 1,
    55, 3,
    55, 8,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 42,
    55, 52,
    55, 53,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    55, 91,
    56, 3,
    56, 8,
    56, 13,
    56, 15,
    56, 34,
    56, 42,
    56, 53,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 82,
    56, 83,
    56, 84,
    56, 86,
    56, 91,
    57, 1,
    57, 3,
    57, 8,
    57, 13,
    57, 14,
    57, 15,
    57, 42,
    57, 53,
    58, 1,
    58, 3,
    58, 8,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 42,
    58, 53,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    59, 3,
    59, 8,
    59, 13,
    59, 14,
    59, 15,
    59, 59,
    61, 61,
    71, 1,
    71, 3,
    71, 8,
    71, 13,
    71, 15,
    71, 67,
    71, 71,
    71, 73,
    71, 74,
    71, 75,
    71, 76,
    71, 77,
    71, 85,
    71, 87,
    71, 88,
    71, 89,
    71, 90,
    76, 1,
    76, 13,
    76, 15,
    76, 66,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    82, 75,
    83, 1,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 71,
    83, 84,
    83, 85,
    85, 3,
    85, 8,
    85, 13,
    85, 15,
    85, 71,
    85, 85,
    87, 1,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    88, 3,
    88, 8,
    89, 1,
    89, 3,
    89, 8,
    89, 13,
    89, 15,
    89, 71,
    89, 85,
    89, 87,
    89, 88,
    89, 89,
    89, 90,
    90, 1,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 71,
    90, 85,
    90, 87,
    90, 88,
    90, 89,
    90, 90,
    91, 3,
    91, 8,
    91, 13,
    91, 15,
    91, 71,
    91, 85
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -5, -7, -7, -5, -7, -7, -7,
    -7, -5, -7, -5, -5, -5, 7, -7,
    12, 7, -7, 12, 12, -12, -7, -7,
    -12, 12, -12, -24, -5, -5, -5, -12,
    -12, 12, -7, 12, 10, -5, -12, 7,
    7, -5, -5, -5, -7, -7, 12, 12,
    -7, -5, -5, -5, -5, -5, -7, 12,
    12, -17, -7, -17, -5, -5, -5, -10,
    -5, -5, 7, -5, -5, -5, -5, -5,
    -5, -5, -7, -7, -7, 17, 17, -12,
    -7, -7, -7, -2, -2, -2, -5, -5,
    -4, -7, -5, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -5,
    -5, -5, -5, -4, -5, -5, -5, -5,
    -5, -5, -5, -5, -5, -5, -5, -5,
    -12, -17, -17, -10, -5, -5, -5, -5,
    -5, -5, 7, -12, -12, -12, -12, -12,
    -12, -12, -12, -12, -12, -12, -12, -12,
    -5, -5, -7, -5, -7, -5, -5, -7,
    12, 12, 12, -7, 12, -5, -5, -5,
    -5, -5, -5, 7, 7, 7, 7, -5,
    -5, -5, -5, -5, -5, -5, -5, -5,
    -5, -5, -5, -5, -5, -5, -7, 12,
    -7, 12, -5, -5, -5, -5, -5, -5,
    -5, -5, -5, -5, -5, -5, -5, -5,
    -5, -5, -5, -5, -12, -22, -22, 12,
    -7, 12, -5, -5, -5, -5, -5, -5,
    -22, -5, -12, -7, -12, -5, -5, -5,
    -5, -5, -4, -5, -12, -22, -22, -7,
    -5, -5, -5, -5, -5, 5, -5, -5,
    -5, -5, 5, -4, -5, -5, -2, -2,
    -2, -2, 5, -2, -2, -2, -2, 5,
    -2, -5, -4, -7, 12, 12, -22, -12,
    -22, -12, 10, 7, 7, 7, 7, -22,
    -22, -22, -22, -22, -17, -17, -22, -17,
    -22, -17, -22, -17, -12, -12, -12, -12,
    -17, -5, -7, 12, 12, -12, -5, -12,
    -7, 7, -4, 7, -7, -7, -7, -7,
    -7, -5, -5, -7, -5, -7, -5, -7,
    -5, -5, 12, 12, -7, -7, -7, 7,
    7, -7, -7, -7, -7, -7, -5, -5,
    -7, -5, -7, -5, -7, -5, -5, -5,
    12, 12, 17, -5, 17, 7, 7, -7,
    12, 12, -17, -7, -17, -7, 7, 7,
    -17, -17, -17, -17, -17, -12, -12, -17,
    -12, -17, -12, -17, -12, -5, -5, -5,
    -5, -7, 12, 12, 12, -5, 12, 5,
    -24, -5, 17, 17, -12, -12, 5, 10,
    5, 5, 5, 5, 5, 10, 5, 5,
    5, 5, -5, 12, 12, -2, -2, -2,
    -2, -2, -2, -2, 14, -5, 12, 12,
    -12, -12, -2, 5, -2, 5, 12, 12,
    12, 12, 5, 5, -5, 12, 12, -5,
    -5, 12, 12, -5, 12, 12, 17, 17,
    5, 5, 5, 5, 5, 5, -5, 12,
    12, -5, -5, 5, 5, 5, 5, 5,
    5, 12, 12, 12, 12, 5, 5
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 455,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Super73font15 = {
#else
lv_font_t ui_font_Super73font15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_SUPER73FONT15*/

