#ifndef STATUS_H_INCLUDE
#define STATUS_H_INCLUDE

#include "mode.h"

#define STATUS_MAX_NUM 3

class StatusMode : public Mode {

public:
	StatusMode();
	~StatusMode();
	uint8_t run(std::vector<uint8_t> oprnNum);

private:
	uint8_t selectPointer;
	void viewStatus();

};
#endif
