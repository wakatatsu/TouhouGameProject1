#include "mode.h"

<<<<<<< HEAD
Mode::Mode(View *view) :viewPointer(view){
=======
Mode::Mode() {
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6
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
