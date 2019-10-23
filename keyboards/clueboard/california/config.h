#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC1ED
#define PRODUCT_ID      0x23B0
#define DEVICE_VER      0x0001
#define MANUFACTURER    Clueboard
#define PRODUCT         California Macropad
#define DESCRIPTION     A 10-key macropad shaped like california

/* key matrix pins */
#define MATRIX_ROWS 6
#define MATRIX_COLS 2
#define DIRECT_PINS { \
    { A10, A9 }, \
    { A0, B8 }, \
    { NO_PIN, B11 }, \
    { B9, A8 }, \
    { A7, B1 }, \
    { NO_PIN, B2 } \
}
#define UNUSED_PINS

/* Backlight configuration
 */
#define BACKLIGHT_LEVELS 10
#define LED_MATRIX_PINS { A2, B5, A1, B4, B12, B10, A15, A6, B0, B3 }
#define LED_DRIVER_LED_COUNT 10
