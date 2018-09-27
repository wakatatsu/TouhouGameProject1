#ifndef STATUS_H_INCLUDE
#define STATUS_H_INCLUDE

#include "mode.h"

class StatusMode : public Mode {

public:
	StatusMode();
	~StatusMode();
	uint8_t run(std::vector<uint8_t> oprnNum);

private:
	
};
#endif
