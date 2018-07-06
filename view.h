#ifndef VIEW_H_INCLUDE
#define VIEW_H_INCLUDE

#include "Arduino.h"
//#include <avr/pgmspace.h>//PROGMEM need to use(used"drawBitmap")
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
//#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
//#include <vector>
#include "bitmapData.h"

class View {

public:
	View();//initialize Display + Mode
	void update();
	void drawRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t fillFlag);
	void drawRoundRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t r, int8_t fillFlag);
	void drawCircle(int8_t x, int8_t y, int8_t r, int8_t fillFlag);
	void drawTriangle(int8_t x, int8_t y, int8_t w1, int8_t h1, int8_t w2, int8_t h2, int8_t fillFlag);
	void drawLine(int8_t x1, int8_t y1, int8_t x2, int8_t y2);
	void drawPixel(int8_t x, int8_t y);
	void drawText(int8_t x, int8_t y, String text);
	void drawBitmap(int8_t x, int8_t y, int8_t w, int8_t h, uint8_t *bitmap, uint8_t drawtype = 0);



private:
	Adafruit_PCD8544 display = Adafruit_PCD8544(9, 8, 7);

};
#endif
