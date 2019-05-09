#include "debugMode.h"

DebugMode::DebugMode() {
	currentMode = DEBUG;
	testNum = 10;
}

DebugMode::~DebugMode() {

}

int8_t DebugMode::displayTest(std::vector<int8_t> oprnNum) {
	for(auto itr : oprnNum) {
		switch (itr) {
			case 0:
			cntl->view->drawRect(10, 10, 10, 10, RED, 0);
			break;
			case 1:
			cntl->view->drawRect(30, 30, 10, 10, RED, 0);
			cntl->view->drawText(30, 30, F("test"), BLACK);
			break;
			case 2:
			cntl->view->drawRect(50, 50, 10, 10, RED, 0);
			Serial.println(F("draw"));
			cntl->view->drawBitmap(20, 20, 19, 20, REIMU1, BLACK, 0);
			break;
		}
	}
	// cntl->view->drawRect(10, 10, 10, 10, RED, 0);
	// cntl->view->drawRect(30, 30, 10, 10, RED, 0);
	// cntl->view->drawRect(50, 50, 10, 10, RED, 0);
	cntl->view->drawBitmap(0, 0, 19, 20, REIMU1, BLACK, 0);
	cntl->view->drawRect(128/2, 128/2, 30, 30, BLACK, 0);
	cntl->view->drawText(50, 50, F("test"), BLACK);
	return DEBUG;
}


int8_t DebugMode::baceCommandTest(std::vector<int8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			cntl->view->drawRect(viewWidth / 3, viewHeight / 3, 9, 9, BLACK, 0);
			cntl->view->drawRect(viewWidth / 3 * 2, viewHeight / 3, 9, 9, RED, 1);
			cntl->view->drawRoundRect(viewWidth / 3, viewHeight / 3 * 2, 9, 9, 3, GREEN, 0);
			cntl->view->drawRoundRect(viewWidth / 3 * 2, viewHeight / 3 * 2, 9, 9, 3, BLUE, 1);
			break;
			case 1:
			cntl->view->drawCircle(viewWidth / 3, viewHeight / 3, 5, CYAN, 0);
			cntl->view->drawCircle(viewWidth / 3 * 2, viewHeight / 3, 5, MAGENTA, 1);
			cntl->view->drawTriangle(viewWidth / 3, viewHeight / 3 * 2, 5, 5, 3, 3, YELLOW, 0);
			cntl->view->drawTriangle(viewWidth / 3 * 2, viewHeight / 3 * 2, 5, 5, 3, 3, ORANGE, 1);
			break;
			case 2:
			cntl->view->drawLine(viewWidth / 3, viewHeight / 3, viewWidth / 3 * 2, viewHeight / 3, BLACK);
			cntl->view->drawText(viewWidth / 2, viewHeight / 3*2, "Test", RED);
			break;
			default:
			break;
		}
	}
	return DEBUG;
}

int8_t DebugMode::bitMapTest(std::vector<int8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			cntl->view->drawBitmap(0, 0, 19, 20, REIMU1, BLACK, 0);
			cntl->view->drawBitmap(viewWidth / 3, viewHeight / 3, 12, 12, MODE2, BLACK, 0);
			break;
			case 1:
			cntl->view->drawBitmap(0, 0, 12, 12, MODE3, BLACK, 0);
			cntl->view->drawBitmap(viewWidth / 3, viewHeight / 3, 12, 12, MODE4, BLACK, 0);
			break;
			case 2:
			cntl->view->drawBitmap(0, 0, 12, 12, MODE5, BLACK, 0);
			cntl->view->drawBitmap(viewWidth / 3, viewHeight / 3, 12, 12, MODE6, BLACK, 0);
			cntl->view->drawBitmap(viewWidth / 3 * 2, viewHeight / 3 * 2, 12, 12, MODE7, BLACK, 0);
			break;
			default:
			break;
		}
	}
	return DEBUG;
}

int8_t DebugMode::changeModeTest(std::vector<int8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			return DEBUG;
			break;
			case 1:
			return HOME;
			break;
			default:
			break;
		}
	}
	return DEBUG;
}

int8_t DebugMode::mp3Test(std::vector<int8_t> oprnNum) {
	for (auto itr : oprnNum) {
		switch (itr) {
			case 0:
			case 1:
			case 2:
			// cntl->soundplayer->playMP3(3);
			break;
			default:
			break;
		}
	}
	return DEBUG;
}

// //variable used in testGame
// int8_t DebugMode::playerX = 5;
// int8_t DebugMode::playerY = viewHeight-21;
// int8_t DebugMode::jumpFlag = 0;
// int DebugMode::t = 0;
//
// int8_t DebugMode::testGame(std::vector<int8_t> oprnNum) {
//
// 	//view charactor
// 	cntl->view->drawBitmap(playerX, playerY, 19, 20, REIMU1, BLACK, 1);
//
// 	// ground + box
// 	cntl->view->drawLine(0, viewHeight-1, viewWidth, viewHeight-1, BLACK);
// 	cntl->view->drawRect(viewWidth / 3, viewHeight-3, 9, 3, BLACK, 1);
//
// 	if(jumpFlag) {
// 		jumpPlayer();
// 	}
//
// 	Serial.print(F("playerY = "));
// 	Serial.println(playerY);
//
//
// 	for (auto itr : oprnNum) {
// 		//all jump button
// 		switch (itr) {
// 			case 0:
// 			case 1:
// 			case 2:
// 			jumpFlag = 1;
// 			// cntl->soundplayer->playMP3(2);
// 			break;
// 			default:
// 			break;
// 		}
// 	}
// 	return DEBUG;
// }
//
// void DebugMode::jumpPlayer() {
// 	t++;
// // playerY = (LCDHEIGHT-21) - (2*(t/10)-1*(t/10)^2);
// // playerY += -g*t+v0;
//   playerY = (viewHeight-21) - (6 - t/10);
//
// 	if(playerY > viewHeight-21 || playerY < 0) {
// 		// playerY = LCDHEIGHT-21;
// 		jumpFlag = 0;
// 		t = 0;
// 	}
// 	delay(1000);
// }
