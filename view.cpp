#include "view.h"

View::View(MicroSD *memory) :memoryPointer(memory) {
	display.begin();
	display.setContrast(60);
	display.clearDisplay();
	display.setTextSize(1);
	drawText(11, 0, "Please Wate!");
	delay(2000);
	display.clearDisplay();
}

void View::update() {
	display.display();
	display.clearDisplay();
}

void View::drawRect(int x, int y, int w, int h, int fillFlag) {
	if (fillFlag == 0) {
		display.drawRect(x, y, w, h, BLACK);
	}
	else {
		display.fillRect(x, y, w, h, BLACK);
	}
}
void View::drawRoundRect(int x, int y, int w, int h, int r, int fillFlag) {
	if (fillFlag == 0) {
		display.drawRoundRect(x, y, w, h, r, BLACK);
	}
	else {
		display.fillRoundRect(x, y, w, h, r, BLACK);
	}
}

void View::drawCircle(int x, int y, int r, int fillFlag) {
	if (fillFlag == 0) {
		display.drawCircle(x, y, r, BLACK);
	}
	else {
		display.fillCircle(x, y, r, BLACK);
	}
}

void View::drawTriangle(int x, int y, int w1, int h1, int w2, int h2, int fillFlag) {
	if (fillFlag == 0) {
		display.drawTriangle(x, y, w1, h1, w2, h2, BLACK);
	}
	else {
		display.fillTriangle(x, y, w1, h1, w2, h2, BLACK);
	}
}

void View::drawLine(int x1, int y1, int x2, int y2) {
	display.drawLine(x1, y1, x2, y2, BLACK);
}

void View::drawPixel(int x, int y) {
	display.drawPixel(x, y, BLACK);
}

void View::drawText(int x, int y, String text) {
	//splay.setTextSize(1);//don't know function
	display.setTextColor(BLACK);
	//display.setTextColor(WHITE, BLACK);//don't know function
	display.setCursor(x, y);
	display.println(text);
}
/*
void View::drawBitmap(int x, int y, uint8_t *bitmap, int w, int h) {
	display.drawBitmap(x, y, bitmap, w, h, BLACK);
}
*/

void View::drawBitmap(int x, int y, uint8_t *bitmap, int w, int h) {
	int count = 0;
	uint8_t data = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			data = pgm_read_byte(bitmap + count);
			if (data == 1) {
				drawPixel(x + j, y + i);
			}
			count++;
		}
	}
}

void View::drawBaceBitmap(int x, int y, int w, int h, String baceType) {
	uint8_t data;
	//size check
	if ((w != 12 || h != 12) && (w != 19 || h != 20)) {
		Serial.println("BitmapSizeERROR");
	}
	else {
		memoryPointer->openloadFile(baceType);
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				data = memoryPointer->readBitmapData();
				if (data == 1) {
					drawPixel(x + j, y + i);
				}
			}
		}
		memoryPointer->closeloadFile();
	}
}
