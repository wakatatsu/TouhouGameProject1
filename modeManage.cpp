#include "modeManage.h"

ModeManage::ModeManage(View *view) {
	viewPointer = view;
	new(&currentMode.DebugMode) DebugMode();
}


void ModeManage::sendOperation(std::vector<uint8_t> oprnNum) {

	//currentMode.DebugMode->bitMapTest(oprnNum);

}

void ModeManage::changeMode(int toMode) {



}
