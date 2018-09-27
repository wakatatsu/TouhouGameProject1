#ifndef MEALMODE_H_INCLUDE
#define MEALMODE_H_INCLUDE

#include "mode.h"

class MealMode : public Mode {

public:
	MealMode();
	~MealMode();
	run(std::vector<uint8_t> oprnNum);

protected:

};
#endif
