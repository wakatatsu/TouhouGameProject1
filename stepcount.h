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
  int count;
  bool laststate;
  bool state;
  int step;//歩数
  float accel;//x,y,zの合成値
  float total;//合成値の積分値
  float threshold;//閾値
  float hysteresis;//ヒステリシス
  void readADXL345();
  void xyz_synthesis();
  void processeThreshold();
};

#endif
