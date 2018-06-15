#ifndef MICROSD_H_INCLUDE
#define MICROSD_H_INCLUDE

#include "Arduino.h"
#include <SD.h>

class MicroSD {

  public:
    MicroSD();
    void initSD();
    void writeSD(String);
    void readSD(String);
    
  private:
    File myFile;
    
};

#endif
