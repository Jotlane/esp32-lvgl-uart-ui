/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets/NotoSansThai-Regular.ttf -o C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets\ui_font_Thai.c --format lvgl -r 0x0E00-0x0E50 -r 0x2000-0x206F -r 0x0020-0x007F --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_THAI
#define UI_FONT_THAI 1
#endif

#if UI_FONT_THAI

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
    0xf1, 0x8f,

    /* U+0E01 "ก" */
    0x7d, 0x8e, 0xb, 0x1c, 0x30, 0x60, 0xc1, 0x82,

    /* U+0E02 "ข" */
    0xe4, 0x96, 0x51, 0xc7, 0x1c, 0x71, 0x78,

    /* U+0E03 "ฃ" */
    0x52, 0xe4, 0xcb, 0x14, 0x28, 0x50, 0xa1, 0x3c,

    /* U+0E04 "ค" */
    0x7d, 0x8e, 0xc, 0x1f, 0x38, 0x60, 0xc1, 0x82,

    /* U+0E05 "ฅ" */
    0x6d, 0x26, 0xc, 0x1f, 0x38, 0x60, 0xc1, 0x82,

    /* U+0E06 "ฆ" */
    0x51, 0x71, 0x31, 0x61, 0x41, 0x41, 0x41, 0x63,
    0x5e,

    /* U+0E07 "ง" */
    0x9d, 0x8b, 0xa, 0x14, 0x2c, 0x48, 0x92, 0x38,

    /* U+0E08 "จ" */
    0x79, 0x8, 0x8, 0x16, 0x24, 0x48, 0x92, 0x38,

    /* U+0E09 "ฉ" */
    0xf9, 0x8, 0x8, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0E0A "ช" */
    0xe4, 0x96, 0x91, 0xc7, 0x1c, 0x71, 0x78,

    /* U+0E0B "ซ" */
    0x92, 0xe4, 0x93, 0x14, 0x28, 0x50, 0xa1, 0x3c,

    /* U+0E0C "ฌ" */
    0x7c, 0x1c, 0x61, 0x82, 0x16, 0x21, 0xc2, 0x18,
    0x21, 0x82, 0x18, 0x31, 0xe2, 0xe0,

    /* U+0E0D "ญ" */
    0x7c, 0x1c, 0x61, 0x82, 0x16, 0x21, 0xc2, 0x18,
    0x21, 0x82, 0x18, 0x23, 0xe1, 0xd0, 0x1, 0x2,
    0x30, 0x3e,

    /* U+0E0E "ฎ" */
    0x3e, 0x63, 0x41, 0x31, 0x31, 0x21, 0x21, 0x21,
    0xe1, 0x1, 0x1d, 0x23,

    /* U+0E0F "ฏ" */
    0x3e, 0x63, 0x41, 0x31, 0x61, 0x41, 0x41, 0x41,
    0xc1, 0x1, 0x75, 0x4b,

    /* U+0E10 "ฐ" */
    0x1, 0x7a, 0x84, 0x2, 0x2, 0x62, 0x22, 0x22,
    0x24, 0x38, 0x0, 0x6a, 0xd6,

    /* U+0E11 "ฑ" */
    0xae, 0xf1, 0x21, 0x41, 0x41, 0x41, 0x41, 0x41,
    0x41,

    /* U+0E12 "ฒ" */
    0x7c, 0x19, 0x21, 0x82, 0x18, 0x21, 0x82, 0x18,
    0x21, 0x82, 0x14, 0x31, 0x72, 0xe0,

    /* U+0E13 "ณ" */
    0x7c, 0x1c, 0x61, 0x82, 0x16, 0x21, 0xc2, 0x18,
    0x21, 0x82, 0x18, 0x23, 0xe1, 0xd0,

    /* U+0E14 "ด" */
    0x3c, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa1, 0x72,

    /* U+0E15 "ต" */
    0x7e, 0xc9, 0x81, 0x81, 0x81, 0x81, 0x81, 0x41,
    0x39,

    /* U+0E16 "ถ" */
    0x7d, 0x8e, 0xb, 0x1c, 0x30, 0x60, 0xc1, 0xe2,

    /* U+0E17 "ท" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+0E18 "ธ" */
    0x7f, 0x6, 0x3, 0xc1, 0xd0, 0x60, 0xc3, 0xfc,

    /* U+0E19 "น" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0E1A "บ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7c,

    /* U+0E1B "ป" */
    0x2, 0x4, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+0E1C "ผ" */
    0xc3, 0x6, 0xc, 0x9b, 0xb5, 0x71, 0xe3, 0x82,

    /* U+0E1D "ฝ" */
    0x2, 0x4, 0xe, 0x18, 0x30, 0x64, 0xdd, 0xab,
    0x8f, 0x1c, 0x10,

    /* U+0E1E "พ" */
    0x88, 0xc6, 0x75, 0x3a, 0xbd, 0x5b, 0xbd, 0x8c,
    0xc6, 0x63, 0x0,

    /* U+0E1F "ฟ" */
    0x0, 0xc0, 0x20, 0xa, 0x22, 0x98, 0xa5, 0x6d,
    0x5b, 0x54, 0x77, 0x18, 0xc6, 0x31, 0x8c,

    /* U+0E20 "ภ" */
    0x3e, 0x63, 0x41, 0x31, 0x31, 0x21, 0x21, 0x21,
    0xe1,

    /* U+0E21 "ม" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0xbc,

    /* U+0E22 "ย" */
    0x73, 0x6, 0xc, 0x17, 0x30, 0x60, 0xc3, 0x7c,

    /* U+0E23 "ร" */
    0x7e, 0x18, 0x38, 0x78, 0x30, 0x61, 0xf8,

    /* U+0E24 "ฤ" */
    0x7d, 0x8e, 0xb, 0x18, 0x30, 0x60, 0xc1, 0xe2,
    0x4, 0x8, 0x10,

    /* U+0E25 "ล" */
    0x7d, 0xc, 0x8, 0x17, 0xf8, 0x60, 0xc1, 0x72,

    /* U+0E26 "ฦ" */
    0x3e, 0x63, 0x41, 0x31, 0x21, 0x21, 0x21, 0x21,
    0xe1, 0x1, 0x1, 0x1,

    /* U+0E27 "ว" */
    0xf0, 0x20, 0x41, 0x4, 0x10, 0x42, 0xf0,

    /* U+0E28 "ศ" */
    0x7e, 0xc6, 0x82, 0x82, 0xf2, 0xc2, 0x82, 0x82,
    0x82,

    /* U+0E29 "ษ" */
    0x82, 0x82, 0x82, 0x92, 0x9f, 0x82, 0x82, 0xc6,
    0x7c,

    /* U+0E2A "ส" */
    0x1, 0x7e, 0x86, 0x2, 0x2, 0x7e, 0xc2, 0x82,
    0x82, 0x72,

    /* U+0E2B "ห" */
    0x85, 0x12, 0x45, 0xec, 0x70, 0x60, 0xc1, 0x82,

    /* U+0E2C "ฬ" */
    0x0, 0x40, 0x10, 0x3b, 0x2, 0x4c, 0xd3, 0x34,
    0xc9, 0x7a, 0x52, 0x94, 0xa7, 0x38, 0x86,

    /* U+0E2D "อ" */
    0xf9, 0x8, 0x8, 0x1e, 0x30, 0x60, 0xe2, 0x78,

    /* U+0E2E "ฮ" */
    0x3, 0xfe, 0x10, 0x10, 0x3c, 0x60, 0xc1, 0xc4,
    0xf0,

    /* U+0E2F "ฯ" */
    0x66, 0x18, 0x61, 0x7c, 0x10, 0x41, 0x4,

    /* U+0E30 "ะ" */
    0x8f, 0x0, 0x8, 0xf0,

    /* U+0E31 "ั" */
    0x83, 0xf0,

    /* U+0E32 "า" */
    0xf4, 0x42, 0x10, 0x84, 0x21, 0x8,

    /* U+0E33 "ำ" */
    0xe0, 0x50, 0x38, 0x0, 0x0, 0xf0, 0x4, 0x2,
    0x1, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8,

    /* U+0E34 "ิ" */
    0xfe,

    /* U+0E35 "ี" */
    0x4, 0x1f, 0xc0,

    /* U+0E36 "ึ" */
    0xe, 0x17, 0xf8,

    /* U+0E37 "ื" */
    0x14, 0x5f, 0xc0,

    /* U+0E38 "ุ" */
    0xd4,

    /* U+0E39 "ู" */
    0xe, 0x52, 0xf0,

    /* U+0E3A "ฺ" */
    0xf0,

    /* U+0E3F "฿" */
    0x11, 0xfa, 0x5c, 0x99, 0x32, 0xfe, 0x4b, 0x93,
    0x26, 0x5f, 0xe1, 0x0,

    /* U+0E40 "เ" */
    0xaa, 0xaa, 0xc0,

    /* U+0E41 "แ" */
    0x85, 0xa, 0x14, 0x28, 0x50, 0xa1, 0x42, 0xe6,

    /* U+0E42 "โ" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x38,

    /* U+0E43 "ใ" */
    0xe1, 0x12, 0x44, 0x44, 0x44, 0x44, 0x70,

    /* U+0E44 "ไ" */
    0xf9, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0x43,
    0x80,

    /* U+0E45 "ๅ" */
    0xf4, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42, 0x10,

    /* U+0E46 "ๆ" */
    0x6f, 0x26, 0xc, 0x16, 0x20, 0x40, 0x81, 0x2,
    0x4, 0x8, 0x10,

    /* U+0E47 "็" */
    0x7a, 0xa, 0xd6,

    /* U+0E48 "่" */
    0xe0,

    /* U+0E49 "้" */
    0xe0, 0x8f, 0xc0,

    /* U+0E4A "๊" */
    0xfa, 0x2d, 0xc0,

    /* U+0E4B "๋" */
    0x5d, 0x0,

    /* U+0E4C "์" */
    0xf8,

    /* U+0E4D "ํ" */
    0xf7, 0x80,

    /* U+0E4E "๎" */
    0x3c, 0x80,

    /* U+0E4F "๏" */
    0x38, 0x8a, 0xd, 0xdb, 0xb7, 0x51, 0x1c,

    /* U+0E50 "๐" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+200B "​" */
    0x0,

    /* U+200C "‌" */
    0xff, 0xf0,

    /* U+200D "‍" */
    0x15, 0x74, 0x92, 0x49, 0x24, 0x80,

    /* U+2010 "‐" */
    0xf0,

    /* U+2013 "–" */
    0xfe,

    /* U+2014 "—" */
    0xff, 0xfe,

    /* U+2018 "‘" */
    0x69, 0x60,

    /* U+2019 "’" */
    0x69, 0x40,

    /* U+201A "‚" */
    0x6d, 0x20,

    /* U+201C "“" */
    0x49, 0x24, 0xb6,

    /* U+201D "”" */
    0x69, 0x25, 0xa4,

    /* U+201E "„" */
    0x6d, 0xa4, 0x92,

    /* U+2022 "•" */
    0x6f, 0xf6,

    /* U+2026 "…" */
    0xcc, 0xf3, 0x30,

    /* U+2039 "‹" */
    0x22, 0x4c, 0x46, 0x30,

    /* U+203A "›" */
    0x44, 0x23, 0x26, 0xc0
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
    {.bitmap_index = 902, .adv_w = 146, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 904, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 140, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 159, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 155, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 232, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 233, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1023, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1035, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1047, .adv_w = 140, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1060, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 231, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 233, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1097, .adv_w = 158, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 163, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1114, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 156, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 155, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1154, .adv_w = 155, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 166, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 167, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1227, .adv_w = 152, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1235, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1242, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1253, .adv_w = 146, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1261, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1273, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1289, .adv_w = 164, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1308, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 147, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1339, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 133, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1359, .adv_w = 0, .box_w = 6, .box_h = 2, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1361, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 104, .box_w = 9, .box_h = 13, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1383, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1386, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1389, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1392, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = -4},
    {.bitmap_index = 1393, .adv_w = 0, .box_w = 5, .box_h = 4, .ofs_x = -6, .ofs_y = -4},
    {.bitmap_index = 1396, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1397, .adv_w = 150, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1409, .adv_w = 76, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1420, .adv_w = 79, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1430, .adv_w = 74, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 78, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1446, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1454, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1465, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 1468, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -3, .ofs_y = 10},
    {.bitmap_index = 1469, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -6, .ofs_y = 10},
    {.bitmap_index = 1472, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 1475, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1477, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 1478, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 1480, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 1482, .adv_w = 152, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 146, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 0, .box_w = 1, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1499, .adv_w = 0, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1505, .adv_w = 82, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1506, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1507, .adv_w = 256, .box_w = 15, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1509, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1511, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1513, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1515, .adv_w = 92, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1518, .adv_w = 92, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1521, .adv_w = 106, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1524, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1526, .adv_w = 202, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1533, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x1, 0x2, 0x5, 0x8, 0x9, 0xd, 0xe,
    0xf, 0x11, 0x12, 0x13, 0x17, 0x1b, 0x2e, 0x2f
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3585, .range_length = 58, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 18, .glyph_id_start = 154,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8203, .range_length = 48, .glyph_id_start = 172,
        .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 16, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .cmap_num = 4,
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
const lv_font_t ui_font_Thai = {
#else
lv_font_t ui_font_Thai = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_THAI*/

