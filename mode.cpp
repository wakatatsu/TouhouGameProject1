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
//{_name, _hp, _mp, _str, _vit, _int, _res, _dex, _agi, _luk, _lv, _exp, _condition}
//statusPalameter Mode::character = {"reimu",10,10,1,1,1,1,1,1,1,1,0,"usualy"};
statusPalameter Mode::character = {"reimu",10,1,0,"usualy"};

Mode::Mode() {

}

Mode::~Mode() {

}
