/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_2, KC_3,
        KC_3, KC_4, KC_2
    ),

    [1] = LAYOUT(
        KC_A, KC_B, KC_2, KC_C,
        KC_C, KC_D, KC_2
    ),

    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    )
};


// RGB矩阵定义
led_config_t g_led_config = {{// Key Matrix to LED Index
                              {0, 1, 2, NO_LED},
                              {3, 4, 5, NO_LED}},

                             {
                                 // LED Index to Physical Position
                                 {0, 0},  {112, 0},  {224, 0},
                                 {0, 64}, {112, 64}, {224, 64}

                             },

                             {// LED Index to Flag
                              1, 1, 1, 1, 1, 1}};



void rgb_matrix_indicators_user(void) {
    if (IS_LAYER_ON(1)) { // 如果切换到了层1
        rgb_matrix_set_color(3, RGB_WHITE);
    }

    if (IS_LAYER_ON(2)) { // 如果切换到了层2
        rgb_matrix_set_color(4, RGB_WHITE);
    }

    if (IS_LAYER_ON(3)) {
        rgb_matrix_set_color(5, RGB_WHITE);
    }

    if (IS_LAYER_ON(4)) {
        rgb_matrix_set_color(0, RGB_WHITE);
    }

    if (IS_LAYER_ON(5)) {
        rgb_matrix_set_color(1, RGB_WHITE);
    }

    if (IS_LAYER_ON(6)) {
        rgb_matrix_set_color(2, RGB_WHITE);
    }





    if (IS_LAYER_ON(7)) {
        rgb_matrix_set_color(3, RGB_GOLD);
    }

    if (IS_LAYER_ON(8)) {
        rgb_matrix_set_color(4, RGB_GOLD);
    }

    if (IS_LAYER_ON(9)) {
        rgb_matrix_set_color(5, RGB_GOLD);
    }

    if (IS_LAYER_ON(10)) {
        rgb_matrix_set_color(0, RGB_GOLD);
    }

    if (IS_LAYER_ON(11)) {
        rgb_matrix_set_color(1, RGB_GOLD);
    }

    if (IS_LAYER_ON(12)) {
        rgb_matrix_set_color(2, RGB_GOLD);
    }




    if (IS_LAYER_ON(13)) {
        rgb_matrix_set_color(3, RGB_PURPLE);
    }

    if (IS_LAYER_ON(14)) {
        rgb_matrix_set_color(4, RGB_PURPLE);
    }

    if (IS_LAYER_ON(15)) {
        rgb_matrix_set_color(5, RGB_PURPLE);
    }
}


//OLED

/*
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00};

    oled_write_P(qmk_logo, false);
}
*/

/*

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("ADJ\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}
#endif

*/
