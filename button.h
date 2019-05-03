#ifndef BUTTON_H_INCLUDE
#define BUTTON_H_INCLUDE

#include "Arduino.h"

class Button {

  public:
    Button();
    Button(int8_t);
    void writeMode();
    int8_t getValue();
    void setValue(int8_t);
	  int8_t getPin();

  private:
    static const int8_t usedPin[10];
    int8_t pinNumber;
    int8_t checkOverlap(int8_t);

};

#endif
