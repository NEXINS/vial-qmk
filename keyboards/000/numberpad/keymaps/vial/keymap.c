/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TG(1), KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7, KC_P8,   KC_P9,
        KC_P4, KC_P5,   KC_P6,   KC_PPLS,
        KC_P1, KC_P2,   KC_P3,
               KC_P0,   KC_PDOT, KC_PENT
    ),

    [1] = LAYOUT(
        TG(1),   KC_BRID, KC_BRIU, KC_VOLD,
        RGB_MOD, RGB_TOG, RGB_SPI,
        RGB_HUI, RGB_SAI, RGB_VAI, KC_VOLU,
        KC_MPRV, KC_MNXT, KC_MSEL,
                 KC_MPLY, KC_LSFT, KC_MUTE
    ),

    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS
    )
};


led_config_t g_led_config = {{// Key Matrix to LED Index
                              {3, 2, 1, 0},
                              {6, 5, 4, NO_LED},
                              {10, 9, 8, 7},
                              {13, 12, 11, NO_LED},
                              {NO_LED, 16, 15, 14}},

                             {// LED Index to Physical Position
                              {0, 0},   {74, 0},   {150, 0},  {224, 0},
                              {0, 16},  {74, 16},  {150, 16},
                              {0, 32},  {74, 32},  {150, 32}, {224, 24},
                              {0, 48},  {74, 48},  {150, 48},
                                        {37, 64},  {150, 64}, {224, 56}
                             },

                             {// LED Index to Flag
                              1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};


void rgb_matrix_indicators_user(void) {

    /*
    if (IS_HOST_LED_ON(USB_LED_NUM_LOCK)) {
        rgb_matrix_set_color(0, RGB_WHITE); // LED Index, R, G, B
    }
    

    if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
        rgb_matrix_set_color(0, RGB_WHITE); // LED Index, R, G, B
    }

    
    if (IS_HOST_LED_ON(USB_LED_SCROLL_LOCK)) {
        rgb_matrix_set_color(1, RGB_WHITE); // LED Index, R, G, B
    }
    */


    if (IS_LAYER_ON(1)) { // 如果切换到了层1
        rgb_matrix_set_color(13, RGB_WHITE);
    }

    if (IS_LAYER_ON(2)) { // 如果切换到了层2
        rgb_matrix_set_color(12, RGB_WHITE);
    }

    if (IS_LAYER_ON(3)) {
        rgb_matrix_set_color(11, RGB_WHITE);
    }

    if (IS_LAYER_ON(4)) {
        rgb_matrix_set_color(10, RGB_WHITE);
    }

    if (IS_LAYER_ON(5)) {
        rgb_matrix_set_color(9, RGB_WHITE);
    }

    if (IS_LAYER_ON(6)) {
        rgb_matrix_set_color(8, RGB_WHITE);
    }

    if (IS_LAYER_ON(7)) {
        rgb_matrix_set_color(6, RGB_WHITE);
    }

    if (IS_LAYER_ON(8)) {
        rgb_matrix_set_color(5, RGB_WHITE);
    }

    if (IS_LAYER_ON(9)) {
        rgb_matrix_set_color(4, RGB_WHITE);
    }




    if (IS_LAYER_ON(10)) {
        rgb_matrix_set_color(13, RGB_RED);
    }

    if (IS_LAYER_ON(11)) {
        rgb_matrix_set_color(12, RGB_RED);
    }

    if (IS_LAYER_ON(12)) {
        rgb_matrix_set_color(11, RGB_RED);
    }

    if (IS_LAYER_ON(13)) {
        rgb_matrix_set_color(10, RGB_RED);
    }

    if (IS_LAYER_ON(14)) {
        rgb_matrix_set_color(9, RGB_RED);
    }

    if (IS_LAYER_ON(15)) {
        rgb_matrix_set_color(8, RGB_RED);
    }
}
