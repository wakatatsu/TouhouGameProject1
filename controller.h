#ifndef CONTROLLER_H_INCLUDE
#define CONTROLLER_H_INCLUDE

#include "Arduino.h"
#include "StandardCplusplus.h"
#include "button.h"
#include "microSD.h"
#include "speaker.h"
#include <vector>


class Controller {

    public:
      Controller();//setting(initialization)
      std::vector<int> getOperation();//button
      void requestOperation(String);//speaker,microSD

    private:
      std::vector<Button*> buttons;
      MicroSD *memory;
      Speaker *speaker;


};

#endif
