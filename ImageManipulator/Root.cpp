
#include "Root.h"
#include "ImageCont.h"
#include <iostream>
using std::cout; using std::endl;
Root::Root()
{
	
	this->loop();
}
void Root::loop() {
	ImageFirst.load("images/1.png");
	ImageFirst.isstoredPNG();
	ImageFirst.save("images/1mine.png");
}
Root::~Root()
{
}

