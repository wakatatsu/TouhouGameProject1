#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

#include "StandardCplusplus.h"
#include <vector>
#include "debugMode.h"

class Mode {

    public:
      Mode();
      void receiveOperation(std::vector<int>);


    private:
      int currentMode;


};

#define DEBUG -1;
#define HOME 0;
#define SELECT 1;
#define STATUS 2;
#define MEAL 3;

#endif
