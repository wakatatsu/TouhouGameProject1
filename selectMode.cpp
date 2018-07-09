#include "selectMode.h";

SelectMode::SelectMode() {
  currentMode = SELECT;
}

SelectMode::~SelectMode() {

}

uint8_t SelectMode::run(std::vector<uint8_t> oprnNum) {
  //move mode
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0:
      case 1:
      case 2:
      return HOME;//move SelectMode
      break;
      default:
      break;
    }
  }
  return SELECT;
}
