#include <lvgl.h>
#include <demos/lv_demos.h>
#include <DHT20.h>
#include <lvgl.h>
//UI
#include "ui.h"

//UART
#include "esp_system.h"
#include "esp_log.h"
#include "driver/uart.h"
#include "string.h"
#include "driver/gpio.h"

//FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>

#include <SPI.h>
SPIClass &spi = SPI;

int led;
int activate_test;
DHT20 dht20;

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t disp_draw_buf[800 * 480 / 10];
//static lv_color_t disp_draw_buf;
static lv_disp_drv_t disp_drv;

#include <Ticker.h> //Call the ticker. H Library
Ticker ticker1;
#include <Arduino_GFX_Library.h>
#define TFT_BL 2
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin

/* More dev device declaration: https://github.com/moononournation/Arduino_GFX/wiki/Dev-Device-Declaration */

static const int RX_BUF_SIZE = 1024;

//UART
//https://controllerstech.com/how-to-use-uart-in-esp32-esp-idf/
#define TXD_PIN (GPIO_NUM_43)//UART pins according to the screen
#define RXD_PIN (GPIO_NUM_44)

void uart_init(void) {
    const uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_APB,
    };
    // We won't use a buffer for sending data.
    uart_driver_install(UART_NUM_1, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART_NUM_1, &uart_config);
    uart_set_pin(UART_NUM_1, TXD_PIN, RXD_PIN, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

class LGFX : public lgfx::LGFX_Device
{
public:

  lgfx::Bus_RGB     _bus_instance;
  lgfx::Panel_RGB   _panel_instance;

  LGFX(void)
  {


    {
      auto cfg = _bus_instance.config();
      cfg.panel = &_panel_instance;
      
      cfg.pin_d0  = GPIO_NUM_15; // B0
      cfg.pin_d1  = GPIO_NUM_7;  // B1
      cfg.pin_d2  = GPIO_NUM_6;  // B2
      cfg.pin_d3  = GPIO_NUM_5;  // B3
      cfg.pin_d4  = GPIO_NUM_4;  // B4
      
      cfg.pin_d5  = GPIO_NUM_9;  // G0
      cfg.pin_d6  = GPIO_NUM_46; // G1
      cfg.pin_d7  = GPIO_NUM_3;  // G2
      cfg.pin_d8  = GPIO_NUM_8;  // G3
      cfg.pin_d9  = GPIO_NUM_16; // G4
      cfg.pin_d10 = GPIO_NUM_1;  // G5
      
      cfg.pin_d11 = GPIO_NUM_14; // R0
      cfg.pin_d12 = GPIO_NUM_21; // R1
      cfg.pin_d13 = GPIO_NUM_47; // R2
      cfg.pin_d14 = GPIO_NUM_48; // R3
      cfg.pin_d15 = GPIO_NUM_45; // R4

      cfg.pin_henable = GPIO_NUM_41;
      cfg.pin_vsync   = GPIO_NUM_40;
      cfg.pin_hsync   = GPIO_NUM_39;
      cfg.pin_pclk    = GPIO_NUM_0;
      cfg.freq_write  = 15000000;

      cfg.hsync_polarity    = 0;
      cfg.hsync_front_porch = 40;
      cfg.hsync_pulse_width = 48;
      cfg.hsync_back_porch  = 40;
      
      cfg.vsync_polarity    = 0;
      cfg.vsync_front_porch = 1;
      cfg.vsync_pulse_width = 31;
      cfg.vsync_back_porch  = 13;

      cfg.pclk_active_neg   = 1;
      cfg.de_idle_high      = 0;
      cfg.pclk_idle_high    = 0;

      _bus_instance.config(cfg);
    }
            {
      auto cfg = _panel_instance.config();
      cfg.memory_width  = 800;
      cfg.memory_height = 480;
      cfg.panel_width  = 800;
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

/* Display flushing */
/***void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
    lcd.draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
    lcd.draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

    lv_disp_flush_ready(disp);
}
***/
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{

  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  

  //lcd.fillScreen(TFT_WHITE);
#if (LV_COLOR_16_SWAP != 0)
 lcd.pushImageDMA(area->x1, area->y1, w, h,(lgfx::rgb565_t*)&color_p->full);
#else
  lcd.pushImageDMA(area->x1, area->y1, w, h,(lgfx::rgb565_t*)&color_p->full);//
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
            data->point.x = touch_last_x;
            data->point.y = touch_last_y;
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

//UART tasks and functions
int sendData(const char* logName, const char* data)
{
    const int len = strlen(data);
    const int txBytes = uart_write_bytes(UART_NUM_1, data, len);
    ESP_LOGI(logName, "Wrote %d bytes", txBytes);
    return txBytes;
}

static void tx_task(void *arg)
{
    static const char *TX_TASK_TAG = "TX_TASK";
    esp_log_level_set(TX_TASK_TAG, ESP_LOG_INFO);
    while (1) {
        sendData(TX_TASK_TAG, "Hello world");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}

static void rx_task(void *arg)
{
    static const char *RX_TASK_TAG = "RX_TASK";
    esp_log_level_set(RX_TASK_TAG, ESP_LOG_INFO);
    uint8_t* data = (uint8_t*) malloc(RX_BUF_SIZE+1);
    lv_obj_t * prev_label_l = lv_label_create(ui_Panel1);
    lv_obj_t * prev_label_c = lv_label_create(ui_Panel2);
    while (1) {
        const int rxBytes = uart_read_bytes(UART_NUM_1, data, RX_BUF_SIZE, 1000 / portTICK_RATE_MS);
        if (rxBytes > 0) {
            data[rxBytes] = '\0';//needed to get this thing to be interpretable as a string idk weird c stuff
            //if data[0] is ^, check data[1]
            //if it's 'l', it's a translation, print to this panel instead of that panel
            // vice versa if it's c
            //for both of these, edit the previously added label
            //if it's n, it's a new label. Then follow same logic as above.
                            lv_obj_t * label = lv_label_create(ui_Panel2);
                            lv_label_set_text(label, (char*)(data));
                            lv_obj_scroll_to_view(label, LV_ANIM_ON);
                            prev_label_l = label;
            if ((char)data[0] == '^')
            {
                if ((char)data[1] == 'l')
                {
                    if ((char)data[2] == '^')
                    {
                        if ((char)data[3] == 'n')
                        {
                            lv_obj_t * label = lv_label_create(ui_Panel1);
                            lv_label_set_text(label, (char*)(data + 4));
                            lv_obj_scroll_to_view(label, LV_ANIM_ON);
                            prev_label_l = label;
                        }
                    }
                    else
                    {
                        lv_label_set_text(prev_label_l, (char*)(data + 2));
                        lv_obj_scroll_to_view(prev_label_l, LV_ANIM_ON);
                    }
                }
                else if ((char)data[1] == 'c')
                {
                    if ((char)data[2] == '^')
                    {
                        if ((char)data[3] == 'n')
                        {
                            lv_obj_t * label = lv_label_create(ui_Panel2);
                            lv_label_set_text(label, (char*)(data + 4));
                            lv_obj_scroll_to_view(label, LV_ANIM_ON);
                            prev_label_c = label;
                        }
                    }
                    else
                    {
                        lv_label_set_text(prev_label_c, (char*)(data + 2));
                        lv_obj_scroll_to_view(prev_label_c, LV_ANIM_ON);
                    }
                }
            }
        }
    }
    free(data);
}

//FreeRTOS stuff
void lvgl_task(void *pvParameter);
void other_task(void *pvParameter);

void lvgl_task(void *pvParameter) {
    const TickType_t xDelay = pdMS_TO_TICKS(20); // 20 ms delay for ~50 FPS

    while (1) {
        lv_task_handler(); // Handle LVGL tasks (UI updates, animations)
        lv_timer_handler();
        vTaskDelay(xDelay); // Wait for the next iteration
    }
}

void other_task(void *pvParameter) {
    const TickType_t xDelay = pdMS_TO_TICKS(100); //every .1s
    int yes = 0;
    while (1) {
        Serial.print(led);
        char DHT_buffer[6];
        //int a = (int)dht20.getTemperature();
        //int b = (int)dht20.getHumidity();
        int a = 10;
        snprintf(DHT_buffer, sizeof(DHT_buffer), "%d", a);
        lv_label_set_text(ui_Label1, DHT_buffer);
        //snprintf(DHT_buffer, sizeof(DHT_buffer), "%d", b);
        lv_label_set_text(ui_Label2, DHT_buffer);
        if(led == 1)
            digitalWrite(38, HIGH);
        if(led == 0)
            digitalWrite(38, LOW);
        yes = !yes;
        Serial.println("yes: ");
        Serial.print(yes);
        snprintf(DHT_buffer, sizeof(DHT_buffer), "%d", yes);
        lv_label_set_text(ui_Label2, DHT_buffer);
        if(activate_test)
        {
          activate_test = 0;
          lv_obj_t * label = lv_label_create(ui_Panel1);
          lv_label_set_text(label, "Inside Container!");
          lv_obj_scroll_to_view(label, LV_ANIM_ON);
        }
        vTaskDelay(xDelay); // Wait for the next iteration
    }
}

void uart_task(void *pvParameter) {
    const TickType_t xDelay = pdMS_TO_TICKS(100); //every .1s
    int yes = 0;
    while (1) {
        //uart stuff
        vTaskDelay(xDelay); // Wait for the next iteration
    }
}

extern "C" void app_main()
{
    // put your setup code here, to run once:
    Serial.begin(9600); // Init Display
    Wire.begin(22, 21);
    dht20.begin();
    lcd.begin();
    lcd.fillScreen(BLACK);
    lcd.setTextSize(2);
    delay(200);

    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);

    pinMode(38, OUTPUT);
    digitalWrite(38, HIGH);

    uart_init();//uart init

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
    ui_init(); //主UI界面
    Serial.println("Setup done");

    xTaskCreate(lvgl_task, "LVGL Task", 4096, NULL, 2, NULL);
    xTaskCreate(other_task, "Other Task", 4096, NULL, 1, NULL);
    xTaskCreate(rx_task, "uart_rx_task", 1024*2, NULL, configMAX_PRIORITIES, NULL);
    xTaskCreate(tx_task, "uart_tx_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
}
