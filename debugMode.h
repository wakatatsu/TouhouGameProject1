#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "view.h"

class DebugMode {

public:
  DebugMode();
  void testView(Adafruit_PCD8544*);

private:
  int test;

};
#endif
