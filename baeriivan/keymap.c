#include QMK_KEYBOARD_H
#include "unicode_map.h"

enum layers {
    _BASE = 0,
    _FN,
    _ACCENTS,
    // _DIACR,
    _GAMING,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MAGICAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, MO(_ACCENTS),   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT,                   MOD_SPC, MOD_SPC, MOD_SPC,          KC_RALT, TG(_GAMING),   XXXXXXX, MO(_FN),   KC_RCTL
    ),

    [_FN] = LAYOUT(
        KC_ESC,  KC_MUTE, KC_VOLD, KC_VOLU, KC_F4  , KC_BRID, KC_BRIU, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, UC_NEXT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______,                    _______, _______, _______,          _______, _______, XXXXXXX, _______, _______
    ),

    [_ACCENTS] = LAYOUT(
        KC_GRV , KC_F1  , KC_F2   , KC_F3   , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8   , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_PSCR,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, UC_NEXT,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______,                    _______, _______, _______,          _______, _______, XXXXXXX, _______, _______
    ),
    // [_ACCENTS] = LAYOUT(
    //     KC_GRV , KC_F1  , KC_F2   , KC_F3   , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8   , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_PSCR,
    //     _______, E_CIRC, E_GRAV, E_ACUT, _______, _______, _______, U_ACUT, I_ACUT, O_ACUT, _______, _______, _______, _______,
    //     _______, A_ACUT, _______, D_STRK, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
    //     _______, _______, KC_HOME, _______, C_CDIL, _______, _______, _______, MICRO, _______, _______, _______, _______, XXXXXXX,
    //     _______, _______, _______,                    _______, _______, _______,           _______, _______, XXXXXXX, _______, _______
    // ),

    // [_DIACR] = LAYOUT(
    //     DEGREE, _______, _______, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX, KC_DEL,
    //     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, UML_DIAER, CIR_CIRC, GRA_GRAV, _______, _______, ACU_ACUT, DAC_DOUBLE, CAR_CARON, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,
    //     _______, _______, _______,                    _______, _______, _______,           _______, _______, XXXXXXX, _______, _______
    // ),

    [_GAMING] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,  KC_SPC,  KC_SPC,                   KC_RALT, _______, XXXXXXX, _______, KC_RCTL
    )

};
