#include "view.h"
#include "controller.h"

Controller *cont;
View *view;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  view = new View();
  cont = new Controller();

}

void loop() {

  view->Operation(cont->getOperation());//send operating button
  //draw on display

}
