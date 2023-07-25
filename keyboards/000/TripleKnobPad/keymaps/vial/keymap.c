/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
              KC_1, KC_2, KC_2,
        KC_3, KC_4, KC_2, KC_1, KC_1
    ),

    [1] = LAYOUT(
              KC_A, KC_B, KC_2,
        KC_C, KC_D, KC_2, KC_1, KC_1
    ),

    [2] = LAYOUT(
                 KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
                 KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};


// RGB矩阵定义
led_config_t g_led_config = {{// Key Matrix to LED Index
                              {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
                              {0, 1, 2, 3, 4}},

                             {
                                 // LED Index to Physical Position
                                 {0, 0},  {56, 0},  {112, 0}, {168, 0}, {224, 0}
                             },

                             {// LED Index to Flag
                              1, 1, 1, 1, 1}};



void rgb_matrix_indicators_user(void) {
    if (IS_LAYER_ON(1)) { // 如果切换到了层1
        rgb_matrix_set_color(0, RGB_WHITE);
    }

    if (IS_LAYER_ON(2)) { // 如果切换到了层2
        rgb_matrix_set_color(1, RGB_WHITE);
    }

    if (IS_LAYER_ON(3)) {
        rgb_matrix_set_color(2, RGB_WHITE);
    }

    if (IS_LAYER_ON(4)) {
        rgb_matrix_set_color(3, RGB_WHITE);
    }

    if (IS_LAYER_ON(5)) {
        rgb_matrix_set_color(4, RGB_WHITE);
    }





    if (IS_LAYER_ON(6)) {
        rgb_matrix_set_color(0, RGB_GOLD);
    }

    if (IS_LAYER_ON(7)) {
        rgb_matrix_set_color(1, RGB_GOLD);
    }

    if (IS_LAYER_ON(8)) {
        rgb_matrix_set_color(2, RGB_GOLD);
    }

    if (IS_LAYER_ON(9)) {
        rgb_matrix_set_color(3, RGB_GOLD);
    }

    if (IS_LAYER_ON(10)) {
        rgb_matrix_set_color(4, RGB_GOLD);
    }





    if (IS_LAYER_ON(11)) {
        rgb_matrix_set_color(0, RGB_PURPLE);
    }

    if (IS_LAYER_ON(12)) {
        rgb_matrix_set_color(1, RGB_PURPLE);
    }

    if (IS_LAYER_ON(13)) {
        rgb_matrix_set_color(2, RGB_PURPLE);
    }

    if (IS_LAYER_ON(14)) {
        rgb_matrix_set_color(3, RGB_PURPLE);
    }

    if (IS_LAYER_ON(15)) {
        rgb_matrix_set_color(4, RGB_PURPLE);
    }
}
