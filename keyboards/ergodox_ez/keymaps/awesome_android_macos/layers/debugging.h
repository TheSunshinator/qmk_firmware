#pragma once

#define FN_CONTINUE_DEBUG    RALT(RGUI(KC_R))
#define FN_ATTACH_DEBUG      HYPR(KC_T)
#define FN_STEP_OUT          LSFT(KC_F8)
#define FN_STEP_INTO         KC_F7
#define FN_NEXT_STEP         KC_F8
#define FN_EVAL_EXPRESSION   RALT(KC_F8)
#define FN_DEBUG             LCTL(KC_D)
#define FN_ADB_RESTART_DEBUG HYPR(KC_9)
#define FN_CLEAR_RESTART_DEBUG HYPR(KC_3)
#define FN_MUTE_DEBUG        HYPR(KC_RBRC)
#define FN_BREAKPOINT        LGUI(KC_F8)

#define DEBUGGING_LAYER LAYOUT_ergodox( \
    XXXXXXX,                XXXXXXX,         XXXXXXX,      XXXXXXX,           XXXXXXX,       XXXXXXX,            XXXXXXX, \
    XXXXXXX,                XXXXXXX,         XXXXXXX,      FN_CONTINUE_DEBUG, XXXXXXX,       XXXXXXX,            XXXXXXX, \
    FN_CLEAR_RESTART_DEBUG, FN_ATTACH_DEBUG, FN_STEP_OUT,  FN_STEP_INTO,      FN_NEXT_STEP,  XXXXXXX,                     \
    XXXXXXX,                XXXXXXX,         FN_KILL_APP,  XXXXXXX,           XXXXXXX,       FN_EVAL_EXPRESSION, XXXXXXX, \
    XXXXXXX,                XXXXXXX,         XXXXXXX,      XXXXXXX,           XXXXXXX,                                    \
                                             XXXXXXX,      XXXXXXX,                  \
                                                           XXXXXXX,                  \
                           FN_ADB_RESTART_DEBUG, FN_DEBUG, _______,                  \
                                                                                     \
    XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,               XXXXXXX,                \
    XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,               XXXXXXX,                \
             XXXXXXX,       XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,               FN_CLEAR_RESTART_DEBUG, \
    XXXXXXX, FN_BREAKPOINT, FN_MUTE_DEBUG, XXXXXXX,  XXXXXXX,  XXXXXXX,               XXXXXXX,                \
                            XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,               XXXXXXX,                \
    XXXXXXX, _______,  \
    XXXXXXX,           \
    _______, XXXXXXX, XXXXXXX \
)
