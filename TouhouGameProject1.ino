#include "controller.h"
#include "modeManage.h"

Controller *cntl;
ModeManage *mdmg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  cntl = new Controller();
  mdmg = new ModeManage(cntl);

}

void loop() {

  cntl->updateView();//update display
  cntl->updateStep();//update step
  mdmg->runOperation();//run operation


}
