#include "tapdance.h"

// create a global instance of the tapdance state type
static td_state_t td_state;
//
// function to track the current tapdance state

// // track the tapdance state to return
int cur_dance (qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) {
            return SINGLE_TAP;
        } else {
            return SINGLE_HOLD;
        }
    }
    if (state->count == 2) {
        return DOUBLE_SINGLE_TAP;
    }
    else {
        return 3; // any number higher than the maximum state value you return above     
    }                     
};



void x_CBR_finished (qk_tap_dance_state_t *state, void *user_data) {
td_state = cur_dance(state);
switch (td_state) {
   case SINGLE_TAP:
      tap_code16(KC_LCBR);
        break;
   case SINGLE_HOLD:
      SEND_STRING("{"SS_TAP(X_ENTER)SS_TAP(X_ENTER)"}"SS_TAP(X_UP));
        break;
    case DOUBLE_SINGLE_TAP:
      SEND_STRING("{}"SS_TAP(X_LEFT));
 }
};


void x_PRN_finished (qk_tap_dance_state_t *state, void *user_data) {
td_state = cur_dance(state);
switch (td_state) {
   case SINGLE_TAP:
   case SINGLE_HOLD:
      tap_code16(KC_LPRN);
        break;
    case DOUBLE_SINGLE_TAP:
      SEND_STRING("()"SS_TAP(X_LEFT));
 }
};


void x_BRC_finished (qk_tap_dance_state_t *state, void *user_data) {
td_state = cur_dance(state);
switch (td_state) {
   case SINGLE_TAP:
   case SINGLE_HOLD:
      tap_code16(KC_LBRC);
        break;
    case DOUBLE_SINGLE_TAP:
      SEND_STRING("[]"SS_TAP(X_LEFT));
 }
};


// `finished` function for each tapdance keycode
void CC_CV_finished (qk_tap_dance_state_t *state, void *user_data) {
  td_state = cur_dance(state);
  switch (td_state) {
    case SINGLE_TAP:
      tap_code16(C(KC_C));
      break;
    case SINGLE_HOLD:
      tap_code16(C(KC_V));
      break;
    case DOUBLE_SINGLE_TAP:
      break;
  }
};

void UNI_W_L_finished (qk_tap_dance_state_t *state, void *user_data) {
  td_state = cur_dance(state);
  switch (td_state) {
    case SINGLE_TAP:
      /* tap_code16(UC_M_WC); */
      set_unicode_input_mode(UC_WINC);
      break;
    case DOUBLE_SINGLE_TAP:
      //tap_code16(UC_M_LN);
      set_unicode_input_mode(UC_LNX);
    break;
    default: break;
  }
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [x_CBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_CBR_finished, NULL),
    [x_PRN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_PRN_finished, NULL),
    [x_BRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_BRC_finished, NULL),
    [CC_CV] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, CC_CV_finished, NULL),
    [UNI_W_L] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, UNI_W_L_finished, NULL),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_A:
            return TAPPING_TERM + 50;
        case HOME_S:
            return TAPPING_TERM + 50;
        /* case HOME_D: */
        /*     return TAPPING_TERM - 20; */
         case HOME_F:
             return TAPPING_TERM - 20; 
        /* case HOME_G: */
        /*     return TAPPING_TERM - 20; */
        /* case HOME_H: */
        /*     return TAPPING_TERM - 20; */
        case HOME_J: 
            return TAPPING_TERM - 20; 
        case HOME_K: 
            return TAPPING_TERM - 20; 
        case HOME_L:
            return TAPPING_TERM + 50;
        case HOME_SCLN:
            return TAPPING_TERM + 50;
        case xCBR:
            return 2*TAPPING_TERM;
        case xPRN:
            return 2*TAPPING_TERM;
        case xBRC:
            return 2*TAPPING_TERM;
        default:
            return TAPPING_TERM;
    }
}

