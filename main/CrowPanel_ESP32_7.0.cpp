#include <lvgl.h>
#include <demos/lv_demos.h>
#include <lvgl.h>
// UI
#include "ui.h"
#include <cstring>
// UART
#include "esp_system.h"
#include "esp_log.h"
#include "driver/uart.h"
#include "string.h"
#include "driver/gpio.h"

// FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>

#include <SPI.h>
SPIClass &spi = SPI;

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t disp_draw_buf[800 * 480 / 10];
// static lv_color_t disp_draw_buf;
static lv_disp_drv_t disp_drv;

#include <Ticker.h> //Call the ticker. H Library
Ticker ticker1;
#include <Arduino_GFX_Library.h>
#define TFT_BL 2
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin

/* More dev device declaration: https://github.com/moononournation/Arduino_GFX/wiki/Dev-Device-Declaration */

static const int RX_BUF_SIZE = 1024;

// UART
// https://controllerstech.com/how-to-use-uart-in-esp32-esp-idf/
// #define TXD_PIN (GPIO_NUM_19)
// #define RXD_PIN (GPIO_NUM_20)

#define TXD_PIN (GPIO_NUM_43) // UART pins according to the screen
#define RXD_PIN (GPIO_NUM_44)

void uart_init(void)
{
    const uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_APB,
    };
    // We won't use a buffer for sending data.
    uart_driver_install(UART_NUM_0, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART_NUM_0, &uart_config);
    uart_set_pin(UART_NUM_0, TXD_PIN, RXD_PIN, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

class LGFX : public lgfx::LGFX_Device
{
public:
    lgfx::Bus_RGB _bus_instance;
    lgfx::Panel_RGB _panel_instance;

    LGFX(void)
    {

        {
            auto cfg = _bus_instance.config();
            cfg.panel = &_panel_instance;

            cfg.pin_d0 = GPIO_NUM_15; // B0
            cfg.pin_d1 = GPIO_NUM_7;  // B1
            cfg.pin_d2 = GPIO_NUM_6;  // B2
            cfg.pin_d3 = GPIO_NUM_5;  // B3
            cfg.pin_d4 = GPIO_NUM_4;  // B4

            cfg.pin_d5 = GPIO_NUM_9;  // G0
            cfg.pin_d6 = GPIO_NUM_46; // G1
            cfg.pin_d7 = GPIO_NUM_3;  // G2
            cfg.pin_d8 = GPIO_NUM_8;  // G3
            cfg.pin_d9 = GPIO_NUM_16; // G4
            cfg.pin_d10 = GPIO_NUM_1; // G5

            cfg.pin_d11 = GPIO_NUM_14; // R0
            cfg.pin_d12 = GPIO_NUM_21; // R1
            cfg.pin_d13 = GPIO_NUM_47; // R2
            cfg.pin_d14 = GPIO_NUM_48; // R3
            cfg.pin_d15 = GPIO_NUM_45; // R4

            cfg.pin_henable = GPIO_NUM_41;
            cfg.pin_vsync = GPIO_NUM_40;
            cfg.pin_hsync = GPIO_NUM_39;
            cfg.pin_pclk = GPIO_NUM_0;
            cfg.freq_write = 15000000;

            cfg.hsync_polarity = 0;
            cfg.hsync_front_porch = 40;
            cfg.hsync_pulse_width = 48;
            cfg.hsync_back_porch = 40;

            cfg.vsync_polarity = 0;
            cfg.vsync_front_porch = 1;
            cfg.vsync_pulse_width = 31;
            cfg.vsync_back_porch = 13;

            cfg.pclk_active_neg = 1;
            cfg.de_idle_high = 0;
            cfg.pclk_idle_high = 0;

            _bus_instance.config(cfg);
        }
        {
            auto cfg = _panel_instance.config();
            cfg.memory_width = 800;
            cfg.memory_height = 480;
            cfg.panel_width = 800;
            cfg.panel_height = 480;
            cfg.offset_x = 0;
            cfg.offset_y = 0;
            _panel_instance.config(cfg);
        }
        _panel_instance.setBus(&_bus_instance);
        setPanel(&_panel_instance);
    }
};

LGFX lcd;

#include "touch.h"

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{

    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    // lcd.fillScreen(TFT_WHITE);
#if (LV_COLOR_16_SWAP != 0)
    lcd.pushImageDMA(area->x1, area->y1, w, h, (lgfx::rgb565_t *)&color_p->full);
#else
    lcd.pushImageDMA(area->x1, area->y1, w, h, (lgfx::rgb565_t *)&color_p->full); //
#endif

    lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    if (touch_has_signal())
    {
        if (touch_touched())
        {
            data->state = LV_INDEV_STATE_PR;

            /*Set the coordinates*/
            // data->point.x = touch_last_x;
            // data->point.y = touch_last_y;
            // Jank? fix but hey it works
            data->point.x = touch_last_y * 480 / 800;
            data->point.y = (480 - touch_last_x) * 800 / 480;
            Serial.print("Data x :");
            Serial.println(touch_last_x);

            Serial.print("Data y :");
            Serial.println(touch_last_y);
        }
        else if (touch_released())
        {
            data->state = LV_INDEV_STATE_REL;
        }
    }
    else
    {
        data->state = LV_INDEV_STATE_REL;
    }
}

uint16_t calData[5] = {190, 3679, 382, 3335, 0};
// UART tasks and functions
int sendData(const char *logName, const char *data)
{
    const int len = strlen(data);
    const int txBytes = uart_write_bytes(UART_NUM_0, data, len);
    ESP_LOGI(logName, "Wrote %d bytes", txBytes);
    return txBytes;
}

static void tx_task(void *arg)
{
    static const char *TX_TASK_TAG = "TX_TASK";
    esp_log_level_set(TX_TASK_TAG, ESP_LOG_INFO);
    while (1)
    {
        // sendData(TX_TASK_TAG, "Hello world");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
// lv_label_set_recolor(ui_RightTranscribeText, "true");
static void rx_task(void *arg)
{
    static const char *RX_TASK_TAG = "RX_TASK";
    esp_log_level_set(RX_TASK_TAG, ESP_LOG_INFO);
    uint8_t *data = (uint8_t *)malloc(RX_BUF_SIZE + 1);
    lv_obj_t *prev_label_L = lv_label_create(ui_LeftPanel);
    lv_obj_t *prev_label_R = lv_label_create(ui_RightPanel);
    lv_label_set_text(prev_label_L, "");
    lv_label_set_text(prev_label_R, "");
    bool rightScreen = true; // Determines left/right panel and which language. dummy true
    bool rightBubble = true; // Determines bubble align and colour. dummy true
    bool nextIsNew = true;   // Determines if previous text was confirmed or not. True by default for first interaction
    int prevSpeakerL = 2;    // 0 is left, 1 is right, 2 is no one
    int prevSpeakerR = 2;    // 0 is left, 1 is right, 2 is no one
    bool firstSpeechL = true;
    bool firstSpeechR = true;
    char *prevStringL = (char *)malloc(1024);
    char *prevStringR = (char *)malloc(1024);
    strcpy(prevStringL, "");
    strcpy(prevStringR, "");
    // if prevSpeaker is diff from bit 0, new stuff. have a separate prevSpeaker for left and right side of screen
    // first will be unconfirmed. have a string stored for the speaker's transcription and translation. update the label with that string + the gray code and unconfirmed
    // if confirmed, append to the confirmed string and update
    // so store 4 strings speaker0/1 transcription/translation

    while (1)
    {
        const int rxHeaderBytes = uart_read_bytes(UART_NUM_0, data, 2, 1000 / portTICK_RATE_MS);
        if (rxHeaderBytes <= 0)
            continue;
        rightScreen = (data[0] & 1) != 0;
        rightBubble = (data[0] & 2) == 0;
        int length = (int)data[1];

        const int rxBytes = uart_read_bytes(UART_NUM_0, data + 1, length, 1000 / portTICK_RATE_MS);

        data[rxBytes + 1] = '\0';
        // if ((data[0] & (1 << 0)) && (data[0] & (1 << 1))) // if right speaker and translate
        // {
        //     rightScreen = false;
        //     rightBubble = false;
        // }
        // else if (!(data[0] & (1 << 0)) && (data[0] & (1 << 1))) // if left speaker and translate
        // {
        //     rightScreen = true;
        //     rightBubble = false;
        // }
        // else if ((data[0] & (1 << 0)) && !(data[0] & (1 << 1))) // if right speaker and transcribe
        // {
        //     rightScreen = true;
        //     rightBubble = true;
        // }
        // else if (!(data[0] & (1 << 0)) && !(data[0] & (1 << 1))) // if left speaker and transcribe
        // {
        //     rightScreen = false;
        //     rightBubble = true;
        // }

        if (rightScreen)
        {
            if (((data[0] & (1 << 1)) == prevSpeakerR) && (firstSpeechR == false)) // if right speaker is speaking, and the right speaker was previously speaking on the screen
            {
                if (data[0] & (1 << 2)) // if confirmed,
                {
                    strcat(prevStringR, (char *)(data + 1));
                    lv_label_set_text(prev_label_R, prevStringR);
                    lv_obj_scroll_to_view(prev_label_R, LV_ANIM_ON);
                }
                else
                {
                    char *tempStr = (char *)malloc(1024);
                    strcpy(tempStr, prevStringR);
                    strcat(tempStr, " #818181 ");
                    strcat(tempStr, (char *)(data + 1));
                    lv_label_set_text(prev_label_R, tempStr); // but instead of data, it's prevStringR + gray code + data
                    lv_obj_scroll_to_view(prev_label_R, LV_ANIM_ON);
                    free(tempStr);
                }
            }
            else
            {
                lv_obj_t *ui_NewRow = lv_obj_create(ui_RightPanel);
                lv_obj_set_width(ui_NewRow, lv_pct(100));
                lv_obj_set_height(ui_NewRow, LV_SIZE_CONTENT); /// 1
                lv_obj_set_align(ui_NewRow, LV_ALIGN_CENTER);
                lv_obj_clear_flag(ui_NewRow, LV_OBJ_FLAG_SCROLLABLE); /// Flags

                lv_obj_set_style_pad_left(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_right(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_top(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_bottom(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                strcpy(prevStringR, "");

                if (rightBubble)
                {
                    lv_obj_t *ui_NewBubble = lv_obj_create(ui_NewRow);
                    lv_obj_set_width(ui_NewBubble, lv_pct(80));
                    lv_obj_set_height(ui_NewBubble, LV_SIZE_CONTENT); /// 1
                    lv_obj_set_align(ui_NewBubble, LV_ALIGN_RIGHT_MID);
                    lv_obj_clear_flag(ui_NewBubble, LV_OBJ_FLAG_SCROLLABLE); /// Flags
                    lv_obj_set_style_bg_color(ui_NewBubble, lv_color_hex(0x64BDDD), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(ui_NewBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                    lv_obj_set_style_pad_left(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

                    lv_obj_t *ui_NewText = lv_label_create(ui_NewBubble);
                    lv_obj_set_width(ui_NewText, lv_pct(100));
                    lv_obj_set_height(ui_NewText, LV_SIZE_CONTENT); /// 100
                    lv_obj_set_align(ui_NewText, LV_ALIGN_RIGHT_MID);
                    lv_label_set_text(ui_NewText, (char *)(data + 1));
                    lv_label_set_recolor(ui_NewText, "true");
                    lv_obj_set_style_text_align(ui_NewText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(ui_NewText, &ui_font_Chinese, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    prev_label_R = ui_NewText;
                    lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    if (data[0] & (1 << 2)) // if confirmed,
                    {
                        strcat(prevStringR, (char *)(data + 1));
                        lv_label_set_text(prev_label_R, prevStringR);
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    }
                    else
                    {
                        char *tempStr = (char *)malloc(1024);
                        strcpy(tempStr, prevStringR);
                        strcat(tempStr, " #818181 ");
                        strcat(tempStr, (char *)(data + 1));
                        lv_label_set_text(prev_label_R, tempStr); // but instead of data, it's prevStringR + gray code + data
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                        free(tempStr);
                    }
                }
                else
                {
                    lv_obj_t *ui_NewBubble = lv_obj_create(ui_NewRow);
                    lv_obj_set_width(ui_NewBubble, lv_pct(80));
                    lv_obj_set_height(ui_NewBubble, LV_SIZE_CONTENT); /// 1
                    lv_obj_set_align(ui_NewBubble, LV_ALIGN_LEFT_MID);
                    lv_obj_clear_flag(ui_NewBubble, LV_OBJ_FLAG_SCROLLABLE); /// Flags
                    lv_obj_set_style_bg_color(ui_NewBubble, lv_color_hex(0xBACDD5), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(ui_NewBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                    lv_obj_set_style_pad_left(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

                    lv_obj_t *ui_NewText = lv_label_create(ui_NewBubble);
                    lv_obj_set_width(ui_NewText, lv_pct(100));
                    lv_obj_set_height(ui_NewText, LV_SIZE_CONTENT); /// 100
                    lv_obj_set_align(ui_NewText, LV_ALIGN_RIGHT_MID);
                    lv_label_set_recolor(ui_NewText, "true");
                    lv_label_set_text(ui_NewText, (char *)(data + 1));
                    lv_obj_set_style_text_align(ui_NewText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(ui_NewText, &ui_font_Chinese, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    prev_label_R = ui_NewText;
                    lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    if (data[0] & (1 << 2)) // if confirmed,
                    {
                        strcat(prevStringR, (char *)(data + 1));
                        lv_label_set_text(prev_label_R, prevStringR);
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    }
                    else
                    {
                        char *tempStr = (char *)malloc(1024);
                        strcpy(tempStr, prevStringR);
                        strcat(tempStr, " #818181 ");
                        strcat(tempStr, (char *)(data + 1));
                        lv_label_set_text(prev_label_R, tempStr); // but instead of data, it's prevStringR + gray code + data
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                        free(tempStr);
                    }
                }
            }
            prevSpeakerR = data[0] & (1 << 1);
            firstSpeechR = false;
        }
        else
        {
            if (((data[0] & (1 << 1)) == prevSpeakerL) && firstSpeechL == false) // if right speaker is speaking, and the right speaker was previously speaking on the screen
            {
                if (data[0] & (1 << 2)) // if confirmed,
                {
                    strcat(prevStringL, (char *)(data + 1));
                    lv_label_set_text(prev_label_L, prevStringL);
                    lv_obj_scroll_to_view(prev_label_L, LV_ANIM_ON);
                }
                else
                {
                    char *tempStr = (char *)malloc(1024);
                    strcpy(tempStr, prevStringL);
                    strcat(tempStr, " #818181 ");
                    strcat(tempStr, (char *)(data + 1));
                    lv_label_set_text(prev_label_L, tempStr); // but instead of data, it's prevStringR + gray code + data
                    lv_obj_scroll_to_view(prev_label_L, LV_ANIM_ON);
                    free(tempStr);
                }
            }
            else
            {
                lv_obj_t *ui_NewRow = lv_obj_create(ui_LeftPanel);
                lv_obj_set_width(ui_NewRow, lv_pct(100));
                lv_obj_set_height(ui_NewRow, LV_SIZE_CONTENT); /// 1
                lv_obj_set_align(ui_NewRow, LV_ALIGN_CENTER);
                lv_obj_clear_flag(ui_NewRow, LV_OBJ_FLAG_SCROLLABLE); /// Flags

                lv_obj_set_style_pad_left(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_right(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_top(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_bottom(ui_NewRow, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

                strcpy(prevStringL, "");
                if (rightBubble)
                {
                    lv_obj_t *ui_NewBubble = lv_obj_create(ui_NewRow);
                    lv_obj_set_width(ui_NewBubble, lv_pct(80));
                    lv_obj_set_height(ui_NewBubble, LV_SIZE_CONTENT); /// 1
                    lv_obj_set_align(ui_NewBubble, LV_ALIGN_RIGHT_MID);
                    lv_obj_clear_flag(ui_NewBubble, LV_OBJ_FLAG_SCROLLABLE); /// Flags
                    lv_obj_set_style_bg_color(ui_NewBubble, lv_color_hex(0x64BDDD), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(ui_NewBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                    lv_obj_set_style_pad_left(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

                    lv_obj_t *ui_NewText = lv_label_create(ui_NewBubble);
                    lv_obj_set_width(ui_NewText, lv_pct(100));
                    lv_obj_set_height(ui_NewText, LV_SIZE_CONTENT); /// 100
                    lv_obj_set_align(ui_NewText, LV_ALIGN_RIGHT_MID);
                    lv_label_set_recolor(ui_NewText, "true");
                    lv_label_set_text(ui_NewText, (char *)(data + 1));
                    lv_obj_set_style_text_align(ui_NewText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    prev_label_L = ui_NewText;
                    lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    if (data[0] & (1 << 2)) // if confirmed,
                    {
                        strcat(prevStringL, (char *)(data + 1));
                        lv_label_set_text(prev_label_L, prevStringL);
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    }
                    else
                    {
                        char *tempStr = (char *)malloc(1024);
                        strcpy(tempStr, prevStringL);
                        strcat(tempStr, " #818181 ");
                        strcat(tempStr, (char *)(data + 1));
                        lv_label_set_text(prev_label_L, tempStr); // but instead of data, it's prevStringR + gray code + data
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                        free(tempStr);
                    }
                }
                else
                {
                    lv_obj_t *ui_NewBubble = lv_obj_create(ui_NewRow);
                    lv_obj_set_width(ui_NewBubble, lv_pct(80));
                    lv_obj_set_height(ui_NewBubble, LV_SIZE_CONTENT); /// 1
                    lv_obj_set_align(ui_NewBubble, LV_ALIGN_LEFT_MID);
                    lv_obj_clear_flag(ui_NewBubble, LV_OBJ_FLAG_SCROLLABLE); /// Flags
                    lv_obj_set_style_bg_color(ui_NewBubble, lv_color_hex(0xBACDD5), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(ui_NewBubble, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                    lv_obj_set_style_pad_left(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewBubble, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

                    lv_obj_t *ui_NewText = lv_label_create(ui_NewBubble);
                    lv_obj_set_width(ui_NewText, lv_pct(100));
                    lv_obj_set_height(ui_NewText, LV_SIZE_CONTENT); /// 100
                    lv_obj_set_align(ui_NewText, LV_ALIGN_RIGHT_MID);
                    lv_label_set_recolor(ui_NewText, "true");
                    lv_label_set_text(ui_NewText, (char *)(data + 1));
                    lv_obj_set_style_text_align(ui_NewText, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(ui_NewText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    prev_label_L = ui_NewText;
                    lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    if (data[0] & (1 << 2)) // if confirmed,
                    {
                        strcat(prevStringL, (char *)(data + 1));
                        lv_label_set_text(prev_label_L, prevStringL);
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                    }
                    else
                    {
                        char *tempStr = (char *)malloc(1024);
                        strcpy(tempStr, prevStringL);
                        strcat(tempStr, " #818181 ");
                        strcat(tempStr, (char *)(data + 1));
                        lv_label_set_text(prev_label_L, tempStr); // but instead of data, it's prevStringR + gray code + data
                        lv_obj_scroll_to_view(ui_NewRow, LV_ANIM_ON);
                        free(tempStr);
                    }
                }
            }
            prevSpeakerL = data[0] & (1 << 1);
            firstSpeechL = true;
        }
    }
    free(data);
}

// FreeRTOS stuff
void lvgl_task(void *pvParameter);

void lvgl_task(void *pvParameter)
{
    const TickType_t xDelay = pdMS_TO_TICKS(20); // 20 ms delay for ~50 FPS

    while (1)
    {
        lv_task_handler(); // Handle LVGL tasks (UI updates, animations)
        lv_timer_handler();
        vTaskDelay(xDelay); // Wait for the next iteration
    }
}

extern "C" void app_main()
{
    // put your setup code here, to run once:
    Serial.begin(9600); // Init Display
    // Wire.begin(22, 21);
    // dht20.begin();
    lcd.begin();
    lcd.setRotation(1);
    lcd.fillScreen(BLACK);
    lcd.setTextSize(2);
    delay(200);

    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);

    pinMode(38, OUTPUT);
    digitalWrite(38, HIGH);

    uart_init(); // uart init

    lv_init();
    touch_init();
    screenWidth = lcd.width();
    screenHeight = lcd.height();

    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 10);
    //  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, 480 * 272 / 10);
    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the (dummy) input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    lcd.fillScreen(BLACK);
    ui_init(); // 主UI界面
    Serial.println("Setup done");

    xTaskCreate(lvgl_task, "LVGL Task", 4096, NULL, 2, NULL);
    xTaskCreate(rx_task, "uart_rx_task", 1024 * 2, NULL, configMAX_PRIORITIES, NULL);
    xTaskCreate(tx_task, "uart_tx_task", 1024 * 2, NULL, configMAX_PRIORITIES - 1, NULL);
}
