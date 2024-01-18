/* Copyright 2023 chillKB
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

#pragma once

// Caps Lock indicator LED
#define LED_CAPS_LOCK_PIN GP23
#define LED_PIN_ON_STATE 1      // use pin as source

// Make it easier to enter bootloader mode
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // double tap reset to enter bootloader
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // within time in ms after startup
