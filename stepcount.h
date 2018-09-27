#ifndef WALKCOUNT_H_INCLUDE
#define WALKCOUNT_H_INCLUDE

#include "ADXL345.h"

class StepCount {

public:
  StepCount();
  void run();
  int getStep();
  void resetStep();

private:
  ADXL345 *adxl345;
  char values[10];
  int x,y,z;
  double xg, yg, zg;
  int count = 0;
  bool laststate = true;
  bool state = false;
  int step = 0;//歩数
  float accel = 0;//x,y,zの合成値
  float total = 0;//合成値の積分値
  float threshold = 0;//閾値
  float hysteresis = 0;//ヒステリシス
  void readADXL345();
  void xyz_synthesis();
  void processeThreshold();
};

#endif
