#ifndef MICROSD_H_INCLUDE
#define MICROSD_H_INCLUDE

#include "Arduino.h"
#include <SD.h>

class MicroSD {

public:
	MicroSD();
	void initSD();
	void writeSD(String fileName);
	void readSD(String fileName);
	void openloadFile(String fileName);
	void closeloadFile();
	uint8_t readBitmapData();


private:
	File myFile;
	File loadFile;
	String loadFileName;

};

#endif
