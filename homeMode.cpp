#include "homeMode.h";


HomeMode::HomeMode() {
  currentMode = HOME;
  selectModeIcon = 1;
  randomSeed(analogRead(A5));
  drawX = (int8_t)(viewWidth/2) + (int8_t)random(-10,10);
  drawtypeFlag = random(1);
  moveFlag = 0;
}

HomeMode::~HomeMode() {
}

int8_t HomeMode::run(std::vector<int8_t> oprnNum) {
  randomMove();
  return selectMode(oprnNum);
}

void HomeMode::randomMove() {
  //moveFlag
  if(random(100) % 25 == 0) {
    moveFlag = 1;
  }
  //change point x and decide drawtype
  if(moveFlag == 1) {
    if(random(6) % 2 == 0) {
      drawX+=random(10);
      drawtypeFlag = 1;
    }
    else {
      drawX-=random(10);
      drawtypeFlag = 0;
    }
    moveFlag = 0;
  }
  //draw
  if(drawtypeFlag == 0) {
    cntl->view->drawBitmap(drawX, viewHeight/2, 19, 20, REIMU1, BLACK, 0);
  }
  else {
    cntl->view->drawBitmap(drawX, viewHeight/2, 19, 20, REIMU1, BLACK, 1);
  }
  //let not over the display edge
  if(drawX >= viewWidth - 19) {drawX = viewWidth - 19;}
  if(drawX <= 0) {drawX = 0;}
}

int8_t HomeMode::selectMode(std::vector<int8_t> oprnNum) {
  //draw icon of mode
  switch(selectModeIcon) {
    case 1://STATUS
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE1, BLACK, 0);
    break;
    case 2://MEAL
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE2, BLACK, 0);
    break;
    case 3://?
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE3, BLACK, 0);
    break;
    case 4://?
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE4, BLACK, 0);
    break;
    case 5://?
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE5, BLACK, 0);
    break;
    case 6://?
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE6, BLACK, 0);
    break;
    case 7://MEDICAL?
    cntl->view->drawBitmap(0, 0, MODE_ICON_SIZE_X, MODE_ICON_SIZE_Y, MODE7, BLACK, 0);
    break;
    default:
    break;
  }
  //move mode
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0://next icon
      // cntl->soundplayer->playMP3(2);
      selectModeIcon++;
      break;
      case 1://decide
      // cntl->soundplayer->playMP3(2);
      return selectModeIcon;
      case 2://turn back icon
      // cntl->soundplayer-> playMP3(2);
      selectModeIcon--;
      break;
      default:
      break;
    }
    if(selectModeIcon <= 0) {selectModeIcon = MAX_ICON_NUM;}
    else if(selectModeIcon > MAX_ICON_NUM) {selectModeIcon = 1;}
  }
  return HOME;
}
