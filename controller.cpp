#include "controller.h"

Controller::Controller() {
	buttons.push_back(new Button(4));
	buttons.push_back(new Button(5));
	buttons.push_back(new Button(6));
	memory = new MicroSD();
	memory->initSD();
	//speaker = new Speaker();
	view = new View(memory);
	modeManage = new ModeManage(view);
}

void Controller::updateView() {
	view->update();
}

std::vector<uint8_t> Controller::getOperation() {
	uint8_t offsetNumber = buttons[0]->getPin();
	buttonNumber.clear();
	for (auto itr : buttons) {
		if (itr->getValue() == HIGH) {
			buttonNumber.push_back(itr->getPin() - offsetNumber);
		}
	}
	return buttonNumber;
}

void Controller::sendOperation(std::vector<uint8_t> oprnNum) {
	modeManage->sendOperation(oprnNum);
}
