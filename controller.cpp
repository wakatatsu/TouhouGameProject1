#include "controller.h"

Controller::Controller() {
  buttons.push_back(new Button(4));
  buttons.push_back(new Button(5));
  buttons.push_back(new Button(6));
  memory = new MicroSD();
  speaker = new Speaker();
}

std::vector<int> Controller::getOperation() {
  std::vector<int> num;//save pinNumber
  for(auto itr : buttons) {
    if(itr->getValue() == HIGH) {
      num.push_back(itr->getPin());
    }
  }
  return num;
}

void Controller::requestOperation(String content) {

}
