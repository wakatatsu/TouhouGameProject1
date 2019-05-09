#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#define DEBUG -1
#define HOME 0
#define STATUS 1
#define MEAL 2
#define SETTING 3

#include "controller.h"

class Mode {

public:
	Mode();
	~Mode();

protected:
	static Controller* cntl;
	static int16_t viewWidth;
	static int16_t viewHeight;
	static int8_t currentMode;

};
#endif
