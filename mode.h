#ifndef MODE_H_INCLUDE
#define MODE_H_INCLUDE

//#include "Arduino.h"
#include "view.h"
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>
#include "debugMode.h"

class Mode {

    public:
<<<<<<< HEAD
		Mode(View*);
=======
		Mode();
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6
		void sendOperation(std::vector<int>);


    private:
<<<<<<< HEAD
      View *viewPointer;
=======
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6
  		int currentMode;
  		DebugMode *testmode;


};

#define DEBUG -1;
#define HOME 0;
#define SELECT 1;
#define STATUS 2;
#define MEAL 3;

#endif
