#include "selectMode.h"

SelectMode::SelectMode() {
  currentMode = SELECT;
  selectModeIcon = 1;
}

SelectMode::~SelectMode() {

}

uint8_t SelectMode::run(std::vector<uint8_t> oprnNum) {
  //animation of change icon of mode
  switch(selectModeIcon) {
    case 1://HOME
    cntl->view->drawBitmap(0, 0, 12, 12, DATA5);
    break;
    case 3://STATUS
    cntl->view->drawBitmap(0, 0, 12, 12, DATA2);
    break;
    case 4://MEAL
    cntl->view->drawBitmap(0, 0, 12, 12, DATA3);
    break;
    default:
    cntl->view->drawBitmap(0, 0, 19, 20, DATA1);
    break;
  }
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://next mode icon
      cntl->soundplayer->playMP3(2);
      selectModeIcon++;
      //protect not to exceed select
      if(selectModeIcon == DEBUG || selectModeIcon == SELECT) {
        selectModeIcon++;
      }
      if(selectModeIcon > MEAL) {
        selectModeIcon = 1;
      }
      break;
      case 1://decide
      cntl->soundplayer->playMP3(2);
      return selectModeIcon;
      case 2://turn back
      cntl->soundplayer->playMP3(2);
      return HOME;//move SelectMode
      default:
      break;
    }
  }
  return SELECT;
}
