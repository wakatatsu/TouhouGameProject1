#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#define DEBUG -1;
#define HOME 0;
#define SELECT 1;
#define STATUS 2;
#define MEAL 3;

#include "view.h"

class DebugMode;
class HomeMode;

class Mode {

public:
	Mode();
	~Mode();

protected:
	static View *viewPointer;

	static union Modes {
		DebugMode *DebugMode;
		HomeMode *HomeMode;

		Modes() : DebugMode(NULL) {}
		~Modes() {}
	}currentMode;

};

#endif
