#pragma once

#include <unistd.h>

/*
 * This header exposes key codes and helpers shared across translation units.
 */

enum editor_key {
  ARROW_LEFT = 1000,
  BACKSPACE = 127,
  ARROW_RIGHT,
  ARROW_UP,
  ARROW_DOWN,
  PAGE_UP,
  DEL_KEY,
  HOME_KEY,
  END_KEY,
  PAGE_DOWN
};

int read_key(void);
