#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE

#include "button.h"
#include "view.h"
#include "DFPlayer.h"
#include "stepcount.h"

#include "ArduinoSTL.h"
#include <vector>


class Controller {

public:
	Controller();
	void clearView();
	void updateStep();
	std::vector<int8_t> getOperation();
  DFPlayer *soundplayer;
  View *view;

private:
	std::vector<Button*> buttons;
	std::vector<int8_t> buttonNumber;
	StepCount *stepcount;
	int8_t offsetNumber;
	int8_t buttonFlag;
	int8_t buttonCount;
	Button *backLight;

	void initButton();
	void initDFPlayer();
	void initDisplay();
	void initSensor();


};

#endif
