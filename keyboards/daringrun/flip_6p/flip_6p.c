/* SPDX-License-Identifier: GPL-2.0-or-later */
#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i <= led_max; i++) {
            rgb_matrix_set_color(i, RGB_RED);
        }
    }
	return false;
}
#endif
