#include "controller.h"
#include "stepcount.h"

Controller *cntl;
StepCount *stepcount;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  cntl = new Controller();
  stepcount = new StepCount();

}

void loop() {

  cntl->updateView();//update display
  cntl->runOperation();//run operation
  stepcount->run();


}
