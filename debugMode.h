#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "mode.h"

class DebugMode : public Mode{

public:
	DebugMode();
	~DebugMode();
	void baceCommandTest(std::vector<uint8_t>);
	void bitMapTest(std::vector<uint8_t>);

private:

};
#endif
