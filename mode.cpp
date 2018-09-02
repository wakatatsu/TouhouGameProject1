#include "mode.h"
#include "debugMode.h"
#include "homeMode.h"
#include "selectMode.h"

uint8_t Mode::currentMode;
View* Mode::viewPointer;
Mode::Modes Mode::modes;
DFPlayer* Mode::DFPlayerPointer;

Mode::Mode() {

}

Mode::~Mode() {

}
