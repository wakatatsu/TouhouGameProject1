#include "DFPlayer.h"

DFPlayer::DFPlayer() {
  extraSerial.begin(9600);
  if (!myDFPlayer.begin(extraSerial)) {  //Use softwareSerial to communicate with mp3.
    while(true){
      Serial.println(F("DFPlayer error"));
      delay(1000);
      //may want to need auto reset function
    }
  }
  myDFPlayer.volume(30);  //Set volume value. From 0 to 30
}

void DFPlayer::printMessage() {
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  }
}

void DFPlayer::printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
    Serial.println(F("Time Out!"));
    break;
    case WrongStack:
    Serial.println(F("Stack Wrong!"));
    break;
    case DFPlayerCardInserted:
    Serial.println(F("Card Inserted!"));
    break;
    case DFPlayerCardRemoved:
    Serial.println(F("Card Removed!"));
    break;
    case DFPlayerCardOnline:
    Serial.println(F("Card Online!"));
    break;
    case DFPlayerUSBInserted:
    Serial.println("USB Inserted!");
    break;
    case DFPlayerUSBRemoved:
    Serial.println("USB Removed!");
    break;
    case DFPlayerPlayFinished:
    Serial.print(F("Number:"));
    Serial.print(value);
    Serial.println(F(" Play Finished!"));
    break;
    case DFPlayerError:
    Serial.print(F("DFPlayerError:"));
    switch (value) {
      case Busy:
      Serial.println(F("Card not found"));
      break;
      case Sleeping:
      Serial.println(F("Sleeping"));
      break;
      case SerialWrongStack:
      Serial.println(F("Get Wrong Stack"));
      break;
      case CheckSumNotMatch:
      Serial.println(F("Check Sum Not Match"));
      break;
      case FileIndexOut:
      Serial.println(F("File Index Out of Bound"));
      break;
      case FileMismatch:
      Serial.println(F("Cannot Find File"));
      break;
      case Advertise:
      Serial.println(F("In Advertise"));
      break;
      default:
      break;
    }
    break;
    default:
    break;
  }
}

void DFPlayer::playMP3(int playnum) {
  myDFPlayer.play(playnum);
}
