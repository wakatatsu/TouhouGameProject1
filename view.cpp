#include "view.h"

View::View() {
  display.begin();
  display.setContrast(60);
  display.clearDisplay();
  display.setTextSize(1);
  set_text(11, 0, "Please Wate!", BLACK);
  delay(2000);
  display.clearDisplay();
  displayPointer = &display;
}

void View::update() {
	display.display();
}

Adafruit_PCD8544 *View::getDisplay() {
	return displayPointer;
}

void View::set_text(int x, int y, String text, int color) {
	display.setTextColor(color);
	display.setCursor(x, y);
	display.println(text);
	display.display();
}
