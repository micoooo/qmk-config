#include QMK_KEYBOARD_H
#include "quantum.h"

enum {
  NXT_PRV
};

enum planck_layers {
  _BASE,
  _FKEYS,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum planck_keycodes {
  LOWER = SAFE_RANGE,
  RAISE
};

#define FKEYS MO(_FKEYS)

#define CUT   LGUI(KC_X)
#define COPY  LGUI(KC_C)
#define PASTE LGUI(KC_V)

// CleanShot Macros
#define CAP_IMG LGUI(LSFT(KC_4))        // Capture portion of screen
#define CAP_MOV LGUI(LSFT(KC_5))        // Capture video of screen
