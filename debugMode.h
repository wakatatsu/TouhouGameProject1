#ifndef DEBUGMODE_H_INCLUDE
#define DEBUGMODE_H_INCLUDE

<<<<<<< HEAD
//#include "view.h"
//#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
//#include <vector>
#include "mode.h"
=======
#include "view.h"
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6

class DebugMode {

public:
<<<<<<< HEAD
  DebugMode(View*);
=======
  DebugMode();
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6
  void testView(std::vector<int>);

private:
  View *viewPointer;
  int test;

};
#endif
