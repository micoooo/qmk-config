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
