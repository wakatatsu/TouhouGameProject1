#include "debugMode.h"


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

void DebugMode::bitMapTest(std::vector<int> oprnNum) {
	/*
	for (auto itr = oprnNum) {
		switch (itr) {
		case 0:
			viewPointer->drawBitmap(0, 0, 12, 12, "modeData1.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "modeData2.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 12, 12, "modeData3.txt");
			break;
		case 1:
			viewPointer->drawBitmap(0, 0, 12, 12, "modeData4.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "modeData5.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 12, 12, "modeData6.txt");
			break;
		case 2:
			viewPointer->drawBitmap(0, 0, 12, 12, "modeData7.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3, LCDHEIGHT / 3, 12, 12, "modeData8.txt");
			viewPointer->drawBitmap(LCDWIDTH / 3 * 2, LCDHEIGHT / 3 * 2, 19, 20, "reimuData.txt");
			break;
		default:
			break;
		}
	}
	*/
	viewPointer->drawBitmap(LCDWIDTH / 4, LCDHEIGHT / 4, bitmap, 19, 20);
}
