#ifndef HOMEMODE_H_INCLUDE
#define HOMEMODE_H_INCLUDE

#include "mode.h"

class HomeMode : public Mode {

public:
	HomeMode();
	~HomeMode();
	uint8_t run(std::vector<uint8_t> oprnNum);

private:
	static int8_t count;
	static uint8_t drawtypeFlag;


};
#endif
