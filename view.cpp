#include "view.h"

View::View() {
  display.begin();
  display.setContrast(60);
  display.clearDisplay();
  display.setTextSize(1);
  set_text(11, 0, "Please Wate!", BLACK);
  delay(2000);
  display.clearDisplay();
}

void View::updateView() {
	display.display();
}

void View::set_text(int x, int y, String text, int color) {
	display.setTextColor(color);
	display.setCursor(x, y);
	display.println(text);
	display.display();
}

uint8_t View::copyBuffer() {
	uint8_t copyArray[LCDWIDTH * LCDHEIGHT / 8];
	for (int i = 0; i <= LCDWIDTH * LCDHEIGHT / 8; i++) {
		copyArray[i] = display.pcd8544_buffer[i];
	}
	return copyArray;
}
