#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE


#include "Arduino.h"
#include "button.h"
#include "microSD.h"
#include "speaker.h"
#include "view.h"
#include "modeManage.h"


class Controller {

public:
	Controller();
	void updateView();
	std::vector<uint8_t> getOperation();
	void sendOperation(std::vector<uint8_t>);

private:
	std::vector<Button*> buttons;
	MicroSD *memory;
	std::vector<uint8_t> buttonNumber;
	//Speaker *speaker;
	View *view;
	ModeManage *modeManage;


};

#endif
