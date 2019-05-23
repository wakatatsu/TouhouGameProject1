#include "modeManage.h"

ModeManage::ModeManage(Controller *cntlPointer) {
	//static value init
	cntl = cntlPointer;
	viewWidth = cntl->view->width();
	viewHeight = cntl->view->height();
	// debugMode = new DebugMode();
	homeMode = new HomeMode();

	// Serial.println(F("ModeManage Initialized"));
}

void ModeManage::runOperation() {
	sendOperation(cntl->getOperation());
}

void ModeManage::sendOperation(std::vector<int8_t> oprnNum) {
	switch(currentMode) {
		case DEBUG:
		changeMode(debugMode->displayTest(oprnNum));
		break;
		case HOME:
		changeMode(homeMode->run(oprnNum));
		break;
		case STATUS:
		changeMode(statusMode->run(oprnNum));
		break;
		case MEAL:
		changeMode(mealMode->run(oprnNum));
		break;
		case SETTING:
		changeMode(settingMode->run(oprnNum));
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
		delete debugMode;
		break;
		case HOME:
		delete homeMode;
		break;
		case STATUS:
		delete statusMode;
		break;
		// case MEAL:
		// delete mealMode;
		// break;
		// case SETTING
		// delete settingMode;
		default:
		break;
	}
}

void ModeManage::createMode(int8_t toMode) {
	switch(toMode) {
		case DEBUG:
		debugMode = new DebugMode();
		break;
		case HOME:
		homeMode = new HomeMode();
		break;
		case STATUS:
		statusMode = new StatusMode();
		break;
		// case MEAL:
		// mealMode = new MealMode();
		// break;
		// case SETTING:
		// settingMode = new SettingMode();
		// break;
		default:
		break;
	}
}
