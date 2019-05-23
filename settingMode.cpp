#include "settingMode.h"

SettingMode::SettingMode() {
  currentMode = SETTING;
  selectPoint = 0;
}

SettingMode::~SettingMode() {

}

int8_t SettingMode::run(std::vector<int8_t> oprnNum) {
  // for(auto itr : oprnNum) {
  //   switch(itr) {
  //     case 0:
  //     selectPoint++;
  //     break;
  //     case 1:
  //     changeSetting(selectPoint);
  //     break;
  //     case 2:
  //     selectPoint--;
  //     break;
  //     default:
  //     break;
  //   }
  // }
  // return SETTING;
  return HOME;
}

void changeSetting(int8_t settingNum) {
  switch(settingNum) {
    case 0://back light(予定)

    break;
    case 1://音量(予定)

    break;
    default:
    break;
  }
}
