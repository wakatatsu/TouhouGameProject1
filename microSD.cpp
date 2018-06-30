#include "MicroSD.h"

MicroSD::MicroSD() {

}

void MicroSD::initSD() {
	if (!SD.begin(10)) {
		while (1);
	}
}

void MicroSD::writeSD(String fileName) {
	myFile = SD.open(fileName);
	if (myFile) {
		while (myFile.available()) {
			//myFile.print();//write data
		}
		myFile.close();
	}
}

void MicroSD::readSD(String fileName) {
	myFile = SD.open(fileName);
	if (myFile) {
		while (myFile.available()) {
			//myFile.read();//read data
		}
		myFile.close();
	}
}


void MicroSD::openloadFile(String fileName) {
	loadFile = SD.open(fileName);
	if (!loadFile) {
	}
}

void MicroSD::closeloadFile() {
	loadFile.close();
}

uint8_t MicroSD::readBitmapData() {
	uint8_t data;
	if (loadFile.available()) {
		REREAD:
		data = loadFile.read();
		if ((data != '0') && (data != '1')) {
			goto REREAD;
		}
	}
	return data;
}
