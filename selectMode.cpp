#include "selectMode.h";

SelectMode::SelectMode() {
  currentMode = SELECT;
}

SelectMode::~SelectMode() {

}

uint8_t SelectMode::run(std::vector<uint8_t> oprnNum) {
  return SELECT;
}
