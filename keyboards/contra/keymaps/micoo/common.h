#include QMK_KEYBOARD_H
#include "quantum.h"

// Tap Dance declarations
enum {
    NXT_PRV,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _PLOVER,
  _ADJUST
};

enum planck_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  BACKLIT,
  EXT_PLV
};