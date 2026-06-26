#pragma once

#define FN_INVALIDATE_CACHE LGUI(LALT(KC_Q))
#define FN_BYTECODE         HYPR(KC_B)
#define FN_COMMENT          RGUI(KC_SLSH)
#define FN_DIFF_UP          LSFT(KC_F7)
#define FN_DIFF_DOWN        KC_F7
#define FN_TYPE_INFO        LCTL(LSFT(KC_P))
#define FN_CONFLICTS        LCTL(LGUI(KC_C))
#define FN_LAYOUT           HYPR(KC_Y)
#define FN_OPEN             RGUI(RSFT(KC_O))
#define FN_USAGE            LALT(KC_F7)
#define FN_SIGNATURE        LGUI(KC_F6)
#define FN_FORMAT           RALT(RGUI(KC_L))
#define FN_CLOSE_OTHERS     RCTL(RALT(KC_W))
#define FN_TO_KOTLIN        LALT(LGUI(LSFT(KC_K)))
#define FN_ANNOTATE         HYPR(KC_A)
#define FN_SEARCH           RGUI(RSFT(KC_F))
#define FN_REPLACE          RGUI(RSFT(KC_R))
#define FN_ACTION           HYPR(KC_X)
#define FN_RENAME           LSFT(KC_F6)
#define FN_STRUCTURE        LGUI(KC_F12)
#define FN_EXTRACT_METHOD   LALT(LGUI(KC_M))
#define FN_EXTRACT_VARIABLE LALT(LGUI(KC_V))
#define FN_DEFINITION       LGUI(KC_B)
#define FN_CLONE_CARET      HYPR(KC_DOWN)
#define FN_SUPER            LGUI(KC_U)
#define FN_IMPLEMENTATION   LALT(LGUI(KC_B))
#define FN_METHOD_UP        LGUI(LSFT(KC_UP))
#define FN_METHOD_DOWN      LGUI(LSFT(KC_DOWN))
#define FN_SPLIT_RIGHT      LCTL(SGUI(KC_RGHT))
#define FN_REVERT           LGUI(LALT(KC_Z))
#define FN_CLOSE_NOTIF      LCAG(KC_C)
#define FN_ALL_NOTIF        HYPR(KC_C)
#define FN_NEW_FILE         HYPR(KC_F)
#define FN_GIT_HISTORY      HYPR(KC_H)
#define FN_CLOSE_TAB        LGUI(KC_W)
#define FN_NEXT_TAB         LGUI(LSFT(KC_RBRC))
#define FN_PREVIOUS_TAB     LGUI(LSFT(KC_LBRC))
#define FN_APPLY_CONFLICT   HYPR(KC_L)
#define FN_PROJECT          LGUI(KC_1)
#define FN_COMMIT           LGUI(KC_0)
#define FN_TERMINAL         LALT(KC_F12)
#define FN_LOGCAT           LGUI(KC_6)
#define FN_GIT              LGUI(KC_9)
#define FN_FIND             LGUI(KC_3)
#define FN_DEVICES          LGUI(KC_2)
#define FN_GRADLE           LGUI(KC_4)
#define FN_CLEAR_LOGCAT     HYPR(KC_DEL)

#define AS_SHORTCUTS_LAYER LAYOUT_ergodox( \
    FN_INVALIDATE_CACHE, XXXXXXX,    FN_TERMINAL,       FN_LOGCAT,      FN_GIT,    FN_FIND,    KC_HYPR,          \
    FN_PROJECT,          FN_COMMENT, FN_DIFF_UP,        FN_DIFF_DOWN,   FN_TYPE_INFO, FN_CONFLICTS, FN_SUPER,    \
    FN_COMMIT,           XXXXXXX,    FN_OPEN,           FN_DEFINITION,  FN_USAGE,  FN_SIGNATURE,                 \
    XXXXXXX,             FN_FORMAT,  FN_CLOSE_OTHERS,   FN_CLONE_CARET, FN_NEW_FILE, FN_ANNOTATE, FN_IMPLEMENTATION, \
    XXXXXXX,             XXXXXXX,    FN_CLOSE_NOTIF,    XXXXXXX,        FN_REVERT,                               \
                                     XXXXXXX, XXXXXXX,       \
                                              KC_LCTL,       \
                         KC_LGUI,    KC_LSFT, KC_LALT,       \
                                                             \
    KC_HYPR,           XXXXXXX,    XXXXXXX,           FN_DEVICES,  FN_GRADLE,          FN_BYTECODE, XXXXXXX,           \
    FN_APPLY_CONFLICT, FN_SEARCH,  FN_OPEN,           FN_TO_KOTLIN, FN_REPLACE,        XXXXXXX,     XXXXXXX,           \
                       FN_ACTION,  FN_GIT_HISTORY,    FN_CLOSE_TAB, FN_RENAME,         FN_STRUCTURE, FN_CLEAR_LOGCAT,  \
    XXXXXXX,           XXXXXXX,    FN_EXTRACT_METHOD, XXXXXXX,      FN_EXTRACT_VARIABLE, FN_METHOD_UP, FN_LAYOUT,      \
                                   FN_PREVIOUS_TAB,   FN_NEXT_TAB,  XXXXXXX,           FN_METHOD_DOWN, FN_SPLIT_RIGHT, \
    XXXXXXX, XXXXXXX, \
    KC_RCTL,          \
    KC_RALT, KC_RSFT, KC_RGUI \
)
