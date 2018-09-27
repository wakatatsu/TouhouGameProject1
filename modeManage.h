#ifndef MODEMANAGE_H_INCLUDE
#define MODEMANAGE_H_INCLUDE

#include "mode.h"
#include "debugMode.h"
#include "homeMode.h"
#include "selectMode.h"
#include "statusMode.h"
#include "mealMode.h"

class ModeManage : public Mode {

public:
	ModeManage(Controller *cntlPointer);
	void runOperation();
	void sendOperation(std::vector<uint8_t> oprnNum);
private:
	void changeMode(uint8_t toMode);
	void deleatMode();
	void createMode(uint8_t toMode);



};

#endif
