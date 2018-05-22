#ifndef VIEW_H_INCLUDE
#define VIEW_H_INCLUDE

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
//#include "StandardCplusplus.h"

class View {

  public:
    View();//initialize Display + Mode
	  void update();
	  Adafruit_PCD8544 *getDisplay();


  private:
    Adafruit_PCD8544 display = Adafruit_PCD8544(9, 8, 7);
    Adafruit_PCD8544 *displayPointer;
	  void set_text(int, int, String, int);

};
#endif
