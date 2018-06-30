#include "homeMode.h";

HomeMode::HomeMode() {

}

HomeMode::~HomeMode() {

}

void HomeMode::run(std::vector<uint8_t> oprnNum) {
  for(auto itr : oprnNum) {
    switch (itr) {
      case 0:
      //changeMode
      break;
      case 1:
      //pass through
      break;
      case 2:
      //pass through
      break;
    }
  }
}
