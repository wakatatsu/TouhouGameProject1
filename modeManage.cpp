#include "modeManage.h"

ModeManage::ModeManage(Controller *cntlPointer) {
	//static value init
	cntl = cntlPointer;
	viewWidth = cntl->view->width();
	viewHeight = cntl->view->height();
	// testDebug = new DebugMode();
	testHome = new HomeMode();

	// Serial.println(F("ModeManage Initialized"));
}

void ModeManage::runOperation() {
	sendOperation(cntl->getOperation());
}

void ModeManage::sendOperation(std::vector<int8_t> oprnNum) {
	switch(currentMode) {
		case DEBUG:
		changeMode(testDebug->displayTest(oprnNum));
		break;
		case HOME:
		changeMode(testHome->run(oprnNum));
		break;
		case STATUS:
		changeMode(testStatus->run(oprnNum));
		break;
		case MEAL:
		changeMode(testMeal->run(oprnNum));
		break;
		// case SETTING:
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
		delete testDebug;
		break;
		case HOME:
		delete testHome;
		break;
		case STATUS:
		delete testStatus;
		break;
		case MEAL:
		delete testMeal;
		break;
		default:
		break;
	}
}

void ModeManage::createMode(int8_t toMode) {
	switch(toMode) {
		case DEBUG:
		testDebug = new DebugMode();
		break;
		case HOME:
		testHome = new HomeMode();
		break;
		case STATUS:
		testStatus = new StatusMode();
		break;
		case MEAL:
		testMeal = new MealMode();
		break;
		default:
		break;
	}
}
