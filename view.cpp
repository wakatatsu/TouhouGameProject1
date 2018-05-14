#include "view.h"

View::View() {
  display.begin();
  display.setContrast(60);
  display.display();
  delay(2000);
  display.clearDisplay();
  mode = new Mode();
}

void View::Operation(std::vector<int> buttonNum) {
  mode->sendMode();
}
