#include "view.h"

View::View() {
	display.begin();
	display.setContrast(60);
	display.clearDisplay();
	delay(2000);
	display.clearDisplay();
}

void View::update() {
	display.display();
	display.clearDisplay();
}

void View::drawRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawRect(x, y, w, h, BLACK);
	}
	else {
		display.fillRect(x, y, w, h, BLACK);
	}
}
void View::drawRoundRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t r, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawRoundRect(x, y, w, h, r, BLACK);
	}
	else {
		display.fillRoundRect(x, y, w, h, r, BLACK);
	}
}

void View::drawCircle(int8_t x, int8_t y, int8_t r, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawCircle(x, y, r, BLACK);
	}
	else {
		display.fillCircle(x, y, r, BLACK);
	}
}

void View::drawTriangle(int8_t x, int8_t y, int8_t w1, int8_t h1, int8_t w2, int8_t h2, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawTriangle(x, y, w1, h1, w2, h2, BLACK);
	}
	else {
		display.fillTriangle(x, y, w1, h1, w2, h2, BLACK);
	}
}

void View::drawLine(int8_t x1, int8_t y1, int8_t x2, int8_t y2) {
	display.drawLine(x1, y1, x2, y2, BLACK);
}

void View::drawPixel(int8_t x, int8_t y) {
	display.drawPixel(x, y, BLACK);
}

void View::drawText(int8_t x, int8_t y, String text) {
	display.setTextSize(1);
	display.setTextColor(BLACK);
	//display.setTextColor(WHITE, BLACK);//don't know function
	display.setCursor(x, y);
	display.println(text);
}

void View::drawBaceBitmap(int8_t x, int8_t y, int8_t w, int8_t h, uint8_t *bitmap) {
	int count = 0;
	uint8_t data = 0;
	for (int8_t i = 0; i < h; i++) {
		for (int8_t j = 0; j < w; j++) {
			data = pgm_read_byte(bitmap + count);
			if (data == 1) {
				drawPixel(x + j, y + i);
			}
			count++;
		}
	}
}
