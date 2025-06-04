#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  LMAGIC,
  RMAGIC,
};



#define DUAL_FUNC_0 LT(7, KC_X)
#define DUAL_FUNC_1 LT(4, KC_C)
#define DUAL_FUNC_2 LT(14, KC_U)
#define DUAL_FUNC_3 LT(4, KC_F24)
#define DUAL_FUNC_4 LT(6, KC_F3)
#define DUAL_FUNC_5 LT(2, KC_F18)
#define DUAL_FUNC_6 LT(10, KC_K)
#define DUAL_FUNC_7 LT(1, KC_Q)
#define DUAL_FUNC_8 LT(1, KC_X)
#define DUAL_FUNC_9 LT(6, KC_U)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    KC_TAB,         KC_B,           KC_W,           KC_D,           KC_L,           KC_SCLN,                                        KC_SLASH,       KC_F,           KC_O,           KC_U,           KC_J,           KC_MINUS,       
    KC_NO,          MT(MOD_LCTL, KC_C),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_T),MT(MOD_LALT, KC_R),LT(3, KC_X),                                    LT(2, KC_Q),    MT(MOD_RALT, KC_N),MT(MOD_RGUI, KC_A),MT(MOD_RSFT, KC_I),MT(MOD_RCTL, KC_H),KC_QUOTE,       
    KC_BSLS,        KC_V,           KC_Y,           KC_G,           KC_M,           KC_Z,                                           KC_EQUAL,       KC_P,           KC_DOT,         KC_COMMA,       KC_K,           TG(1),          
                                                    KC_E,           KC_ENTER,                                       KC_BSPC,        LT(4, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_D,           KC_F,           KC_K,                                           KC_J,           KC_U,           KC_R,           KC_L,           KC_SCLN,        KC_BSLS,        
    KC_MINUS,       MT(MOD_LCTL, KC_A),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_E),MT(MOD_LALT, KC_T),LT(3, KC_G),                                    LT(2, KC_Y),    MT(MOD_RALT, KC_N),MT(MOD_RGUI, KC_I),MT(MOD_RSFT, KC_O),MT(MOD_RCTL, KC_H),KC_SLASH,       
    KC_EQUAL,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_P,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUOTE,       KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_ENTER,                                       KC_BSPC,        LT(4, KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,       KC_FIND,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,        KC_TILD,        KC_PIPE,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LPRN,        KC_RPRN,        KC_LABK,        KC_RABK,        KC_GRAVE,       KC_QUES,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PLUS,        KC_MINUS,       KC_ASTR,        KC_SLASH,       KC_EQUAL,       KC_QUOTE,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PLUS,        KC_7,           KC_8,           KC_9,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,255,255}, {215,218,204}, {215,218,204} },

    [1] = { {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {88,218,204}, {21,255,255}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {215,218,204}, {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {88,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {215,218,204}, {215,218,204} },

    [2] = { {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {220,218,204}, {131,255,255}, {220,218,204}, {220,218,204}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {220,218,204}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {220,218,204}, {220,218,204}, {220,218,204}, {220,218,204}, {21,255,255}, {21,255,255}, {220,218,204}, {220,218,204}, {220,218,204}, {220,218,204}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {171,250,249}, {171,250,249}, {171,250,249}, {21,255,255}, {0,0,0}, {21,255,255}, {171,250,249}, {171,250,249}, {171,250,249}, {21,255,255}, {0,0,0}, {171,250,249}, {171,250,249}, {171,250,249}, {171,250,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

// ARCANE Key setup-------------------------------------------------
bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
      switch (keycode) {
        case LMAGIC:
        case RMAGIC:
           return false;  // Magic keys will ignore the above keycodes.
      }
   return true;  // Other keys can be repeated.
}

// An enhanced version of SEND_STRING: if Caps Word is active, the Shift key is
// held while sending the string. Additionally, the last key is set such that if
// the Repeat Key is pressed next, it produces `repeat_keycode`.
static void process_left_magic(uint16_t keycode, uint8_t mods) { // LMAGIC definitions
    switch (keycode) {
      // right hand
        case  KC_B: { SEND_STRING("r"); } break;
        case  KC_C: { SEND_STRING("n"); } break;
        case  KC_D: { SEND_STRING("g"); } break;
        case  KC_F: { SEND_STRING("o"); } break;
        case  KC_G: { SEND_STRING("m"); } break;
        case  KC_J: { SEND_STRING("u"); } break;
        case  KC_K: { SEND_STRING("e"); } break;
        case  KC_L: { SEND_STRING("e"); } break;
        case  KC_M: { SEND_STRING("p"); } break;
        case  KC_N: { SEND_STRING("ion"); } break;
        case  KC_P: { SEND_STRING("r"); } break;
        case  KC_R: { SEND_STRING("m"); } break;
        case  KC_S: { SEND_STRING("w"); } break;
        case  KC_V: { SEND_STRING("e"); } break;
        case  KC_W: { SEND_STRING("n"); } break;
        case  KC_Z: { SEND_STRING("e"); } break;
        default: tap_code(get_last_keycode()); break;
     }
}
 
static void process_right_magic(uint16_t keycode, uint8_t mods) { // RMAGIC definitions
    switch (keycode) {
      // left hand
        case  KC_Q: { SEND_STRING("u"); } break;
        case  KC_Y: { SEND_STRING("ou"); } break;
        case  KC_O: { SEND_STRING("."); } break;
        case  KC_U: { SEND_STRING("a"); } break;
        case  KC_H: { SEND_STRING("ey"); } break;
        case  KC_I: { SEND_STRING("'"); } break;
        case  KC_E: { SEND_STRING("o"); } break;
        case  KC_A: { SEND_STRING("u"); } break;
        case  KC_X: { SEND_STRING("y"); } break;
        case  KC_T: { SEND_STRING("ion"); } break;
        default: tap_code(get_last_keycode()); break;

    }
}
//---------------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LMAGIC:
      if (record->event.pressed) {
        process_left_magic(get_last_keycode(), get_last_mods());
      }
      return false;
    case RMAGIC:
      if (record->event.pressed) {
        process_right_magic(get_last_keycode(), get_last_mods());
      }
      return false;
    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
