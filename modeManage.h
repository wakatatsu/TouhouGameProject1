#ifndef MODEMANAGE_H_INCLUDE
#define MODEMANAGE_H_INCLUDE

#include "mode.h"
#include "debugMode.h"
#include "homeMode.h"
#include "statusMode.h"
#include "mealMode.h"
// #include "settingMode.h"

class ModeManage : public Mode {

public:
	ModeManage(Controller* cntlPointer);
	void runOperation();
	void sendOperation(std::vector<int8_t> oprnNum);
private:
	void changeMode(int8_t toMode);
	void deleatMode();
	void createMode(int8_t toMode);
	DebugMode *testDebug;
	HomeMode *testHome;
	StatusMode *testStatus;
	MealMode *testMeal;
	// SettingMode *testSetting;




};

#endif
