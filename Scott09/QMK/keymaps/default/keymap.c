// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────────────┬───────────┬───────────┐
     * │ Sideboard  │ Roll Dice │ Draw Hand │ 
     * ├────────────┼───────────┼───────────┤
     * │ Life Total │ Draw Card │ Untap     │ 
     * ├────────────┼───────────┼───────────┤
     * │ set P/T    │ minus 1   │ plus 1    │ 
     * └────────────┴───────────┴───────────┘
     */
    [0] = LAYOUT_ortho_3x3(
        LCTL(KC_F3),   LCTL(KC_I),   LCTL(KC_E),
        LCTL(KC_L),   LCTL(KC_D),   LCTL(KC_U),
        LCTL(KC_P),   KC_F11,   KC_F12
    )
};
