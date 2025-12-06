#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _ARROWS,
    _NUMBERS,
    _SYMBOLS
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
        KC_Q, KC_W, KC_E, LT(_ARROWS,KC_R), KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), RALT_T(KC_G), RALT_T(KC_H), RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN),
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
            LT(_SYMBOLS,KC_ESC), LT(_NUMBERS,KC_ENT), KC_SPC, LT(_SYMBOLS,KC_BSPC)
    ),
    [_ARROWS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO,   KC_NO, KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,
                             KC_NO, KC_NO, KC_NO,   KC_NO
    ),
    [_NUMBERS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_1, KC_2, KC_3, KC_MINUS,
        LGUI_T(KC_NO), LALT_T(KC_NO), LSFT_T(KC_NO), LCTL_T(KC_NO), RALT_T(KC_NO), KC_NO,  KC_4, KC_5, KC_6, KC_0,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_7, KC_8, KC_9, KC_0,
                             KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [_SYMBOLS] = LAYOUT(
        KC_1,   KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        LGUI_T(KC_NO), LALT_T(KC_NO), LSFT_T(KC_NO), LCTL_T(KC_NO), RALT_T(KC_NO), RALT_T(KC_MINUS), RCTL_T(KC_LBRC), RSFT_T(KC_RBRC), LALT_T(KC_NO), RGUI_T(KC_NO),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO
    ),
};
// clang-format on
