/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets/NotoSans-Regular.ttf -o C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets\ui_font_English.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_ENGLISH
#define UI_FONT_ENGLISH 1
#endif

#if UI_FONT_ENGLISH

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xaa, 0xf,

    /* U+0022 "\"" */
    0xd9, 0x99,

    /* U+0023 "#" */
    0x9, 0x2, 0x41, 0x90, 0x44, 0x7f, 0xc4, 0x81,
    0x23, 0xfe, 0x22, 0x9, 0x2, 0x40, 0x90,

    /* U+0024 "$" */
    0x10, 0x21, 0xfc, 0x89, 0x1a, 0x1c, 0xe, 0x12,
    0x24, 0x5f, 0xe1, 0x2, 0x0,

    /* U+0025 "%" */
    0x70, 0xc9, 0x88, 0x89, 0x88, 0xb0, 0x8b, 0x9,
    0xee, 0x77, 0x30, 0xd1, 0xd, 0x11, 0x91, 0x11,
    0x33, 0xe,

    /* U+0026 "&" */
    0x3c, 0x8, 0x41, 0x8, 0x23, 0x2, 0xc0, 0x70,
    0x1f, 0x16, 0x76, 0x87, 0xd0, 0x33, 0xf, 0x3e,
    0x30,

    /* U+0027 "'" */
    0xea,

    /* U+0028 "(" */
    0x29, 0x69, 0x24, 0x92, 0x24, 0xc8,

    /* U+0029 ")" */
    0x89, 0x32, 0x49, 0x24, 0xa5, 0xa0,

    /* U+002A "*" */
    0x10, 0x22, 0x4f, 0xf3, 0x8d, 0x1b, 0x0,

    /* U+002B "+" */
    0x10, 0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10,

    /* U+002C "," */
    0xfa,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x20, 0x86, 0x10, 0xc3, 0x8, 0x61, 0x4,
    0x30,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+0031 "1" */
    0x17, 0xd1, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x7c, 0xc6, 0x2, 0x2, 0x2, 0x4, 0xc, 0x18,
    0x10, 0x20, 0x40, 0xff,

    /* U+0033 "3" */
    0x7c, 0x46, 0x2, 0x2, 0x6, 0x38, 0x6, 0x1,
    0x1, 0x1, 0x82, 0x7c,

    /* U+0034 "4" */
    0x2, 0x6, 0xa, 0x1a, 0x12, 0x22, 0x62, 0xc2,
    0xff, 0x2, 0x2, 0x2,

    /* U+0035 "5" */
    0x7c, 0x81, 0x6, 0xc, 0x1f, 0x1, 0x81, 0x2,
    0x6, 0x17, 0xc0,

    /* U+0036 "6" */
    0x1c, 0xc1, 0x4, 0x8, 0x17, 0xb1, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+0037 "7" */
    0xff, 0x3, 0x2, 0x6, 0x4, 0xc, 0xc, 0x8,
    0x18, 0x10, 0x30, 0x20,

    /* U+0038 "8" */
    0x3c, 0xcd, 0xa, 0x16, 0x47, 0x1b, 0x63, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x38, 0xde, 0x81, 0x2,
    0x8, 0x33, 0x80,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x4b, 0x0,

    /* U+003C "<" */
    0x3, 0x6, 0x18, 0x60, 0xc0, 0x38, 0xe, 0x3,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x80, 0xe0, 0x38, 0x6, 0x7, 0x1c, 0x70, 0x80,

    /* U+003F "?" */
    0x78, 0x10, 0x41, 0xc, 0x63, 0x8, 0x20, 0x3,
    0xc,

    /* U+0040 "@" */
    0xf, 0x83, 0x4, 0x60, 0x24, 0x79, 0x88, 0x99,
    0x9, 0x90, 0x99, 0x9, 0x99, 0xb8, 0xe6, 0x40,
    0x2, 0x0, 0x1f, 0x80,

    /* U+0041 "A" */
    0xc, 0x3, 0x0, 0xe0, 0x68, 0x12, 0xc, 0xc2,
    0x10, 0xfe, 0x60, 0x90, 0x24, 0xf, 0x1,

    /* U+0042 "B" */
    0xfc, 0x86, 0x82, 0x82, 0x86, 0xf8, 0x86, 0x81,
    0x81, 0x81, 0x82, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x21, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x40, 0x60, 0x1f,

    /* U+0044 "D" */
    0xfc, 0x41, 0xa0, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x81, 0xc0, 0xa1, 0x9f, 0x80,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x82, 0xf, 0xe0, 0x82, 0x8,
    0x20,

    /* U+0047 "G" */
    0x1f, 0x90, 0x50, 0x10, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xa0, 0x58, 0x23, 0xf0,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xfe, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x10,

    /* U+0049 "I" */
    0xf2, 0x22, 0x22, 0x22, 0x22, 0x2f,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xe0,

    /* U+004B "K" */
    0x82, 0x84, 0x8c, 0x98, 0xb0, 0xe0, 0xf0, 0x98,
    0x88, 0x8c, 0x86, 0x83,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+004D "M" */
    0xc0, 0x78, 0xf, 0x83, 0xd0, 0x5b, 0xb, 0x62,
    0x64, 0x4c, 0xd9, 0x8a, 0x31, 0x46, 0x38, 0xc2,
    0x10,

    /* U+004E "N" */
    0xc0, 0xe0, 0x78, 0x36, 0x19, 0xc, 0xc6, 0x33,
    0x9, 0x86, 0xc1, 0xe0, 0x70, 0x30,

    /* U+004F "O" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x26, 0x18, 0x78,

    /* U+0050 "P" */
    0xf9, 0xe, 0xc, 0x18, 0x30, 0xbe, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x26, 0x18, 0x7c, 0x3,
    0x0, 0x60, 0xc,

    /* U+0052 "R" */
    0xfc, 0x86, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x8c,
    0x8c, 0x86, 0x82, 0x83,

    /* U+0053 "S" */
    0x3f, 0x86, 0x4, 0xc, 0xf, 0x7, 0x3, 0x2,
    0x6, 0x17, 0xc0,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+0056 "V" */
    0xc0, 0x90, 0x24, 0x19, 0x84, 0x21, 0x8, 0xc3,
    0x20, 0x48, 0x16, 0x7, 0x0, 0xc0, 0x30,

    /* U+0057 "W" */
    0xc3, 0x6, 0x87, 0x9, 0xe, 0x13, 0x14, 0x66,
    0x68, 0xc4, 0xd9, 0x9, 0x12, 0x1a, 0x2c, 0x3c,
    0x78, 0x30, 0xe0, 0x60, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x41, 0xb0, 0x88, 0xc6, 0xc1, 0xc0, 0x60, 0x70,
    0x2c, 0x32, 0x11, 0x90, 0x58, 0x30,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x43, 0x40, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x18, 0x18, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x4, 0x18, 0x20, 0x83, 0x4, 0x18, 0x20,
    0x83,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x93, 0xc0,

    /* U+005E "^" */
    0x10, 0x10, 0x28, 0x28, 0x44, 0x44, 0xc2, 0x82,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x99, 0x80,

    /* U+0061 "a" */
    0x7c, 0x8c, 0x8, 0x17, 0xf8, 0x60, 0xc3, 0x7a,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x15, 0xc0,

    /* U+0063 "c" */
    0x3d, 0x8, 0x20, 0x82, 0x8, 0x10, 0x3c,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x83,
    0x5, 0x19, 0xd0,

    /* U+0065 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0x21, 0x3e,

    /* U+0066 "f" */
    0x1c, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x8,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x4, 0xc, 0x2f, 0xc0,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xec, 0x70, 0x60, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+0069 "i" */
    0xdf, 0xf0,

    /* U+006A "j" */
    0x24, 0x12, 0x49, 0x24, 0x92, 0x4e,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x69, 0x92, 0x28, 0x70, 0x91,
    0x32, 0x34, 0x20,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0x8,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xe2, 0xb9,
    0x2, 0x4, 0x8, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x4, 0x8, 0x10, 0x20,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0073 "s" */
    0x7e, 0x18, 0x38, 0x38, 0x30, 0x61, 0xf8,

    /* U+0074 "t" */
    0x42, 0x3e, 0x84, 0x21, 0x8, 0x42, 0xe,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0076 "v" */
    0xc3, 0x43, 0x42, 0x66, 0x26, 0x24, 0x3c, 0x18,
    0x18,

    /* U+0077 "w" */
    0xc6, 0x14, 0x71, 0x45, 0x34, 0xd2, 0x69, 0x22,
    0x9a, 0x28, 0xe3, 0x8c, 0x30, 0xc0,

    /* U+0078 "x" */
    0x43, 0x66, 0x34, 0x1c, 0x18, 0x1c, 0x34, 0x62,
    0x43,

    /* U+0079 "y" */
    0xc3, 0xc2, 0x42, 0x66, 0x24, 0x24, 0x3c, 0x18,
    0x18, 0x18, 0x10, 0x30, 0xe0,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x30, 0x84, 0x30, 0xfc,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x13, 0x4, 0x21, 0x8, 0x42,
    0xc,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc0, 0x82, 0x8, 0x20, 0x81, 0xcc, 0x20, 0x82,
    0x8, 0x23, 0x0,

    /* U+007E "~" */
    0xf1, 0x8f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 69, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 104, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 165, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 146, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 213, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 58, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 70, .adv_w = 77, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 76, .adv_w = 77, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 82, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 89, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 97, .adv_w = 69, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 98, .adv_w = 82, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 99, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 95, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 146, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 69, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 69, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 226, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 234, .adv_w = 146, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 238, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 246, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 230, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 275, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 187, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 142, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 133, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 186, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 190, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 87, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 70, .box_w = 4, .box_h = 15, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 388, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 134, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 232, .box_w = 11, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 195, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 200, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 155, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 200, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 485, .adv_w = 159, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 187, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 238, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 150, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 620, .adv_w = 95, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 635, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 643, .adv_w = 114, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 644, .adv_w = 72, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 646, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 157, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 157, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 88, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 157, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 712, .adv_w = 158, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 66, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 66, .box_w = 3, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 731, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 66, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 239, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 158, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 157, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 788, .adv_w = 157, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 800, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 92, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 158, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 130, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 201, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 135, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 131, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 873, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 97, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 889, .adv_w = 141, .box_w = 1, .box_h = 16, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 891, .adv_w = 97, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 902, .adv_w = 146, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
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
    .kern_dsc = NULL,
    .kern_scale = 0,
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
const lv_font_t ui_font_English = {
#else
lv_font_t ui_font_English = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_ENGLISH*/

