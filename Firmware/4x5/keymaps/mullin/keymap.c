#include "small_dactyl.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define QWERTY 0
#define COLEMAK 1
#define SYM 2
#define NUM 3
#define NAV 4



// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[QWERTY] = LAYOUT( \
//  ┌────────┬────────┬────────┬────────┬────────┐                   ┌────────┬────────┬────────┬────────┬────────┐
       KC_Q  ,  KC_W  ,  KC_E  ,  KC_R  ,  KC_T  ,                      KC_Y  ,  KC_U ,  KC_I  ,  KC_O  ,  KC_P  , 
//  ├────────┼────────┼────────┼────────┼────────┤                   ├────────┼────────┼────────┼────────┼────────┤
       KC_A  ,  KC_S  ,  KC_D  ,  KC_F  ,  KC_G  ,                      KC_H  ,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, 
//  ├────────┼────────┼────────┼────────┼────────┼────────┐ ┌────────┼────────┼────────┼────────┼────────┼────────┤
       KC_Z  ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  ,KC_LCTL ,  KC_LALT ,  KC_N  ,  KC_M  , KC_COMM, KC_DOT , KC_SLSH,
//  └────────┴────────┴────────┼────────┼────────┼────────┤ └────────┴────────┴────────┴────────┴────────┴────────┘
                                KC_LGUI , KC_SPC , KC_DEL ,   KC_ENT ,KC_BSPC , KC_LALT
//                             └────────┴────────┴────────┘ └────────┴────────┴────────┘
),

[COLEMAK] = LAYOUT( \
//  ┌────────┬────────┬────────┬────────┬────────┐                   ┌────────┬────────┬────────┬────────┬────────┐
       KC_Q  ,  KC_W  ,  KC_F  ,  KC_P  ,  KC_G  ,                      KC_J  ,  KC_L  ,  KC_U  ,  KC_Y  ,KC_SCLN ,
//  ├────────┼────────┼────────┼────────┼────────┤                   ├────────┼────────┼────────┼────────┼────────┤
       KC_A  ,  KC_R  ,  KC_S  ,  KC_T  ,  KC_D  ,                      KC_H  ,  KC_N  ,  KC_E  ,  KC_I  , KC_O,
//  ├────────┼────────┼────────┼────────┼────────┼────────┐ ┌────────┼────────┼────────┼────────┼────────┼────────┤
       KC_Z  ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  ,KC_LCTL ,  KC_LALT ,  KC_K  ,  KC_M  , KC_COMM, KC_DOT , KC_SLSH,
//  └────────┴────────┴────────┼────────┼────────┼────────┤ └────────┴────────┴────────┴────────┴────────┴────────┘
                                KC_LGUI , KC_SPC , KC_DEL ,   KC_ENT ,KC_BSPC , KC_LALT
//                             └────────┴────────┴────────┘ └────────┴────────┴────────┘
)
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

