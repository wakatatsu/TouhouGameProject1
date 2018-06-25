#ifndef HOMEMODE_H_INCLUDE
#define HOMEMODE_H_INCLUDE

#include "view.h"

class HomeMode {
public:
	HomeMode(View*);
	void run();

private:
	View *viewPointer;

};
#endif
