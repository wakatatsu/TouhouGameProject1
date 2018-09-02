#ifndef DFPLAYER_H_INCLUDE
#define DFPLAYER_H_INCLUDE

#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"


class DFPlayer {

public:
  DFPlayer();
  void printMessage();
  void playMP3(int playnum);

private:
  SoftwareSerial extraSerial = SoftwareSerial(8, 9); // RX, TX
  DFRobotDFPlayerMini myDFPlayer;
  void printDetail(uint8_t type, int value);


};

#endif
