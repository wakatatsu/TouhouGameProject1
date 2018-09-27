#include "modeManage.h"

ModeManage::ModeManage(Controller *cntlPointer) {
	cntl = cntlPointer;
	// new(&modes.DebugMode) DebugMode();
  new(&modes.HomeMode) HomeMode();
}

void ModeManage::runOperation() {
	sendOperation(cntl->getOperation());
}

void ModeManage::sendOperation(std::vector<uint8_t> oprnNum) {
	switch(currentMode) {
		case DEBUG:
		changeMode(modes.DebugMode->testGame(oprnNum));
		break;
		case HOME:
		changeMode(modes.HomeMode->run(oprnNum));
		break;
		case SELECT:
		changeMode(modes.SelectMode->run(oprnNum));
		break;
		case STATUS:
		changeMode(modes.StatusMode->run(oprnNum));
		break;
		case MEAL:
		changeMode(modes.MealMode->run(oprnNum));
		break;
		default:
		break;
	}
}

void ModeManage::changeMode(uint8_t toMode) {
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
		case SELECT:
		modes.SelectMode->~SelectMode();
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

void ModeManage::createMode(uint8_t toMode) {
	switch(toMode) {
		case DEBUG:
		new(&modes.DebugMode) DebugMode();
		break;
		case HOME:
		new(&modes.HomeMode) HomeMode();
		break;
		case SELECT:
		new(&modes.SelectMode) SelectMode();
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
