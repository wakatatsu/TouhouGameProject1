#include "statusMode.h"

StatusMode::StatusMode() {
  currentMode = STATUS;
  selectScreen = 0;
  selectPointX = viewWidth/2;
  selectPointY = viewHeight/2;
}

StatusMode::~StatusMode() {

}

int8_t StatusMode::run(std::vector<int8_t> oprnNum) {

  //view status
  viewStatus(selectScreen);

  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://move next Screen
      if (selectScreen >= STATUS_MAX_NUM) {
        selectScreen = 0;
      }
      else {
        selectScreen++;
      }
      break;
      case 1://decide
      return HOME;
      case 2://move back Screen
      if(selectScreen < 0) {
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
  return STATUS;
}

void StatusMode::viewStatus(int8_t selectScreen) {
  switch(selectScreen) {
    case 0://view character status
    //view name, hp, lv, exp, condition
    cntl->view->drawText(0, 0, F("Character Status"), BLACK);
    cntl->view->drawText(0, 10, "Name : " + String(character._name), BLACK);
    cntl->view->drawText(0, 20, "HP : " + String(character._hp), BLACK);
    cntl->view->drawText(0, 30, "Lv : " + String(character._lv), BLACK);
    cntl->view->drawText(0, 40, "EXP : " + String(character._exp), BLACK);
    cntl->view->drawText(0, 50, "Condition : " + String(character._condition), BLACK);
    break;
    case 1://view step cout
    cntl->view->drawText(selectPointX, selectPointY, F("Step Count:"), BLACK);
    cntl->view->drawText(selectPointX+10, selectPointY+10, String(cntl->stepcount->getStep()), BLACK);
    break;
    case 2://?
    break;
    default:
    break;
  }

}
