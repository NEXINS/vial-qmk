/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H
//#include "picture.h"
#include "kun.h"
//#include "animation.h"
//#include "render_anime2.c"
//#include "render_anime3.c"
//#include "screen_knob_pad.h"
// static uint32_t oled_timer          = 0;      // OLED 计时器
// bool            master_oled_cleared = false;  // OLED CLEAR 标记
// #define OLED_SHOW_STATE_TIMEOUT 20000         // 无操作10秒后激活OLED动画

// enum layer_number {
//     _QWERTY = 0,
//     _FN,
//     _ADJ,
//     _ADJUST,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TO(1), KC_PSLS,        KC_PAST, KC_PMNS,
        KC_P7, KC_P8,   KC_P9, KC_PAST, KC_PMNS
    ),

    [1] = LAYOUT(
        TO(2), KC_PSLS,        KC_PAST, KC_PMNS,
        KC_P7, KC_P8,   KC_P9, KC_PAST, KC_PMNS
    ),

    [2] = LAYOUT(
        TO(3), KC_PSLS,        KC_PAST, KC_PMNS,
        KC_P7, KC_P8,   KC_P9, KC_PAST, KC_PMNS
    ),

    [3] = LAYOUT(
        TO(0), KC_PSLS,        KC_PAST, KC_PMNS,
        KC_P7, KC_P8,   KC_P9, KC_PAST, KC_PMNS
    )
};

/*
// #ifdef OLED_ENABLE
// bool oled_task_user(void) {
//     // Host Keyboard Layer Status
//     oled_write_P(PSTR("Layer: "), false);

//     switch (get_highest_layer(layer_state)) {
//         case _QWERTY:
//             oled_write_P(PSTR("Default\n"), false);
//             break;
//         case _FN:
//             oled_write_P(PSTR("FN\n"), false);
//             break;
//         case _ADJ:
//             oled_write_P(PSTR("ADJ\n"), false);
//             break;
//         default:
//             // Or use the write_ln shortcut over adding '\n' to the end of your string
//             oled_write_ln_P(PSTR("Undefined"), false);
//     }

//     // Host Keyboard LED Status
//     led_t led_state = host_keyboard_led_state();
//     oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
//     oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
//     oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

//     return false;
// }
// #endif
*/


/*
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
//const char *read_layer_state(void);
//const char *read_logo(void);
//void        set_keylog(uint16_t keycode, keyrecord_t *record);
//const char *read_keylog(void);
//const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

//bool oled_task_user(void) {
    //if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        //oled_write_ln(read_layer_state(), false);
        //oled_write_ln(read_keylog(), false);
        //oled_write_ln(read_keylogs(), false);
        // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
        // oled_write_ln(read_host_led_state(), false);
        // oled_write_ln(read_timelog(), false);
    //} else {
        //oled_write(read_logo(), false);
    //}
    //return false;
//}
//#endif // OLED_ENABLE

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    //if (record->event.pressed) {
//#ifdef OLED_ENABLE
        //set_keylog(keycode, record);
//#endif
        // set_timelog();
    //}
    //return true;
//}
*/


led_config_t g_led_config = {{// Key Matrix to LED Index
                              {0, NO_LED, NO_LED, NO_LED, 6},
                              {1, 2, 3, 4, 5}},

                             {// LED Index to Physical Position
                              {0, 0}, {0, 64}, {56, 64}, {112, 64}, {168, 64}, {224, 64},{224, 0}
                             },

                             {// LED Index to Flag
                              1, 1, 1, 1, 1, 1, 1}};


// void rgb_matrix_indicators_user(void) {

//     /*
//     if (IS_HOST_LED_ON(USB_LED_NUM_LOCK)) {
//         rgb_matrix_set_color(0, RGB_CORAL); // LED Index, R, G, B
//     }


//     if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
//         rgb_matrix_set_color(6, RGB_CORAL); // LED Index, R, G, B
//     }


//     if (IS_HOST_LED_ON(USB_LED_SCROLL_LOCK)) {
//         rgb_matrix_set_color(1, RGB_WHITE); // LED Index, R, G, B
//     }
//     */


//     if (IS_LAYER_ON(1)) { // 如果切换到了层1
//         rgb_matrix_set_color(1, RGB_ORANGE);
//     }

//     if (IS_LAYER_ON(2)) { // 如果切换到了层2
//         rgb_matrix_set_color(2, RGB_ORANGE);
//     }

//     if (IS_LAYER_ON(3)) {
//         rgb_matrix_set_color(3, RGB_ORANGE);
//     }

//     if (IS_LAYER_ON(4)) {
//         rgb_matrix_set_color(4, RGB_ORANGE);
//     }

//     if (IS_LAYER_ON(5)) {
//         rgb_matrix_set_color(5, RGB_ORANGE);
//     }





//     if (IS_LAYER_ON(6)) {
//         rgb_matrix_set_color(1, RGB_PINK);
//     }

//     if (IS_LAYER_ON(7)) {
//         rgb_matrix_set_color(2, RGB_PINK);
//     }

//     if (IS_LAYER_ON(8)) {
//         rgb_matrix_set_color(3, RGB_PINK);
//     }

//     if (IS_LAYER_ON(9)) {
//         rgb_matrix_set_color(4, RGB_PINK);
//     }

//     if (IS_LAYER_ON(10)) {
//         rgb_matrix_set_color(5, RGB_PINK);
//     }





//     if (IS_LAYER_ON(11)) {
//         rgb_matrix_set_color(1, RGB_PURPLE);
//     }

//     if (IS_LAYER_ON(12)) {
//         rgb_matrix_set_color(2, RGB_PURPLE);
//     }

//     if (IS_LAYER_ON(13)) {
//         rgb_matrix_set_color(3, RGB_PURPLE);
//     }

//     if (IS_LAYER_ON(14)) {
//         rgb_matrix_set_color(4, RGB_PURPLE);
//     }

//     if (IS_LAYER_ON(15)) {
//         rgb_matrix_set_color(5, RGB_PURPLE);
//     }
// }


//OLED

#ifdef OLED_ENABLE
//图片要使用垂直扫描
/*
static uint32_t oled_timer          = 0;      // OLED 计时器
bool            master_oled_cleared = false;  // OLED CLEAR 标记
#define OLED_SHOW_STATE_TIMEOUT 20000         // 无操作10秒后激活OLED动画

static const char PROGMEM oled_header[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0};

static const char PROGMEM oled_layer_keylog_separator[] = {0xc8, 0xff, 0};

static const char PROGMEM oled_layer_line_end[] = {0xd4, 0};

static const char PROGMEM oled_layer_keylog_bottom[] = {0xc1, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc3, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc2, 0};

static const char PROGMEM oled_line_start[] = {0xc0, 0};

static const char PROGMEM oled_mods_bottom[] = {0xc1, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc2, 0};

static const char PROGMEM oled_footer[] = {0xc4, 0xc5, 0xc5, 0xc9, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xca, 0xcb, 0xc5, 0xc5, 0xc6, 0};
*/

// oled_write_P(host_keyboard_led_state().caps_lock ? PSTR("-CAPS-") : PSTR("------"), false);




bool oled_task_user(void) {

    oled_write_P(PSTR("\n "), false);
    oled_write_P(PSTR(" \n"), false);


    oled_write_P(PSTR("  LAYER_ON: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("DEFAULT\n"), false);
            // kun_anime();
            break;
        case 1:
            oled_write_P(PSTR("LAYER_2\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("LAYER_3\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("LAYER_4\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("LAYER_5\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("LAYER_6\n"), false);
            break;
        case 6:
            oled_write_P(PSTR("LAYER_7\n"), false);
            break;
        case 7:
            oled_write_P(PSTR("LAYER_8\n"), false);
            break;
        case 8:
            oled_write_P(PSTR("LAYER_9\n"), false);
            break;
        case 9:
            oled_write_P(PSTR("LAYER_10\n"), false);
            break;
        case 10:
            oled_write_P(PSTR("LAYER_11\n"), false);
            break;
        case 11:
            oled_write_P(PSTR("LAYER_12\n"), false);
            break;
        case 12:
            oled_write_P(PSTR("LAYER_13\n"), false);
            break;
        case 13:
            oled_write_P(PSTR("LAYER_14\n"), false);
            break;
        case 14:
            oled_write_P(PSTR("LAYER_15\n"), false);
            break;
        case 15:
            oled_write_P(PSTR("LAYER_16\n"), false);
            break;
        // default:
        //     // Or use the write_ln shortcut over adding '\n' to the end of your string
        //     oled_write_ln_P(PSTR("--------\n"), false);
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            kun_anime();
    }
    oled_write_P(PSTR("\n     "), false);
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM  ") : PSTR("---  "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP  ") : PSTR("---  "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR  ") : PSTR("---  "), false);




    // oled_write_P(PSTR(" "), false);

    // //CAPSLOCK状态:
    // oled_write_P(host_keyboard_led_state().caps_lock ? PSTR("-CAPS-") : PSTR("------"), false);

    // oled_write_P(PSTR("\n"), false);

    // //  if (timer_elapsed32(oled_timer) > OLED_SHOW_STATE_TIMEOUT && timer_elapsed32(oled_timer) < OLED_TIMEOUT) {
    // //     // 无操作10秒后，OLED_TIMEOUT(60秒默认)前播放动画
    // //     if (!master_oled_cleared) {
    // //         // Clear OLED一次确保动画正确渲染
    // //         oled_clear();
    // //         master_oled_cleared = true;
    // //     }
    // //     kun_anime();
    // //     // return;
    // // } else if (timer_elapsed32(oled_timer) > OLED_TIMEOUT) {
    // //     // 无操作60秒后关闭OLED
    // //     oled_off();
    // //     // return;
    // // } else {
    // //     // 重置Clear OLED标记
    // //     if (master_oled_cleared) {
    // //         oled_on();
    // //         oled_clear();
    // //         master_oled_cleared = false;
    // //     }
    // // }

    // switch (get_highest_layer(layer_state)) {
    //     case 0:
    //         oled_write_P(PSTR("Layer_on:--Main-"), false);
    //         // kun_anime();
    //         break;
    //     case 1:
    //         oled_write_P(PSTR("Layer_on:Layer-1"), false);
    //         break;
    //     case 2:
    //         oled_write_P(PSTR("Layer_on:Layer-2"), false);
    //         break;
    //     case 3:
    //         oled_write_P(PSTR("Layer_on:Layer-3"), false);
    //         break;
	// 	default:
	// 		oled_write_P(PSTR("Layer_on:-------"), false);
	// 		break;

        // case 0:
        //     // kun_anime();
        //     break;
        // case 1:
        //     oled_write_raw_P(rgb_set,sizeof(rgb_set));
        //     break;
        // case 2:
        //     oled_write_raw_P(layer_set,sizeof(layer_set));
        //     break;
        // case 3:
        //     oled_write_raw_P(nexins,sizeof(nexins));
        //     break;
		// default:
		// 	oled_write_raw_P(nexins,sizeof(nexins));
		// 	break;

   return false;
}



// void render_keyboard_status(void) {
//     oled_write_P(PSTR(" "), false);

//     // CAPSLOCK状态:
//     oled_write_P(host_keyboard_led_state().caps_lock ? PSTR("-CAPS") : PSTR("-----"), false);

//     oled_write_P(PSTR(" "), false);
//     }

// void render_layer_state(void) {
//     switch (get_highest_layer(layer_state)) {
//         case 0:
//             oled_write_P(PSTR(" MAIN   "), false);
//             break;
//         case 1:
//             oled_write_P(PSTR(" GAME   "), false);
//             break;
//         case 2:
//             oled_write_P(PSTR("FUNCTION"), false);
//             break;
//         default:
//             oled_write_P(PSTR("Undefined"), false);
//     }
// }


// // {OLED 主进程} ------------------------------------------------------//
// void oled_task_user(void) {
//     if (timer_elapsed32(oled_timer) > OLED_SHOW_STATE_TIMEOUT && timer_elapsed32(oled_timer) < OLED_TIMEOUT) {
//         // 无操作10秒后，OLED_TIMEOUT(60秒默认)前播放动画
//         if (!master_oled_cleared) {
//             // Clear OLED一次确保动画正确渲染
//             oled_clear();
//             master_oled_cleared = true;
//         }
//         kun_anime();
//         return;
//     } else if (timer_elapsed32(oled_timer) > OLED_TIMEOUT) {
//         // 无操作60秒后关闭OLED
//         oled_off();
//         return;
//     } else {
//         // 重置Clear OLED标记
//         if (master_oled_cleared) {
//             oled_on();
//             oled_clear();
//             master_oled_cleared = false;
//         }

//         // 各种状态信息显示：
//         oled_write_P(oled_header, false);
//         render_layer_state();
//         oled_write_P(oled_layer_keylog_separator, false);
//         //render_keylogger_status();
//         oled_set_cursor(20, 2);
//         oled_write_P(oled_layer_line_end, false);
//         oled_write_P(oled_layer_keylog_bottom, false);
//         oled_write_P(oled_line_start, false);
//         render_keyboard_status();
//         oled_write_P(oled_layer_line_end, false);
//         oled_write_P(oled_mods_bottom, false);
//         oled_write_P(oled_line_start, false);
//         //render_mod_status(get_mods() | get_oneshot_mods());
//         oled_write_P(oled_layer_line_end, false);
//         oled_write_P(oled_footer, false);
//     }
// }


#endif



