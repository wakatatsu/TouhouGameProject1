#include "controller.h"

Controller *cntl;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  cntl = new Controller();

}

void loop() {

  cntl->updateView();
  cntl->sendOperation(cntl->getOperation());//send operation button
  //draw on display

}
