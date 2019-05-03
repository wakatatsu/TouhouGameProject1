#ifndef STATUS_H_INCLUDE
#define STATUS_H_INCLUDE

#include "mode.h"

#define STATUS_MAX_NUM 3

class StatusMode : public Mode {

public:
	StatusMode();
	~StatusMode();
	int8_t run(std::vector<int8_t> oprnNum);

private:
	int8_t selectScreen;
	void viewStatus();


};
#endif
