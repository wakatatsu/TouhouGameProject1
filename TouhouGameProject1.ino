#include "controller.h"
#include "modeManage.h"

Controller *cntl;
ModeManage *mdmg;

void setup() {
  Serial.begin(9600);
  cntl = new Controller();
  mdmg = new ModeManage(cntl);

}

void loop() {
  cntl->clearView();//update display
  cntl->updateStep();//update step
  mdmg->runOperation();//run operation
  delay(10);
}
