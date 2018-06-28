#ifndef MODEMANAGE_H_INCLUDE
#define MODEMANAGE_H_INCLUDE

#include "mode.h"

#include "debugMode.h"
#include "homeMode.h"

class ModeManage : public Mode {

public:
	ModeManage(View*);
	void sendOperation(std::vector<uint8_t>);
	void changeMode(int toMode);



};

#endif
