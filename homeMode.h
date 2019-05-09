#ifndef HOMEMODE_H_INCLUDE
#define HOMEMODE_H_INCLUDE

#include "mode.h"

class HomeMode : public Mode {

public:
	HomeMode();
	~HomeMode();
	int8_t run(std::vector<int8_t> oprnNum);

private:
	int8_t *ptr;
	int8_t drawX;
	int8_t drawtypeFlag;
	int8_t moveFlag;
	int8_t selectModeIcon;
	void randomMove();
	void selectMode(std::vector<int8_t> oprnNum);


};
#endif
