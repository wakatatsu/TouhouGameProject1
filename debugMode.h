#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "mode.h"

class DebugMode : public Mode{

public:
	DebugMode();
	~DebugMode();
	void baceCommandTest(std::vector<uint8_t> oprnNum);
	void bitMapTest(std::vector<uint8_t> oprnNum);
	uint8_t changeModeTest(std::vector<uint8_t> oprnNum);

private:

};
#endif
