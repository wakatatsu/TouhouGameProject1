#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

#include "view.h"
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>

class DebugMode {

public:
  DebugMode();
  void testView(std::vector<int>);

private:
  int test;

};
#endif
