#pragma once

#define FN_COPY_PLAIN    LSFT(LGUI(LALT(KC_4)))
#define FN_DELETE_LINE   LCTL(KC_U)
#define FN_DELETE_TO_END LCTL(KC_K)
#define FN_LINE_START    LCTL(KC_A)
#define FN_LINE_END      LCTL(KC_E)
#define FN_REVERSE_SEARCH LCTL(KC_R)

#define CLI_LAYER LAYOUT_ergodox( \
    XXXXXXX,       XXXXXXX, XXXXXXX,          XXXXXXX,           XXXXXXX,     XXXXXXX,        XXXXXXX, \
    XXXXXXX,       XXXXXXX, XXXXXXX,          FN_DELETE_TO_END,  XXXXXXX,     XXXXXXX,        XXXXXXX, \
    XXXXXXX,       XXXXXXX, XXXXXXX,          FN_LINE_START,     FN_LINE_END, XXXXXXX,                 \
    XXXXXXX,       XXXXXXX, XXXXXXX,          XXXXXXX,           XXXXXXX,     FN_DELETE_LINE, XXXXXXX, \
    FN_COPY_PLAIN, XXXXXXX, XXXXXXX,          XXXXXXX,           XXXXXXX,                             \
                                              XXXXXXX,           XXXXXXX,           \
                                                                 XXXXXXX,           \
                                    XXXXXXX,  FN_REVERSE_SEARCH, XXXXXXX,           \
                                                                                    \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, \
    XXXXXXX,          \
    XXXXXXX, XXXXXXX, XXXXXXX \
)
