#include "controller.h"

Controller::Controller() {
  view = new View();//setup Display
  mode = new Mode(view->getDisplay());//setup Mode
	//setup Button array
  buttons.push_back(new Button(4));
  buttons.push_back(new Button(5));
  buttons.push_back(new Button(6));
  memory = new MicroSD();
  memory->initSD();//initialize memory
  //speaker = new Speaker();
}

void Controller::updateView() {
  view->update();
}

std::vector<int> Controller::getOperation() {
	buttonNumber.clear();//clear array
  for(auto itr : buttons) {
    if(itr->getValue() == HIGH) {
      buttonNumber.push_back(itr->getPin());
    }
  }
  return buttonNumber;
}

void Controller::sendOperation(String content) {

}

void Controller::sendOperation(std::vector<int> oprnNum) {
	mode->receiveOperation(oprnNum);
}
