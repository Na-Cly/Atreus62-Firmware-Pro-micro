#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0, BSPC, \
             TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSLS, \
             FN0,  A,   S,   D,   FN1,   G,   H,   FN2,   K,   L,   SCLN, QUOT, \
             LSFT,  Z,   X,   C,   V,   B,   N,   FN3,   COMM,   DOT,   SLSH, RSFT, \
             LCTL,  LGUI,   LALT,  GRV,   SPC,   BSPC,   SPC,  MINS,   EQL, LBRC, RBRC, ENT, \
             DELETE, ENT),

	//HOLDING F
     KEYMAP(F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10, F11, F12, \
             NO,  NO,   NO,   NO,   NO,   NO,   NO,  NO,   INS,   NO,   LBRC,   RBRC, \
             NO,  NO,   NO,   NO,   TRNS,   NO,   NO,  LEFT,   DOWN,   UP,   RGHT,   NO, \
             NO,  NO,   NO,   NO,   NO,   NO,   PGUP,  HOME,   END,   NO,   NO,   NO, \
             NO,  NO,   NO,   NO,   NO,   NO,   PGDN,  NO,   NO,   NO,   LBRC,   RBRC, \
             NO, LSFT),
	//HOLDING J
     KEYMAP(MUTE,   VOLD,   VOLU,   F4,   F5,   F6,   F7,   F8,   F9,  F10, F11, F12, \
             NO,  MPRV,   MPLY,   MNXT,   NO,   NO,   NO,  NO,   NO,   NO,   NO,   NO, \
             NO,  NO,   NO,   WBAK,   WFWD,   NO,   NO,  TRNS,   NO,   NO,   NO,   NO, \
             NO,  NO,   NO,   NO,   NO,   NO,   NO,  NO,   NO,   NO,   NO,   NO, \
             NO,  NO,   NO,   CALC,   NO,   NO,   NO,  NO,   NO,   NO,   NO,   NO, \
             NO, NO),
             //HOLDING M
                  KEYMAP(F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10, F11, F12, \
                          NO,  NO,   MS_U,   NO,   NO,   NO,   NO,  NO,   NO,   NO,   NO,   NO, \
                          NO,  MS_L,   MS_D,   MS_R, NO,  NO,   NO,  NO,   NO,   NO,   NO,   NO,\
                          NO,  NO,   NO,   NO,   NO,   NO,   NO,  TRNS,   NO,   NO,   NO,   NO, \
                          NO,  NO,   NO,   NO,   NO,   BTN1,   NO,  NO,   NO,   NO,   NO,   NO, \
                          BTN2, NO),



};
const action_t PROGMEM fn_actions[] = {
    ACTION_MODS_TAP_KEY(MOD_LCTL,KC_CAPS),
    ACTION_LAYER_TAP_KEY(1,KC_F),
    ACTION_LAYER_TAP_KEY(2,KC_J),
    ACTION_LAYER_TAP_KEY(3, KC_M),


};
