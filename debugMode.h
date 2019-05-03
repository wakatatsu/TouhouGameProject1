#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "mode.h"

class DebugMode : public Mode {

public:
	DebugMode();
	~DebugMode();
	int8_t displayTest(std::vector<int8_t> oprnNum);
	int8_t baceCommandTest(std::vector<int8_t> oprnNum);
	int8_t bitMapTest(std::vector<int8_t> oprnNum);
	int8_t changeModeTest(std::vector<int8_t> oprnNum);
	int8_t mp3Test(std::vector<int8_t> oprnNum);
	int8_t testGame(std::vector<int8_t> oprnNum);

private:
	//variable used in testGame
	static int8_t playerX;
	static int8_t playerY;
	static int8_t jumpFlag;
	static int t;
	int testNum;
	int *ptr;
	void jumpPlayer();

};
#endif
