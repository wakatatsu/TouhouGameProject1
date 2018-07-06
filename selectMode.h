#ifndef SELECT_H_INCLUDE
#define SELECT_H_INCLUDE

#include "mode.h"

class SelectMode : public Mode {

public:
	SelectMode();
	~SelectMode();
	uint8_t run(std::vector<uint8_t> oprnNum);



};
#endif
