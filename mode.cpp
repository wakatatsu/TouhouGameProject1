#include "mode.h"
#include "debugMode.h"
// #include "homeMode.h"
// #include "selectMode.h"
// #include "statusMode.h"
// #include "mealMode.h"

Controller* Mode::cntl;
uint8_t Mode::currentMode;
Mode::Modes Mode::modes;

Mode::Mode() {

}

Mode::~Mode() {

}
