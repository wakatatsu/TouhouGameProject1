#include "controller.h"

Controller *cntl;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  cntl = new Controller();

}

void loop() {

  cntl->updateView();//update display
  cntl->runOperation();//run operation

}
