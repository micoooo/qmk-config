#include QMK_KEYBOARD_H

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
  PLOVER = SAFE_RANGE,
  LOWER,
  RAISE,
  BACKLIT,
  EXT_PLV
};