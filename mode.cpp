#include "mode.h"
#include "debugMode.h"

Mode::Mode(Adafruit_PCD8544 receiveDisplay):viewDisplay(receiveDisplay){
  //currentMode = HOME;
	currentMode = DEBUG;
	testmode = new DebugMode();
	//modeArray.push_back(new DebugMode());
}

void Mode::receiveOperation(std::vector<int> oprnNum) {
	switch (currentMode) {
	case 0:

		break;
	case 1:

		break;
	case 2:

		break;
	case -1:

		break;
	default:

		break;
	}
}
