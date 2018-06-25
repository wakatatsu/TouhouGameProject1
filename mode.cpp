#include "mode.h"

Mode::Mode(View *view) :viewPointer(view) {
	//currentMode = HOME;
	currentMode = DEBUG;
	testmode = new DebugMode(view);
}

void Mode::sendOperation(std::vector<int> oprnNum) {
	switch (currentMode) {
	case -1:
		//testmode->baceCommandTest(oprnNum);
		testmode->bitMapTest(oprnNum);
		break;
	case 0:
		//sendOperation();
		break;
	case 1:
		//sendOperation();
		break;
	case 2:
		//sendOperation();
		break;
	default:

		break;
	}
}

void Mode::changeMode(int toMode) {

	switch (toMode) {
	case 0:
		currentMode = HOME;
		break;
	case 1:
		currentMode = SELECT;
		break;
	case 2:
		currentMode = STATUS;
		break;
	
	default:
		Serial.println("error don't finde Mode");
		break;
	}

}