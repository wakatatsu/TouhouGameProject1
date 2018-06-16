#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

//#include "view.h"
//#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
//#include <vector>
//#include "mode.h"
#include "view.h"

class DebugMode {

public:
	DebugMode(View*);
	void testView(std::vector<int>);

private:
	View *viewPointer;
	int test;

};
#endif
