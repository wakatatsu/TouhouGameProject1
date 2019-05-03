#include "controller.h"

Controller::Controller() {

	// backLight = new Button(A0);
	// backLight->writeMode();
	// backLight->setValue(1);
	initButton();
	initDisplay();
	// initSensor();
	// initDFPlayer();
	Serial.println(F("Controller Initialized"));
}

void Controller::initButton() {
	buttons.push_back(new Button(2));
	buttons.push_back(new Button(3));
	buttons.push_back(new Button(4));
	offsetNumber = buttons[0]->getPin();
	buttonFlag = 0;
	buttonCount = 0;
	Serial.println(F("button ok"));
}

void Controller::initDFPlayer() {
	soundplayer = new DFPlayer();//use pin(8), pin(9)
	Serial.println(F("DFPlayer ok"));
}

void Controller::initDisplay() {
	view = new View();//use SPI_Pin, pin(A1), pin(A2), pin(A3)
	Serial.println(F("display ok"));
}

void Controller::initSensor() {
	stepcount = new StepCount();//use SPI_Pin, pin(10)
	Serial.println(F("ADXL345 ok"));
}

void Controller::clearView() {
	view->clearDisplay();
}

std::vector<int8_t> Controller::getOperation() {
	buttonNumber.clear();
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

void Controller::updateStep() {
	stepcount->run();
}
