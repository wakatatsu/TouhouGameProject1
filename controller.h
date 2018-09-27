#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE


#include "Arduino.h"
//#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include "ArduinoSTL.h"
#include <vector>
#include "button.h"
#include "DFPlayer.h"
#include "stepcount.h"
#include "view.h"


class Controller {

public:
	Controller();
	void updateView();
	void updateStep();
	std::vector<uint8_t> getOperation();
  DFPlayer *soundplayer;
  View *view;

private:
	std::vector<Button*> buttons;
	std::vector<uint8_t> buttonNumber;
	StepCount *stepcount;
	uint8_t buttonFlag = 0;
	uint8_t buttonCount = 0;


};

#endif
