#include "mode.h"
#include "debugMode.h"
#include "homeMode.h"
#include "statusMode.h"
#include "mealMode.h"
#include "settingMode.h"

Controller* Mode::cntl;
int16_t Mode::viewWidth;
int16_t Mode::viewHeight;
int8_t Mode::currentMode;
Mode::Modes Mode::modes;

Mode::Mode() {

}

Mode::~Mode() {

}
