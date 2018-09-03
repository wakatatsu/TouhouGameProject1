#include "modeManage.h"

ModeManage::ModeManage(View *view) {
	viewPointer = view;
	DFPlayerPointer = new DFPlayer();
	new(&modes.DebugMode) DebugMode();
  // new(&modes.HomeMode) HomeMode();
}


void ModeManage::sendOperation(std::vector<uint8_t> oprnNum) {

	switch(currentMode) {
		case DEBUG:
		//changeMode(modes.DebugMode->changeModeTest(oprnNum));
		//changeMode(modes.DebugMode->mp3Test(oprnNum));
		changeMode(modes.DebugMode->testGame(oprnNum));
		break;
		case HOME:
		changeMode(modes.HomeMode->run(oprnNum));
		break;
		case SELECT:
		changeMode(modes.SelectMode->run(oprnNum));
		break;
		default:
		break;
	}

}

void ModeManage::changeMode(uint8_t toMode) {
	if(currentMode != toMode) {
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
			default:
			break;
		}
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
			default:
			break;
		}
	}
}
