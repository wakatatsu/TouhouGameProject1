#include "debugMode.h"

DebugMode::DebugMode(View *view) :viewPointer(view) {
}

void DebugMode::baceCommandTest(std::vector<int> oprnNum) {
	String text = "hogehoge";
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
			viewPointer->drawText(LCDWIDTH / 3, LCDHEIGHT / 3 * 2, text);
			break;
		default:
			break;
		}
	}
}

const PROGMEM uint16_t bitmap[] = {
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
	0,0,0,0,0,1,1,0,1,1,1,1,1,1,0,0,0,0,0,
	0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0
};

void DebugMode::bitMapTest(std::vector<int> oprnNum) {
	viewPointer->drawBitmap(LCDWIDTH / 4, LCDHEIGHT / 4, bitmap, 19, 20);
}
