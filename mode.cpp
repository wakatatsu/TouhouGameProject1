#include "mode.h"

Mode::Mode(View *view) :viewPointer(view){
  //currentMode = HOME;
	currentMode = DEBUG;
	testmode = new DebugMode(view);
}

void Mode::sendOperation(std::vector<int> oprnNum) {
	switch (currentMode) {
	case -1:
		testmode->testView(oprnNum);
		break;
	case 0:

		break;
	case 1:

		break;
	case 2:

		break;
	default:

		break;
	}
}
