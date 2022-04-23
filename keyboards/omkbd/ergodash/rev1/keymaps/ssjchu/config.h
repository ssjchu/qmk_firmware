/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
// #define EE_HANDS
#define MASTER_LEFT
// #define MASTER_RIGHT

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define RGBLIGHT_SLEEP
#define TAPPING_TOGGLE 2
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 3
#define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_DEFAULT_VAL 100
// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
