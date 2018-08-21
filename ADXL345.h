#ifndef ADXL345_H_INCLUDE
#define ADXL345_H_INCLUDE

#include "Arduino.h"
#include <SPI.h>

class ADXL345 {

//ADXL345 レジスタアドレス
#define BW_RATE     0x2C    //Data rate and power mode control
#define POWER_CTL   0x2D    //Power Control Register
#define DATA_FORMAT 0x31    //Data format control
#define DATAX0      0x32    //X-Axis Data 0

public:
  ADXL345();
  void writeRegister(char registerAddress, char value);
  void readRegister(char registerAddress, int numBytes, char *values);

};

#endif
