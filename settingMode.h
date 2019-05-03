#ifndef SETTING_H_INCLUDE
#define SETTING_H_INCLUDE

#include "mode.h"

class SettingMode : public Mode {

public:
	SettingMode();
	~SettingMode();
	int8_t run(std::vector<int8_t> oprnNum);

private:
	int8_t selectPoint;
  void changeSetting(int8_t);

};
#endif
