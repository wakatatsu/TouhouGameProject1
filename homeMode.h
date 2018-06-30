#ifndef HOMEMODE_H_INCLUDE
#define HOMEMODE_H_INCLUDE

#include "mode.h"

class HomeMode : public Mode {
public:
	HomeMode();
	~HomeMode();
	void run(std::vector<uint8_t>);



};
#endif
