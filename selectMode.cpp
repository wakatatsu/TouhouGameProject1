#include "selectMode.h"

uint8_t SelectMode::selectModeIcon = 1;

SelectMode::SelectMode() {
  currentMode = SELECT;
}

SelectMode::~SelectMode() {

}

uint8_t SelectMode::run(std::vector<uint8_t> oprnNum) {
  //animation of change icon of mode
  switch(selectModeIcon) {
    case 1://HOME
    viewPointer->drawBitmap(0, 0, 12, 12, DATA5);
    break;
    case 3://STATUS
    viewPointer->drawBitmap(0, 0, 12, 12, DATA2);
    break;
    case 4://MEAL
    viewPointer->drawBitmap(0, 0, 12, 12, DATA3);
    break;
    default:
    viewPointer->drawBitmap(0, 0, 19, 20, DATA1);
    break;
  }
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://next mode icon
      DFPlayerPointer-> playMP3(2);
      selectModeIcon++;
      //protect not to exceed select
      if(selectModeIcon == 0 || selectModeIcon == 2) {
        selectModeIcon++;
      }
      if(selectModeIcon > MEAL) {
        selectModeIcon = 1;
      }
      break;
      case 1://decide
      DFPlayerPointer-> playMP3(2);
      //return selectModeIcon;
      case 2://turn back
      // DFPlayerPointer-> playMP3(2);
      return HOME;//move SelectMode
      default:
      break;
    }
  }
  return SELECT;
}
