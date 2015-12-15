#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = { /* Charlie querty */
		{KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T, KC_Y,  KC_U, KC_I,    KC_O,    KC_P,    KC_BSPC},
		{KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,  KC_G, KC_H,  KC_J, KC_K,    KC_L,    KC_SCLN, KC_ENT},
		{KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B, KC_N,  KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT},
		{KC_FN3,  KC_LCTL, KC_LALT, KC_LGUI, KC_FN1, KC_SPC,  KC_SPC, KC_FN2,  KC_RGUI, KC_RALT, KC_RCTL, KC_FN3}
	},
	[1] = { /* Charlie RAISE */
		{KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS},
		{KC_TRNS, KC_FN4,  KC_FN5,  KC_FN6,  KC_FN7,  KC_FN8,  KC_FN9,  KC_FN10, KC_FN11, KC_FN12, KC_FN13, KC_TRNS},
		{KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
	},
	[2] = { /* Charlie LOWER */
		{KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT},
		{KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
		{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
	}		
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [2] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [3] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB), // switch windows
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_1), // !
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_2), // @
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_3), // #
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_4), // $
    [8] = ACTION_MODS_KEY(MOD_LSFT, KC_5), // %
    [9] = ACTION_MODS_KEY(MOD_LSFT, KC_6), // ^
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_7), // &
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_8), // *
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_9), // (
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_0), // )
};
