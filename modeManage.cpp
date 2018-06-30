#include "modeManage.h"

ModeManage::ModeManage(View *view) {
	viewPointer = view;
	currentMode.DebugMode = new DebugMode;
	//new(&currentMode.DebugMode) DebugMode();
  //new(&currentMode.HomeMode) HomeMode();
}


void ModeManage::sendOperation(std::vector<uint8_t> oprnNum) {

	//currentMode.DebugMode->baceCommandTest(oprnNum);
	currentMode.DebugMode->bitMapTest(oprnNum);
	//currentMode.HomeMode->run(oprnNum);
	//changeMode();

}

void ModeManage::changeMode(int toMode) {



}
