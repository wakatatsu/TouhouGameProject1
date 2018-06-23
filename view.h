#ifndef VIEW_H_INCLUDE
#define VIEW_H_INCLUDE

#include "Arduino.h"
#include <avr/pgmspace.h>//PROGMEM need to use(used"drawBitmap")
#include "microSD.h"

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>

class View {

public:
	View(MicroSD*);//initialize Display + Mode
	void update();
	void drawRect(int x, int y, int w, int h, int fillFlag);
	void drawRoundRect(int x, int y, int w, int h, int r, int fillFlag);
	void drawCircle(int x, int y, int r, int fillFlag);
	void drawTriangle(int x, int y, int w1, int h1, int w2, int h2, int fillFlag);
	void drawLine(int x1, int y1, int x2, int y2);
	void drawPixel(int x, int y);
	void drawText(int x, int y, String text);
	void drawBitmap(int x, int y, uint8_t *bitmap, int w, int h);
	void drawBaceBitmap(int x, int y, int w, int h, String baceType);



private:
	Adafruit_PCD8544 display = Adafruit_PCD8544(9, 8, 7);
	MicroSD *memoryPointer;

};
#endif
