#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#define DEBUG 0
#define HOME 1
#define SELECT 2
#define STATUS 3
#define MEAL 4

#include "view.h"
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>

class DebugMode;
class HomeMode;
class SelectMode;

class Mode {

public:
	Mode();
	~Mode();

protected:
	static uint8_t currentMode;
	static View *viewPointer;
	static union Modes {
		DebugMode *DebugMode;
		HomeMode *HomeMode;
		SelectMode *SelectMode;
		
		Modes() : DebugMode(NULL) {}
		~Modes() {}
	}modes;

};
#endif
