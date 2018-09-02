#include "debugMode.h"

DebugMode::DebugMode() {
	currentMode = DEBUG;
}

DebugMode::~DebugMode() {

}

void DebugMode::baceCommandTest(std::vector<uint8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
		case 0:
			viewPointer->drawRect(LCDWIDTH / 3, LCDHEIGHT / 3, 9, 9, 0);
			viewPointer->drawRect(LCDWIDTH / 3 * 2, LCDHEIGHT / 3, 9, 9, 1);
			viewPointer->drawRoundRect(LCDWIDTH / 3, LCDHEIGHT / 3 * 2, 9, 9, 3, 0);
			viewPointer->drawRoundRect(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 9, 9, 3, 1);
			break;
		case 1:
			viewPointer->drawCircle(LCDWIDTH / 3, LCDHEIGHT / 3, 5, 0);
			viewPointer->drawCircle(LCDWIDTH / 3 * 2, LCDHEIGHT / 3, 5, 1);
			viewPointer->drawTriangle(LCDWIDTH / 3, LCDHEIGHT / 3 * 2, 5, 5, 3, 3, 0);
			viewPointer->drawTriangle(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 5, 5, 3, 3, 1);
			break;
		case 2:
			viewPointer->drawLine(LCDWIDTH / 3, LCDHEIGHT / 3, LCDWIDTH / 3 * 2, LCDHEIGHT / 3);
			viewPointer->drawText(LCDWIDTH / 2, LCDHEIGHT / 3*2, "Test");
			break;
		default:
			break;
		}
	}
}

void DebugMode::bitMapTest(std::vector<uint8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
		case 0:
			viewPointer->drawBitmap(0, 0, 19, 20, DATA1);
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, DATA2);
			break;
		case 1:
			viewPointer->drawBitmap(0, 0, 12, 12, DATA3);
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, DATA4);
			break;
		case 2:
			viewPointer->drawBitmap(0, 0, 12, 12, DATA5);
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, DATA6);
			viewPointer->drawBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 12, 12, DATA7);
			break;
		default:
			break;
		}
	}
}

int8_t DebugMode::changeModeTest(std::vector<uint8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			return DEBUG;
			break;
			case 1:
			return HOME;
			break;
			// case 2:
			// return SELECT;
			// break;
			default:
			break;
		}
	}
	return -1;
}

int8_t DebugMode::mp3Test(std::vector<uint8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			case 1:
			case 2:
			DFPlayerPointer->playMP3(2);
			break;
			default:
			break;
		}
	}
	Serial.println(F("on"));
	return -1;
}
