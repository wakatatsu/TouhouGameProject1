#include "view.h"

View::View() {
	// display.begin();
	// display.setContrast(60);
	// display.clearDisplay();
	// delay(2000);
	// display.clearDisplay();
	display.initR(INITR_144GREENTAB);
	display.fillScreen(WHITE);
}

int16_t View::width() {
	return display.width();
}

int16_t View::height() {
	return display.height();
}

void View::clearDisplay() {
	// display.fillScreen(ST7735_WHITE);
	// display.startWrite();
	// display.setAddrWindow(0,0,display.width()-1,display.height()-1);
	// display.writeColor(WHITE, (display.width()-1)*(display.height()-1));
	// display.endWrite();
	// Serial.println(logData.size());

	for(auto itr : logData) {
		switch(itr.drawNumber) {
			case 1:
			drawRect(itr.drawData[0], itr.drawData[1], itr.drawData[2], itr.drawData[3], WHITE, itr.drawData[4]);
			break;
			case 2:
			drawRoundRect(itr.drawData[0], itr.drawData[1], itr.drawData[2], itr.drawData[3], itr.drawData[4], WHITE, itr.drawData[5]);
			break;
			case 3:
			drawCircle(itr.drawData[0], itr.drawData[1], itr.drawData[2], WHITE, itr.drawData[3]);
			break;
			case 4:
			drawTriangle(itr.drawData[0], itr.drawData[1], itr.drawData[2], itr.drawData[3], itr.drawData[4], itr.drawData[5], WHITE, itr.drawData[6]);
			break;
			case 5:
			drawLine(itr.drawData[0], itr.drawData[1], itr.drawData[2], itr.drawData[3], WHITE);
			break;
			case 6:
			drawPixel(itr.drawData[0], itr.drawData[2], WHITE);
			break;
			case 7:
			drawText(itr.drawData[0], itr.drawData[1], itr.strData, WHITE);
			break;
			case 8:
			drawBitmap(itr.drawData[0], itr.drawData[1], itr.drawData[2], itr.drawData[3], itr.bitData, WHITE, itr.drawData[4]);
			break;
			defalt:
			break;
		}
	}
	logData.clear();
}

template<class... A> std::vector<int8_t> View::inputParameter(A... args) {
	std::vector<int8_t> outputData;
	outputData.clear();
	for(auto itr : std::initializer_list<int8_t>{args...}) {
		outputData.push_back(itr);
	}
	return outputData;
}

void View::inputLog(int8_t drawNumber, std::vector<int8_t> parameter, uint16_t color) {
	drawData.drawNumber = drawNumber;
	drawData.drawData = parameter;
	drawData.color = color;
	logData.push_back(drawData);
}

void View::inputLog(int8_t drawNumber, std::vector<int8_t> parameter, String strPtr, uint16_t color) {
	drawData.strData = strPtr;
	inputLog(drawNumber, parameter, color);
}

void View::inputLog(int8_t drawNumber, std::vector<int8_t> parameter, int8_t *bitData, uint16_t color) {
	drawData.bitData = bitData;
	inputLog(drawNumber, parameter, color);
}

void View::drawRect(int8_t x, int8_t y, int8_t w, int8_t h, uint16_t color, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawRect(x, y, w, h, color);
	}
	else {
		display.fillRect(x, y, w, h, color);
	}
	inputLog(1, inputParameter(x, y, w, h, fillFlag), color);
}

void View::drawRoundRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t r, uint16_t color, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawRoundRect(x, y, w, h, r, color);
	}
	else {
		display.fillRoundRect(x, y, w, h, r, color);
	}
	inputLog(2, inputParameter(x, y, w, h, r, fillFlag), color);
}

void View::drawCircle(int8_t x, int8_t y, int8_t r, uint16_t color, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawCircle(x, y, r, color);
	}
	else {
		display.fillCircle(x, y, r, color);
	}
	inputLog(3, inputParameter(x, y, r, fillFlag), color);
}

void View::drawTriangle(int8_t x, int8_t y, int8_t w1, int8_t h1, int8_t w2, int8_t h2, uint16_t color, int8_t fillFlag) {
	if (fillFlag == 0) {
		display.drawTriangle(x, y, w1, h1, w2, h2, color);
	}
	else {
		display.fillTriangle(x, y, w1, h1, w2, h2, color);
	}
	inputLog(4, inputParameter(x, y, w1, h1, w2, h2, fillFlag), color);
}

void View::drawLine(int8_t x1, int8_t y1, int8_t x2, int8_t y2, uint16_t color) {
	display.drawLine(x1, y1, x2, y2, color);
	inputLog(5, inputParameter(x1, y1, x2, y2), color);
}

void View::drawPixel(int8_t x, int8_t y, uint16_t color) {
	display.drawPixel(x, y, color);
	inputLog(6, inputParameter(x, y), color);
}

void View::drawText(int8_t x, int8_t y, String text, uint16_t color) {
	display.setTextSize(1);
	display.setTextColor(color);
	//display.setTextColor(WHITE, BLACK);
	display.setCursor(x, y);
	display.println(text);
	inputLog(7, inputParameter(x, y), text, color);

}

void View::drawBitmap(int8_t x, int8_t y, int8_t w, int8_t h, int8_t *bitmap, uint16_t color, int8_t drawtype) {
	int count = 0;
	int8_t data = 0;
	int8_t scale = 2;
	for (int8_t i = 0; i < h; i++) {
		for (int8_t j = 0; j < w; j++) {
			data = pgm_read_byte(bitmap + count);
			if (data == 1) {
				switch(drawtype) {
					case 0:
					// display.drawPixel(x + j, y + i, color);//default
					display.fillRect(x + j*scale, y + i*scale, scale, scale, color);
					break;
					case 1:
					// display.drawPixel(x + ((w-1)-j), y + i, color);//left and right reverse
					display.fillRect(x + ((w-1)-j*scale), y + i*scale, scale, scale, color);
					break;
					case 2:
					// display.drawPixel(x + j, y + ((h-1)-i), color);//up and down reverse
					display.fillRect(x + j*scale, y + ((h-1)-i*scale), scale, scale, color);
					break;
					case 3:
					// display.drawPixel(x + ((w-1)-j), y + ((h-1)-i), color);//up,down,left and right reverse
					display.fillRect(x + ((w-1)-j*scale), y + ((h-1)-i*scale), scale, scale, color);
					break;
					default:
					break;
				}
			}
			count++;
		}
	}
	inputLog(8, inputParameter(x, y, w, h, drawtype), bitmap, color);
}
