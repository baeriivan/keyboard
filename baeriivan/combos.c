#include "combos.h"
#include "action_tapping.h" // necessary for action_tapping_process


uint8_t mod_state;
//new combo
//Back in Browser folder
const uint16_t PROGMEM H_J_COMBO[] = {KC_H,HOME_J,COMBO_END};

//old combo
const uint16_t PROGMEM J_K_COMBO[] = {HOME_J, HOME_K, COMBO_END};
const uint16_t PROGMEM K_L_COMBO[] = {HOME_K, HOME_L, COMBO_END};
const uint16_t PROGMEM M_COMMA_COMBO[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM COMMA_DOT_COMBO[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM F_D_COMBO[] = {HOME_F, HOME_D, COMBO_END};
const uint16_t PROGMEM D_S_COMBO[] = {HOME_D, HOME_S, COMBO_END};
const uint16_t PROGMEM C_V_COMBO[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM X_C_COMBO[] = {KC_X, KC_C, COMBO_END};

const uint16_t PROGMEM DOT_SLASH_COMBO[] = {KC_DOT, KC_SLASH, COMBO_END};
enum combo_events {
    HJ_BACK,
    JK_SPC,
    KL_ENT,
    MCOMMA_QUOT,
    COMMADOT_MINS,
    FD_TAB,
    DS_ESC,
    CV_AMPR,
    XC_TILD,
    DOTSLSH_BSLS,
    COMBO_LENGTH
};


int COMBO_LEN = COMBO_LENGTH;



combo_t key_combos[COMBO_COUNT] = {
    [HJ_BACK] = COMBO_ACTION(H_J_COMBO),
    [JK_SPC] = COMBO_ACTION(J_K_COMBO),
    [KL_ENT] = COMBO_ACTION(K_L_COMBO),
    [MCOMMA_QUOT] = COMBO_ACTION(M_COMMA_COMBO),
    [COMMADOT_MINS] = COMBO_ACTION(COMMA_DOT_COMBO),
    [FD_TAB] = COMBO_ACTION(F_D_COMBO),
    [DS_ESC] = COMBO_ACTION(D_S_COMBO),
    [CV_AMPR] = COMBO_ACTION(C_V_COMBO),
    [XC_TILD] = COMBO_ACTION(X_C_COMBO),
    [DOTSLSH_BSLS] = COMBO_ACTION(DOT_SLASH_COMBO),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    // Process mod-taps before the combo is fired,
    // this helps making modifier-aware combos, 
    // like UY_PRN or F21N_NOT, more fluid
    // when I use them with home row mods.
    action_tapping_process((keyrecord_t){});
    mod_state = get_mods();
    switch(combo_index) {
        case HJ_BACK:
            if (pressed) {
                //tap_code16(KC_BSPC);
                tap_code16(A(KC_LEFT));
            }
        break;
        case JK_SPC:
            if (pressed) {
                //tap_code16(KC_BSPC);
                tap_code16(KC_SPC);
            }
        break;

        case KL_ENT:
            if (pressed) {
                tap_code16(KC_ENT);
            }
        break;

        case MCOMMA_QUOT:
            if (pressed) {
                tap_code16(KC_QUOT);
            }
        break;

        case COMMADOT_MINS:
            if (pressed) {
                tap_code16(KC_MINS);
            }
        break;

        case FD_TAB:
            if (pressed) {
                tap_code16(KC_TAB);
            }
        break;

        case DS_ESC:
            if (pressed) {
                tap_code16(KC_ESC);
            }
        break;

        case CV_AMPR:
            if (pressed) {
                tap_code16(KC_AMPR);
            }
        break;

        case XC_TILD:
            if (pressed) {
                tap_code16(KC_TILD);
            }
        break;
        case DOTSLSH_BSLS:
            if (pressed) {
                tap_code16(KC_BSLS);
            }
        break;

    }
};
