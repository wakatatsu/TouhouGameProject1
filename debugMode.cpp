#include "debugMode.h"

DebugMode::DebugMode() {
  test = 0;
}

void DebugMode::testView(std::vector<int> oprnNum) {
	for(auto itr : oprnNum) {
		switch(itr) {
		case 0:
			//drawRect
			break;
		case 1:
			//drawCircle
			break;
		case 2:
			//set_text
			break;
		default:
      break;
		}
	}
}
