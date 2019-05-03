#include "modeManage.h"

ModeManage::ModeManage(Controller *cntlPointer) {
	cntl = cntlPointer;
	viewWidth = cntl->view->width();
	viewHeight = cntl->view->height();
  // new(&modes.HomeMode) HomeMode();
	new(&modes.DebugMode) DebugMode();
	Serial.println(F("ModeManage Initialized"));
}

void ModeManage::runOperation() {
	sendOperation(cntl->getOperation());
}

void ModeManage::sendOperation(std::vector<int8_t> oprnNum) {

	// Serial.println(currentMode);

	switch(currentMode) {
		case DEBUG:
		changeMode(modes.DebugMode->displayTest(oprnNum));
		// changeMode(modes.DebugMode->testGame(oprnNum));
		break;
		case HOME:
		changeMode(modes.HomeMode->run(oprnNum));
		break;
		case STATUS:
		changeMode(modes.StatusMode->run(oprnNum));
		break;
		case MEAL:
		changeMode(modes.MealMode->run(oprnNum));
		break;
		//case SETTING:
		//changeMode(modes.SettingMode->run(oprnNum));
		default:
		break;
	}
}

void ModeManage::changeMode(int8_t toMode) {
	if(currentMode != toMode) {
		deleatMode();
		createMode(toMode);
	}
}

void ModeManage::deleatMode() {
	switch(currentMode) {
		case DEBUG:
		modes.DebugMode->~DebugMode();
		break;
		case HOME:
		modes.HomeMode->~HomeMode();
		break;
		case STATUS:
		modes.StatusMode->~StatusMode();
		break;
		case MEAL:
		modes.MealMode->~MealMode();
		break;
		default:
		break;
	}
}

void ModeManage::createMode(int8_t toMode) {
	switch(toMode) {
		case DEBUG:
		new(&modes.DebugMode) DebugMode();
		break;
		case HOME:
		new(&modes.HomeMode) HomeMode();
		break;
		case STATUS:
		new(&modes.StatusMode) StatusMode();
		break;
		case MEAL:
		new(&modes.MealMode) MealMode();
		break;
		default:
		break;
	}
}
