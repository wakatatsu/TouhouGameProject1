#include "mode.h"

Mode::Mode() {
  //currentMode = HOME;
	currentMode = DEBUG;
	testmode = new DebugMode();
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
