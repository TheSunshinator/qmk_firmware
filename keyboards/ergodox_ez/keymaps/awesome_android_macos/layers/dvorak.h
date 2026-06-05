#pragma once

#define FN_COPY  LGUI(KC_C)
#define FN_CUT   LGUI(KC_X)
#define FN_PASTE LGUI(KC_V)

#define DVORAK_LAYER LAYOUT_ergodox( \
    KC_ESC,           KC_1,      KC_2,       KC_3,    KC_4,    KC_5,    KC_LBRC,    \
    KC_TAB,           KC_QUOT,   KC_COMM,    KC_DOT,  KC_P,    KC_Y,    SC_LSPO,    \
    KC_BSPC,          KC_A,      KC_O,       KC_E,    KC_U,    KC_I,                \
    MO(AS_SHORTCUTS), KC_Z,      KC_Q,       KC_J,    KC_K,    KC_X,    KC_LCBR,    \
    FN_COPY,          FN_PASTE,  KC_MINUS,   KC_GRV,  KC_SCLN,                      \
                                                       TT(BUILD),        MO(FUNCTIONS), \
                                                                         KC_LCTL,       \
                                             KC_LGUI, LSFT_T(KC_SPC),   KC_LALT,       \
                                                                                        \
    KC_RBRC,        KC_6,    KC_7,     KC_8,    KC_9,    KC_0,    KC_EQL,   \
    SC_RSPC,        KC_F,    KC_G,     KC_C,    KC_R,    KC_L,    TT(NUMPAD), \
                    KC_D,    KC_H,     KC_T,    KC_N,    KC_S,    KC_DEL,   \
    KC_RCBR,        KC_B,    KC_M,     KC_W,    KC_V,    KC_UP,   MO(CLI),  \
                             KC_BSLS, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT,  \
    MO(FUNCTIONS), TT(DEBUGGING), \
    KC_RCTL,                       \
    KC_RALT, RSFT_T(KC_ENT), KC_LGUI \
)
