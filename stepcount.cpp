#include "stepcount.h"

StepCount::StepCount() {
  adxl345 = new ADXL345();
}

void StepCount:: run() {
  readADXL345();
  xyz_synthesis();
  processeThreshold();
}

int StepCount::getStep() {
  return step;
}

void StepCount::resetStep() {
  step = 0;
}

void StepCount::readADXL345() {
  adxl345->readRegister(DATAX0, 6, values);
  // 2Byteのデータを再構成
  x  = ((int)values[1]<<8)|(int)values[0];
  y  = ((int)values[3]<<8)|(int)values[2];
  z  = ((int)values[5]<<8)|(int)values[4];
}

void StepCount::xyz_synthesis() {
  accel = sqrt( sq(x) + sq(y) + sq(z) );
}

void StepCount::processeThreshold() {
  if (count < 100) {
    total += accel;
    count++;
  } else {
    threshold = total / count;
    hysteresis = threshold / 5;
    total = 0;
    count = 0;
  }
  //閾値判定
  if (accel > (threshold + hysteresis)) {
    state = true;
  } else if (accel < (threshold - hysteresis)) {
    state = false;
  }
  //歩数カウント
  if (laststate == false && state == true) {
    step++;
    laststate = state;
  } else if (laststate == true && state == false) {
    laststate = state;
  }
}
