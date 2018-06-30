#ifndef BUTTON_H_INCLUDE
#define BUTTON_H_INCLUDE

#include "Arduino.h"

class Button {

  public:
    Button();
    Button(uint8_t);
    uint8_t getValue();
	  uint8_t getPin();

  private:
    uint8_t pinNumber;

};

#endif
