#include "mode.h"

Mode::Mode(Adafruit_PCD8544 *receiveDisplay) : viewDisplay(receiveDisplay){
  //currentMode = HOME;
	currentMode = DEBUG;
	testmode = new DebugMode();
}

void Mode::receiveOperation(std::vector<int> oprnNum) {
	switch (currentMode) {
	case -1:
  testmode->testView(viewDisplay);
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
