#include "debugMode.h"

DebugMode::DebugMode(View *view) :viewPointer(view){
  test = 0;
}

void DebugMode::testView(std::vector<int> oprnNum) {
<<<<<<< HEAD
  int x = LCDWIDTH/2;
  int y = LCDHEIGHT/2;
	for(auto itr : oprnNum) {
		switch(itr) {
		case 0:
      viewPointer->drawRect(LCDWIDTH/3,LCDHEIGHT/2,5,5,0);
      viewPointer->drawRect(LCDWIDTH/3*2,LCDHEIGHT/2,5,5,1);
			break;
		case 1:
      viewPointer->drawRoundRect(LCDWIDTH/3,LCDHEIGHT/2,5,5,0);
      viewPointer->drawRoundRect(LCDWIDTH/3*2,LCDHEIGHT/2,5,5,1);
			break;
		case 2:
      viewPointer->drawCircle(x,y,r,0);
      viewPointer->drawCircle(x,y,r,1);
			break;
    case 3:
      viewPointer->drawTriangle(x,y,w1,h1,w2,h2,0);
      viewPointer->drawTriangle(x,y,w1,h1,w2,h2,1);
      break;
    case 4:
      viewPointer->drawLine(x1,y1,x2,y2);
      break;
    case 5:
      viewPointer->drawPixel(x,y);
      break;
    case 6:
      String text = "hogehoge"
      viewPointer->drawText(x,y,text);
      break;
		default:
      \\error
=======
	for(auto itr : oprnNum) {
		switch(itr) {
		case 0:
			//drawRect
			break;
		case 1:
			//drawCircle
			break;
		case 2:
			//set_text
			break;
		default:
>>>>>>> 69893c67fffb02de85e851f31bb9d0364ce546f6
      break;
		}
	}
}
