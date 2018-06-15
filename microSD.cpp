#include "MicroSD.h"

MicroSD::MicroSD() {
  
}

void MicroSD::initSD() {
  Serial.print("Initializing SD card...");
  if (!SD.begin(10)) {
    Serial.println("initialization failed");
    while(1);
  }
  Serial.println("initialization done.");
}

void MicroSD::writeSD(String fileName) {
  myFile = SD.open(fileName);
  if(myFile) {
    while(myFile.available()) {
      
    }
    myFile.close();
  }
  else {
    Serial.print("error opening");
    Serial.println(fileName);
  }
}

void MicroSD::readSD(String fileName) {
  myFile = SD.open(fileName);
  if(myFile) {
    while(myFile.available()) {
      
    }
    myFile.close();
  }
  else {
    Serial.print("error opening");
    Serial.println(fileName);
  }
  
}

