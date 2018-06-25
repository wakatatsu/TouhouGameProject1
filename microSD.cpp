#include "MicroSD.h"

MicroSD::MicroSD() {

}

void MicroSD::initSD() {
	Serial.print("Initializing SD card...");
	if (!SD.begin(10)) {
		Serial.println("initialization failed");
		while (1);
	}
	Serial.println("initialization done.");
}

void MicroSD::writeSD(String fileName) {
	myFile = SD.open(fileName);
	if (myFile) {
		while (myFile.available()) {
			myFile.print();//write data
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
	if (myFile) {
		while (myFile.available()) {
			myFile.read();//read data
		}
		myFile.close();
	}
	else {
		Serial.print("error opening");
		Serial.println(fileName);
	}

}


void MicroSD::openloadFile(String fileName) {
	loadFile = SD.open(fileName);
	if (!loadFile) {
		Serial.print("error opening");
		Serial.println(fileName);
	}
}

void MicroSD::closeloadFile() {
	loadFile.close();
}

uint8_t MicroSD::readBitmapData() {
	uint8_t data;
	if (loadFile.available()) {
		data = loadFile.read();
		if (data == ',') {
			data = loadFile.read();
		}
	}
	return data;
}