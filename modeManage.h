#ifndef MODEMANAGE_H_INCLUDE
#define MODEMANAGE_H_INCLUDE

#include "mode.h"

#include "debugMode.h"
#include "homeMode.h"
#include "selectMode.h"

class ModeManage : public Mode {

public:
	ModeManage(View *view);
	void sendOperation(std::vector<uint8_t> oprnNum);
private:
	void changeMode(uint8_t toMode);



};

#endif
