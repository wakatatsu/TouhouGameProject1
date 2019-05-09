#ifndef VIEW_H_INCLUDE
#define VIEW_H_INCLUDE

#include "Arduino.h"
#include <SPI.h>
#include <Adafruit_GFX.h>
// #include <Adafruit_PCD8544.h>
#include <Adafruit_ST7735.h>
#include "bitmapData.h"

#include "ArduinoSTL.h"
#include <vector>

#define BLACK	ST7735_BLACK
#define WHITE	ST7735_WHITE
#define RED	ST7735_RED
#define GREEN ST7735_GREEN
#define BLUE ST7735_BLUE
#define CYAN ST7735_CYAN
#define MAGENTA ST7735_MAGENTA
#define YELLOW ST7735_YELLOW
#define ORANGE ST7735_ORANGE

class View {

	typedef struct {
		int8_t drawNumber;
		std::vector<int8_t> drawData;
		String strData;
		int8_t *bitData;
		uint16_t color;
	}viewLogData;

public:
	View();
	int16_t width();
	int16_t height();
	void clearDisplay();
	template<class... A> std::vector<int8_t> inputParameter(A... args);
	void inputLog(int8_t drawNumber, std::vector<int8_t> parameter, uint16_t color);
	void inputLog(int8_t drawNumber, std::vector<int8_t> parameter, String strPtr, uint16_t color);
	void inputLog(int8_t drawNumber, std::vector<int8_t> parameter, int8_t *bitData, uint16_t color);
	void drawRect(int8_t x, int8_t y, int8_t w, int8_t h,
		 uint16_t color, int8_t fillFlag);
	void drawRoundRect(int8_t x, int8_t y, int8_t w, int8_t h, int8_t r,
		 uint16_t color, int8_t fillFlag);
	void drawCircle(int8_t x, int8_t y, int8_t r,
		 uint16_t color, int8_t fillFlag);
	void drawTriangle(int8_t x, int8_t y, int8_t w1, int8_t h1, int8_t w2, int8_t h2,
		 uint16_t color, int8_t fillFlag);
	void drawLine(int8_t x1, int8_t y1, int8_t x2, int8_t y2, uint16_t color);
	void drawPixel(int8_t x, int8_t y, uint16_t color);
	void drawText(int8_t x, int8_t y, String text, uint16_t color);
	void drawBitmap(int8_t x, int8_t y, int8_t w, int8_t h, int8_t *bitmap,
		 uint16_t color, int8_t drawtype);



private:
	// Adafruit_PCD8544 display = Adafruit_PCD8544(A1, A2, A3);//Adafruit_PCD8544(DC, CS, RST)
	Adafruit_ST7735 display = Adafruit_ST7735(10, 8, 9);
	viewLogData drawData;
	std::vector<viewLogData> logData;

};
#endif
