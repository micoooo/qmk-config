#include QMK_KEYBOARD_H
#include "quantum.h"

enum planck_layers {
  _BASE,
  _FKEYS,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum planck_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  NXT_PRV
};

#define FKEYS MO(_FKEYS)
