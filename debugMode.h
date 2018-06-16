#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "view.h"

class DebugMode {

public:
	DebugMode(View*);
	void baceCommandTest(std::vector<int>);
	void bitMapTest(std::vector<int>);

private:
	View *viewPointer;

};
#endif
