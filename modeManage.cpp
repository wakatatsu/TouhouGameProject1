#include "modeManage.h"

ModeManage::ModeManage(View *view) {
	viewPointer = view;
	//new(&currentMode.DebugMode) DebugMode();
  new(&currentMode.HomeMode) HomeMode();
}


void ModeManage::sendOperation(std::vector<uint8_t> oprnNum) {

	//currentMode.DebugMode->bitMapTest(oprnNum);
	currentMode.HomeMode->run();

}

void ModeManage::changeMode(int toMode) {



}
