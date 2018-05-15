#include "view.h"
#include "controller.h"

Controller *cntl;
View *view;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  view = new View();
  cntl = new Controller(view);

}

void loop() {

  view->updateView();
  cntl->sendOperation(cntl->getOperation());//send operation button
  //draw on display

}
