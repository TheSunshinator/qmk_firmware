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

// Dvorak layer functions
#define FN_COPY LGUI(KC_C)
#define FN_CUT LGUI(KC_X)

// Build layer functions
#define FN_SYNC HYPR(KC_TAB)
#define FN_PERMISSIONS HYPR(KC_7)
#define FN_CLEAR_DATA LCAG(KC_5)
#define FN_KILL_APP HYPR(KC_2)
#define FN_CLEAN HYPR(KC_K)
#define FN_UNINSTALL HYPR(KC_1)
#define FN_REBUILD HYPR(KC_R)
#define FN_CLEAR_RESTART HYPR(KC_5)
#define FN_RUN LCTL(KC_R)
#define FN_STOP LGUI(KC_F2)
#define FN_ADB_RESTART HYPR(KC_4)
#define FN_ADB_START LCAG(KC_6)
#define FN_START_DEBUG HYPR(KC_6)
#define FN_ADB LCTL(LSFT(KC_A))

// Android Studio layer functions
#define FN_INVALIDATE_CACHE LGUI(LALT(KC_Q))
#define FN_BYTECODE HYPR(KC_B)
#define FN_COMMENT RGUI(KC_SLSH)
#define FN_DIFF_UP LSFT(KC_F7)
#define FN_DIFF_DOWN KC_F7
#define FN_TYPE_INFO LCTL(LSFT(KC_P))
#define FN_CONFLICTS LCTL(LGUI(KC_C))
#define FN_LAYOUT HYPR(KC_Y)
#define FN_OPEN RGUI(RALT(KC_O))
#define FN_USAGE LALT(KC_F7)
#define FN_SIGNATURE LGUI(KC_F6)
#define FN_FORMAT RALT(RGUI(KC_L))
#define FN_CLOSE_OTHERS RCTL(RALT(KC_Q))
#define FN_TO_KOTLIN LALT(LGUI(LSFT(KC_K)))
#define FN_ANNOTATE HYPR(KC_A)
#define FN_SEARCH RGUI(RSFT(KC_F))
#define FN_REPLACE RGUI(RSFT(KC_R))
#define FN_ACTION HYPR(KC_X)
#define FN_RENAME LSFT(KC_F6)
#define FN_STRUCTURE LGUI(KC_F12)
#define FN_EXTRACT_METHOD LALT(LGUI(KC_M))
#define FN_EXTRACT_VARIABLE LALT(LGUI(KC_V))
#define FN_DEFINITION LGUI(KC_B)
#define FN_CLONE_CARET HYPR(KC_DOWN)
#define FN_SUPER LGUI(KC_U)
#define FN_IMPLEMENTATION LALT(LGUI(KC_B))
#define FN_METHOD_UP LGUI(LSFT(KC_UP))
#define FN_METHOD_DOWN LGUI(LSFT(KC_DOWN))
#define FN_SPLIT_RIGHT LCTL(SGUI(KC_RGHT))
#define FN_REVERT LGUI(LALT(KC_Z))
#define FN_CLOSE_NOTIF LCAG(KC_C)
#define FN_ALL_NOTIF HYPR(KC_C)
#define FN_NEW_FILE HYPR(KC_F)
#define FN_GIT_HISTORY HYPR(KC_H)
#define FN_CLOSE_TAB LGUI(KC_W)
#define FN_NEXT_TAB LCTL(KC_RGHT)
#define FN_PREVIOUS_TAB LCTL(KC_LEFT)
#define FN_APPLY_CONFLICT HYPR(KC_L)

#define FN_PROJECT LGUI(KC_1)
#define FN_COMMIT LGUI(KC_0)
#define FN_TERMINAL LALT(KC_F12)
#define FN_LOGCAT LGUI(KC_6)
#define FN_GIT LGUI(KC_9)
#define FN_FIND LGUI(KC_3)
#define FN_DEVICES LGUI(KC_2)
#define FN_GRADLE LGUI(KC_4)

// Debug layer functions
#define FN_CONTINUE_DEBUG RALT(RGUI(KC_R))
#define FN_ATTACH_DEBUG HYPR(KC_T)
#define FN_STEP_OUT LSFT(KC_F8)
#define FN_STEP_INTO KC_F7
#define FN_NEXT_STEP KC_F8
#define FN_EVAL_EXPRESSION RALT(KC_F8)
#define FN_DEBUG LCTL(KC_D)
#define FN_ADB_RESTART_DEBUG HYPR(KC_9)
#define FN_CLEAR_RESTART_DEBUG HYPR(KC_3)
#define FN_MUTE_DEBUG HYPR(KC_RBRC)
#define FN_BREAKPOINT LGUI(KC_F8)

// Functions layer functions
#define FN_PASTE LGUI(KC_V)
#define FN_TREMA LALT(KC_U)
#define FN_GRAVE LALT(KC_GRV)
#define FN_AIGUE LALT(KC_E)
#define FN_CIRC LALT(KC_I)
#define FN_LOCK LCTL(LGUI(KC_Q))
#define FN_PUSH_TALK KC_BTN8
#define FN_SCREENSHOT LSFT(LGUI(KC_4))

// CLI layer functions
#define FN_COPY_PLAIN LSFT(LGUI(LALT(KC_4)))
#define FN_DELETE_LINE LCTL(KC_U)
#define FN_DELETE_TO_END LCTL(KC_K)
#define FN_LINE_START LCTL(KC_A)
#define FN_LINE_END LCTL(KC_E)
#define FN_REVERSE_SEARCH LCTL(KC_R)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DVORAK] = LAYOUT_ergodox(

	KC_ESC,             KC_1,        KC_2,          KC_3,     KC_4,    KC_5,    KC_LBRC,
    KC_TAB,             KC_QUOT,     KC_COMM,       KC_DOT,   KC_P,    KC_Y,    SC_LSPO,
    KC_BSPC,            KC_A,        KC_O,          KC_E,     KC_U,    KC_I,
    MO(AS_SHORTCUTS),   KC_Z,        KC_Q,          KC_J,     KC_K,    KC_X,    KC_LCBR,
    FN_COPY,            FN_PASTE,    KC_MINUS,      KC_GRV,   KC_SCLN,

                                                          TT(BUILD),        MO(FUNCTIONS),
                                                                            KC_LCTL,
                                               KC_LGUI,   LSFT_T(KC_SPC),   KC_LALT,


    KC_RBRC,          KC_6,    KC_7,      KC_8,    KC_9,              KC_0,              KC_EQL,
    SC_RSPC,          KC_F,    KC_G,      KC_C,    KC_R,              KC_L,              TT(NUMPAD),
                      KC_D,    KC_H,      KC_T,    KC_N,              KC_S,              KC_DEL,
    KC_RCBR,          KC_B,    KC_M,      KC_W,    KC_V,              KC_UP,             MO(CLI),
                               KC_BSLS,   KC_SLSH, KC_LEFT,           KC_DOWN,           KC_RGHT,

    MO(FUNCTIONS),    TT(DEBUGGING),
    KC_RCTL,
    KC_RALT,   RSFT_T(KC_ENT), KC_LGUI

  ),

  [NUMPAD] = LAYOUT_ergodox(

    _______,    _______,         _______,   KC_LCBR, _______,    _______,        _______,
    _______,    KC_KP_MINUS,     KC_KP_1,   KC_KP_2, KC_KP_3,    KC_KP_PLUS,     _______,
    _______,    KC_KP_SLASH,     KC_KP_4,   KC_KP_5, KC_KP_6,    KC_KP_ASTERISK,
    _______,    KC_COMM,         KC_KP_7,   KC_KP_8, KC_KP_9,    KC_COMM,        KC_KP_EQUAL,
    _______,    _______,         KC_KP_DOT, KC_KP_0, KC_KP_DOT,

                                          				  	    	_______, _______,
                                                         		   			 _______,
                                            			   _______, _______, _______,


    _______,     _______,         _______,    KC_RCBR,    _______,     _______,         _______,
    _______,     KC_KP_PLUS,      KC_KP_1,    KC_KP_2,    KC_KP_3,     KC_KP_MINUS,     _______,
                 KC_KP_ASTERISK,  KC_KP_4,    KC_KP_5,    KC_KP_6,     KC_KP_SLASH,     _______,
    KC_KP_EQUAL, KC_COMM,         KC_KP_7,    KC_KP_8,    KC_KP_9,     _______,         _______,
                                  KC_KP_DOT,  KC_KP_0,    _______,     _______,         _______,

    _______, _______,
    _______,
    _______, _______, _______
  ),

  [CLI] = LAYOUT_ergodox(

    XXXXXXX,       XXXXXXX,          XXXXXXX,         XXXXXXX,           XXXXXXX,     XXXXXXX,        XXXXXXX,
    XXXXXXX,       XXXXXXX,          XXXXXXX,         FN_DELETE_TO_END,  XXXXXXX,     XXXXXXX,        XXXXXXX,
    XXXXXXX,       XXXXXXX,          XXXXXXX,         FN_LINE_START,     FN_LINE_END, XXXXXXX,
    XXXXXXX,       XXXXXXX,          XXXXXXX,         XXXXXXX,           XXXXXXX,     FN_DELETE_LINE, XXXXXXX,
    FN_COPY_PLAIN, XXXXXXX,          XXXXXXX,         XXXXXXX,           XXXXXXX,

                                          				  	    	XXXXXXX,           XXXXXXX,
                                                         		   			           XXXXXXX,
                                            			   XXXXXXX, FN_REVERSE_SEARCH, XXXXXXX,


    XXXXXXX,     XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         XXXXXXX,
    XXXXXXX,     XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         XXXXXXX,
                 XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         XXXXXXX,
    XXXXXXX,     XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         XXXXXXX,
                                  XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         XXXXXXX,

    XXXXXXX, XXXXXXX,
    XXXXXXX,
    XXXXXXX, XXXXXXX,  XXXXXXX
  ),

  [BUILD] = LAYOUT_ergodox(

    FN_STOP,       XXXXXXX,                XXXXXXX,          XXXXXXX,      XXXXXXX,         XXXXXXX,      XXXXXXX,
    FN_SYNC,       XXXXXXX,                XXXXXXX,          FN_RUN,       FN_PERMISSIONS,  XXXXXXX,      KC_LSFT,
    FN_CLEAR_DATA, XXXXXXX,                XXXXXXX,          XXXXXXX,      XXXXXXX,         XXXXXXX,
    XXXXXXX,       XXXXXXX,                FN_KILL_APP,      XXXXXXX,      FN_CLEAN,        FN_UNINSTALL, XXXXXXX,
    XXXXXXX,       XXXXXXX,                XXXXXXX,          XXXXXXX,      XXXXXXX,

  	                                                    							XXXXXXX, XXXXXXX,
  	                                                             				   			 XXXXXXX,
  	                                            						   XXXXXXX, KC_LSFT, XXXXXXX,


    XXXXXXX,           XXXXXXX,          XXXXXXX,     XXXXXXX,      XXXXXXX,        XXXXXXX,               XXXXXXX,
    KC_RSFT,           XXXXXXX,          XXXXXXX,     XXXXXXX,      FN_REBUILD,     XXXXXXX,               XXXXXXX,
                       FN_ADB,           XXXXXXX,     FN_ADB_START, XXXXXXX,        XXXXXXX,               FN_CLEAR_DATA,
    XXXXXXX,           XXXXXXX,          XXXXXXX,     XXXXXXX,      XXXXXXX,        XXXXXXX,               XXXXXXX,
                                         XXXXXXX,     XXXXXXX,      XXXXXXX,        XXXXXXX,               XXXXXXX,

    XXXXXXX, XXXXXXX,
    XXXXXXX,
    XXXXXXX, FN_RUN,   FN_ADB_RESTART
  ),

  [DEBUGGING] = LAYOUT_ergodox(

    XXXXXXX,                XXXXXXX,                XXXXXXX,          XXXXXXX,           XXXXXXX,         XXXXXXX,            XXXXXXX,
    XXXXXXX,                XXXXXXX,                XXXXXXX,          FN_CONTINUE_DEBUG, XXXXXXX,         XXXXXXX,            XXXXXXX,
    FN_CLEAR_RESTART_DEBUG, FN_ATTACH_DEBUG,        FN_STEP_OUT,      FN_STEP_INTO,      FN_NEXT_STEP,    XXXXXXX,
    XXXXXXX,                XXXXXXX,                FN_KILL_APP,      XXXXXXX,           XXXXXXX,         FN_EVAL_EXPRESSION, XXXXXXX,
    XXXXXXX,                XXXXXXX,                XXXXXXX,          XXXXXXX,           XXXXXXX,

    	                                                    							XXXXXXX,  XXXXXXX,
    	                                                             				   			  XXXXXXX,
    	                                            			  FN_ADB_RESTART_DEBUG, FN_DEBUG, XXXXXXX,

    XXXXXXX,           XXXXXXX,          XXXXXXX,       XXXXXXX,               XXXXXXX,        XXXXXXX,               XXXXXXX,
    XXXXXXX,           XXXXXXX,          XXXXXXX,       XXXXXXX,               XXXXXXX,        XXXXXXX,               XXXXXXX,
                       XXXXXXX,          XXXXXXX,       XXXXXXX,               XXXXXXX,        XXXXXXX,               FN_CLEAR_RESTART_DEBUG,
    XXXXXXX,           FN_BREAKPOINT,    FN_MUTE_DEBUG, XXXXXXX,               XXXXXXX,        XXXXXXX,               XXXXXXX,
                                         XXXXXXX,       XXXXXXX,               XXXXXXX,        XXXXXXX,               XXXXXXX,

    XXXXXXX, XXXXXXX,
    XXXXXXX,
    XXXXXXX, XXXXXXX,   XXXXXXX

  ),

  [AS_SHORTCUTS] = LAYOUT_ergodox(

      FN_INVALIDATE_CACHE,  XXXXXXX,     FN_TERMINAL,      FN_LOGCAT,      FN_GIT,       FN_FIND,      KC_HYPR,
      FN_PROJECT,           FN_COMMENT,  FN_DIFF_UP,       FN_DIFF_DOWN,   FN_TYPE_INFO, FN_CONFLICTS, FN_SUPER,
      FN_COMMIT,            XXXXXXX,     FN_OPEN,          FN_DEFINITION,  FN_USAGE,     FN_SIGNATURE,
      XXXXXXX,              FN_FORMAT,   FN_CLOSE_OTHERS,  FN_CLONE_CARET, FN_NEW_FILE,  FN_ANNOTATE,  FN_IMPLEMENTATION,
      XXXXXXX,              XXXXXXX,     FN_CLOSE_NOTIF,   XXXXXXX,        FN_REVERT,

                                                   							XXXXXXX, XXXXXXX,
                                                            				   		 KC_LCTL,
                                          						   KC_LGUI, KC_LSFT, KC_LALT,


      KC_HYPR,            XXXXXXX,    XXXXXXX,     			FN_DEVICES,    FN_GRADLE,               FN_BYTECODE,           XXXXXXX,
      FN_APPLY_CONFLICT,  FN_SEARCH,  FN_OPEN,     			FN_TO_KOTLIN,  FN_REPLACE,   			XXXXXXX,               XXXXXXX,
                          FN_ACTION,  FN_GIT_HISTORY,	    FN_CLOSE_TAB,  FN_RENAME,    			FN_STRUCTURE,          XXXXXXX,
      XXXXXXX,            XXXXXXX,    FN_EXTRACT_METHOD,    XXXXXXX,       FN_EXTRACT_VARIABLE,     FN_METHOD_UP,          FN_LAYOUT,
                                      FN_PREVIOUS_TAB,		FN_NEXT_TAB,   XXXXXXX,      			FN_METHOD_DOWN,        FN_SPLIT_RIGHT,

      XXXXXXX, XXXXXXX,
      KC_RCTL,
      KC_RALT, KC_RSFT, KC_RGUI

  ),

  [FUNCTIONS] = LAYOUT_ergodox(

    FN_LOCK,       KC_F1,                  KC_F2,            KC_F3,             KC_F4,           KC_F5,        KC_F11,
    XXXXXXX,       XXXXXXX,                KC_MPRV,          KC_MPLY,           KC_MNXT,         XXXXXXX,      FN_PUSH_TALK,
    KC_DEL,        XXXXXXX,                XXXXXXX,          FN_SCREENSHOT,     XXXXXXX,         XXXXXXX,
    XXXXXXX,       XXXXXXX,                XXXXXXX,          XXXXXXX,           XXXXXXX,         XXXXXXX,      XXXXXXX,
    XXXXXXX,       XXXXXXX,                XXXXXXX,          XXXXXXX,           XXXXXXX,
    	                                                    							XXXXXXX, XXXXXXX,
    	                                                             				   			 XXXXXXX,
    	                                            						   XXXXXXX, KC_SPC,  XXXXXXX,

    KC_F12,            KC_F6,            KC_F7,         KC_F8,                 KC_F9,          KC_F10,                XXXXXXX,
    FN_PUSH_TALK,      XXXXXXX,          FN_TREMA,      FN_CIRC,               XXXXXXX,        XXXXXXX,               XXXXXXX,
                       XXXXXXX,          FN_GRAVE,      FN_AIGUE,              XXXXXXX,        XXXXXXX,               KC_BSPC,
    XXXXXXX,           XXXXXXX,          XXXXXXX,       XXXXXXX,               XXXXXXX,        KC_PGUP,               KC_CAPS,
    	                                 XXXXXXX,       XXXXXXX,               KC_HOME,        KC_PGDN,               KC_END,
    XXXXXXX, XXXXXXX,
    XXXXXXX,
    XXXXXXX, KC_ENT,   XXXXXXX

  )

};

// Combos
const uint16_t PROGMEM capWordsCombo[] = {KC_UP, MO(CLI), COMBO_END};
const uint16_t PROGMEM homeCombo[] = {KC_BSPC, KC_A, COMBO_END};
const uint16_t PROGMEM endCombo[] = {KC_DEL, KC_S, COMBO_END};

combo_t key_combos[] = {
    COMBO(capWordsCombo, CW_TOGG),
    COMBO(homeCombo, KC_HOME),
    COMBO(endCombo, KC_END),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
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
