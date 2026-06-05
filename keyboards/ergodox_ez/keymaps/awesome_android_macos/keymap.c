#include QMK_KEYBOARD_H
#include "version.h"

#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

enum layers {
    DVORAK,
    NUMPAD,
    CLI,
    BUILD,
    DEBUGGING,
    AS_SHORTCUTS,
    FUNCTIONS,
};

#include "layers/dvorak.h"
#include "layers/numpad.h"
#include "layers/cli.h"
#include "layers/build.h"
#include "layers/debugging.h"
#include "layers/as_shortcuts.h"
#include "layers/functions.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DVORAK]       = DVORAK_LAYER,
    [NUMPAD]       = NUMPAD_LAYER,
    [CLI]          = CLI_LAYER,
    [BUILD]        = BUILD_LAYER,
    [DEBUGGING]    = DEBUGGING_LAYER,
    [AS_SHORTCUTS] = AS_SHORTCUTS_LAYER,
    [FUNCTIONS]    = FUNCTIONS_LAYER,
};

// Combos
const uint16_t PROGMEM capWordsCombo[] = {KC_UP, MO(CLI), COMBO_END};
const uint16_t PROGMEM homeCombo[]     = {KC_BSPC, KC_A, COMBO_END};
const uint16_t PROGMEM endCombo[]      = {KC_DEL, KC_S, COMBO_END};

combo_t key_combos[] = {
    COMBO(capWordsCombo, CW_TOGG),
    COMBO(homeCombo, KC_HOME),
    COMBO(endCombo, KC_END),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
