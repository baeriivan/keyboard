#pragma once

#include "baeriivan.h"

typedef enum{
    SINGLE_TAP,
    SINGLE_HOLD,
    DOUBLE_SINGLE_TAP
} td_state_t;

enum {
    x_CBR,
    x_PRN,
    x_BRC,
    CC_CV,
    UNI_W_L
};

#define xCBR TD(x_CBR)
#define xPRN TD(x_PRN)
#define xBRC TD(x_BRC)
#define CCCV TD(CC_CV)
#define UNIWL TD(UNI_W_L)

int cur_dance (qk_tap_dance_state_t *state);
void x_CBR_finished (qk_tap_dance_state_t *state, void *user_data);
void x_PRN_finished (qk_tap_dance_state_t *state, void *user_data);
void x_BRC_finished (qk_tap_dance_state_t *state, void *user_data);
void CC_CV_finished (qk_tap_dance_state_t *state, void *user_data);
void UNI_W_L_finished (qk_tap_dance_state_t *state, void *user_data);
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record);
