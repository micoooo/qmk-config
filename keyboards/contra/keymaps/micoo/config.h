// Copyright QMK Community
// SPDX-License-Identifier: GPL-2.0+

#pragma once


#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

#define MOUSEKEY_INERTIA
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_TIME_TO_MAX 64
#define MOUSEKEY_MAX_SPEED 40
#define MOUSEKEY_FRICTION  1
#define MOUSEKEY_MOVE_DELTA 1
