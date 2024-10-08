// Arduino-TFT_eSPI board-template main routine. There's a TFT_eSPI create+flush driver already in LVGL-9.1 but we create our own here for more control (like e.g. 16-bit color swap).

#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>
#include "lv_conf.h"
#include <VescUart.h>
VescUart UART;
/*Don't forget to set Sketchbook location in File/Preferences to the path of your UI project (the parent foder of this INO file)*/

/*Change to your screen resolution*/
static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 240;

enum
{
    SCREENBUFFER_SIZE_PIXELS = screenWidth * screenHeight / 10
};
static lv_color_t buf[SCREENBUFFER_SIZE_PIXELS];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *pixelmap)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    if (LV_COLOR_16_SWAP)
    {
        size_t len = lv_area_get_size(area);
        lv_draw_sw_rgb565_swap(pixelmap, len);
    }

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors((uint16_t *)pixelmap, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_t *indev_driver, lv_indev_data_t *data)
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = false; // tft.getTouch( &touchX, &touchY, 600 );

    if (!touched)
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print("Data x ");
        Serial.println(touchX);

        Serial.print("Data y ");
        Serial.println(touchY);
    }
}

/*Set tick routine needed for LVGL internal timings*/
static uint32_t my_tick_get_cb(void) { return millis(); }

char *floatTOText(float number)
{
    static char buffer[10];          // Buffer statique pour conserver la mémoire après la fin de la fonction
    sprintf(buffer, "%.1f", number); // Limite à 1 décimale
    return buffer;                   // Le buffer reste valide après la fin de la fonction
}

char *longTOText(long number)
{
    static char buffer[10];         // Utilisation d'un buffer statique suffisamment grand
    sprintf(buffer, "%ld", number); // Conversion de 'long' en chaîne, avec le format %ld
    return buffer;
}

void setup()
{
    Serial.begin(115200); /* prepare for possible serial debug */
    Serial1.begin(115200, SERIAL_8N1, 27, 22);
    UART.setSerialPort(&Serial1);
    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println(LVGL_Arduino);
    Serial.println("I am LVGL_Arduino");

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    tft.begin();        /* TFT init */
    tft.setRotation(2); /* Landscape orientation, flipped */

    static lv_disp_t *disp;
    disp = lv_display_create(screenWidth, screenHeight);
    lv_display_set_buffers(disp, buf, NULL, SCREENBUFFER_SIZE_PIXELS * sizeof(lv_color_t), LV_DISPLAY_RENDER_MODE_PARTIAL);
    lv_display_set_flush_cb(disp, my_disp_flush);

    static lv_indev_t *indev;
    indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
    lv_indev_set_read_cb(indev, my_touchpad_read);

    lv_tick_set_cb(my_tick_get_cb);

    ui_init();

    Serial.println("Setup done");
}

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
    // delay(5000);
    if (UART.getVescValues())
    {
        const float MS_TO_KMH = 3.6;
        const float WHEEL_DIAMETER = 0.508;                                                    // Diamètre de la roue en mètres (ajuste cette valeur selon ton matériel)
        const float GEAR_RATIO = 0.352;                                                        // Rapport d'engrenage (s'il y en a un)
        const int MOTOR_POLES = 14;                                                            // Nombre de pôles moteurs (ajuste selon ton moteur)
        const float wheel_circumference = WHEEL_DIAMETER * 3.14159;                            // Circonférence de la roue en mètres
        float speedMs = (UART.data.rpm / MOTOR_POLES) * wheel_circumference * GEAR_RATIO / 60; // Vitesse en m/s
        float speedKmh = speedMs * MS_TO_KMH;                                                  // Conversion en km/h

        // float speedMs = (UART.data.rpm) * wheel_circumference) / (60 * GEAR_RATIO); // Conversion RPM en m/s
        // float speedKmh = speedMs * MS_TO_KMH;

        Serial.println(UART.data.rpm);
        Serial.println(UART.data.inpVoltage);
        Serial.println(UART.data.ampHours);
        // UART.setDebugPort(&Serial);
        // UART.printVescValues();

        lv_label_set_text(ui_SpeedValue, floatTOText(speedKmh));
        // lv_label_set_text(ui_SpeedValue, floatTOText(UART.data.rpm));

        lv_label_set_text(ui_CurrentMeterValue, floatTOText(UART.data.avgInputCurrent));
        lv_label_set_text(ui_VoltMeterValue, floatTOText(UART.data.inpVoltage));
    }
    else
    {
        Serial.println("Failed to get data!");
    }
}
