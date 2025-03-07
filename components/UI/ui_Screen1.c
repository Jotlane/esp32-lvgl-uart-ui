// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_LeftPanel, 448);
    lv_obj_set_height(ui_LeftPanel, 376);
    lv_obj_set_x(ui_LeftPanel, 0);
    lv_obj_set_y(ui_LeftPanel, 210);
    lv_obj_set_align(ui_LeftPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_LeftPanel, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_LeftPanel, LV_DIR_VER);
    lv_obj_set_style_bg_color(ui_LeftPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_LeftPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_LeftPanel, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftPanel, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    /* ui_LeftTranscribe2 = lv_obj_create(ui_LeftPanel);
    lv_obj_set_width(ui_LeftTranscribe2, lv_pct(100));
    lv_obj_set_height(ui_LeftTranscribe2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranscribe2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LeftTranscribe2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LeftTranscribe2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftTranscribe2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_LeftTranscribe2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_LeftTranscribe2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_LeftTranscribe2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribe2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribe2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribe2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranscribeBubble2 = lv_obj_create(ui_LeftTranscribe2);
    lv_obj_set_width(ui_LeftTranscribeBubble2, lv_pct(80));
    lv_obj_set_height(ui_LeftTranscribeBubble2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranscribeBubble2, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_LeftTranscribeBubble2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LeftTranscribeBubble2, lv_color_hex(0x278EFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftTranscribeBubble2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_LeftTranscribeBubble2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_LeftTranscribeBubble2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribeBubble2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribeBubble2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribeBubble2, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranscribeText2 = lv_label_create(ui_LeftTranscribeBubble2);
    lv_obj_set_width(ui_LeftTranscribeText2, lv_pct(100));
    lv_obj_set_height(ui_LeftTranscribeText2, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_LeftTranscribeText2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LeftTranscribeText2,
                      "书、杂志等中区别于图片的）正文，文字材料, （移动电话或传呼机发送的）短消息");
    lv_obj_set_style_text_color(ui_LeftTranscribeText2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LeftTranscribeText2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LeftTranscribeText2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LeftTranscribeText2, &ui_font_Chinese, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LeftTranscribeText2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribeText2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribeText2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribeText2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftTranslate = lv_obj_create(ui_LeftPanel);
    lv_obj_set_width(ui_LeftTranslate, lv_pct(100));
    lv_obj_set_height(ui_LeftTranslate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranslate, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LeftTranslate, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LeftTranslate, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftTranslate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_LeftTranslate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_LeftTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranslateBubble1 = lv_obj_create(ui_LeftTranslate);
    lv_obj_set_width(ui_LeftTranslateBubble1, lv_pct(80));
    lv_obj_set_height(ui_LeftTranslateBubble1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranslateBubble1, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_LeftTranslateBubble1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LeftTranslateBubble1, lv_color_hex(0x898989), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftTranslateBubble1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_LeftTranslateBubble1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_LeftTranslateBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranslateBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranslateBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranslateBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranslateText1 = lv_label_create(ui_LeftTranslateBubble1);
    lv_obj_set_width(ui_LeftTranslateText1, lv_pct(100));
    lv_obj_set_height(ui_LeftTranslateText1, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_LeftTranslateText1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LeftTranslateText1,
                      "ไปไหน มาไม่ แน่ ใจไม่ ค่อยสบายจำไม่ได้dewe");
    lv_obj_set_style_text_color(ui_LeftTranslateText1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LeftTranslateText1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LeftTranslateText1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LeftTranslateText1, &ui_font_Thai, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LeftTranslateText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranslateText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranslateText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranslateText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftTranscribe1 = lv_obj_create(ui_LeftPanel);
    lv_obj_set_width(ui_LeftTranscribe1, lv_pct(100));
    lv_obj_set_height(ui_LeftTranscribe1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranscribe1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LeftTranscribe1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_set_style_pad_left(ui_LeftTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranscribeBubble1 = lv_obj_create(ui_LeftTranscribe1);
    lv_obj_set_width(ui_LeftTranscribeBubble1, lv_pct(80));
    lv_obj_set_height(ui_LeftTranscribeBubble1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LeftTranscribeBubble1, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_LeftTranscribeBubble1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LeftTranscribeBubble1, lv_color_hex(0x64BDDD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftTranscribeBubble1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_LeftTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_LeftTranscribeText1 = lv_label_create(ui_LeftTranscribeBubble1);
    lv_obj_set_width(ui_LeftTranscribeText1, lv_pct(100));
    lv_obj_set_height(ui_LeftTranscribeText1, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_LeftTranscribeText1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LeftTranscribeText1,
                      "Text dsad asd asd sa asd as dsad  qwwq we rwqr we rwer ewr wq rewq ewq rwq rwq rqwe rwqe r");
    lv_obj_set_style_text_align(ui_LeftTranscribeText1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LeftTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LeftTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LeftTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LeftTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT); */

    ui_RightPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_RightPanel, 448);
    lv_obj_set_height(ui_RightPanel, 376);
    lv_obj_set_x(ui_RightPanel, 450);
    lv_obj_set_y(ui_RightPanel, 165);
    lv_obj_set_align(ui_RightPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_RightPanel, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_RightPanel, LV_DIR_VER);
    lv_obj_set_style_bg_color(ui_RightPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_RightPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_RightPanel, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightPanel, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    lv_obj_set_style_transform_angle(ui_RightPanel, 1800, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* ui_RightTranscribe = lv_obj_create(ui_RightPanel);
    lv_obj_set_width(ui_RightTranscribe, lv_pct(100));
    lv_obj_set_height(ui_RightTranscribe, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RightTranscribe, 375);
    lv_obj_set_y(ui_RightTranscribe, 232);
    lv_obj_set_align(ui_RightTranscribe, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightTranscribe, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_RightTranscribe, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RightTranscribe, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_x(ui_RightTranscribe, 195, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_y(ui_RightTranscribe, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranscribe, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribe, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribe, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribe, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranscribeBubble = lv_obj_create(ui_RightTranscribe);
    lv_obj_set_width(ui_RightTranscribeBubble, lv_pct(80));
    lv_obj_set_height(ui_RightTranscribeBubble, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RightTranscribeBubble, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_RightTranscribeBubble, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RightTranscribeBubble, lv_color_hex(0x64BDDD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightTranscribeBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranscribeBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribeBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribeBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribeBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranscribeText = lv_label_create(ui_RightTranscribeBubble);
    lv_obj_set_width(ui_RightTranscribeText, lv_pct(100));
    lv_obj_set_height(ui_RightTranscribeText, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_RightTranscribeText, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_RightTranscribeText,
                      "Text dsad asd asd sa asd as dsad  qwwq we rwqr we rwer ewr wq rewq #818181 red ewq rwq rwq rqwe rwqe r trh ");
    lv_label_set_recolor(ui_RightTranscribeText, "true");
    lv_obj_set_style_text_align(ui_RightTranscribeText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RightTranscribeText, &ui_font_English, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_RightTranscribeText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribeText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribeText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribeText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightTranslate = lv_obj_create(ui_RightPanel);
    lv_obj_set_width(ui_RightTranslate, lv_pct(100));
    lv_obj_set_height(ui_RightTranslate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RightTranslate, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightTranslate, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_RightTranslate, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RightTranslate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_x(ui_RightTranslate, 195, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_y(ui_RightTranslate, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranslate, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranslateBubble = lv_obj_create(ui_RightTranslate);
    lv_obj_set_width(ui_RightTranslateBubble, lv_pct(80));
    lv_obj_set_height(ui_RightTranslateBubble, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RightTranslateBubble, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_RightTranslateBubble, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RightTranslateBubble, lv_color_hex(0x78868B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightTranslateBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranslateBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranslateBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranslateBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranslateBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranslateText = lv_label_create(ui_RightTranslateBubble);
    lv_obj_set_width(ui_RightTranslateText, lv_pct(100));
    lv_obj_set_height(ui_RightTranslateText, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_RightTranslateText, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_RightTranslateText,
                      "Text dsad asd asd sa asd as dsad  qwwq we rwqr we rwer ewr wq rewq ewq rwq rwq rqwe rwqe r");
    lv_obj_set_style_text_align(ui_RightTranslateText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_RightTranslateText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranslateText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranslateText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranslateText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightTranscribe1 = lv_obj_create(ui_RightPanel);
    lv_obj_set_width(ui_RightTranscribe1, lv_pct(100));
    lv_obj_set_height(ui_RightTranscribe1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RightTranscribe1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightTranscribe1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_RightTranscribe1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RightTranscribe1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_x(ui_RightTranscribe1, 195, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_transform_pivot_y(ui_RightTranscribe1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribe1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranscribeBubble1 = lv_obj_create(ui_RightTranscribe1);
    lv_obj_set_width(ui_RightTranscribeBubble1, lv_pct(80));
    lv_obj_set_height(ui_RightTranscribeBubble1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RightTranscribeBubble1, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_RightTranscribeBubble1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RightTranscribeBubble1, lv_color_hex(0x64BDDD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightTranscribeBubble1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_RightTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribeBubble1, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_RightTranscribeText1 = lv_label_create(ui_RightTranscribeBubble1);
    lv_obj_set_width(ui_RightTranscribeText1, lv_pct(100));
    lv_obj_set_height(ui_RightTranscribeText1, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_RightTranscribeText1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_RightTranscribeText1,
                      "Text dsad asd asd sa asd as dsad  qwwq we rwqr we rwer ewr wq rewq ewq rwq rwq rqwe rwqe r");
    lv_obj_set_style_text_align(ui_RightTranscribeText1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_RightTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_RightTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_RightTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_RightTranscribeText1, 0, LV_PART_MAIN | LV_STATE_DEFAULT); */

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 480);
    lv_obj_set_height(ui_Panel1, 30);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_speaker_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_zoom(ui_Image1, 90);
}
