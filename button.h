#ifndef BUTTON_H_INCLUDE
#define BUTTON_H_INCLUDE

#include "Arduino.h"

class Button {

  public:
    Button();
    Button(int);
    int getValue();
    void setPin(int);
    int getPin();
    
  private:
    int pinNumber;
    
};

#endif
