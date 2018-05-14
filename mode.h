#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#include "debugMode.h"

class Mode {

    public:
      Mode();
      void sendMode();


    private:
      int currentMode;


};

#define HOME 0;
#define STATUS 1;
#define MEAL 2;

#endif
