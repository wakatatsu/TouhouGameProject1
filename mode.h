#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#define DEBUG 0
#define HOME 1
#define SELECT 2
#define STATUS 3
#define MEAL 4

#include "controller.h"
// #include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error

class Mode {

public:
	Mode();
	~Mode();

protected:
	static Controller *cntl;
	static uint8_t currentMode;
	static union Modes {
		class DebugMode *DebugMode;
		class HomeMode *HomeMode;
		class SelectMode *SelectMode;
		class StatusMode *StatusMode;
		class MealMode *MealMode;
		Modes() : DebugMode(NULL) {}
		~Modes() {}
	}modes;

};
#endif
