#include "button.h"

const int8_t Button::usedPin[10] = {8, 9, 10, 11, 12, 13, A1, A2, A3};

Button::Button():pinNumber(0) {
}

Button::Button(int8_t num) {
  if(checkOverlap(num)) {
    pinNumber = 0;
    Serial.println(F("error:don't set button"));
  }
  pinNumber = num;
}

void Button::writeMode() {
  pinMode(pinNumber, OUTPUT);
}

int8_t Button::getValue() {
  return digitalRead(pinNumber);
}

void Button::setValue(int8_t num) {
  if(num == 0) {
    digitalWrite(pinNumber, LOW);
  }
  else {
    digitalWrite(pinNumber, HIGH);
  }
}

int8_t Button::getPin() {
	return pinNumber;
}

int8_t Button::checkOverlap(int8_t checkNum) {
  for(auto itr : usedPin) {
    if(itr == checkNum) return 1;
  }
  return 0;
}
