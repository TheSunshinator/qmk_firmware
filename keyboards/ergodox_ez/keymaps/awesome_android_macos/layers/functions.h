#pragma once

#define FN_TREMA      LALT(KC_U)
#define FN_GRAVE      LALT(KC_GRV)
#define FN_AIGUE      LALT(KC_E)
#define FN_CIRC       LALT(KC_I)
#define FN_LOCK       LCTL(LGUI(KC_Q))
#define FN_SCREENCROP LSFT(LGUI(KC_4))

#define FUNCTIONS_LAYER LAYOUT_ergodox( \
    FN_LOCK,  KC_F1,   KC_F2,   KC_F3,         KC_F4,   KC_F5,   KC_F11,      \
    XXXXXXX,  XXXXXXX, KC_MPRV, KC_MPLY,       KC_MNXT, XXXXXXX, XXXXXXX, \
    KC_DEL,   XXXXXXX, XXXXXXX, FN_SCREENCROP, XXXXXXX, XXXXXXX,               \
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,      \
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,                        \
                                XXXXXXX, XXXXXXX,  \
                                         XXXXXXX,  \
                        XXXXXXX, KC_SPC, XXXXXXX,  \
                                                   \
    KC_F12,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX, \
    XXXXXXX, XXXXXXX, FN_TREMA, FN_CIRC, XXXXXXX, XXXXXXX, XXXXXXX, \
                  XXXXXXX, FN_GRAVE, FN_AIGUE, XXXXXXX, XXXXXXX, KC_BSPC, \
    XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_PGUP, KC_CAPS, \
                           XXXXXXX, XXXXXXX,  KC_HOME, KC_PGDN, KC_END,  \
    XXXXXXX, XXXXXXX, \
    XXXXXXX,          \
    XXXXXXX, KC_ENT, XXXXXXX \
)
