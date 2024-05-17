/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
    _LAYER0,
    _LAYER1,
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _LAYER6,
    _LAYER7,
    _LAYER8,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ____ KC_TRANSPARENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT_ortho_4x12_1x2uC(
        //
        KC_ESCAPE, KC_QUOTE, KC_COMMA, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC,
        //
        MO(6), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_ENTER,
        //
        KC_LEFT_SHIFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RIGHT_SHIFT,
        //
        KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_TAB, MO(3), KC_SPACE, /*_*/ MO(4), KC_GRAVE, KC_RIGHT_ALT, KC_RIGHT_GUI, KC_RIGHT_CTRL),

    [_LAYER1] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, ____,
        //
        ____, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, ____,
        //
        ____, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, ____,
        //
        ____, ____, ____, ____, ____, ____, /*_*/ ____, ____, ____, ____, ____),

    [_BASE] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, LOWER, ____, /*_*/ RAISE, ____, ____, ____, ____),

    [_LOWER] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, ____,
        //
        ____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_SLASH,
        //
        ____, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ____, ____, KC_LBRC, KC_RBRC, KC_MINUS,
        //
        MO(8), ____, ____, ____, ____, ____, /*_*/ LM(4, MOD_LSFT), ____, ____, ____, MO(8)),

    [_RAISE] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, ____,
        //
        ____, KC_INSERT, ____, KC_MS_WH_UP, ____, KC_PAGE_UP, KC_MS_WH_UP, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_NO, KC_BSLS,
        //
        ____, ____, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT, KC_PGDN, KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, ____, ____,
        //
        ____, ____, KC_ACL0, ____, ____, ____, /*_*/ ____, ____, ____, KC_ACL0, ____),

    [_ADJUST] = LAYOUT_ortho_4x12_1x2uC(
        //
        QK_BOOTLOADER, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, RGB_VAI, RGB_VAD, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, RGB_HUD, RGB_HUI, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, /*_*/ ____, RGB_SAD, RGB_SAI, ____, ____),

    [_LAYER6] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, TO(2), TO(1), KC_END, KC_NO, KC_NO, KC_NO, KC_PAGE_UP, KC_NO, KC_PGDN, KC_NO, KC_DELETE,
        //
        ____, KC_HOME, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQUAL,
        //
        ____, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, LCTL(KC_C), LCTL(KC_V), KC_LEFT, KC_DOWN, KC_AUDIO_MUTE, KC_LEFT, KC_DOWN, KC_RIGHT, ____,
        //
        ____, ____, ____, ____, MO(7), KC_MEDIA_PLAY_PAUSE, /*_*/ KC_INSERT, ____, ____, ____, ____),

    [_LAYER7] = LAYOUT_ortho_4x12_1x2uC(
        //
        ____, ____, ____, ____, ____, ____, KC_KP_ASTERISK, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_SLASH, ____,
        //
        ____, ____, ____, ____, ____, ____, KC_KP_MINUS, KC_KP_4, KC_KP_5, KC_KP_6, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, KC_KP_PLUS, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_DOT, ____,
        //
        ____, ____, ____, ____, ____, ____, /*_*/ KC_KP_0, KC_KP_0, KC_KP_ENTER, ____, ____),

    [_LAYER8] = LAYOUT_ortho_4x12_1x2uC(
        //
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        //
        ____, ____, ____, ____, ____, ____, /*_*/ ____, ____, ____, ____, ____),
};

uint16_t layer_state_set_user(uint16_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
