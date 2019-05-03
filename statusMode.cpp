#include "statusMode.h"

StatusMode::StatusMode() {
  currentMode = STATUS;
  selectScreen = 0;
}

StatusMode::~StatusMode() {

}

int8_t StatusMode::run(std::vector<int8_t> oprnNum) {

  //view status
  viewStatus();

  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://move next Screen
      if (selectScreen > STATUS_MAX_NUM) {
        selectScreen = 0;
      }
      else {
        selectScreen++;
      }
      break;
      case 1://decide
      return HOME;
      break;
      case 2://move back Screen
      if(selectScreen == 0) {
        selectScreen = STATUS_MAX_NUM;
      }
      else {
        selectScreen--;
      }
      break;
      default:
      break;
    }
  }
}

void StatusMode::viewStatus() {
  // int8_t x = 10;
  // int8_t y = 10;
  // String str = "Test";
  // str.concat(selectScreen);
  // cntl -> view -> drawText(x, y, str);
  //
  // //draw statusScreen[selectScreen]

}
