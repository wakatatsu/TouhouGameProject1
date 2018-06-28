#include "button.h"

Button::Button():pinNumber(0) {
  
}

Button::Button(uint8_t num):pinNumber(num) {
}

uint8_t Button::getValue() {
  //return digitalRead(pinNumber);
	return PIND & _BV(pinNumber);
}

uint8_t Button::getPin() {
	return pinNumber;
}
