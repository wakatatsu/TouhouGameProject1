#include "controller.h"

Controller::Controller() {
	//setup Button array
	buttons.push_back(new Button(4));
	buttons.push_back(new Button(5));
	buttons.push_back(new Button(6));
	memory = new MicroSD();
	memory->initSD();//initialize memory
	//speaker = new Speaker();
	view = new View(memory);//setup Display
	mode = new Mode(view);//setup Mode
}

void Controller::updateView() {
	view->update();
}

std::vector<int> Controller::getOperation() {
	int offsetNumber = buttons[0]->getPin();
	buttonNumber.clear();//clear array
	for (auto itr : buttons) {
		if (itr->getValue() == HIGH) {
			buttonNumber.push_back(itr->getPin() - offsetNumber);
		}
	}
	return buttonNumber;
}
/*
void Controller::sendOperation(String content) {

}
*/

void Controller::sendOperation(std::vector<int> oprnNum) {
	mode->sendOperation(oprnNum);
}
