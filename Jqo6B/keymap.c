#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  LMAGIC = SAFE_RANGE,
  RMAGIC,
};



#define DUAL_FUNC_0 LT(9, KC_F18)
#define DUAL_FUNC_1 LT(14, KC_F17)
#define DUAL_FUNC_2 LT(14, KC_F4)
#define DUAL_FUNC_3 LT(7, KC_F15)
#define DUAL_FUNC_4 LT(7, KC_F20)
#define DUAL_FUNC_5 LT(15, KC_F21)
#define DUAL_FUNC_6 LT(14, KC_L)
#define DUAL_FUNC_7 LT(10, KC_3)
#define DUAL_FUNC_8 LT(13, KC_F21)
#define DUAL_FUNC_9 LT(3, KC_F23)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,                                    DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_D,           KC_F,           KC_K,                                           KC_J,           KC_U,           KC_R,           KC_L,           KC_SCLN,        KC_BSLS,        
    KC_MINUS,       MT(MOD_LCTL, KC_A),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_E),MT(MOD_LALT, KC_T),LT(3, KC_G),                                    LT(2, KC_Y),    MT(MOD_RALT, KC_N),MT(MOD_RGUI, KC_I),MT(MOD_RSFT, KC_O),MT(MOD_RCTL, KC_H),KC_SLASH,       
    KC_EQUAL,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_P,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUOTE,       TG(1),          
                                                    KC_SPACE,       KC_ENTER,                                       KC_BSPC,        LT(4, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_TAB,         KC_Q,           KC_Y,           KC_O,           KC_U,           KC_MINUS,                                       KC_J,           KC_G,           KC_N,           KC_F,           KC_K,           KC_Z,           
    KC_ENTER,       MT(MOD_LCTL, KC_H),MT(MOD_LSFT, KC_I),MT(MOD_LGUI, KC_E),MT(MOD_LALT, KC_A),LT(3, KC_DOT),                                  LT(2, KC_P),    MT(MOD_RALT, KC_D),MT(MOD_RGUI, KC_R),MT(MOD_RSFT, KC_S),MT(MOD_RCTL, KC_L),KC_BSPC,        
    KC_EQUAL,       KC_X,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_SCLN,                                        KC_B,           KC_C,           KC_M,           KC_W,           KC_V,           KC_TRANSPARENT, 
                                                    KC_T,           LMAGIC,                                          RMAGIC,          LT(4, KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PAUSE,       KC_FIND,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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
    [0] = { {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {88,218,204}, {21,255,255}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {215,218,204}, {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {88,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {215,218,204}, {215,218,204} },

    [1] = { {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {215,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,255,255}, {215,218,204}, {215,218,204} },

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


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  if (record->event.pressed) {
  switch (keycode) {
        case LMAGIC: { process_left_magic(get_last_keycode(), get_last_mods()); set_last_keycode(KC_SPC); } return false;
        case RMAGIC: { process_right_magic(get_last_keycode(), get_last_mods()); set_last_keycode(KC_SPC); } return false;
        }
    }

  switch (keycode) {

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

// ARCANE Key setup
bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
      switch (keycode) {
        case CW_TOGG:
        case KC_ESC:
        case KC_BSPC:
        case KC_DEL:

        case LMAGIC:
        case RMAGIC:
           return false;  // Magic keys will ignore the above keycodes.
      }
   return true;  // Other keys can be repeated.
}

// An enhanced version of SEND_STRING: if Caps Word is active, the Shift key is
// held while sending the string. Additionally, the last key is set such that if
// the Repeat Key is pressed next, it produces `repeat_keycode`.
#define MAGIC_STRING(str, repeat_keycode) \
        magic_send_string_P(PSTR(str), (repeat_keycode))
 
static void magic_send_string_P(const char* str, uint16_t repeat_keycode) {
    uint8_t saved_mods = 0;
 
  if (is_caps_word_on()) { // If Caps Word is on, save the mods and hold Shift.
    saved_mods = get_mods();
    register_mods(MOD_BIT(KC_LSFT));
  }
 
  send_string_with_delay_P(str, TAP_CODE_DELAY);  // Send the string.
  set_last_keycode(repeat_keycode); // 2024-03-09 Disabled sending of string for mag-rep / rep-mag consistency.
 
  // If Caps Word is on, restore the mods.
  if (is_caps_word_on()) {
    set_mods(saved_mods);
  }
}

static void process_left_magic(uint16_t keycode, uint8_t mods) { // LMAGIC definitions
    switch (keycode) {
        case HRL_A: { MAGIC_STRING("a",         KC_SPC); } break;
        case  KC_B: { MAGIC_STRING("ecause",    KC_NO); } break;
        case  KC_C: { MAGIC_STRING("an",        KC_NO); } break;
      //case HRL_D: { MAGIC_STRING("d",         KC_NO); } break;
        case HRM_E: { MAGIC_STRING("e",         KC_NO); } break;
      //case  KC_F: { MAGIC_STRING("f",         KC_NO); } break;
        case  KC_G: { MAGIC_STRING("eneral",    KC_NO); } break;
        case HRM_H: { MAGIC_STRING("h",         KC_NO); } break;
        case HRM_I: { MAGIC_STRING("i",         KC_NO); } break;
        case  KC_J: { MAGIC_STRING("ust",       KC_NO); } break;
      //case  KC_K: { MAGIC_STRING("k",         KC_NO); } break;
      //case HRM_L: { MAGIC_STRING("l",         KC_NO); } break;
        case  KC_M: { MAGIC_STRING("ent",       KC_NO); } break;
        case  KC_N: { MAGIC_STRING("ion",       KC_NO); } break;
        case  KC_O: { MAGIC_STRING("o",         KC_NO); } break;
        case  KC_P: { MAGIC_STRING("retty",     KC_NO); } break;
        case  KC_Q: { MAGIC_STRING("q",         KC_NO); } break;
      //case HRM_R: { MAGIC_STRING("r",         KC_NO); } break;
      //case HRM_S: { MAGIC_STRING("s",         KC_NO); } break;
        case  KC_T: { MAGIC_STRING("t",         KC_NO); } break;
        case  KC_U: { MAGIC_STRING("u",         KC_NO); } break;
        case HRM_V: { MAGIC_STRING("azjorfia",  KC_NO); } break;
        case  KC_W: { MAGIC_STRING("hich",      KC_NO); } break;
        case HRM_X: { MAGIC_STRING("x",         KC_NO); } break;
        case  KC_Y: { MAGIC_STRING("y",         KC_NO); } break;
        case  KC_Z: { MAGIC_STRING("z",         KC_NO); } break;
 
        case KC_COMM: { MAGIC_STRING(" and",    KC_NO); } break;
    }
}
 
static void process_right_magic(uint16_t keycode, uint8_t mods) { // RMAGIC definitions
    switch (keycode) {
        case HRL_A: { MAGIC_STRING("nd",        KC_SPC); } break;
        case  KC_B: { MAGIC_STRING("b",         KC_NO); } break;
        case  KC_C: { MAGIC_STRING("c",         KC_NO); } break;
        case HRL_D: { MAGIC_STRING("d",         KC_NO); } break;
      //case HRM_E: { MAGIC_STRING("e",         KC_NO); } break;
        case  KC_F: { MAGIC_STRING("f",         KC_NO); } break;
        case  KC_G: { MAGIC_STRING("g",         KC_NO); } break;
      //case HRM_H: { MAGIC_STRING("h",         KC_NO); } break;
        case HRM_I: { MAGIC_STRING("on",        KC_NO); } break;
        case  KC_J: { MAGIC_STRING("j",         KC_NO); } break;
        case  KC_K: { MAGIC_STRING("k",         KC_NO); } break;
        case HRM_L: { MAGIC_STRING("l",         KC_NO); } break;
        case  KC_M: { MAGIC_STRING("m",         KC_NO); } break;
        case  KC_N: { MAGIC_STRING("n",         KC_NO); } break;
      //case  KC_O: { MAGIC_STRING("o",         KC_NO); } break;
        case  KC_P: { MAGIC_STRING("p",         KC_NO); } break;
        case  KC_Q: { MAGIC_STRING("ueen",      KC_NO); } break;
        case HRM_R: { MAGIC_STRING("r",         KC_NO); } break;
        case HRM_S: { MAGIC_STRING("s",         KC_NO); } break;
      //case  KC_T: { MAGIC_STRING("t",         KC_NO); } break;
      //case  KC_U: { MAGIC_STRING("u",         KC_NO); } break;
        case HRM_V: { MAGIC_STRING("v",         KC_NO); } break;
        case  KC_W: { MAGIC_STRING("w",         KC_NO); } break;
        case HRM_X: { MAGIC_STRING("ex",        KC_NO); } break;
        case  KC_Y: { MAGIC_STRING("eah",       KC_NO); } break;
      //case  KC_Z: { MAGIC_STRING("z",         KC_NO); } break;
 
        case KC_COMM: { MAGIC_STRING(" but",    KC_NO); } break;
        case  KC_SPC: { MAGIC_STRING("the",     KC_NO); } break;
        case KC_ASTR: { MAGIC_STRING("*N**or**dr**as**s**i**l**", KC_NO); } break;
    }
}