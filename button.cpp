#include "button.h"

Button::Button():pinNumber(-1) {
  
}

Button::Button(int num):pinNumber(num) {
}

int Button::getValue() {
  return digitalRead(pinNumber);
}

void Button::setPin(int num) {
}

int Button::getPin() {
  return pinNumber;
}

