#pragma once

#define FN_SYNC          HYPR(KC_TAB)
#define FN_PERMISSIONS   HYPR(KC_7)
#define FN_CLEAR_DATA    LCAG(KC_5)
#define FN_KILL_APP      HYPR(KC_2)
#define FN_CLEAN         HYPR(KC_K)
#define FN_UNINSTALL     HYPR(KC_1)
#define FN_REBUILD       HYPR(KC_R)
#define FN_CLEAR_RESTART HYPR(KC_5)
#define FN_RUN           LCTL(KC_R)
#define FN_STOP          LGUI(KC_F2)
#define FN_ADB_RESTART   HYPR(KC_4)
#define FN_ADB_START     LCAG(KC_6)
#define FN_START_DEBUG   HYPR(KC_6)
#define FN_ADB           LCTL(LSFT(KC_A))

#define BUILD_LAYER LAYOUT_ergodox( \
    FN_STOP,       XXXXXXX, XXXXXXX,      XXXXXXX,  XXXXXXX,        XXXXXXX,      XXXXXXX, \
    FN_SYNC,       XXXXXXX, XXXXXXX,      FN_RUN,   FN_PERMISSIONS, XXXXXXX,      KC_LSFT, \
    FN_CLEAR_DATA, XXXXXXX, XXXXXXX,      XXXXXXX,  XXXXXXX,        XXXXXXX,               \
    XXXXXXX,       XXXXXXX, FN_KILL_APP,  XXXXXXX,  FN_CLEAN,       FN_UNINSTALL, XXXXXXX, \
    XXXXXXX,       XXXXXXX, XXXXXXX,      XXXXXXX,  XXXXXXX,                               \
                                          _______,  XXXXXXX,         \
                                                    XXXXXXX,         \
                            XXXXXXX,      KC_LSFT,  XXXXXXX,         \
                                                                      \
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX, \
    KC_RSFT,  XXXXXXX,  XXXXXXX,  XXXXXXX,      FN_REBUILD, XXXXXXX, XXXXXXX, \
              FN_ADB,   XXXXXXX,  FN_ADB_START, XXXXXXX,  XXXXXXX,  FN_CLEAR_DATA, \
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX, \
                        XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX, \
    XXXXXXX, XXXXXXX,     \
    XXXXXXX,              \
    XXXXXXX, FN_RUN, FN_ADB_RESTART \
)
