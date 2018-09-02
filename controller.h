#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE


#include "Arduino.h"
#include "button.h"
#include "view.h"
#include "modeManage.h"


class Controller {

public:
	Controller();
	void updateView();
	void runOperation();

private:
	std::vector<Button*> buttons;
	std::vector<uint8_t> buttonNumber;
	View *view;
	ModeManage *modeManage;
	uint8_t buttonFlag = 0;
	uint8_t buttonCount = 0;

	std::vector<uint8_t> getOperation();


};

#endif
