#include "homeMode.h";

int8_t HomeMode::count = LCDWIDTH/2 + (int8_t)random(-10,10);
uint8_t HomeMode::drawtypeFlag = 0;

HomeMode::HomeMode() {
  currentMode = HOME;
  randomSeed(analogRead(A0));
}

HomeMode::~HomeMode() {

}

uint8_t HomeMode::run(std::vector<uint8_t> oprnNum) {
  uint8_t moveFlag = 0;

  //moveFlag
  if(random(1000) % 200 == 0) {
    moveFlag = 1;
  }
  //change point x and decide drawtype
  if(moveFlag == 1) {
    if(random(6) % 2 == 0) {count++; drawtypeFlag = 1;}
    else {count--; drawtypeFlag = 0;}
  }
  //draw
  if(drawtypeFlag == 0) {
    viewPointer->drawBitmap(count, LCDHEIGHT/2, 19, 20, DATA1, 0);
  }
  else {
    viewPointer->drawBitmap(count, LCDHEIGHT/2, 19, 20, DATA1, 1);
  }
  //let not over the display edge
  if(count >= LCDWIDTH - 19) {count = LCDWIDTH - 19;}
  if(count <= 0) {count = 0;}

  //move mode
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0:
      case 1:
      case 2:
      DFPlayerPointer-> playMP3(2);
      return SELECT;//move SelectMode
      break;
      default:
      break;
    }
  }
  return HOME;
}
