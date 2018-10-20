#include "statusMode.h"

StatusMode::StatusMode() {
  currentMode = STATUS;
  selectPointer = 0;
}

StatusMode::~StatusMode() {

}

uint8_t StatusMode::run(std::vector<uint8_t> oprnNum) {

  //view status
  viewStatus();

  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://move next pointer
      if (selectPointer >= STATUS_MAX_NUM) {
        selectPointer = 0;
      }
      else {
        selectPointer++;
      }
      break;
      case 1://decide
      return HOME;
      break;
      case 2://move back pointer
      if(selectPointer == 0) {
        //max selectPointer num
      }
      else {
        selectPointer--;
      }
      break;
      default:
      break;
    }
  }
}

void StatusMode::viewStatus() {
  uint8_t x = 10;
  uint8_t y = 10;
  cntl -> view -> drawText(x, y, "Test");
}
