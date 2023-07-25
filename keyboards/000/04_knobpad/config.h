/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    NEXINS
#define PRODUCT         DualKnobPad

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { A7, A1 }
#define MATRIX_COL_PINS { A5, A3, A4 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0xF1, 0x86, 0xBC, 0xC2, 0x93, 0xAB, 0x92, 0x53}


//定义键层数量
#define DYNAMIC_KEYMAP_LAYER_COUNT 16




//编码器引脚定义
#define ENCODERS_PAD_A { B0, A2 }
#define ENCODERS_PAD_B { A6, A0 }

//翻转编码器正反转识别
#define ENCODER_DIRECTION_FLIP

//定义编码器分辨率
#define ENCODER_RESOLUTIONS { 4, 4 }

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B1
// The number of LEDs connected
#define DRIVER_LED_TOTAL 4
#define RGB_DISABLE_WHEN_USB_SUSPENDED true



//灯效必备组件
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

//灯效选择

//无按键响应
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
//有按键响应
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH



//定义按键动态灯效延迟时间
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50
