#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE


#include "Arduino.h"
#include "button.h"
#include "microSD.h"
#include "speaker.h"
#include "view.h"
#include "mode.h"


class Controller {

public:
	Controller();//setting
	void updateView();//update Display
	std::vector<int> getOperation();//button operation
	//void sendOperation(String);//speaker,microSD
	void sendOperation(std::vector<int>);//send operation to Mode

private:
	std::vector<Button*> buttons;
	MicroSD *memory;
	std::vector<int> buttonNumber;//save pinNumber
	Speaker *speaker;
	View *view;
	Mode *mode;


};

#endif
