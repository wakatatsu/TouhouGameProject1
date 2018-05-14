#include "mode.h"

Mode::Mode() {
  //currentMode = HOME;
	currentMode = DEBUG;
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
