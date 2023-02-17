// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T,    KC_Y, KC_U, KC_I, KC_O, KC_P, 
        KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G,    KC_H, KC_J, KC_K, KC_L, KC_SCLN,        KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_MUTE,  
        KC_LCTL, KC_LALT,    KC_DEL,  LT(1,KC_BSPC),    LT(2,KC_SPC), KC_LGUI, KC_LEFT, KC_DOWN, KC_RGHT 
            
    ),
    [1] = LAYOUT(
        KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        _______, _______, _______, _______, _______, _______,           KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,          _______,
        _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, KC_BSLS, _______, _______,
        _______, _______,                   _______, _______,           _______,          _______,          _______, _______, _______        
           
    ),
    [2] = LAYOUT(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, 
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             _______, _______, _______, _______, _______,          _______,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,            RGB_TOG, RGB_MODE_FORWARD, _______, _______, _______, _______, _______,
        _______, _______,                   _______, _______,           _______,          _______,          _______, _______, _______
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
