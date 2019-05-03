#ifndef BITMAPDATA_H_INCLUDE
#define BITMAPDATA_H_INCLUDE

#define MODE_ICON_SIZE_X 12
#define MODE_ICON_SIZE_Y 12
#define MAX_ICON_NUM 7

#include <avr/pgmspace.h>

//REIMU1
const PROGMEM int8_t REIMU1[] = {
  0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,
  0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,1,
  0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,
  0,0,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,
  0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  1,0,0,0,0,1,1,1,0,1,0,1,0,1,1,0,0,0,0,
  0,1,0,0,0,0,1,1,1,0,1,1,0,1,0,0,0,0,0,
  1,0,1,0,0,1,0,1,1,0,1,1,1,0,1,0,0,0,0,
  0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
  1,0,0,0,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,
  0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,0,0,0,0,1,1,0,1,1,1,0,1,1,0,0,0,0,0,
  0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0
};
//REIMU2
const PROGMEM int8_t REIMU2[] = {
  0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,1,
  0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
  0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
  0,0,0,1,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,0,1,
  0,0,1,0,1,1,0,0,1,1,0,1,1,0,0,1,1,1,0,1,1,
  0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,
  0,0,1,0,0,1,0,1,0,0,0,1,0,1,1,1,1,1,1,1,1,
  0,1,0,0,0,1,0,1,1,0,0,1,1,0,1,1,0,1,1,1,0,
  0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,0,0,0,1,1,0,
  0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,0,0,
  0,0,0,0,0,1,0,0,0,1,0,1,1,0,1,1,0,0,0,0,0,
  0,0,1,1,1,0,1,1,1,0,1,1,1,1,0,0,1,0,0,0,0,
  0,1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,
  1,1,0,1,1,0,1,0,0,1,1,1,1,1,1,0,1,0,0,0,0,
  1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,
  1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,0,1,1,1,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0
};
//REIMU3
const PROGMEM int8_t REIMU3[] = {
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,1,1,0,1,0,
  0,0,0,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,0,
  0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,
  0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,0,0,
  0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
  0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,
  0,0,0,0,1,0,1,1,0,0,0,1,1,0,0,1,1,1,0,0,
  0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,1,1,0,1,0,0,0,1,0,1,1,0,0,0,
  0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1,1,0,0,0,
  1,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,
  0,1,0,0,0,0,0,1,0,1,1,0,1,1,0,1,0,0,0,0,
  1,0,1,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,0,0,
  0,1,0,1,0,1,1,0,1,1,1,1,1,1,1,0,1,1,0,0,
  1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,0,
  0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
  1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,
  0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,
  0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0
};
//MARISA
const PROGMEM int8_t MARISA[] = {
  0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,
  0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,0,1,0,0,1,1,1,1,1,1,0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
  0,1,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,0,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,1,0,0,1,0,1,0,0,1,0,1,0,0,0,0,
  0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,
  0,0,1,0,1,0,1,0,0,0,1,0,1,1,1,0,0,0,
  0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,
  0,1,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,
  0,0,1,0,1,1,0,0,0,0,0,1,1,0,0,1,0,0,
  0,0,0,1,1,0,1,1,1,1,1,1,0,1,1,0,0,0,
  0,0,0,0,0,1,0,1,1,1,0,1,1,0,0,0,0,0,
  0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,
  0,0,0,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,
  0,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,0,0,
  0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,
  0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
  0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,0,0,1,0,1,0,1,1,1,0,1,0,1,0,0,0,0,
  0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0
};
//STATUS
const PROGMEM int8_t MODE1[] = {
  0,1,1,1,1,1,1,1,0,1,1,0,
  0,1,1,1,1,1,0,1,0,1,1,0,
  0,1,1,1,1,1,0,1,0,0,0,0,
  0,1,1,1,1,1,0,1,0,1,1,0,
  0,1,1,1,1,1,0,1,0,1,1,0,
  0,1,1,1,1,1,1,1,0,0,0,0,
  0,1,1,1,1,1,1,1,0,1,1,0,
  0,1,1,1,1,1,1,1,0,1,1,0,
  0,1,1,1,1,1,1,1,0,0,0,0,
  0,1,1,1,1,1,1,1,0,1,1,0,
  0,1,0,1,1,1,1,1,0,1,1,0,
  0,1,1,1,1,1,1,1,0,1,1,0
};
//MEAL
const PROGMEM int8_t MODE2[] = {
  0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,1,0,0,0,0,1,0,0,0,
  0,0,1,0,0,0,0,0,0,1,0,0,
  0,1,0,0,0,0,0,0,0,0,1,0,
  1,0,0,0,0,0,0,0,0,0,0,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,1,0,1,1,0,0,1,1,
  0,1,1,1,1,0,0,1,0,1,1,0,
  0,0,1,1,1,1,1,1,1,1,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0
};
//?
const PROGMEM int8_t MODE3[] = {
  1,1,0,0,0,0,0,0,0,1,1,1,
  1,0,1,1,0,0,0,1,1,1,0,1,
  1,0,0,0,1,1,0,1,0,0,0,1,
  1,0,0,0,0,0,1,1,0,0,1,1,
  1,1,0,0,0,0,0,1,1,1,1,1,
  1,1,1,1,0,0,0,1,1,1,0,1,
  1,0,1,1,1,1,0,1,0,0,0,1,
  1,0,0,0,1,1,1,1,0,0,1,1,
  1,1,0,0,1,1,0,1,1,1,1,0,
  0,0,1,1,0,0,0,1,0,0,0,0,
  0,0,0,0,1,1,0,1,0,0,0,0,
  0,0,0,0,0,0,1,1,0,0,0,0
};
//?
const PROGMEM int8_t MODE4[] = {
  0,0,0,0,0,1,1,0,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,1,1,1,1,1,1,
  1,1,1,1,1,1,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,0,0,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,1,0,0,0,0,0,
  0,1,0,1,0,0,1,0,1,0,1,0,
  1,0,0,0,0,1,1,0,0,0,0,1,
  0,0,0,0,0,1,1,0,0,0,0,0
};
//?
const PROGMEM int8_t MODE5[] = {
  0,0,0,0,0,0,0,0,1,0,0,1,
  0,0,0,0,0,0,0,1,1,0,1,0,
  0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,1,0,1,1,0,1,1,
  0,0,0,0,1,1,1,0,1,0,1,0,
  0,0,0,1,1,1,1,1,1,0,0,0,
  0,0,0,1,1,0,1,1,1,0,0,0,
  0,1,0,1,0,1,0,1,0,0,0,0,
  1,1,0,1,1,0,1,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,
  0,1,0,1,1,0,0,0,0,0,0,0,
  1,0,0,1,0,0,0,0,0,0,0,0
};
//?
const PROGMEM int8_t MODE6[] = {
  0,0,0,0,1,1,0,0,0,0,0,0,
  0,0,0,0,1,1,1,0,0,0,0,0,
  0,0,0,1,1,1,1,1,0,0,0,0,
  0,0,0,1,1,1,1,1,1,0,0,0,
  0,0,0,0,1,1,1,1,1,0,0,0,
  0,1,1,1,0,0,0,0,0,1,1,0,
  0,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,1,1,0,0,0,
  1,1,1,1,0,0,0,0,0,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  0,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,1,1,1,1,1,1,0,0,0
};
//MEDICAL?
const PROGMEM int8_t MODE7[] = {
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,1,1,1,1,0,0,0,0
};

#endif
