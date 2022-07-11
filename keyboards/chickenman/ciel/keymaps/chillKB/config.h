/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Unicode Modes
 *
 * Defines input modes to be used for unicode inputs. UC_WINC is for WinCompose on
 * Windows. Keycodes UC_MOD and UC_RMOD cycle through these modes and UC_M_XX assigns
 * a specific mode.
 *
 * The unicode key is the key used by the OS to trigger unicode input.
 */
#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC, UC_LNX
#define UNICODE_KEY_WINC KC_F13
// #define UNICODE_KEY_MAC KC_LALT
// #define UNICODE_KEY_LNX LCTL(LSFT(KC_U))
