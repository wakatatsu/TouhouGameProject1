#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "mode.h"

class DebugMode : public Mode {

public:
	DebugMode();
	~DebugMode();
	void baceCommandTest(std::vector<uint8_t> oprnNum);
	void bitMapTest(std::vector<uint8_t> oprnNum);
	int8_t changeModeTest(std::vector<uint8_t> oprnNum);
	int8_t mp3Test(std::vector<uint8_t> oprnNum);
	int8_t testGame(std::vector<uint8_t> oprnNum);

private:
	//variable used in testGame
	static int8_t playerX;
	static int playerY;
	static int8_t jumpFlag;
	static int t;
	void jumpPlayer();

};
#endif
