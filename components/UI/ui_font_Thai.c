/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets/NotoSansThai-Regular.ttf -o C:/Users/Jotlane/Downloads/esprojs/UI fr this time/assets\ui_font_Thai.c --format lvgl -r 0x0E00-0x0E50 -r 0x2000-0x206F -r 0x0020-0x002F --no-compress --no-prefilter
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
    {.bitmap_index = 109, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 140, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 159, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 155, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 232, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 233, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 228, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 240, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 252, .adv_w = 140, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 265, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 231, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 233, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 158, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 163, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 156, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 155, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 155, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 166, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 167, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 152, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 458, .adv_w = 146, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 478, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 164, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 150, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 147, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 133, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 87, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 564, .adv_w = 0, .box_w = 6, .box_h = 2, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 566, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 104, .box_w = 9, .box_h = 13, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 588, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 591, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 594, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 597, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = -4},
    {.bitmap_index = 598, .adv_w = 0, .box_w = 5, .box_h = 4, .ofs_x = -6, .ofs_y = -4},
    {.bitmap_index = 601, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 602, .adv_w = 150, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 614, .adv_w = 76, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 79, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 74, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 78, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 659, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 670, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 673, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = -3, .ofs_y = 10},
    {.bitmap_index = 674, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -6, .ofs_y = 10},
    {.bitmap_index = 677, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 680, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 682, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 683, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 685, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 687, .adv_w = 152, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 146, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 0, .box_w = 1, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 704, .adv_w = 0, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 710, .adv_w = 82, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 711, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 712, .adv_w = 256, .box_w = 15, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 714, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 716, .adv_w = 45, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 718, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 720, .adv_w = 92, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 723, .adv_w = 92, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 726, .adv_w = 106, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 729, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 731, .adv_w = 202, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 738, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1}
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
        .range_start = 32, .range_length = 16, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3585, .range_length = 58, .glyph_id_start = 17,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 18, .glyph_id_start = 75,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8203, .range_length = 48, .glyph_id_start = 93,
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

