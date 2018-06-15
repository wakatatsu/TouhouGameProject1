#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#include "Arduino.h"
#include "view.h"
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>
#include "debugMode.h"

class Mode {

    public:
		Mode();
		void sendOperation(std::vector<int>);


    private:
  		int currentMode;
  		DebugMode *testmode;


};

#define DEBUG -1;
#define HOME 0;
#define SELECT 1;
#define STATUS 2;
#define MEAL 3;

#endif
