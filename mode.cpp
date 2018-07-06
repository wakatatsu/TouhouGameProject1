#include "debugMode.h"
#include "homeMode.h"
#include "selectMode.h"
#include "mode.h"

uint8_t Mode::currentMode;
View* Mode::viewPointer;
Mode::Modes Mode::modes;

Mode::Mode() {

}

Mode::~Mode() {

}
