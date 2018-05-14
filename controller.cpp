#include "controller.h"

Controller::Controller() {
	//set button array
  buttons.push_back(new Button(4));
  buttons.push_back(new Button(5));
  buttons.push_back(new Button(6));
  memory = new MicroSD();
  memory->initSD();//initialize memory
  //speaker = new Speaker();
  mode = new Mode();
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
