#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#define DEBUG -1
#define HOME 0
#define STATUS 1
#define MEAL 2
#define SETTING 3

#include "controller.h"

struct statusPalameter {
	char* _name;
	int8_t _hp;
	// int8_t _mp;
	// int8_t _str;
	// int8_t _vit;
	// int8_t _int;
	// int8_t _res;
	// int8_t _dex;
	// int8_t _agi;
	// int8_t _luk;
	int8_t _lv;
	int8_t _exp;
	char* _condition;
};

class Mode {

public:
	Mode();
	~Mode();

protected:
	static Controller* cntl;
	static int16_t viewWidth;
	static int16_t viewHeight;
	static int8_t currentMode;
	static statusPalameter character;

};
#endif
