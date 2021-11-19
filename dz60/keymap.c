#include QMK_KEYBOARD_H
#include "baeriivan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MAGICAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, MO(2),   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT,                   MOD_SPC, MOD_SPC, MOD_SPC,          KC_RALT, MO(1),   XXXXXXX, MO(1),   KC_RCTL
    ),

    LAYOUT(
        KC_GESC, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_F4  , KC_BRID, KC_BRIU, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_DEL,
        _______, RGB_TOG , RGB_MOD    , RGB_HUI  , RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, RESET  ,
        _______, _______ , _______    , _______  , _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______ , _______    , _______  , BL_DEC , BL_TOGG, BL_INC , BL_STEP, _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______ , _______    ,                     _______, _______, _______,          _______, _______, XXXXXXX, _______, _______
    ),

    LAYOUT(
        KC_GRV , KC_F1  , KC_F2   , KC_F3   , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8   , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_DEL,
        _______, E_CIRC , E_GRAV  , E_ACUT  , _______, _______, _______, U_ACUT , I_ACUT  , O_ACUT , _______, _______, _______, _______,
        _______, A_ACUT , _______ , _______ , _______, _______, KC_LEFT, KC_DOWN, KC_UP   , KC_RGHT, _______, _______, _______,
        _______, _______, KC_HOME , _______ , C_CDIL , _______, _______, _______, MICRO   , _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______ ,                    _______, _______, _______,           _______, _______, XXXXXXX, _______, _______
    ),

    LAYOUT(
        KC_GRV , UC_M_LN, UC_M_WC , KC_F3   , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8   , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_DEL,
        _______, _______, _______ , _______ , _______, _______, _______, _______, _______ , _______, _______, _______, _______, _______,
        _______, _______, __UML   , __CIR   , __GRAV , _______, _______, __ACUT , __DACU  , __CARO , _______, _______, _______,
        _______, _______, _______ , _______ , _______, _______, _______, _______, _______ , _______, _______, _______, _______, XXXXXXX,
        _______, _______, _______ ,                    _______, _______, _______,           _______, _______, XXXXXXX, _______, _______
    )
};

__attribute__ ((weak))
void matrix_init_keymap(void) {}

void matrix_init_user(void) {
    set_unicode_input_mode(UC_LNX);

    matrix_init_keymap();
}

