// v DO NOT MODIFY

#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "../adaptive_keys.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_adaptive_swap(keycode, record)) { return false; }
    if (!process_adaptive_magic(keycode, record)) { return false; }
    return true;
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
    if (!remember_last_key_adaptive(keycode, record, remembered_mods)) { return false; }
    return true;
}

// ^ DO NOT MODIFY


// x k l c p z y o h ,
//  n r t d m ' s a e i
//   b v j g w q f u ; .
//               *

// EXAMPLE KEYMAP
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_X, KC_K, KC_L, KC_C, KC_P, KC_Z, KC_Y, KC_O, KC_H, KC_COMM, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_N, KC_T, KC_R, KC_D, KC_M, KC_QUOT, KC_S, KC_A, KC_E, KC_I, KC_SLSH, KC_ENT, OS_LSFT, KC_B, KC_V, KC_J, KC_G, KC_W, KC_Q, KC_F, KC_U, KC_SCLN, KC_DOT, OS_RSFT, KC_LCTL, KC_LALT, KC_NO, KC_SPC, KC_NO, KC_NO, KC_ADAPTIVE_MAGIC, KC_NO, KC_RALT, KC_RCTL, KC_RGUI)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
