#include QMK_KEYBOARD_H
#include "version.h"

#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

enum layers {
    DVORAK,
    NUMPAD,
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
#define FN_CLEAR_DATA HYPR(KC_5)
#define FN_KILL_APP HYPR(KC_2)
#define FN_CLEAN HYPR(KC_K)
#define FN_UNINSTALL HYPR(KC_1)
#define FN_REBUILD HYPR(KC_R)
#define FN_CLEAR_RESTART HYPR(KC_6)
#define FN_RUN LCTL(KC_R)
#define FN_STOP LGUI(KC_F2)
#define FN_ADB_RESTART HYPR(KC_4)

// Android Studio layer functions
#define FN_INVALIDATE_CACHE LGUI(LALT(KC_Q))
#define FN_BYTECODE HYPR(KC_B)
#define FN_COMMENT RGUI(KC_SLSH)
#define FN_DIFF_UP LSFT(KC_F7)
#define FN_DIFF_DOWN KC_F7
#define FN_TYPE_INFO LCTL(LSFT(KC_P))
#define FN_CONFLICTS LCTL(LGUI(KC_C))
#define FN_LAYOUT HYPR(KC_Y)
#define FN_OPEN LGUI(LSFT(KC_O))
#define FN_USAGE LALT(KC_F7)
#define FN_SIGNATURE LGUI(KC_F6)
#define FN_FORMAT RALT(RGUI(KC_L))
#define FN_CLOSE_OTHERS RCTL(RALT(KC_Q))
#define FN_TO_KOTLIN LALT(LGUI(LSFT(KC_K)))
#define FN_ANNOTATE HYPR(KC_A)
#define FN_FIND RGUI(RSFT(KC_F))
#define FN_REPLACE RGUI(RSFT(KC_R))
#define FN_ACTION HYPR(KC_X)
#define FN_RENAME LSFT(KC_F6)
#define FN_STRUCTURE LGUI(KC_F12)
#define FN_EXTRACT_METHOD LALT(LGUI(KC_M))
#define FN_EXTRACT_VARIABLE LALT(LGUI(KC_V))
#define FN_TERMINAL LALT(KC_F12)
#define FN_LOGCAT LGUI(KC_6)
#define FN_DEFINITION LGUI(KC_B)
#define FN_CLONE_CARET HYPR(KC_DOWN)
#define FN_SUPER LGUI(KC_U)
#define FN_IMPLEMENTATION LALT(LGUI(KC_B))

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
#define FN_METHOD_UP LGUI(LSFT(KC_UP))
#define FN_METHOD_DOWN LGUI(LSFT(KC_DOWN))

// Functions layer functions
#define FN_PASTE LGUI(KC_V)
#define FN_TREMA LALT(KC_U)
#define FN_GRAVE LALT(KC_GRV)
#define FN_AIGUE LALT(KC_E)
#define FN_CIRC LALT(KC_I)
#define FN_LOCK LCTL(LGUI(KC_Q))
#define FN_PUSH_TALK MEH(KC_DOT)
#define FN_SCREENSHOT LSFT(LGUI(KC_4))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DVORAK] = LAYOUT_ergodox(

	KC_ESC,             KC_1,        KC_2,          KC_3,     KC_4,    KC_5,    KC_LBRC,
    KC_TAB,             KC_QUOT,     KC_COMM,       KC_DOT,   KC_P,    KC_Y,    KC_LSPO,
    KC_BSPC,            KC_A,        KC_O,          KC_E,     KC_U,    KC_I,
    TT(AS_SHORTCUTS),   KC_Z,        KC_Q,          KC_J,     KC_K,    KC_X,    KC_LCBR,
    FN_COPY,            FN_PASTE,    KC_MINUS,      KC_GRV,   KC_SCLN,

                                                          TT(BUILD),        MO(FUNCTIONS),
                                                                            LCTL_T(KC_PGUP),
                                               KC_LGUI,   LSFT_T(KC_SPC),   LALT_T(KC_HOME),


    KC_RBRC,          KC_6,    KC_7,      KC_8,    KC_9,              KC_0,              KC_EQL,
    KC_RSPC,          KC_F,    KC_G,      KC_C,    KC_R,              KC_L,              TT(NUMPAD),
                      KC_D,    KC_H,      KC_T,    KC_N,              KC_S,              KC_DEL,
    KC_RCBR,          KC_B,    KC_M,      KC_W,    KC_V,              KC_UP,             KC_CAPS,
                               KC_BSLASH, KC_SLSH, KC_LEFT,           KC_DOWN,           KC_RGHT,

    MO(FUNCTIONS),    TT(DEBUGGING),
    RCTL_T(KC_PGDN),
    RALT_T(KC_END),   RSFT_T(KC_ENT), KC_LGUI

  ),

  [NUMPAD] = LAYOUT_ergodox(

    KC_TRNS,    KC_TRNS,         KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,
    KC_TRNS,    KC_KP_PLUS,      KC_KP_1,   KC_KP_2, KC_KP_3,    KC_KP_MINUS, KC_TRNS,
    KC_TRNS,    KC_KP_ASTERISK,  KC_KP_4,   KC_KP_5, KC_KP_6,    KC_KP_SLASH,
    KC_TRNS,    KC_TRNS,         KC_KP_7,   KC_KP_8, KC_KP_9,    KC_TRNS,     KC_KP_EQUAL,
    KC_TRNS,    KC_TRNS,         KC_TRNS,   KC_KP_0, KC_KP_DOT,

                                          				  	    	KC_TRNS, KC_TRNS,
                                                         		   			 KC_TRNS,
                                            			   KC_TRNS, KC_TRNS, KC_TRNS,


    KC_TRNS,     KC_TRNS,         KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,         KC_TRNS,
    KC_TRNS,     KC_KP_PLUS,      KC_KP_1,    KC_KP_2,    KC_KP_3,     KC_KP_MINUS,     KC_TRNS,
                 KC_KP_ASTERISK,  KC_KP_4,    KC_KP_5,    KC_KP_6,     KC_KP_SLASH,     KC_TRNS,
    KC_KP_EQUAL, KC_TRNS,         KC_KP_7,    KC_KP_8,    KC_KP_9,     KC_TRNS,         KC_TRNS,
                                  KC_KP_DOT,  KC_KP_0,    KC_TRNS,     KC_TRNS,         KC_TRNS,

    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS,  KC_TRNS
  ),

  [BUILD] = LAYOUT_ergodox(

    FN_STOP,       KC_TRNS,                KC_TRNS,          KC_TRNS,      KC_TRNS,         KC_TRNS,      KC_TRNS,
    FN_SYNC,       KC_TRNS,                KC_TRNS,          KC_TRNS,      FN_PERMISSIONS,  KC_TRNS,      KC_TRNS,
    FN_CLEAR_DATA, KC_TRNS,                KC_TRNS,          KC_TRNS,      KC_TRNS,         KC_TRNS,
    KC_TRNS,       KC_TRNS,                FN_KILL_APP,      KC_TRNS,      FN_CLEAN,        FN_UNINSTALL, KC_TRNS,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,      KC_TRNS,

  	                                                    							KC_TRNS, KC_TRNS,
  	                                                             				   			 KC_TRNS,
  	                                            						   KC_TRNS, KC_TRNS, KC_TRNS,


    KC_TRNS,           KC_TRNS,          KC_TRNS,     KC_TRNS,      KC_TRNS,        KC_TRNS,               KC_TRNS,
    KC_TRNS,           KC_TRNS,          KC_TRNS,     KC_TRNS,      FN_REBUILD,     KC_TRNS,               KC_TRNS,
                       KC_TRNS,          KC_TRNS,     KC_TRNS,      KC_TRNS,        KC_TRNS,               FN_CLEAR_RESTART,
    KC_TRNS,           KC_TRNS,          KC_TRNS,     KC_TRNS,      KC_TRNS,        KC_TRNS,               KC_TRNS,
                                         KC_TRNS,     KC_TRNS,      KC_TRNS,        KC_TRNS,               KC_TRNS,

    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, FN_RUN,   FN_ADB_RESTART
  ),

  [DEBUGGING] = LAYOUT_ergodox(

    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_TRNS,         KC_TRNS,            KC_TRNS,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          FN_CONTINUE_DEBUG, KC_TRNS,         KC_TRNS,            KC_TRNS,
    FN_CLEAR_DATA, FN_ATTACH_DEBUG,        FN_STEP_OUT,      FN_STEP_INTO,      FN_NEXT_STEP,    KC_TRNS,
    KC_TRNS,       KC_TRNS,                FN_KILL_APP,      KC_TRNS,           KC_TRNS,         FN_EVAL_EXPRESSION, KC_TRNS,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_TRNS,
    	                                                    							KC_TRNS,  KC_TRNS,
    	                                                             				   			  KC_TRNS,
    	                                            			  FN_ADB_RESTART_DEBUG, FN_DEBUG, KC_TRNS,

    KC_TRNS,           KC_TRNS,          KC_TRNS,       KC_TRNS,               KC_TRNS,        KC_TRNS,               KC_TRNS,
    KC_TRNS,           KC_TRNS,          KC_TRNS,       KC_TRNS,               KC_TRNS,        KC_TRNS,               KC_TRNS,
                       KC_TRNS,          KC_TRNS,       KC_TRNS,               KC_TRNS,        KC_TRNS,               FN_CLEAR_RESTART_DEBUG,
    KC_TRNS,           FN_BREAKPOINT,    FN_MUTE_DEBUG, KC_TRNS,               KC_TRNS,        KC_TRNS,               KC_TRNS,
                                         KC_TRNS,       KC_TRNS,               KC_TRNS,        KC_TRNS,               KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS,   KC_TRNS

  ),

  [AS_SHORTCUTS] = LAYOUT_ergodox(

      FN_INVALIDATE_CACHE,  FN_BYTECODE, FN_TERMINAL,      FN_LOGCAT,      KC_TRNS,      KC_TRNS,      KC_HYPR,
      KC_TRNS,              FN_COMMENT,  FN_DIFF_UP,       FN_DIFF_DOWN,   FN_TYPE_INFO, FN_CONFLICTS, FN_SUPER,
      KC_TRNS,              FN_LAYOUT,   FN_OPEN,          FN_DEFINITION,  FN_USAGE,     FN_SIGNATURE,
      KC_TRNS,              FN_FORMAT,   FN_CLOSE_OTHERS,  FN_CLONE_CARET, FN_TO_KOTLIN, FN_ANNOTATE,  FN_IMPLEMENTATION,
      KC_TRNS,              KC_TRNS,     KC_TRNS,          KC_TRNS,        KC_TRNS,

                                                   							KC_TRNS, KC_TRNS,
                                                            				   		 KC_TRNS,
                                          						   KC_TRNS, KC_TRNS, KC_TRNS,


      KC_HYPR,  KC_TRNS,    KC_TRNS,     			KC_TRNS,    KC_TRNS,      			KC_TRNS,               KC_TRNS,
      KC_HYPR,  FN_FIND,    FN_OPEN,     			KC_TRNS,    FN_REPLACE,   			KC_TRNS,               KC_TRNS,
                FN_ACTION,  KC_TRNS,     			KC_TRNS,    FN_RENAME,    			FN_STRUCTURE,          KC_TRNS,
      KC_HYPR,  KC_TRNS,    FN_EXTRACT_METHOD,      KC_TRNS,    FN_EXTRACT_VARIABLE,    FN_METHOD_UP,          KC_TRNS,
                            KC_TRNS,     			KC_TRNS,    KC_TRNS,      			FN_METHOD_DOWN,        KC_TRNS,

  	KC_TRNS, KC_TRNS,
      KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS

  ),

  [FUNCTIONS] = LAYOUT_ergodox(

    FN_LOCK,       KC_F1,                  KC_F2,            KC_F3,             KC_F4,           KC_F5,        KC_F11,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_TRNS,         KC_TRNS,      FN_PUSH_TALK,
    KC_DEL,        KC_TRNS,                KC_TRNS,          FN_SCREENSHOT,     KC_TRNS,         KC_TRNS,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_TRNS,         KC_TRNS,      SH_TT,
    KC_TRNS,       KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_TRNS,
    	                                                    							KC_TRNS, KC_TRNS,
    	                                                             				   			 KC_LCTRL,
    	                                            						   KC_TRNS, KC_SPC,  KC_LALT,

    KC_F12,            KC_F6,            KC_F7,         KC_F8,                 KC_F9,          KC_F10,                KC_TRNS,
    FN_PUSH_TALK,      KC_TRNS,          FN_TREMA,      FN_CIRC,               KC_TRNS,        KC_TRNS,               KC_TRNS,
                       KC_TRNS,          FN_GRAVE,      FN_AIGUE,              KC_TRNS,        KC_TRNS,               KC_BSPC,
    SH_TT,             KC_TRNS,          KC_TRNS,       KC_TRNS,               KC_TRNS,        KC_PGUP,               KC_TRNS,
    	                                 KC_TRNS,       KC_TRNS,               KC_HOME,        KC_PGDN,               KC_END,
    KC_TRNS, KC_TRNS,
    KC_RCTRL,
    KC_RALT, KC_ENT,   KC_TRNS

  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
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
      default:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
    }

  return state;
};
