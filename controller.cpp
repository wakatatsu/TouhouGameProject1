#include "controller.h"

Controller::Controller() {
	buttons.push_back(new Button(2));
	buttons.push_back(new Button(3));
	buttons.push_back(new Button(4));
	view = new View();
	modeManage = new ModeManage(view);
}

void Controller::updateView() {
	view->update();
}

std::vector<uint8_t> Controller::getOperation() {
	buttonNumber.clear();
	uint8_t offsetNumber = buttons[0]->getPin();
	for (auto itr : buttons) {
		if (itr->getValue() == HIGH) {
			if(!buttonFlag) {
				buttonNumber.push_back(itr->getPin() - offsetNumber);
			}
		}
		else {
			buttonCount++;
		}
	}
	if(buttonCount < buttons.size()) {
		buttonFlag = 1;
	}
	else {
		buttonFlag = 0;
	}
	buttonCount = 0;
	return buttonNumber;
}

void Controller::runOperation() {
	modeManage->sendOperation(getOperation());
}
