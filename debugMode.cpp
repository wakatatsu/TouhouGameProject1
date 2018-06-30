#include "debugMode.h"


/*
const PROGMEM uint8_t bitmap[19 * 20] = {
  0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,
  0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,1,
  0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,0,
  0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,
  0,0,0,0,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,
  0,0,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,
  0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  1,0,0,0,0,1,1,1,0,1,0,1,0,1,1,0,0,0,0,
  0,1,0,0,0,0,1,1,1,0,1,1,0,1,0,0,0,0,0,
  1,0,1,0,0,1,0,1,1,0,1,1,1,0,1,0,0,0,0,
  0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
  1,0,0,0,1,0,1,1,1,1,1,1,1,0,1,0,0,0,0,
  0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
  0,0,0,0,0,1,1,0,1,1,1,0,1,1,0,0,0,0,0,
  0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0
};
*/


DebugMode::DebugMode() {

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
	//viewPointer->drawBaceBitmap(0, 0, 12, 12, "mode1.txt");
	for (auto itr : oprnNum) {
		switch (itr) {
		case 0:
			viewPointer->drawBaceBitmap(0, 0, 12, 12, "mode1.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "mode2.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 12, 12, "mode3.txt");
			break;
		case 1:
			viewPointer->drawBaceBitmap(0, 0, 12, 12, "mode4.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "mode5.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 12, 12, "mode6.txt");
			break;
		case 2:
			//viewPointer->drawBaceBitmap(0, 0, 12, 12, "mode7.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "mode8.txt");
			//viewPointer->drawBaceBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 19, 20, "reimu.txt");
			break;
		default:
			break;
		}
	}

	//viewPointer->drawBitmap(LCDWIDTH / 4, LCDHEIGHT / 4, bitmap, 19, 20);
}
