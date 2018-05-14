#ifndef VIEW_H_INCLUDE
#define VIEW_H_INCLUDE

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "StandardCplusplus.h"//Writing on top of "SPI.h" result in an error
#include <vector>
#include "mode.h"

class View {

  public:
    View();
    void Operation(std::vector<int>);

  private:
    Adafruit_PCD8544 display = Adafruit_PCD8544(9, 8, 7);
    Mode *mode;

};
#endif
