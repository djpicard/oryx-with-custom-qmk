#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(5, KC_6)
#define DUAL_FUNC_1 LT(6, KC_F8)
#define DUAL_FUNC_2 LT(13, KC_R)
#define DUAL_FUNC_3 LT(12, KC_F21)
#define DUAL_FUNC_4 LT(6, KC_F20)
#define DUAL_FUNC_5 LT(7, KC_X)
#define DUAL_FUNC_6 LT(4, KC_F23)
#define DUAL_FUNC_7 LT(5, KC_F13)
#define DUAL_FUNC_8 LT(10, KC_C)
#define DUAL_FUNC_9 LT(6, KC_F24)

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
    KC_TAB,         KC_B,           KC_W,           KC_D,           KC_L,           KC_SCLN,                                        KC_SLASH,       KC_F,           KC_O,           KC_U,           KC_J,           KC_MINUS,       
    KC_NO,          MT(MOD_LCTL, KC_C),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_T),MT(MOD_LALT, KC_R),LT(3, KC_X),                                    LT(2, KC_Q),    MT(MOD_RALT, KC_N),MT(MOD_RGUI, KC_A),MT(MOD_RSFT, KC_I),MT(MOD_RCTL, KC_H),KC_QUOTE,       
    KC_BSLS,        KC_V,           KC_Y,           KC_G,           KC_M,           KC_Z,                                           KC_EQUAL,       KC_P,           KC_DOT,         KC_COMMA,       KC_K,           KC_TRANSPARENT, 
                                                    KC_E,           KC_ENTER,                                       KC_BSPC,        LT(4, KC_SPACE)
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

    [1] = { {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {215,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {215,218,204}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {45,252,255}, {215,218,204}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {131,255,255}, {88,218,204}, {88,218,204}, {88,218,204}, {88,218,204}, {21,255,255}, {21,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,255,255}, {215,218,204}, {215,218,204} },

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


