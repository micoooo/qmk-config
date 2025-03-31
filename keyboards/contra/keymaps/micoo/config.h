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
#define MOUSEKEY_DELAY 150
#define MOUSEKEY_INTERVAL 6
#define MOUSEKEY_TIME_TO_MAX 82
#define MOUSEKEY_MAX_SPEED 15
#define MOUSEKEY_FRICTION  1
#define MOUSEKEY_MOVE_DELTA 1
