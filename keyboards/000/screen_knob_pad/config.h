/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x0005
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    NEXINS
// #define PRODUCT         ScreenKnobPad


//Boot loader 按键
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0



/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { B1, A4 }
#define MATRIX_COL_PINS { A5, B7, B6, B5, B4 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* Because we use vibl, this has to be defined here instead of under keymaps/vial/config.h */
#define VIAL_KEYBOARD_UID {0x4B, 0xA9, 0xCE, 0xFA, 0xE7, 0xAA, 0x01, 0x9E}


//定义键层数量
#define DYNAMIC_KEYMAP_LAYER_COUNT 16

//强制开启全键无冲
#define FORCE_NKRO

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN A6
// The number of LEDs connected
#define DRIVER_LED_TOTAL 7
#define RGB_DISABLE_WHEN_USB_SUSPENDED true

//编码器引脚定义
#define ENCODERS_PAD_A { A7, A15 }
#define ENCODERS_PAD_B { B0, B3 }

//翻转编码器正反转识别
#define ENCODER_DIRECTION_FLIP

//定义编码器分辨率
#define ENCODER_RESOLUTIONS { 4, 4 }


//定义RGB矩阵中心
#define RGB_MATRIX_CENTER { 0, 32 }

//灯效必备组件
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

//灯效选择

//无按键响应
//#define ENABLE_RGB_MATRIX_ALPHAS_MODS
//#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
//#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
//#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
//#define ENABLE_RGB_MATRIX_DUAL_BEACON
//#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
//#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
//#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
//#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL

//有按键响应
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
//#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
//#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

//定义按键动态灯效延迟时间
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50



//OLED
/*
#ifdef OLED_DRIVER_ENABLE
//#define OLED_BRIGHTNESS 128
#define OLED_DISPLAY_ADDRESS 0x78
//#define OLED_TIMEOUT 60000
//OLED淡出动画 需要配合 TIMEOUT 使用
//#define OLED_FADE_OUT  //启用淡出动画
//#define OLED_FADE_OUT_INTERVAL 5  //淡出动画时间，越大越慢
//OLED屏幕不活动时滚动屏幕
//#define OLED_SCROLL_TIMEOUT 10000 //毫秒，0为禁用
//#define OLED_IC OLED_IC_SH1106    // OLED_IC_SSD1306 //如果使用的是 SH1106 OLED 控制器，设置为 OLED_IC_SH1106
//#define OLED_UPDATE_INTERVAL 0  //设置更新 OLED 显示的时间间隔，单位为毫秒
#define OLED_DISPLAY_128X64     //更改显示屏分辨率
#endif
*/

/*
#ifdef OLED_ENABLE
#    define OLED_DISPLAY_ADDRESS 0x78
#    define OLED_BRIGHTNESS 255
#    define OLED_UPDATE_INTERVAL 100
#    define OLED_TIMEOUT 0
#    define OLED_DISPLAY_128X64
//#    define OLED_DISPLAY_CUSTOM
#    define OLED_DISPLAY_WIDTH 128
#    define OLED_DISPLAY_HEIGHT 64
#    define OLED_MATRIX_SIZE 1024
#    define OLED_BLOCK_TYPE uint16_t
#    define OLED_BLOCK_COUNT 16
#    define OLED_BLOCK_SIZE 64
#    define OLED_COM_PINS COM_PINS_SEQ //COM_PINS_SEQ , COM_PINS_ALT , COM_PINS_SEQ_LR , COM_PINS_ALT_LR
//#    define OLED_SOURCE_MAP { 0, ... N }
//#    define OLED_TARGET_MAP { 24, ... N }
#endif
*/



//使用I2C2的时候要定义
#define I2C_DRIVER I2CD2
#define I2C1_OPMODE OPMODE_I2C
#define I2C1_CLOCK_SPEED 400000  //100000  //400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2   //STD_DUTY_CYCLE     //FAST_DUTY_CYCLE_2
#define I2C1_SCL_PIN B10
#define I2C1_SDA_PIN B11



/*使用SH1106时开启*/
#define OLED_IC OLED_IC_SH1106
#define OLED_COLUMN_OFFSET 2

#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 300000
#define OLED_SCROLL_TIMEOUT 0  //使用SH1106时不支持滚动和翻转,设置为0
#define OLED_FONT_HEIGHT 8
#define OLED_FONT_WIDTH 6
// #define OLED_FONT_H "neil_font.c"
