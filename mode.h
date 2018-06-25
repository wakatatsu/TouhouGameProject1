#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

//#include "Arduino.h"
#include "view.h"
#include "debugMode.h"
#include "homeMode.h"

class Mode {

public:
	Mode(View*);
	void sendOperation(std::vector<int>);
	void changeMode(int toMode);


private:
	View *viewPointer;
	int currentMode;
	DebugMode *testmode;


};

#define DEBUG -1;
#define HOME 0;
#define SELECT 1;
#define STATUS 2;
#define MEAL 3;

#endif
