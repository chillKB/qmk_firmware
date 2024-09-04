#include QMK_KEYBOARD_H

enum layers {
    _WIN = 0,
    _WIN_FN,
    _MAC,
    _MAC_FN
};

enum custom_keycodes {
  TO_MAC = SAFE_RANGE,
  TO_WIN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]= {
   /* LAYOUT:
    * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┬───┬───┬───┐
    * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │Bsp│ │Num│ / │ * │ - │
    * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤ ├───┼───┼───┼───┤
    * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │ 7 │ 8 │ 9 │   │
    * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ ├───┼───┼───┤ + │
    * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │ │ 4 │ 5 │ 6 │   │
    * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤ ├───┼───┼───┼───┤
    * │Shft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │Fn │ │ 1 │ 2 │ 3 │   │
    * ├────┴┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┤ ├───┴───┼───┤Ent│
    * │Ctrl │GUI│ Alt │                           │ Alt │GUI│Ctrl │ │   0   │ . │   │
    * └─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘ └───────┴───┴───┘
    */

    [_WIN]=LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSLS, KC_BSPC,   KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,             KC_P4,   KC_P5,   KC_P6,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT,  MO(1),    KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LWIN, KC_LALT, KC_SPC,                                                                           MO(1),    KC_RWIN,  KC_RCTL,           KC_P0,   KC_PDOT
    ),

    [_WIN_FN] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_MSEL, KC_VOLD, KC_VOLU,  KC_MUTE, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,   KC_MAIL, KC_WHOM, KC_CALC, KC_WSCH, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI,   RGB_VAD, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO_MAC,    XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, GU_TOGG,  XXXXXXX, XXXXXXX,                                                                            XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX
    ),

    [_MAC] = LAYOUT(
        EE_CLR,  KC_1,     KC_2,      KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,  KC_9,     KC_0,      KC_MINS,   KC_EQL,   KC_BSLS,  KC_BSPC, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,     KC_W,      KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,  KC_O,     KC_P,      KC_LBRC,   KC_RBRC,  KC_BSLS,           KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, KC_A,     KC_S,      KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,  KC_L,     KC_SCLN,   KC_QUOT,             KC_ENT,            KC_P4,   KC_P5,   KC_P6,
        KC_LSFT, KC_BSLS,  KC_Z,      KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,  KC_COMM,  KC_DOT,    KC_SLSH,             KC_RSFT,  MO(3),   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LOPT,  KC_LCMD, KC_SPC,                                                                          KC_RCMD,  KC_ROPT,  KC_RCTL,          KC_P0,   KC_PDOT
    ),

    [_MAC_FN] = LAYOUT(
        KC_GRV,  KC_BRID, KC_BRIU, KC_MCTL,  KC_LPAD, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,          XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX,XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, TO_WIN,  XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                                                           XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
switch (keycode) {
    case TO_MAC:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_MAC);
        }
        return false;
    case TO_WIN:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_WIN);
        }
        return false;
    default:
        return true;
    }
}
